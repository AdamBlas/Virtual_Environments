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
            /// <param name="device"> Assigned device </param>
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


        public class Vec2Button
        {
            /// <summary> Assigned hand </summary>
            private SteamVR_Input_Sources hand;

            /// <summary> Assigned device </summary>
            private Device device;

            /// <summary> Assigned vector input </summary>
            private SteamVR_Action_Vector2 vector;

            /// <summary> Vector showing first position in current session </summary>
            public Vector2 startValue { get; private set; }

            /// <summary> Vector showing previous registered position </summary>
            public Vector2 previousValue { get; private set; }

            /// <summary> Vector showing current registered position </summary>
            public Vector2 currentValue { get; private set; }

            /// <summary> Flag indication whether movement occured (current value is different than previous one) </summary>
            public bool moved { get; private set; }

            /// <summary> Minimum distance between current and previous value for move to be registered </summary>
            public float diff { get; private set; }

            /// <summary> Delegate invoked when position is starting to be registered </summary>
            public Toolbox.void_DeviceVec2 onStart;

            /// <summary> Delegate invoked when position is registered </summary>
            public Toolbox.void_DeviceVec2 onHold;

            /// <summary> Delegate invoked when position is registered and current one is different that previous one </summary>
            public Toolbox.void_DeviceVec2 onMove;

            /// <summary> Delegate invoked when position is registered last time, right after release </summary>
            public Toolbox.void_DeviceVec2 onEnd;



            /// <summary> Constructor </summary>
            /// <param name="hand"> Hand that device is assigned to </param>
            /// <param name="vector"> Assigned vector </param>
            /// <param name="device"> Assigend device </param>
            /// <param name="diff"> Minimum difference for movement to be registered </param>
            public Vec2Button(SteamVR_Input_Sources hand, SteamVR_Action_Vector2 vector, Device device, float diff)
            {
                this.hand = hand;
                this.vector = vector;
                this.device = device;
                this.diff = diff;
            }

            /// <summary> Method that is supposed to be invoked on bigining of registering position </summary>
            public void Start()
            {
                startValue = vector.GetAxis(hand);
                previousValue = startValue;
                onStart?.Invoke(device, startValue);
            }
            /// <summary> Method that is supposed to be invoked every frame </summary>
            public void Update()
            {
                // Get current status of the axis
                currentValue = vector.GetAxis(hand);
                onHold?.Invoke(device, currentValue);

                // Check if there is a difference
                if (Vector2.Distance(currentValue, previousValue) > diff)
                {
                    moved = true;
                    onMove?.Invoke(device, currentValue);
                    previousValue = currentValue;
                }
                else
                {
                    moved = false;
                }
            }
            /// <summary> Method that is supposed to be invoked when position is no longer registered </summary>
            public void End()
            {
                onEnd?.Invoke(device, previousValue);
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

        /// <summary> BoolButton object representing Touchpad Touch </summary>
        public BoolButton TouchpadTouch { get; private set; }

        /// <summary> BoolButton object representing Touchpad Position </summary>
        public Vec2Button TouchpadPos { get; private set; }



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
            TouchpadTouch = new BoolButton(hand, SteamVR_Actions.Averagers_Model.Touchpad_Touch, this);
            TouchpadPos = new Vec2Button(hand, SteamVR_Actions.averagers_Model_Touchpad_Position, this, .1f);
        }

        /// <summary> Update function that is supposed to be invoked every frame </summary>
        public void Update()
        {
            Trigger.Update();
            Grip.Update();
            Button.Update();
            TouchpadButton.Update();
            TouchpadTouch.Update();

            if (TouchpadTouch.Down)
                TouchpadPos.Start();
            else if (TouchpadTouch.Hold)
                TouchpadPos.Update();
            else if (TouchpadTouch.Released)
                TouchpadPos.End();
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

            if (TouchpadTouch.Down)
                print(name + " touchpad touched.");

            if (TouchpadPos.moved)
                print(name + " touchpad moved to position: " + TouchpadPos.currentValue);
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
