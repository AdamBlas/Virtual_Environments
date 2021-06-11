using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.XR;
using Valve.VR;

public class VRDevice
{
    /// <summary> Container class for boolean-valued buttons. </summary>
    public class BoolButton
    {
        public class BoolButtonEvents : System.ICloneable
        {
            /// <summary> Event invoked when button is pressed </summary>
            public Utils.void_Device onDown;

            /// <summary> Event invoked when button is held down </summary>
            public Utils.void_Device onHold;

            /// <summary> Event invoked when button is released </summary>
            public Utils.void_Device onRelease;



            /// <summary> Invokes onDown Event </summary>
            /// <param name="device"> Device that activated event </param>
            public void OnDownInvoke(VRDevice device)
            {
                onDown?.Invoke(device);
            }

            /// <summary> Invokes onHold Event </summary>
            /// <param name="device"> Device that activated event </param>
            public void OnHoldInvoke(VRDevice device)
            {
                onHold?.Invoke(device);
            }

            /// <summary> Invokes onRelease Event </summary>
            /// <param name="device"> Device that activated event </param>
            public void OnReleaseInvoke(VRDevice device)
            {
                onRelease?.Invoke(device);
            }

            /// <summary> IClonable implementation </summary>
            /// <returns> Clone of object </returns>
            public object Clone()
            {
                BoolButtonEvents clone = new BoolButtonEvents
                {
                    onDown = this.onDown.Clone() as Utils.void_Device,
                    onHold = this.onHold.Clone() as Utils.void_Device,
                    onRelease = this.onRelease.Clone() as Utils.void_Device
                };
                return clone;
            }
        }

        /// <summary> Events container for given input button </summary>
        public BoolButtonEvents events;

        /// <summary> Assigned hand </summary>
        private SteamVR_Input_Sources hand;

        /// <summary> Assigned device </summary>
        private VRDevice device;

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



        /// <summary> Constructor </summary>
        /// <param name="hand"> Hand that device is assigned to </param>
        /// <param name="button"> Assigned button </param>
        /// <param name="device"> Assigned device </param>
        public BoolButton(SteamVR_Input_Sources hand, SteamVR_Action_Boolean button, VRDevice device)
        {
            this.hand = hand;
            this.button = button;
            this.device = device;
            this.events = new BoolButtonEvents();
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
                events.OnHoldInvoke(device);

                // Calculate if this is first frame the button is down
                if (!wasDownLastFrame)
                {
                    Down = true;
                    events.OnDownInvoke(device);
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
                    events.OnReleaseInvoke(device);
                }
                else
                    Released = false;
            }

            wasDownLastFrame = currentValue;
        }
    }

    /// <summary> Container class for vector2-valued buttons. </summary>
    public class Vec2Button
    {
        public class Vec2ButtonEvents : System.ICloneable
        {
            /// <summary> Delegate invoked when position is starting to be registered </summary>
            public Utils.void_DeviceVec2 onStart;

            /// <summary> Delegate invoked when position is registered </summary>
            public Utils.void_DeviceVec2x2 onHold;

            /// <summary> Delegate invoked when position is registered and current one is different that previous one </summary>
            public Utils.void_DeviceVec2x3 onMove;

            /// <summary> Delegate invoked when position is registered last time, right after release </summary>
            public Utils.void_DeviceVec2x2 onEnd;

            /// <summary> Invokes onStart Event </summary>
            /// <param name="device"> Device that activated event </param>
            /// <param name="v"> Start vector </param>
            public void OnStartInvoke(VRDevice device, Vector2 vStart)
            {
                onStart?.Invoke(device, vStart);
            }

            /// <summary> Invokes onHold Event </summary>
            /// <param name="device"> Device that activated event </param>
            /// <param name="vStart"> Start vector </param>
            /// <param name="vCurr"> Current vector </param>
            public void OnHoldInvoke(VRDevice device, Vector2 vStart, Vector2 vCurr)
            {
                onHold?.Invoke(device, vStart, vCurr);
            }

            /// <summary> Invokes onMove Event </summary>
            /// <param name="device"> Device that activated event </param>
            /// <param name="vStart"> Start vector </param>
            /// <param name="vPrev"> Previous vector </param>
            /// <param name="vCurr"> Current vector </param>
            public void OnMove(VRDevice device, Vector2 vStart, Vector2 vPrev, Vector2 vCurr)
            {
                onMove?.Invoke(device, vStart, vPrev, vCurr);
            }

            /// <summary> Invokes onEnd Event </summary>
            /// <param name="device"> Device that activated event </param>
            /// <param name="vStart"> Start vector </param>
            /// <param name="vCurr"> Current vector </param>
            public void OnEndInvoke(VRDevice device, Vector2 vStart, Vector2 vCurr)
            {
                onEnd?.Invoke(device, vStart, vCurr);
            }

            /// <summary> IClonable implementation </summary>
            /// <returns> Clone of object </returns>
            public object Clone()
            {
                Vec2ButtonEvents clone = new Vec2ButtonEvents
                {
                    onStart = this.onStart.Clone() as Utils.void_DeviceVec2,
                    onHold = this.onHold.Clone() as Utils.void_DeviceVec2x2,
                    onMove = this.onMove.Clone() as Utils.void_DeviceVec2x3,
                    onEnd = this.onEnd.Clone() as Utils.void_DeviceVec2x2
                };
                return clone;
            }
        }

        /// <summary> Events container for given vector2 input </summary>
        public Vec2ButtonEvents events;

        /// <summary> Assigned hand </summary>
        private SteamVR_Input_Sources hand;

        /// <summary> Assigned device </summary>
        private VRDevice device;

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

        

        /// <summary> Constructor </summary>
        /// <param name="hand"> Hand that device is assigned to </param>
        /// <param name="vector"> Assigned vector </param>
        /// <param name="device"> Assigend device </param>
        /// <param name="diff"> Minimum difference for movement to be registered </param>
        public Vec2Button(SteamVR_Input_Sources hand, SteamVR_Action_Vector2 vector, VRDevice device, float diff)
        {
            this.hand = hand;
            this.vector = vector;
            this.device = device;
            this.diff = diff;
            this.events = new Vec2ButtonEvents();
        }

        /// <summary> Method that is supposed to be invoked on bigining of registering position </summary>
        public void Start()
        {
            startValue = vector.GetAxis(hand);
            previousValue = startValue;
            events.onStart?.Invoke(device, startValue);
        }
        /// <summary> Method that is supposed to be invoked every frame </summary>
        public void Update()
        {
            // Get current status of the axis
            currentValue = vector.GetAxis(hand);
            events.onHold?.Invoke(device, startValue, currentValue);

            // Check if there is a difference
            if (Vector2.Distance(currentValue, previousValue) > diff)
            {
                moved = true;
                events.onMove?.Invoke(device, startValue, previousValue, currentValue);
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
            events.onEnd?.Invoke(device, startValue, previousValue);
        }
    }

    /// <summary> Assigned GameObject </summary>
    public GameObject GameObject { get; private set; }

    /// <summary> Grabber assigned to hand </summary>
    public Grabber Grabber { get; private set; }

    /// <summary> Assigned hand </summary>
    public SteamVR_Input_Sources Hand { get; private set; }

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

    /// <summary> Other hand </summary>
    public VRDevice other { get; private set; }

    /// <summary> Assigned player </summary>
    public PlayerInstance player { get; private set; }

    /// <summary> Constructor of the Device class </summary>
    /// <param name="hand"> Assigned device </param>
    /// <param name="name"> Name of device </param>
    /// <param name="gameObject"> Assigned gameObject </param>
    /// <param name="player"> Assigned player </param>
    public VRDevice(SteamVR_Input_Sources hand, string name, GameObject gameObject, PlayerInstance player)
    {
        this.Hand = hand;
        this.name = name;
        this.GameObject = gameObject;
        this.Grabber = gameObject.GetComponent<Grabber>();
        this.player = player;

        Trigger = new BoolButton(hand, SteamVR_Actions.Averagers_Model.Trigger, this);
        Grip = new BoolButton(hand, SteamVR_Actions.Averagers_Model.Grip, this);
        Button = new BoolButton(hand, SteamVR_Actions.Averagers_Model.Button_1, this);
        TouchpadButton = new BoolButton(hand, SteamVR_Actions.Averagers_Model.Touchpad_Button, this);
        TouchpadTouch = new BoolButton(hand, SteamVR_Actions.Averagers_Model.Touchpad_Touch, this);
        TouchpadPos = new Vec2Button(hand, SteamVR_Actions.averagers_Model_Touchpad_Position, this, .1f);
    }

    /// <summary> Assigns value to 'other' variable </summary>
    public void AssignOther(VRDevice other)
    {
        this.other = other;
    }

    /// <summary> Update function that is supposed to be invoked every frame. </summary>
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

    /// <summary> Make device vibrate </summary>
    /// <param name="delay"> Device will start vibriting after 'delay' seconds </param>
    /// <param name="duration"> How long will device vibrate </param>
    /// <param name="frequency"> Frequency of vibration (low - vibrations like pneumatoc hammer, high - vibrations like elecric toothbrush) </param>
    /// <param name="amplitude"> Amplitude of vibration (strength) </param>
    public void Vibrate(float delay, float duration, float frequency, float amplitude)
    {
        SteamVR_Actions.Averagers_Model.Haptic.Execute(delay, duration, frequency, amplitude, Hand);
    }

    /// <summary> Prints pressed buttons on console. </summary>
    public void DebugDevice()
    {
        if (Trigger.Down)
            Debug.Log(name + " trigger pressed.");

        if (Grip.Down)
            Debug.Log(name + " grip pressed.");

        if (Button.Down)
            Debug.Log(name + " button pressed.");

        if (TouchpadButton.Down)
            Debug.Log(name + " touchpad pressed.");

        if (TouchpadTouch.Down)
            Debug.Log(name + " touchpad touched.");

        if (TouchpadPos.moved)
            Debug.Log(name + " touchpad moved to position: " + TouchpadPos.currentValue);
    }
}
