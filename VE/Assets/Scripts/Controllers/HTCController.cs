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
            private InputFeatureUsage<bool> button;
            private bool wasDownLastFrame = false;

            /// <summary> Flag that indicates if button was pressed in this frame </summary>
            public bool Pressed { get; private set; }

            /// <summary> Flag that indicates if button is pressed down </summary>
            public bool Down { get; private set; }

            /// <summary> Flag that indicates if button was released in this frame </summary>
            public bool Released { get; private set; }

            public BoolButton(InputFeatureUsage<bool> button)
            {
                this.button = button;
            }
            public void Update(InputDevice device)
            {
                device.TryGetFeatureValue(button, out bool currentValue);

                Down = currentValue;
                if (currentValue)
                {
                    if (!wasDownLastFrame)
                        Pressed = true;
                    else
                        Pressed = false;
                }
                else
                {
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
        private List<InputDevice> devices = new List<InputDevice>();
        private XRNode node;
        public string name;

        public BoolButton Trigger { get; private set; }
        public BoolButton Grip { get; private set; }
        public BoolButton Button { get; private set; }

        public Device(InputDevice device, XRNode node, string name)
        {
            this.device = device;
            this.node = node;
            this.name = name;

            Trigger = new BoolButton(CommonUsages.triggerButton);
            Grip = new BoolButton(CommonUsages.gripButton);
            Button = new BoolButton(CommonUsages.primaryButton);
        }
        public void GetDevice()
        {
            InputDevices.GetDevicesAtXRNode(node, devices);
            device = devices.FirstOrDefault();
        }
        public void Update()
        {
            if (!device.isValid)
            {
                GetDevice();
            }

            Trigger.Update(device);
            Grip.Update(device);
        }
        public void DebugDevice()
        {
            if (Trigger.Pressed)
                print(name + " trigger pressed.");

            if (Grip.Pressed)
                print(name + " grip pressed.");

            if (Button.Pressed)
                print(name + " button pressed.");
        }
    }

    public static HTCController @this;

    public static Device LeftHandInput { get; private set; }
    public static Device RightHandInput { get; private set; }

    [SerializeField]
    private GameObject _leftHand;
    public static GameObject LeftHand { get => @this._leftHand; set => @this._leftHand = value; }

    [SerializeField]
    private GameObject _rightHand;
    public static GameObject RightHand { get => @this._rightHand; set => @this._rightHand = value; }

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
    }
    void Update()
    {
        LeftHandInput.Update();
        RightHandInput.Update();

        LeftHandInput.DebugDevice();
    }
}
