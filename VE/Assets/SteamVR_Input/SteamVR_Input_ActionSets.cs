//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Runtime Version:4.0.30319.42000
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

namespace Valve.VR
{
    using System;
    using UnityEngine;
    
    
    public partial class SteamVR_Actions
    {
        
        private static SteamVR_Input_ActionSet_Averagers_Model p_Averagers_Model;
        
        public static SteamVR_Input_ActionSet_Averagers_Model Averagers_Model
        {
            get
            {
                return SteamVR_Actions.p_Averagers_Model.GetCopy<SteamVR_Input_ActionSet_Averagers_Model>();
            }
        }
        
        private static void StartPreInitActionSets()
        {
            SteamVR_Actions.p_Averagers_Model = ((SteamVR_Input_ActionSet_Averagers_Model)(SteamVR_ActionSet.Create<SteamVR_Input_ActionSet_Averagers_Model>("/actions/Averagers_Model")));
            Valve.VR.SteamVR_Input.actionSets = new Valve.VR.SteamVR_ActionSet[] {
                    SteamVR_Actions.Averagers_Model};
        }
    }
}