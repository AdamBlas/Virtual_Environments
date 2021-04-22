using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.XR;

public class HTCController : MonoBehaviour
{
    public class Device
    {
        /// <summary> Container class for boolean-valued buttons. </summary>
        public class BoolButton
        {
            /// <summary> Button type </summary>
            private InputFeatureUsage<bool> button;

            /// <summary> Flag that idicates if button was pressed last frame </summary>
            private bool wasDownLastFrame = false;

            /// <summary> Flag that indicates if button was pressed in this frame </summary>
            public bool Down { get; private set; }

            /// <summary> Flag that indicates if button is pressed down </summary>
            public bool Pressed { get; private set; }

            /// <summary> Flag that indicates if button was released in this frame </summary>
            public bool Released { get; private set; }

            /// <summary> Constructor </summary>
            /// <param name="button"> Button type </param>
            public BoolButton(InputFeatureUsage<bool> button)
            {
                this.button = button;
            }

            /// <summary> Method that is supposed to be invoked every frame </summary>
            /// <param name="device"> Input source device </param>
            public void Update(InputDevice device)
            {
                // Get current status of the button
                device.TryGetFeatureValue(button, out bool currentValue);

                // Set current status
                Pressed = currentValue;

                if (currentValue)
                {
                    // Calculate if this is first frame the button is down
                    if (!wasDownLastFrame)
                        Down = true;
                    else
                        Down = false;
                }
                else
                {
                    // Calculate if this is first frame the button is released
                    if (wasDownLastFrame)
                        Released = true;
                    else
                        Released = false;
                }

                wasDownLastFrame = currentValue;
            }
        }

        /// <summary> Assigned device </summary>
        private InputDevice device;

        /// <summary> List of devices for specified node </summary>
        private List<InputDevice> devices = new List<InputDevice>();

        /// <summary> Node indicationg type of device </summary>
        private XRNode node;

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
        /// <param name="device"> Input source device </param>
        /// <param name="node"> Device's node </param>
        /// <param name="name"> Name of device </param>
        public Device(InputDevice device, XRNode node, string name)
        {
            this.device = device;
            this.node = node;
            this.name = name;

            Trigger = new BoolButton(CommonUsages.triggerButton);
            Grip = new BoolButton(CommonUsages.gripButton);
            Button = new BoolButton(CommonUsages.primaryButton);
            TouchpadButton = new BoolButton(CommonUsages.primary2DAxisClick);
        }

        /// <summary> Resets device if device was lost/not found immediately </summary>
        public void GetDevice()
        {
            InputDevices.GetDevicesAtXRNode(node, devices);
            device = devices.FirstOrDefault();
        }

        /// <summary> Update function that is supposed to be invoked every frame </summary>
        public void Update()
        {
            if (!device.isValid)
            {
                GetDevice();
            }

            Trigger.Update(device);
            Grip.Update(device);
            Button.Update(device);
            TouchpadButton.Update(device);
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
    public static HTCController @this;

    /// <summary> Left hand input device </summary>
    public static Device LeftHandInput { get; private set; }

    /// <summary> Right hand input device </summary>
    public static Device RightHandInput { get; private set; }

    [SerializeField]
    private GameObject _leftHand;
    /// <summary> Left hand's representation in game </summary>
    public static GameObject LeftHand { get => @this._leftHand; set => @this._leftHand = value; }

    [SerializeField]
    private GameObject _rightHand;
    /// <summary> Right hand's representation in game </summary>
    public static GameObject RightHand { get => @this._rightHand; set => @this._rightHand = value; }

    /// <summary> Right hand's Grabber </summary>
    public static Grabber RightHandGrabber { get; private set; }

    /// <summary> Left hand's Grabber </summary>
    public static Grabber LeftHandGrabber { get; private set; }

    private List<InputDevice> leftDevices = new List<InputDevice>();
    private List<InputDevice> rightDevices = new List<InputDevice>();

    void Awake()
    {
        @this = this;
    }
    void Start()
    {
        LeftHand = GameObject.FindGameObjectWithTag("LeftHand");
        RightHand = GameObject.FindGameObjectWithTag("RightHand");

        InputDevices.GetDevicesAtXRNode(XRNode.LeftHand, leftDevices);
        InputDevices.GetDevicesAtXRNode(XRNode.RightHand, rightDevices);

        LeftHandInput = new Device(leftDevices.FirstOrDefault(), XRNode.LeftHand, "Left hand");
        RightHandInput = new Device(rightDevices.FirstOrDefault(), XRNode.RightHand, "Right hand");

        LeftHandGrabber = LeftHand.GetComponent<Grabber>();
        RightHandGrabber = RightHand.GetComponent<Grabber>();
    }
    void Update()
    {
        LeftHandInput.Update();
        RightHandInput.Update();
    }
}
