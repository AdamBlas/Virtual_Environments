using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.XR;
using Valve.VR;

public class VRController : MonoBehaviour
{
    public class Device
    {
        /// <summary> Container class for boolean-valued buttons. </summary>
        public class BoolButton
        {
            /// <summary> Assigned hand </summary>
            private SteamVR_Input_Sources hand;

            /// <summary> Assigned device </summary>
            private Device device;

            /// <summary> Assigned button </summary>
            private SteamVR_Action_Boolean button;

            /// <summary> Flag that idicates if button was pressed last frame </summary>
            private bool wasDownLastFrame = false;

            /// <summary> Flag that indicates if button was pressed in this frame </summary>
            public bool Down { get; private set; }

            /// <summary> Flag that indicates if button is pressed down </summary>
            public bool Hold { get; private set; }

            /// <summary> Flag that indicates if button was released in this frame </summary>
            public bool Released { get; private set; }

            /// <summary> Delegate invoked when button is pressed </summary>
            public Toolbox.void_Device onDown;

            /// <summary> Delegate invoked when button is held down </summary>
            public Toolbox.void_Device onHold;

            /// <summary> Delegate invoked when button is released </summary>
            public Toolbox.void_Device onRelease;



            /// <summary> Constructor </summary>
            /// <param name="hand"> Hand that device is assigned to </param>
            /// <param name="button"> Assigned button </param>
            public BoolButton(SteamVR_Input_Sources hand, SteamVR_Action_Boolean button, Device device)
            {
                this.hand = hand;
                this.button = button;
                this.device = device;
            }

            /// <summary> Method that is supposed to be invoked every frame </summary>
            public void Update()
            { 
                // Get current status of the button
                bool currentValue = button.GetState(hand);

                // Set current status
                Hold = currentValue;


                if (currentValue)
                {
                    onHold?.Invoke(device);

                    // Calculate if this is first frame the button is down
                    if (!wasDownLastFrame)
                    {
                        Down = true;
                        onDown?.Invoke(device);
                    }
                    else
                        Down = false;
                }
                else
                {
                    // Calculate if this is first frame the button is released
                    if (wasDownLastFrame)
                    {
                        Released = true;
                        onRelease?.Invoke(device);
                    }
                    else
                        Released = false;
                }

                wasDownLastFrame = currentValue;
            }
        }

        /// <summary> Assigned GameObject </summary>
        public GameObject gameObject { get; private set; }

        /// <summary> Grabber assigned to hand </summary>
        public Grabber grabber { get; private set; }

        /// <summary> Assigned hand </summary>
        private SteamVR_Input_Sources hand;

        /// <summary> Name of device (for debug purpose) </summary>
        public string name;

        /// <summary> BoolButton object representing Trigger </summary>
        public BoolButton Trigger { get; private set; }

        /// <summary> BoolButton object representing Grip </summary>
        public BoolButton Grip { get; private set; }

        /// <summary> BoolButton object representing Primary Button (doesn't work for now) </summary>
        public BoolButton Button { get; private set; }

        /// <summary> BoolButton object representing Touchpad (only detects if pad is pressed, not area touched) </summary>
        public BoolButton TouchpadButton { get; private set; }



        /// <summary> Constructor of the Device class </summary>
        /// <param name="hand"> Assigned device </param>
        /// <param name="name"> Name of device </param>
        /// <param name="gameObject"> Assigned gameObject </param>
        public Device(SteamVR_Input_Sources hand, string name, GameObject gameObject)
        {
            this.hand = hand;
            this.name = name;
            this.gameObject = gameObject;
            this.grabber = gameObject.GetComponent<Grabber>();

            Trigger = new BoolButton(hand, SteamVR_Actions.Averagers_Model.Trigger, this);
            Grip = new BoolButton(hand, SteamVR_Actions.Averagers_Model.Grip, this);
            Button = new BoolButton(hand, SteamVR_Actions.Averagers_Model.Button_1, this);
            TouchpadButton = new BoolButton(hand, SteamVR_Actions.Averagers_Model.Touchpad_Button, this);
        }

        /// <summary> Update function that is supposed to be invoked every frame </summary>
        public void Update()
        {
            Trigger.Update();
            Grip.Update();
            Button.Update();
            TouchpadButton.Update();
        }

        public void Vibrate(float delay, float duration, float frequency, float amplitude)
        {
            SteamVR_Actions.Averagers_Model.Haptic.Execute(delay, duration, frequency, amplitude, hand);
        }

        /// <summary> Prints pressed buttons on console </summary>
        public void DebugDevice()
        {
            if (Trigger.Down)
                print(name + " trigger pressed.");

            if (Grip.Down)
                print(name + " grip pressed.");

            if (Button.Down)
                print(name + " button pressed.");

            if (TouchpadButton.Down)
                print(name + " touchpad pressed.");
        }
    }

    /// <summary> Pointer to object from static access </summary>
    public static VRController @this;

    /// <summary> Left hand input device </summary>
    public static Device LeftHand { get; private set; }

    /// <summary> Right hand input device </summary>
    public static Device RightHand { get; private set; }

    void Awake()
    {
        @this = this;
    }
    void Start()
    {
        LeftHand = new Device(SteamVR_Input_Sources.LeftHand, "Left hand", GameObject.FindGameObjectWithTag("LeftHand"));
        RightHand = new Device(SteamVR_Input_Sources.RightHand, "Right hand", GameObject.FindGameObjectWithTag("RightHand"));
    }
    void Update()
    {
        LeftHand.Update();
        RightHand.Update();

        //LeftHand.DebugDevice();
        //RightHand.DebugDevice();
    }
}
