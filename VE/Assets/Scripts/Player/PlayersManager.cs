using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayersManager : MonoBehaviour
{
    public class Hand
    {
        public VRDevice.BoolButton.BoolButtonEvents Trigger { get; private set; }
        public VRDevice.BoolButton.BoolButtonEvents Grip { get; private set; }
        public VRDevice.BoolButton.BoolButtonEvents Button { get; private set; }
        public VRDevice.BoolButton.BoolButtonEvents TouchpadButton { get; private set; }
        public VRDevice.BoolButton.BoolButtonEvents TouchpadTouch { get; private set; }
        public VRDevice.Vec2Button.Vec2ButtonEvents TouchpadPos { get; private set; }

        public Hand()
        {
            Trigger = new VRDevice.BoolButton.BoolButtonEvents();
            Grip = new VRDevice.BoolButton.BoolButtonEvents();
            Button = new VRDevice.BoolButton.BoolButtonEvents();
            TouchpadButton = new VRDevice.BoolButton.BoolButtonEvents();
            TouchpadTouch = new VRDevice.BoolButton.BoolButtonEvents();
            TouchpadPos = new VRDevice.Vec2Button.Vec2ButtonEvents();
        }
    }

    public static PlayersManager Singleton;

    public static List<PlayerInstance> playersList { get; private set; } = new List<PlayerInstance>();
    
    public static Hand RightHand { get; private set; }
    public static Hand LeftHand { get; private set; }

    void Start()
    {
        Singleton = this;

        RightHand = new Hand();
        LeftHand = new Hand();
    }

    public static void AddPlayer(PlayerInstance newPlayer)
    {
        playersList.Add(newPlayer);

        // Assign right hand global events
        newPlayer.RightHand.Trigger.events.onDown += dev => RightHand.Trigger.onDown?.Invoke(dev);
        newPlayer.RightHand.Trigger.events.onHold += dev => RightHand.Trigger.onHold?.Invoke(dev);
        newPlayer.RightHand.Trigger.events.onRelease += dev => RightHand.Trigger.onRelease?.Invoke(dev);

        newPlayer.RightHand.Grip.events.onDown += dev => RightHand.Grip.onDown?.Invoke(dev);
        newPlayer.RightHand.Grip.events.onHold += dev => RightHand.Grip.onHold?.Invoke(dev);
        newPlayer.RightHand.Grip.events.onRelease += dev => RightHand.Grip.onRelease?.Invoke(dev);

        newPlayer.RightHand.Button.events.onDown += dev => RightHand.Button.onDown?.Invoke(dev);
        newPlayer.RightHand.Button.events.onHold += dev => RightHand.Button.onHold?.Invoke(dev);
        newPlayer.RightHand.Button.events.onRelease += dev => RightHand.Button.onRelease?.Invoke(dev);

        newPlayer.RightHand.TouchpadButton.events.onDown += dev => RightHand.TouchpadButton.onDown?.Invoke(dev);
        newPlayer.RightHand.TouchpadButton.events.onHold += dev => RightHand.TouchpadButton.onHold?.Invoke(dev);
        newPlayer.RightHand.TouchpadButton.events.onRelease += dev => RightHand.TouchpadButton.onRelease?.Invoke(dev);

        newPlayer.RightHand.TouchpadTouch.events.onDown += dev => RightHand.TouchpadTouch.onDown?.Invoke(dev);
        newPlayer.RightHand.TouchpadTouch.events.onHold += dev => RightHand.TouchpadTouch.onHold?.Invoke(dev);
        newPlayer.RightHand.TouchpadTouch.events.onRelease += dev => RightHand.TouchpadTouch.onRelease?.Invoke(dev);

        newPlayer.RightHand.TouchpadPos.events.onStart += (dev, vStart) => RightHand.TouchpadPos.onStart?.Invoke(dev, vStart);
        newPlayer.RightHand.TouchpadPos.events.onHold += (dev, vStart, vCurr) => RightHand.TouchpadPos.onHold?.Invoke(dev, vStart, vCurr);
        newPlayer.RightHand.TouchpadPos.events.onMove += (dev, vStart, vPrev, vCurr) => RightHand.TouchpadPos.onMove?.Invoke(dev, vStart, vPrev, vCurr);
        newPlayer.RightHand.TouchpadPos.events.onEnd += (dev, vStart, vCurr) => RightHand.TouchpadPos.onEnd?.Invoke(dev, vStart, vCurr);


        // Assign left hand global events
        newPlayer.LeftHand.Trigger.events.onDown += dev => LeftHand.Trigger.onDown?.Invoke(dev);
        newPlayer.LeftHand.Trigger.events.onHold += dev => LeftHand.Trigger.onHold?.Invoke(dev);
        newPlayer.LeftHand.Trigger.events.onRelease += dev => LeftHand.Trigger.onRelease?.Invoke(dev);

        newPlayer.LeftHand.Grip.events.onDown += dev => LeftHand.Grip.onDown?.Invoke(dev);
        newPlayer.LeftHand.Grip.events.onHold += dev => LeftHand.Grip.onHold?.Invoke(dev);
        newPlayer.LeftHand.Grip.events.onRelease += dev => LeftHand.Grip.onRelease?.Invoke(dev);

        newPlayer.LeftHand.Button.events.onDown += dev => LeftHand.Button.onDown?.Invoke(dev);
        newPlayer.LeftHand.Button.events.onHold += dev => LeftHand.Button.onHold?.Invoke(dev);
        newPlayer.LeftHand.Button.events.onRelease += dev => LeftHand.Button.onRelease?.Invoke(dev);

        newPlayer.LeftHand.TouchpadButton.events.onDown += dev => LeftHand.TouchpadButton.onDown?.Invoke(dev);
        newPlayer.LeftHand.TouchpadButton.events.onHold += dev => LeftHand.TouchpadButton.onHold?.Invoke(dev);
        newPlayer.LeftHand.TouchpadButton.events.onRelease += dev => LeftHand.TouchpadButton.onRelease?.Invoke(dev);

        newPlayer.LeftHand.TouchpadTouch.events.onDown += dev => LeftHand.TouchpadTouch.onDown?.Invoke(dev);
        newPlayer.LeftHand.TouchpadTouch.events.onHold += dev => LeftHand.TouchpadTouch.onHold?.Invoke(dev);
        newPlayer.LeftHand.TouchpadTouch.events.onRelease += dev => LeftHand.TouchpadTouch.onRelease?.Invoke(dev);

        newPlayer.LeftHand.TouchpadPos.events.onStart += (dev, vStart) => LeftHand.TouchpadPos.onStart?.Invoke(dev, vStart);
        newPlayer.LeftHand.TouchpadPos.events.onHold += (dev, vStart, vCurr) => LeftHand.TouchpadPos.onHold?.Invoke(dev, vStart, vCurr);
        newPlayer.LeftHand.TouchpadPos.events.onMove += (dev, vStart, vPrev, vCurr) => LeftHand.TouchpadPos.onMove?.Invoke(dev, vStart, vPrev, vCurr);
        newPlayer.LeftHand.TouchpadPos.events.onEnd += (dev, vStart, vCurr) => LeftHand.TouchpadPos.onEnd?.Invoke(dev, vStart, vCurr);
    }
}
