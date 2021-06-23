#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<System.Net.IPEndPoint>
struct Action_1_tDE160902ECA9E6E53BC1DB596B630B904D283ADD;
// System.Action`1<System.UInt64>
struct Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4;
// System.Action`3<System.Byte[],System.UInt64,MLAPI.NetworkManager/ConnectionApprovedDelegate>
struct Action_3_tB63365B9C49B76072D34290B5E212D7247DC49DA;
// System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>
struct Dictionary_2_tF3A2ED84A24958E105C74C0E6BCAE0EE2F30AE75;
// System.Collections.Generic.Dictionary`2<System.Guid,MLAPI.SceneManagement.SceneSwitchProgress>
struct Dictionary_2_t8BE68DBC72269451AA5899F027BB23CDB7150AFE;
// System.Collections.Generic.Dictionary`2<System.Int32,System.ByteEnum>
struct Dictionary_2_t30FF3A644631804450E0BAC990378F699D61B451;
// System.Collections.Generic.Dictionary`2<System.Int32,MLAPI.Transports.NetworkChannel>
struct Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C;
// System.Collections.Generic.Dictionary`2<MLAPI.Transports.NetworkChannel,System.Int32>
struct Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Collections.Generic.Dictionary`2<System.String,System.UInt32>
struct Dictionary_2_t99BA7D0CF2528BD5CE653B61B93932B7707E7573;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Action`3<MLAPI.NetworkBehaviour,MLAPI.Serialization.NetworkSerializer,MLAPI.Messaging.__RpcParams>>
struct Dictionary_2_t8F4CFFA1F5482842327C32BE6E50334EBEA0B3A0;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.String>
struct Dictionary_2_t15CD6F7963840CA86C10956543710927D323EC55;
// System.Collections.Generic.Dictionary`2<System.UInt64,MLAPI.Connection.NetworkClient>
struct Dictionary_2_t1F45833D57768B96BCAA47F7DDD032561D0D84BD;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8;
// System.Collections.Generic.Dictionary`2<System.UInt64,MLAPI.Connection.PendingClient>
struct Dictionary_2_tB515236EBFA6EB2166398426DC099A96363476D4;
// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE;
// System.Func`2<System.Reflection.FieldInfo,System.String>
struct Func_2_t3E9169486444D508EC295C4254DF9267CEE35CCE;
// System.Func`2<MLAPI.Connection.NetworkClient,System.UInt64>
struct Func_2_t4B34F991B804537165DC5D9D406D6D143D673EE7;
// System.Func`2<MLAPI.Configuration.NetworkPrefab,System.Boolean>
struct Func_2_t59EB38A76202F2C295CC84F221E6450CBB4C5390;
// System.Func`2<MLAPI.Configuration.NetworkPrefab,System.UInt64>
struct Func_2_tE35B6DC4C9B88868C3CE65296E169E70DDA12D51;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.HashSet`1<System.UInt64>
struct HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<MLAPI.Transports.NetworkChannel>
struct IEqualityComparer_1_t6DB20409CDCD0B26EF80076C270CBADADB58E061;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_tAFCE72ADC2EDFFA5D34E7918994DD34A8583449F;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Int32>
struct IReadOnlyDictionary_2_t2B733E06A578BAF7FF12E5A5C3B23D9329E4787C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,MLAPI.Transports.NetworkChannel>
struct KeyCollection_tD6548D94B3486EC447E08EC1094F314540EBFBA8;
// System.Collections.Generic.Dictionary`2/KeyCollection<MLAPI.Transports.NetworkChannel,System.Int32>
struct KeyCollection_t56D6AFC8B5C7C345A4B43A8E3A114440020DA23A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,MLAPI.Connection.NetworkClient>
struct KeyCollection_t9BC90A215336A44C79F89EBB625C99EDEEB0A842;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,MLAPI.Connection.PendingClient>
struct KeyCollection_t41BB95788F4E2ECF6B7DC81DA177B0DDB08539AB;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>
struct List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B;
// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>
struct List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33;
// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>
struct List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE;
// System.Collections.Generic.List`1<MLAPI.NetworkBehaviour>
struct List_1_tD347F97F8E9D90D6ABC5A86061E3E64721D4010B;
// System.Collections.Generic.List`1<MLAPI.Connection.NetworkClient>
struct List_1_t3A508A14B962436191D0F4A254F5A2F44CDBBB1F;
// System.Collections.Generic.List`1<MLAPI.NetworkObject>
struct List_1_tC61ECBC114E2583254C366ECBFE31AFC2D38149B;
// System.Collections.Generic.List`1<MLAPI.Configuration.NetworkPrefab>
struct List_1_t0D5492393F71417A7F4AE4AEBC9817E5CDE22195;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<MLAPI.Transports.TransportChannel>
struct List_1_t3F316C65882F05719FF89373CFAB006C671A1803;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B;
// System.Collections.Generic.List`1<MLAPI.Transports.UNetChannel>
struct List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,MLAPI.Transports.NetworkChannel>
struct ValueCollection_tAA110161B398AB1E61F610328224DF85874B14C4;
// System.Collections.Generic.Dictionary`2/ValueCollection<MLAPI.Transports.NetworkChannel,System.Int32>
struct ValueCollection_tF89E21E8596E7BFD896E25D2645993C23EDC0A60;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,MLAPI.Connection.NetworkClient>
struct ValueCollection_t3B667EF991A28AC4A476CE0D5059DABEB8FE0B06;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,MLAPI.Connection.PendingClient>
struct ValueCollection_t426C2C3DFC19D5F3C0F74BC1213495D650290254;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,MLAPI.Transports.NetworkChannel>[]
struct EntryU5BU5D_tC9A8C3B8F373B16FA67415B66A45809F06206A11;
// System.Collections.Generic.Dictionary`2/Entry<MLAPI.Transports.NetworkChannel,System.Int32>[]
struct EntryU5BU5D_tAA4E75A02BB905CB4FB02F847A85FC1BD1B84762;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt64,MLAPI.Connection.NetworkClient>[]
struct EntryU5BU5D_t7C69796ED90590FB367B2A05E58996EBC42499CF;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt64,MLAPI.Connection.PendingClient>[]
struct EntryU5BU5D_tCB0B6417135A58AC0B746DDBE3674F1D805DCD0F;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// MLAPI.Connection.NetworkClient[]
struct NetworkClientU5BU5D_t47F23628D477E23E0D80F071BA7B4634AFE7D950;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17;
// MLAPI.Transports.Tasks.SocketTask[]
struct SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// MLAPI.Transports.TransportChannel[]
struct TransportChannelU5BU5D_t208E5D124870294ED76728A47941D06E0ADA7411;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt64[]
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2;
// MLAPI.Transports.UNetChannel[]
struct UNetChannelU5BU5D_t3E2426C78356B4EB6E78EAD5FC1A080B6EAA24D2;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// MLAPI.Messaging.ClientRpcParams
struct ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.Networking.HostTopology
struct HostTopology_t268779309BB2D69F29D1A182662C79818813892B;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// MLAPI.Exceptions.InvalidChannelException
struct InvalidChannelException_tF4ED82C45BB31FFD3BB4D9920BA8147F4C9E7591;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MLAPI.Serialization.NetworkBuffer
struct NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188;
// MLAPI.Connection.NetworkClient
struct NetworkClient_t0DF198CA47B274F9A545CC0E08507786069E2DE6;
// MLAPI.Configuration.NetworkConfig
struct NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE;
// MLAPI.NetworkManager
struct NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE;
// MLAPI.NetworkObject
struct NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60;
// MLAPI.Configuration.NetworkPrefab
struct NetworkPrefab_t7630C6985562B806CE10338714F59F0C6A5B5F71;
// MLAPI.Serialization.NetworkReader
struct NetworkReader_tB092619323CE14E6795C4FC0E0169237625D2403;
// MLAPI.Serialization.NetworkSerializer
struct NetworkSerializer_t0693F7CA0A8240B6351C14E096A13C4D8AC40250;
// MLAPI.NetworkTickSystem
struct NetworkTickSystem_tE0D11EE8F9DC64F1B98E1B405926D8BA4A7C850F;
// MLAPI.Transports.NetworkTransport
struct NetworkTransport_tDF741042D9F54F61AF98FA3645A80D42374A54D3;
// MLAPI.Serialization.NetworkWriter
struct NetworkWriter_tFF50DD965D82FE95092CE3C12A30AD51604E9CF2;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// MLAPI.Configuration.NullableBoolSerializable
struct NullableBoolSerializable_t26C239CD7D047107A37052B0D4CE8E56F1C951ED;
// MLAPI.Profiling.PerformanceTickData
struct PerformanceTickData_tDA5CED757DA6E1D027F9EECA2A80D6EEC3248CFD;
// MLAPI.Serialization.Pooled.PooledNetworkBuffer
struct PooledNetworkBuffer_tED514246F37E8636BB4EF9FD6CD9F0AA843EE941;
// MLAPI.Serialization.Pooled.PooledNetworkReader
struct PooledNetworkReader_tDB17DC1025307417EC373DE16F1FD1B5AA46C7C2;
// MLAPI.Serialization.Pooled.PooledNetworkWriter
struct PooledNetworkWriter_t4EFF6DA061F1469895F9FDC1B4FD3EAA9DCC5A7A;
// MLAPI.Profiling.ProfilingDataStore
struct ProfilingDataStore_t1E7070AC4F046AA186604C4185FCB4AC1956E333;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// MLAPI.Messaging.RpcBatcher
struct RpcBatcher_t7190F2A9459E99FE3CB45E4F51BA46398799AA57;
// MLAPI.Messaging.RpcQueueContainer
struct RpcQueueContainer_t7530418AFC2B684BD1CB0799E9C10A66B2F3E572;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// MLAPI.SceneManagement.SceneSwitchProgress
struct SceneSwitchProgress_tAAE76AD0A7D3D42A7D0EB2EC5799E42FAFC178BD;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// MLAPI.Transports.Tasks.SocketTask
struct SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322;
// MLAPI.Transports.Tasks.SocketTasks
struct SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432;
// MLAPI.Exceptions.SpawnStateException
struct SpawnStateException_tEF5EB7D83B74141861F781C099D7B41CC3143E4E;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// MLAPI.Profiling.TickEvent
struct TickEvent_t6ED6E2A0F7108928D72CFC0F0774EB1390A9C63D;
// System.Type
struct Type_t;
// MLAPI.Transports.UNetChannel
struct UNetChannel_tEC908B6737ABA9307E2DEB4A3F276B0EED170DC1;
// MLAPI.Transports.UNET.UNetTransport
struct UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C;
// MLAPI.Exceptions.VisibilityChangeException
struct VisibilityChangeException_tC5DD75E45FD92C347A5D4424CE259BC4AD71EA2B;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76;
// MLAPI.Messaging.CustomMessagingManager/HandleNamedMessageDelegate
struct HandleNamedMessageDelegate_t48D537515395A953E5BA2EAD144E5F67F0A5FD95;
// MLAPI.Messaging.CustomMessagingManager/UnnamedMessageDelegate
struct UnnamedMessageDelegate_t2F9B77602495FA7493A23F7FDBADABF830C9CCA8;
// MLAPI.Messaging.InternalMessageHandler/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_tF77F38290AC0444E45AAC2C0A85E2EA517F8A32E;
// MLAPI.Messaging.InternalMessageHandler/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t13F01EB262A469487D83C30B80974D077D51FA39;
// MLAPI.NetworkBehaviour/<>c
struct U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA;
// MLAPI.Configuration.NetworkConfig/<>c
struct U3CU3Ec_t85377D8F4AC5A890A77A8C78CFCF705608CD0ECE;
// MLAPI.NetworkManager/<>c
struct U3CU3Ec_t52CC57E9CBCF944B6D4AE9FC037E5BD3B7E5BF31;
// MLAPI.NetworkManager/<ApprovalTimeout>d__102
struct U3CApprovalTimeoutU3Ed__102_tFC84204C6244AF949BE38AAB25AA969F32C32B88;
// MLAPI.NetworkManager/<TimeOutSwitchSceneProgress>d__103
struct U3CTimeOutSwitchSceneProgressU3Ed__103_tB5E18C3D5260A692A05E1D3CF8CFBC0C9F343F69;
// MLAPI.NetworkManager/ConnectionApprovedDelegate
struct ConnectionApprovedDelegate_t796D80F1A53D781AD8C7C8AD51C94CDC89EC37F9;
// MLAPI.NetworkManager/PerformanceDataEventHandler
struct PerformanceDataEventHandler_t64BB43DAA5EF453BF11D2DC16DC169DDC6AF7920;
// MLAPI.NetworkObject/SpawnDelegate
struct SpawnDelegate_tCE3B6000F86A9D77908A4C5D7B2FDAF0E44BE305;
// MLAPI.NetworkObject/VisibilityDelegate
struct VisibilityDelegate_tCD922F272D3C2DCB1DE3FF7866D6646DB6672320;
// MLAPI.SceneManagement.NetworkSceneManager/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tC716664DD675E4859C9F52311EC519D2E193DA9F;
// MLAPI.SceneManagement.NetworkSceneManager/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t3AF943BF535D1DBC4402F5AE2F6127D5E243881E;
// MLAPI.SceneManagement.NetworkSceneManager/SceneSwitchStartedDelegate
struct SceneSwitchStartedDelegate_t8CFB7CC811F3DE194B1F1C7E3105BD755DCC7FF4;
// MLAPI.SceneManagement.NetworkSceneManager/SceneSwitchedDelegate
struct SceneSwitchedDelegate_t6C2314AFBD4ADA9512BADDB300403D6CE2629D84;
// MLAPI.Spawning.NetworkSpawnManager/<>c
struct U3CU3Ec_t7ECBA6547CA9ED518205A20A7E53317896BDAE4A;
// MLAPI.Spawning.NetworkSpawnManager/DestroyHandlerDelegate
struct DestroyHandlerDelegate_tDD380C1764FBD3606ECCC747A421C8F8BB31720F;
// MLAPI.Spawning.NetworkSpawnManager/SpawnHandlerDelegate
struct SpawnHandlerDelegate_t9BC50B28F51B8CE7F990FCDD5C94AF5CCEE30C39;
// MLAPI.Transports.NetworkTransport/RequestChannelsDelegate
struct RequestChannelsDelegate_tE7B26EED431984C7ABC96FB2B3DF3A497E8281C0;
// MLAPI.Transports.NetworkTransport/TransportEventDelegate
struct TransportEventDelegate_t6756296C9F115149F6A4735F14E96E74C38A17BE;
// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA;
// MLAPI.Messaging.RpcBatcher/ReceiveCallbackType
struct ReceiveCallbackType_t36FD76FC1120FA943322E0875256A966B182D585;
// MLAPI.Messaging.RpcBatcher/SendCallbackType
struct SendCallbackType_t574B1C363DFB9AC796AD9AEBE0EA83C710FD45C8;
// MLAPI.Messaging.RpcBatcher/SendStream
struct SendStream_tA08E935512570E03909E77420EA1A89F758CBEDB;
// MLAPI.SceneManagement.SceneSwitchProgress/OnClientLoadedSceneDelegate
struct OnClientLoadedSceneDelegate_t2E0C5BE468E9059E84CD5C733878D8F16C18E15E;
// MLAPI.SceneManagement.SceneSwitchProgress/OnCompletedDelegate
struct OnCompletedDelegate_t313D7E659CAF907C911009A8FC69E9A0226431ED;
// MLAPI.Serialization.SerializationManager/<>c
struct U3CU3Ec_t78BCF87DC09FAD35C57BD88E50B83287D29BC20E;
// MLAPI.Serialization.SerializationManager/BoxedDeserializationDelegate
struct BoxedDeserializationDelegate_tBB4F64607DE5A2C9C4043F7CDE06C620449F3E29;
// MLAPI.Serialization.SerializationManager/BoxedSerializationDelegate
struct BoxedSerializationDelegate_t63673361FB0667EAA1243BD22C4B2EBC31A35A1B;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// MLAPI.NetworkUpdateLoop/NetworkEarlyUpdate/<>c
struct U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800;
// MLAPI.NetworkUpdateLoop/NetworkFixedUpdate/<>c
struct U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8;
// MLAPI.NetworkUpdateLoop/NetworkInitialization/<>c
struct U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56;
// MLAPI.NetworkUpdateLoop/NetworkPostLateUpdate/<>c
struct U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED;
// MLAPI.NetworkUpdateLoop/NetworkPreLateUpdate/<>c
struct U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16;
// MLAPI.NetworkUpdateLoop/NetworkPreUpdate/<>c
struct U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D;
// MLAPI.NetworkUpdateLoop/NetworkUpdate/<>c
struct U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4;

IL2CPP_EXTERN_C RuntimeClass* ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HostTopology_t268779309BB2D69F29D1A182662C79818813892B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalMessageHandler_tA25F24F7E2F975CD4D0170D786631671DD1160BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidChannelException_tF4ED82C45BB31FFD3BB4D9920BA8147F4C9E7591_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkChannel_t017AC97DA612B8837176E40A29A49B723FD1625F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkEvent_t73788FC751907641A05E91C8B0B6AC90B2C934DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkSceneManager_tC54D99CCDAB94946076FBD2295C595019218A8E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProfilingDataStore_t1E7070AC4F046AA186604C4185FCB4AC1956E333_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QueueItemType_t4BE0BF011110FE4F5AC261BB86778CEAA614342F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationManager_t9E9470355079E8A6C96AC6FD6508AD21F30A88E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TickEvent_t6ED6E2A0F7108928D72CFC0F0774EB1390A9C63D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t52CC57E9CBCF944B6D4AE9FC037E5BD3B7E5BF31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t78BCF87DC09FAD35C57BD88E50B83287D29BC20E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7ECBA6547CA9ED518205A20A7E53317896BDAE4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t85377D8F4AC5A890A77A8C78CFCF705608CD0ECE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral13BA3FBD6E78977215CB5A9D8903BD214A7B74E3;
IL2CPP_EXTERN_C String_t* _stringLiteral2514C8C3D2C3A644AAEF8B2ACFA718E5BA204652;
IL2CPP_EXTERN_C String_t* _stringLiteral559FB4092E4502B9C92043C390F08D8869627695;
IL2CPP_EXTERN_C String_t* _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE;
IL2CPP_EXTERN_C String_t* _stringLiteral9C3C8B464860DEB0AA13CF0E8B018E4D0C821868;
IL2CPP_EXTERN_C String_t* _stringLiteralAB0C529BD929B922EED9AF9804F3106F6E16BA22;
IL2CPP_EXTERN_C String_t* _stringLiteralE60EDCA57B59D9D1A7EDD0064A76B4311985F734;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m4B938DDB8F008FFF8F7938CC1D8E1A056F5B5136_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC0F551D754EA6B4CC8C811B2AB0F3D616BC58FBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mA3E7E38B5662A6304C1B7EB6307FA1B882881F79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mF52594485C53F4479A7A43524A28E24620DB870E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m373A5F9286FD587C70D03680E95C170DE8420D91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m88F56EEA2071E35893FAEE69E65D835A844F0569_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m9183F6C70EBC3C7AB57280DEF5DD7DD813464139_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mD8FB600C8C87D9181A050E1CD828AA7D5545B105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3CFAFE6B984DE6170E1D0416D3EF31B644C3ECFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB73D5724F1F1F1B5AF95EB1270B7869213E7F5DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m5F82950FC4ECC16C66979A3E076EC43A0F47EC54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m7C742CE8268D14396B24D20675855E13A99A4BDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m40F68142CBB96190EF2941DA700FFBE4B9E6F6E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m786BB72883B9B30A983BA96A3DFD15F5A206D953_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mBB7C25308910122B943CA0E02A845F7A8689F090_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8ED9DA6719F1C5CB2BD43DEBC46B41A08E940D09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD7515F0017B083FF47FE011EAE8FD7609D2DE427_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CApprovalTimeoutU3Ed__102_System_Collections_IEnumerator_Reset_m42D6D0E9BD75991CD66275372C4832C32F0ADA7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTimeOutSwitchSceneProgressU3Ed__103_System_Collections_IEnumerator_Reset_mE21942985D27178FF2EA831AB7A6DA2D9439AE65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m19DC8E986C54FCA24DB9FF8E7D029BD982024E7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m2FBCB4EAA155F7A7C8307B4CBD3BB2E677F7657E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m3DA848EAB6520DE82FA6E676B740A680074AE2EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m5EF61EC582F69FC74A9557438638E98C67F7F72C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m6AAF43D7F3275579BC25E687CD358B880AA4D85E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m8D260FCA85760FCB3A38EFBA700E9F6F3AC8C1EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_mAFE958D5B72B06F09015E416D49CB46E25420131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UNetTransport_GetConfig_mC86152445C0CB267FDFEEF52C89772C5A90B1A71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* NetworkEarlyUpdate_t479652BD48725B36367492FA72864FCC71E5DBFE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NetworkFixedUpdate_tBB90D1862102CD5FA8603B9523DF28307372546A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NetworkInitialization_t9CA79804F071F80BD1715A2475F734F08D9C7E63_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NetworkPostLateUpdate_t7F3126BE760A3B007F1AABD4C9E201F908332B3C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NetworkPreLateUpdate_t536C07C25A0F343BD11C8DCF5BA2988ED71CA0CA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NetworkPreUpdate_t9A2C5A970CE74462140F3359EDC0EFE38BBEDE77_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NetworkUpdate_t6F4ADFC346A53105D6B78B4C4236D38CD45A8F93_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25_0_0_0_var;
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;;
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke;
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke;;
struct ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5;;
struct ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshaled_com;
struct ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshaled_com;;
struct ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshaled_pinvoke;
struct ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_com;
struct PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A;
struct TransportChannelU5BU5D_t208E5D124870294ED76728A47941D06E0ADA7411;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,MLAPI.Transports.NetworkChannel>
struct Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC9A8C3B8F373B16FA67415B66A45809F06206A11* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tD6548D94B3486EC447E08EC1094F314540EBFBA8 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tAA110161B398AB1E61F610328224DF85874B14C4 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C, ___entries_1)); }
	inline EntryU5BU5D_tC9A8C3B8F373B16FA67415B66A45809F06206A11* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC9A8C3B8F373B16FA67415B66A45809F06206A11** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC9A8C3B8F373B16FA67415B66A45809F06206A11* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C, ___keys_7)); }
	inline KeyCollection_tD6548D94B3486EC447E08EC1094F314540EBFBA8 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tD6548D94B3486EC447E08EC1094F314540EBFBA8 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tD6548D94B3486EC447E08EC1094F314540EBFBA8 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C, ___values_8)); }
	inline ValueCollection_tAA110161B398AB1E61F610328224DF85874B14C4 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tAA110161B398AB1E61F610328224DF85874B14C4 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tAA110161B398AB1E61F610328224DF85874B14C4 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<MLAPI.Transports.NetworkChannel,System.Int32>
struct Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tAA4E75A02BB905CB4FB02F847A85FC1BD1B84762* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t56D6AFC8B5C7C345A4B43A8E3A114440020DA23A * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tF89E21E8596E7BFD896E25D2645993C23EDC0A60 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206, ___entries_1)); }
	inline EntryU5BU5D_tAA4E75A02BB905CB4FB02F847A85FC1BD1B84762* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tAA4E75A02BB905CB4FB02F847A85FC1BD1B84762** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tAA4E75A02BB905CB4FB02F847A85FC1BD1B84762* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206, ___keys_7)); }
	inline KeyCollection_t56D6AFC8B5C7C345A4B43A8E3A114440020DA23A * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t56D6AFC8B5C7C345A4B43A8E3A114440020DA23A ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t56D6AFC8B5C7C345A4B43A8E3A114440020DA23A * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206, ___values_8)); }
	inline ValueCollection_tF89E21E8596E7BFD896E25D2645993C23EDC0A60 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tF89E21E8596E7BFD896E25D2645993C23EDC0A60 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tF89E21E8596E7BFD896E25D2645993C23EDC0A60 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.UInt64,MLAPI.Connection.NetworkClient>
struct Dictionary_2_t1F45833D57768B96BCAA47F7DDD032561D0D84BD  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7C69796ED90590FB367B2A05E58996EBC42499CF* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9BC90A215336A44C79F89EBB625C99EDEEB0A842 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3B667EF991A28AC4A476CE0D5059DABEB8FE0B06 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1F45833D57768B96BCAA47F7DDD032561D0D84BD, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1F45833D57768B96BCAA47F7DDD032561D0D84BD, ___entries_1)); }
	inline EntryU5BU5D_t7C69796ED90590FB367B2A05E58996EBC42499CF* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7C69796ED90590FB367B2A05E58996EBC42499CF** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7C69796ED90590FB367B2A05E58996EBC42499CF* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1F45833D57768B96BCAA47F7DDD032561D0D84BD, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1F45833D57768B96BCAA47F7DDD032561D0D84BD, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1F45833D57768B96BCAA47F7DDD032561D0D84BD, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1F45833D57768B96BCAA47F7DDD032561D0D84BD, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1F45833D57768B96BCAA47F7DDD032561D0D84BD, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1F45833D57768B96BCAA47F7DDD032561D0D84BD, ___keys_7)); }
	inline KeyCollection_t9BC90A215336A44C79F89EBB625C99EDEEB0A842 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9BC90A215336A44C79F89EBB625C99EDEEB0A842 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9BC90A215336A44C79F89EBB625C99EDEEB0A842 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1F45833D57768B96BCAA47F7DDD032561D0D84BD, ___values_8)); }
	inline ValueCollection_t3B667EF991A28AC4A476CE0D5059DABEB8FE0B06 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3B667EF991A28AC4A476CE0D5059DABEB8FE0B06 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3B667EF991A28AC4A476CE0D5059DABEB8FE0B06 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1F45833D57768B96BCAA47F7DDD032561D0D84BD, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.UInt64,MLAPI.Connection.PendingClient>
struct Dictionary_2_tB515236EBFA6EB2166398426DC099A96363476D4  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tCB0B6417135A58AC0B746DDBE3674F1D805DCD0F* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t41BB95788F4E2ECF6B7DC81DA177B0DDB08539AB * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t426C2C3DFC19D5F3C0F74BC1213495D650290254 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tB515236EBFA6EB2166398426DC099A96363476D4, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tB515236EBFA6EB2166398426DC099A96363476D4, ___entries_1)); }
	inline EntryU5BU5D_tCB0B6417135A58AC0B746DDBE3674F1D805DCD0F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tCB0B6417135A58AC0B746DDBE3674F1D805DCD0F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tCB0B6417135A58AC0B746DDBE3674F1D805DCD0F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tB515236EBFA6EB2166398426DC099A96363476D4, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tB515236EBFA6EB2166398426DC099A96363476D4, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tB515236EBFA6EB2166398426DC099A96363476D4, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tB515236EBFA6EB2166398426DC099A96363476D4, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tB515236EBFA6EB2166398426DC099A96363476D4, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tB515236EBFA6EB2166398426DC099A96363476D4, ___keys_7)); }
	inline KeyCollection_t41BB95788F4E2ECF6B7DC81DA177B0DDB08539AB * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t41BB95788F4E2ECF6B7DC81DA177B0DDB08539AB ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t41BB95788F4E2ECF6B7DC81DA177B0DDB08539AB * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tB515236EBFA6EB2166398426DC099A96363476D4, ___values_8)); }
	inline ValueCollection_t426C2C3DFC19D5F3C0F74BC1213495D650290254 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t426C2C3DFC19D5F3C0F74BC1213495D650290254 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t426C2C3DFC19D5F3C0F74BC1213495D650290254 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tB515236EBFA6EB2166398426DC099A96363476D4, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<MLAPI.Connection.NetworkClient>
struct List_1_t3A508A14B962436191D0F4A254F5A2F44CDBBB1F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NetworkClientU5BU5D_t47F23628D477E23E0D80F071BA7B4634AFE7D950* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3A508A14B962436191D0F4A254F5A2F44CDBBB1F, ____items_1)); }
	inline NetworkClientU5BU5D_t47F23628D477E23E0D80F071BA7B4634AFE7D950* get__items_1() const { return ____items_1; }
	inline NetworkClientU5BU5D_t47F23628D477E23E0D80F071BA7B4634AFE7D950** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NetworkClientU5BU5D_t47F23628D477E23E0D80F071BA7B4634AFE7D950* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3A508A14B962436191D0F4A254F5A2F44CDBBB1F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3A508A14B962436191D0F4A254F5A2F44CDBBB1F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3A508A14B962436191D0F4A254F5A2F44CDBBB1F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3A508A14B962436191D0F4A254F5A2F44CDBBB1F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	NetworkClientU5BU5D_t47F23628D477E23E0D80F071BA7B4634AFE7D950* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3A508A14B962436191D0F4A254F5A2F44CDBBB1F_StaticFields, ____emptyArray_5)); }
	inline NetworkClientU5BU5D_t47F23628D477E23E0D80F071BA7B4634AFE7D950* get__emptyArray_5() const { return ____emptyArray_5; }
	inline NetworkClientU5BU5D_t47F23628D477E23E0D80F071BA7B4634AFE7D950** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(NetworkClientU5BU5D_t47F23628D477E23E0D80F071BA7B4634AFE7D950* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<MLAPI.Transports.TransportChannel>
struct List_1_t3F316C65882F05719FF89373CFAB006C671A1803  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransportChannelU5BU5D_t208E5D124870294ED76728A47941D06E0ADA7411* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F316C65882F05719FF89373CFAB006C671A1803, ____items_1)); }
	inline TransportChannelU5BU5D_t208E5D124870294ED76728A47941D06E0ADA7411* get__items_1() const { return ____items_1; }
	inline TransportChannelU5BU5D_t208E5D124870294ED76728A47941D06E0ADA7411** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransportChannelU5BU5D_t208E5D124870294ED76728A47941D06E0ADA7411* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F316C65882F05719FF89373CFAB006C671A1803, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F316C65882F05719FF89373CFAB006C671A1803, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F316C65882F05719FF89373CFAB006C671A1803, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F316C65882F05719FF89373CFAB006C671A1803_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransportChannelU5BU5D_t208E5D124870294ED76728A47941D06E0ADA7411* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F316C65882F05719FF89373CFAB006C671A1803_StaticFields, ____emptyArray_5)); }
	inline TransportChannelU5BU5D_t208E5D124870294ED76728A47941D06E0ADA7411* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransportChannelU5BU5D_t208E5D124870294ED76728A47941D06E0ADA7411** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransportChannelU5BU5D_t208E5D124870294ED76728A47941D06E0ADA7411* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<MLAPI.Transports.UNetChannel>
struct List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UNetChannelU5BU5D_t3E2426C78356B4EB6E78EAD5FC1A080B6EAA24D2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3, ____items_1)); }
	inline UNetChannelU5BU5D_t3E2426C78356B4EB6E78EAD5FC1A080B6EAA24D2* get__items_1() const { return ____items_1; }
	inline UNetChannelU5BU5D_t3E2426C78356B4EB6E78EAD5FC1A080B6EAA24D2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UNetChannelU5BU5D_t3E2426C78356B4EB6E78EAD5FC1A080B6EAA24D2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UNetChannelU5BU5D_t3E2426C78356B4EB6E78EAD5FC1A080B6EAA24D2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3_StaticFields, ____emptyArray_5)); }
	inline UNetChannelU5BU5D_t3E2426C78356B4EB6E78EAD5FC1A080B6EAA24D2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UNetChannelU5BU5D_t3E2426C78356B4EB6E78EAD5FC1A080B6EAA24D2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UNetChannelU5BU5D_t3E2426C78356B4EB6E78EAD5FC1A080B6EAA24D2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Networking.HostTopology
struct HostTopology_t268779309BB2D69F29D1A182662C79818813892B  : public RuntimeObject
{
public:
	// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::m_DefConfig
	ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * ___m_DefConfig_0;
	// System.Int32 UnityEngine.Networking.HostTopology::m_MaxDefConnections
	int32_t ___m_MaxDefConnections_1;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig> UnityEngine.Networking.HostTopology::m_SpecialConnections
	List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE * ___m_SpecialConnections_2;
	// System.UInt16 UnityEngine.Networking.HostTopology::m_ReceivedMessagePoolSize
	uint16_t ___m_ReceivedMessagePoolSize_3;
	// System.UInt16 UnityEngine.Networking.HostTopology::m_SentMessagePoolSize
	uint16_t ___m_SentMessagePoolSize_4;
	// System.Single UnityEngine.Networking.HostTopology::m_MessagePoolSizeGrowthFactor
	float ___m_MessagePoolSizeGrowthFactor_5;

public:
	inline static int32_t get_offset_of_m_DefConfig_0() { return static_cast<int32_t>(offsetof(HostTopology_t268779309BB2D69F29D1A182662C79818813892B, ___m_DefConfig_0)); }
	inline ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * get_m_DefConfig_0() const { return ___m_DefConfig_0; }
	inline ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A ** get_address_of_m_DefConfig_0() { return &___m_DefConfig_0; }
	inline void set_m_DefConfig_0(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * value)
	{
		___m_DefConfig_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefConfig_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_MaxDefConnections_1() { return static_cast<int32_t>(offsetof(HostTopology_t268779309BB2D69F29D1A182662C79818813892B, ___m_MaxDefConnections_1)); }
	inline int32_t get_m_MaxDefConnections_1() const { return ___m_MaxDefConnections_1; }
	inline int32_t* get_address_of_m_MaxDefConnections_1() { return &___m_MaxDefConnections_1; }
	inline void set_m_MaxDefConnections_1(int32_t value)
	{
		___m_MaxDefConnections_1 = value;
	}

	inline static int32_t get_offset_of_m_SpecialConnections_2() { return static_cast<int32_t>(offsetof(HostTopology_t268779309BB2D69F29D1A182662C79818813892B, ___m_SpecialConnections_2)); }
	inline List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE * get_m_SpecialConnections_2() const { return ___m_SpecialConnections_2; }
	inline List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE ** get_address_of_m_SpecialConnections_2() { return &___m_SpecialConnections_2; }
	inline void set_m_SpecialConnections_2(List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE * value)
	{
		___m_SpecialConnections_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SpecialConnections_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_ReceivedMessagePoolSize_3() { return static_cast<int32_t>(offsetof(HostTopology_t268779309BB2D69F29D1A182662C79818813892B, ___m_ReceivedMessagePoolSize_3)); }
	inline uint16_t get_m_ReceivedMessagePoolSize_3() const { return ___m_ReceivedMessagePoolSize_3; }
	inline uint16_t* get_address_of_m_ReceivedMessagePoolSize_3() { return &___m_ReceivedMessagePoolSize_3; }
	inline void set_m_ReceivedMessagePoolSize_3(uint16_t value)
	{
		___m_ReceivedMessagePoolSize_3 = value;
	}

	inline static int32_t get_offset_of_m_SentMessagePoolSize_4() { return static_cast<int32_t>(offsetof(HostTopology_t268779309BB2D69F29D1A182662C79818813892B, ___m_SentMessagePoolSize_4)); }
	inline uint16_t get_m_SentMessagePoolSize_4() const { return ___m_SentMessagePoolSize_4; }
	inline uint16_t* get_address_of_m_SentMessagePoolSize_4() { return &___m_SentMessagePoolSize_4; }
	inline void set_m_SentMessagePoolSize_4(uint16_t value)
	{
		___m_SentMessagePoolSize_4 = value;
	}

	inline static int32_t get_offset_of_m_MessagePoolSizeGrowthFactor_5() { return static_cast<int32_t>(offsetof(HostTopology_t268779309BB2D69F29D1A182662C79818813892B, ___m_MessagePoolSizeGrowthFactor_5)); }
	inline float get_m_MessagePoolSizeGrowthFactor_5() const { return ___m_MessagePoolSizeGrowthFactor_5; }
	inline float* get_address_of_m_MessagePoolSizeGrowthFactor_5() { return &___m_MessagePoolSizeGrowthFactor_5; }
	inline void set_m_MessagePoolSizeGrowthFactor_5(float value)
	{
		___m_MessagePoolSizeGrowthFactor_5 = value;
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// MLAPI.Connection.NetworkClient
struct NetworkClient_t0DF198CA47B274F9A545CC0E08507786069E2DE6  : public RuntimeObject
{
public:
	// System.UInt64 MLAPI.Connection.NetworkClient::ClientId
	uint64_t ___ClientId_0;
	// MLAPI.NetworkObject MLAPI.Connection.NetworkClient::PlayerObject
	NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 * ___PlayerObject_1;
	// System.Collections.Generic.List`1<MLAPI.NetworkObject> MLAPI.Connection.NetworkClient::OwnedObjects
	List_1_tC61ECBC114E2583254C366ECBFE31AFC2D38149B * ___OwnedObjects_2;

public:
	inline static int32_t get_offset_of_ClientId_0() { return static_cast<int32_t>(offsetof(NetworkClient_t0DF198CA47B274F9A545CC0E08507786069E2DE6, ___ClientId_0)); }
	inline uint64_t get_ClientId_0() const { return ___ClientId_0; }
	inline uint64_t* get_address_of_ClientId_0() { return &___ClientId_0; }
	inline void set_ClientId_0(uint64_t value)
	{
		___ClientId_0 = value;
	}

	inline static int32_t get_offset_of_PlayerObject_1() { return static_cast<int32_t>(offsetof(NetworkClient_t0DF198CA47B274F9A545CC0E08507786069E2DE6, ___PlayerObject_1)); }
	inline NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 * get_PlayerObject_1() const { return ___PlayerObject_1; }
	inline NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 ** get_address_of_PlayerObject_1() { return &___PlayerObject_1; }
	inline void set_PlayerObject_1(NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 * value)
	{
		___PlayerObject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerObject_1), (void*)value);
	}

	inline static int32_t get_offset_of_OwnedObjects_2() { return static_cast<int32_t>(offsetof(NetworkClient_t0DF198CA47B274F9A545CC0E08507786069E2DE6, ___OwnedObjects_2)); }
	inline List_1_tC61ECBC114E2583254C366ECBFE31AFC2D38149B * get_OwnedObjects_2() const { return ___OwnedObjects_2; }
	inline List_1_tC61ECBC114E2583254C366ECBFE31AFC2D38149B ** get_address_of_OwnedObjects_2() { return &___OwnedObjects_2; }
	inline void set_OwnedObjects_2(List_1_tC61ECBC114E2583254C366ECBFE31AFC2D38149B * value)
	{
		___OwnedObjects_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OwnedObjects_2), (void*)value);
	}
};


// MLAPI.Configuration.NetworkPrefab
struct NetworkPrefab_t7630C6985562B806CE10338714F59F0C6A5B5F71  : public RuntimeObject
{
public:
	// UnityEngine.GameObject MLAPI.Configuration.NetworkPrefab::Prefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Prefab_0;
	// System.Boolean MLAPI.Configuration.NetworkPrefab::PlayerPrefab
	bool ___PlayerPrefab_1;

public:
	inline static int32_t get_offset_of_Prefab_0() { return static_cast<int32_t>(offsetof(NetworkPrefab_t7630C6985562B806CE10338714F59F0C6A5B5F71, ___Prefab_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Prefab_0() const { return ___Prefab_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Prefab_0() { return &___Prefab_0; }
	inline void set_Prefab_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Prefab_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Prefab_0), (void*)value);
	}

	inline static int32_t get_offset_of_PlayerPrefab_1() { return static_cast<int32_t>(offsetof(NetworkPrefab_t7630C6985562B806CE10338714F59F0C6A5B5F71, ___PlayerPrefab_1)); }
	inline bool get_PlayerPrefab_1() const { return ___PlayerPrefab_1; }
	inline bool* get_address_of_PlayerPrefab_1() { return &___PlayerPrefab_1; }
	inline void set_PlayerPrefab_1(bool value)
	{
		___PlayerPrefab_1 = value;
	}
};


// MLAPI.Serialization.NetworkReader
struct NetworkReader_tB092619323CE14E6795C4FC0E0169237625D2403  : public RuntimeObject
{
public:
	// System.IO.Stream MLAPI.Serialization.NetworkReader::m_Source
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___m_Source_0;
	// MLAPI.Serialization.NetworkBuffer MLAPI.Serialization.NetworkReader::m_NetworkSource
	NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 * ___m_NetworkSource_1;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NetworkReader_tB092619323CE14E6795C4FC0E0169237625D2403, ___m_Source_0)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_m_Source_0() const { return ___m_Source_0; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___m_Source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Source_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_NetworkSource_1() { return static_cast<int32_t>(offsetof(NetworkReader_tB092619323CE14E6795C4FC0E0169237625D2403, ___m_NetworkSource_1)); }
	inline NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 * get_m_NetworkSource_1() const { return ___m_NetworkSource_1; }
	inline NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 ** get_address_of_m_NetworkSource_1() { return &___m_NetworkSource_1; }
	inline void set_m_NetworkSource_1(NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 * value)
	{
		___m_NetworkSource_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NetworkSource_1), (void*)value);
	}
};


// MLAPI.Serialization.NetworkWriter
struct NetworkWriter_tFF50DD965D82FE95092CE3C12A30AD51604E9CF2  : public RuntimeObject
{
public:
	// System.IO.Stream MLAPI.Serialization.NetworkWriter::m_Sink
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___m_Sink_0;
	// MLAPI.Serialization.NetworkBuffer MLAPI.Serialization.NetworkWriter::m_NetworkSink
	NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 * ___m_NetworkSink_1;

public:
	inline static int32_t get_offset_of_m_Sink_0() { return static_cast<int32_t>(offsetof(NetworkWriter_tFF50DD965D82FE95092CE3C12A30AD51604E9CF2, ___m_Sink_0)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_m_Sink_0() const { return ___m_Sink_0; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_m_Sink_0() { return &___m_Sink_0; }
	inline void set_m_Sink_0(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___m_Sink_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sink_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_NetworkSink_1() { return static_cast<int32_t>(offsetof(NetworkWriter_tFF50DD965D82FE95092CE3C12A30AD51604E9CF2, ___m_NetworkSink_1)); }
	inline NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 * get_m_NetworkSink_1() const { return ___m_NetworkSink_1; }
	inline NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 ** get_address_of_m_NetworkSink_1() { return &___m_NetworkSink_1; }
	inline void set_m_NetworkSink_1(NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 * value)
	{
		___m_NetworkSink_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NetworkSink_1), (void*)value);
	}
};


// MLAPI.Profiling.PerformanceTickData
struct PerformanceTickData_tDA5CED757DA6E1D027F9EECA2A80D6EEC3248CFD  : public RuntimeObject
{
public:
	// System.Int32 MLAPI.Profiling.PerformanceTickData::TickId
	int32_t ___TickId_0;
	// MLAPI.Profiling.ProfilingDataStore MLAPI.Profiling.PerformanceTickData::m_TickData
	ProfilingDataStore_t1E7070AC4F046AA186604C4185FCB4AC1956E333 * ___m_TickData_1;

public:
	inline static int32_t get_offset_of_TickId_0() { return static_cast<int32_t>(offsetof(PerformanceTickData_tDA5CED757DA6E1D027F9EECA2A80D6EEC3248CFD, ___TickId_0)); }
	inline int32_t get_TickId_0() const { return ___TickId_0; }
	inline int32_t* get_address_of_TickId_0() { return &___TickId_0; }
	inline void set_TickId_0(int32_t value)
	{
		___TickId_0 = value;
	}

	inline static int32_t get_offset_of_m_TickData_1() { return static_cast<int32_t>(offsetof(PerformanceTickData_tDA5CED757DA6E1D027F9EECA2A80D6EEC3248CFD, ___m_TickData_1)); }
	inline ProfilingDataStore_t1E7070AC4F046AA186604C4185FCB4AC1956E333 * get_m_TickData_1() const { return ___m_TickData_1; }
	inline ProfilingDataStore_t1E7070AC4F046AA186604C4185FCB4AC1956E333 ** get_address_of_m_TickData_1() { return &___m_TickData_1; }
	inline void set_m_TickData_1(ProfilingDataStore_t1E7070AC4F046AA186604C4185FCB4AC1956E333 * value)
	{
		___m_TickData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TickData_1), (void*)value);
	}
};


// MLAPI.Profiling.ProfilingDataStore
struct ProfilingDataStore_t1E7070AC4F046AA186604C4185FCB4AC1956E333  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MLAPI.Profiling.ProfilingDataStore::m_Dictionary
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___m_Dictionary_0;

public:
	inline static int32_t get_offset_of_m_Dictionary_0() { return static_cast<int32_t>(offsetof(ProfilingDataStore_t1E7070AC4F046AA186604C4185FCB4AC1956E333, ___m_Dictionary_0)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_m_Dictionary_0() const { return ___m_Dictionary_0; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_m_Dictionary_0() { return &___m_Dictionary_0; }
	inline void set_m_Dictionary_0(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___m_Dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dictionary_0), (void*)value);
	}
};


// MLAPI.Transports.UNET.RelayTransport
struct RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886  : public RuntimeObject
{
public:

public:
};

struct RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_StaticFields
{
public:
	// System.Byte MLAPI.Transports.UNET.RelayTransport::s_DefaultChannelId
	uint8_t ___s_DefaultChannelId_0;
	// System.Int32 MLAPI.Transports.UNET.RelayTransport::s_RelayConnectionId
	int32_t ___s_RelayConnectionId_1;
	// System.Boolean MLAPI.Transports.UNET.RelayTransport::s_IsClient
	bool ___s_IsClient_2;
	// System.String MLAPI.Transports.UNET.RelayTransport::s_Address
	String_t* ___s_Address_3;
	// System.UInt16 MLAPI.Transports.UNET.RelayTransport::s_Port
	uint16_t ___s_Port_4;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS> MLAPI.Transports.UNET.RelayTransport::s_Channels
	List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * ___s_Channels_5;
	// System.Boolean MLAPI.Transports.UNET.RelayTransport::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_6;
	// System.String MLAPI.Transports.UNET.RelayTransport::<RelayAddress>k__BackingField
	String_t* ___U3CRelayAddressU3Ek__BackingField_7;
	// System.UInt16 MLAPI.Transports.UNET.RelayTransport::<RelayPort>k__BackingField
	uint16_t ___U3CRelayPortU3Ek__BackingField_8;
	// System.Action`1<System.Net.IPEndPoint> MLAPI.Transports.UNET.RelayTransport::OnRemoteEndpointReported
	Action_1_tDE160902ECA9E6E53BC1DB596B630B904D283ADD * ___OnRemoteEndpointReported_9;
	// System.Byte[] MLAPI.Transports.UNET.RelayTransport::disconnectBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___disconnectBuffer_10;

public:
	inline static int32_t get_offset_of_s_DefaultChannelId_0() { return static_cast<int32_t>(offsetof(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_StaticFields, ___s_DefaultChannelId_0)); }
	inline uint8_t get_s_DefaultChannelId_0() const { return ___s_DefaultChannelId_0; }
	inline uint8_t* get_address_of_s_DefaultChannelId_0() { return &___s_DefaultChannelId_0; }
	inline void set_s_DefaultChannelId_0(uint8_t value)
	{
		___s_DefaultChannelId_0 = value;
	}

	inline static int32_t get_offset_of_s_RelayConnectionId_1() { return static_cast<int32_t>(offsetof(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_StaticFields, ___s_RelayConnectionId_1)); }
	inline int32_t get_s_RelayConnectionId_1() const { return ___s_RelayConnectionId_1; }
	inline int32_t* get_address_of_s_RelayConnectionId_1() { return &___s_RelayConnectionId_1; }
	inline void set_s_RelayConnectionId_1(int32_t value)
	{
		___s_RelayConnectionId_1 = value;
	}

	inline static int32_t get_offset_of_s_IsClient_2() { return static_cast<int32_t>(offsetof(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_StaticFields, ___s_IsClient_2)); }
	inline bool get_s_IsClient_2() const { return ___s_IsClient_2; }
	inline bool* get_address_of_s_IsClient_2() { return &___s_IsClient_2; }
	inline void set_s_IsClient_2(bool value)
	{
		___s_IsClient_2 = value;
	}

	inline static int32_t get_offset_of_s_Address_3() { return static_cast<int32_t>(offsetof(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_StaticFields, ___s_Address_3)); }
	inline String_t* get_s_Address_3() const { return ___s_Address_3; }
	inline String_t** get_address_of_s_Address_3() { return &___s_Address_3; }
	inline void set_s_Address_3(String_t* value)
	{
		___s_Address_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Address_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Port_4() { return static_cast<int32_t>(offsetof(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_StaticFields, ___s_Port_4)); }
	inline uint16_t get_s_Port_4() const { return ___s_Port_4; }
	inline uint16_t* get_address_of_s_Port_4() { return &___s_Port_4; }
	inline void set_s_Port_4(uint16_t value)
	{
		___s_Port_4 = value;
	}

	inline static int32_t get_offset_of_s_Channels_5() { return static_cast<int32_t>(offsetof(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_StaticFields, ___s_Channels_5)); }
	inline List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * get_s_Channels_5() const { return ___s_Channels_5; }
	inline List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 ** get_address_of_s_Channels_5() { return &___s_Channels_5; }
	inline void set_s_Channels_5(List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * value)
	{
		___s_Channels_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Channels_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_StaticFields, ___U3CEnabledU3Ek__BackingField_6)); }
	inline bool get_U3CEnabledU3Ek__BackingField_6() const { return ___U3CEnabledU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_6() { return &___U3CEnabledU3Ek__BackingField_6; }
	inline void set_U3CEnabledU3Ek__BackingField_6(bool value)
	{
		___U3CEnabledU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CRelayAddressU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_StaticFields, ___U3CRelayAddressU3Ek__BackingField_7)); }
	inline String_t* get_U3CRelayAddressU3Ek__BackingField_7() const { return ___U3CRelayAddressU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CRelayAddressU3Ek__BackingField_7() { return &___U3CRelayAddressU3Ek__BackingField_7; }
	inline void set_U3CRelayAddressU3Ek__BackingField_7(String_t* value)
	{
		___U3CRelayAddressU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRelayAddressU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRelayPortU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_StaticFields, ___U3CRelayPortU3Ek__BackingField_8)); }
	inline uint16_t get_U3CRelayPortU3Ek__BackingField_8() const { return ___U3CRelayPortU3Ek__BackingField_8; }
	inline uint16_t* get_address_of_U3CRelayPortU3Ek__BackingField_8() { return &___U3CRelayPortU3Ek__BackingField_8; }
	inline void set_U3CRelayPortU3Ek__BackingField_8(uint16_t value)
	{
		___U3CRelayPortU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_OnRemoteEndpointReported_9() { return static_cast<int32_t>(offsetof(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_StaticFields, ___OnRemoteEndpointReported_9)); }
	inline Action_1_tDE160902ECA9E6E53BC1DB596B630B904D283ADD * get_OnRemoteEndpointReported_9() const { return ___OnRemoteEndpointReported_9; }
	inline Action_1_tDE160902ECA9E6E53BC1DB596B630B904D283ADD ** get_address_of_OnRemoteEndpointReported_9() { return &___OnRemoteEndpointReported_9; }
	inline void set_OnRemoteEndpointReported_9(Action_1_tDE160902ECA9E6E53BC1DB596B630B904D283ADD * value)
	{
		___OnRemoteEndpointReported_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRemoteEndpointReported_9), (void*)value);
	}

	inline static int32_t get_offset_of_disconnectBuffer_10() { return static_cast<int32_t>(offsetof(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_StaticFields, ___disconnectBuffer_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_disconnectBuffer_10() const { return ___disconnectBuffer_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_disconnectBuffer_10() { return &___disconnectBuffer_10; }
	inline void set_disconnectBuffer_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___disconnectBuffer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disconnectBuffer_10), (void*)value);
	}
};


// MLAPI.Transports.Tasks.SocketTasks
struct SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432  : public RuntimeObject
{
public:
	// MLAPI.Transports.Tasks.SocketTask[] MLAPI.Transports.Tasks.SocketTasks::<Tasks>k__BackingField
	SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A* ___U3CTasksU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTasksU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432, ___U3CTasksU3Ek__BackingField_0)); }
	inline SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A* get_U3CTasksU3Ek__BackingField_0() const { return ___U3CTasksU3Ek__BackingField_0; }
	inline SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A** get_address_of_U3CTasksU3Ek__BackingField_0() { return &___U3CTasksU3Ek__BackingField_0; }
	inline void set_U3CTasksU3Ek__BackingField_0(SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A* value)
	{
		___U3CTasksU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTasksU3Ek__BackingField_0), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// MLAPI.Reflection.TypeExtensions
struct TypeExtensions_tC55FE13D3F991894E4468EBE990FE79D595B227F  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// MLAPI.Messaging.InternalMessageHandler/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_tF77F38290AC0444E45AAC2C0A85E2EA517F8A32E  : public RuntimeObject
{
public:
	// System.UInt64 MLAPI.Messaging.InternalMessageHandler/<>c__DisplayClass17_0::clientId
	uint64_t ___clientId_0;

public:
	inline static int32_t get_offset_of_clientId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_tF77F38290AC0444E45AAC2C0A85E2EA517F8A32E, ___clientId_0)); }
	inline uint64_t get_clientId_0() const { return ___clientId_0; }
	inline uint64_t* get_address_of_clientId_0() { return &___clientId_0; }
	inline void set_clientId_0(uint64_t value)
	{
		___clientId_0 = value;
	}
};


// MLAPI.Messaging.InternalMessageHandler/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t13F01EB262A469487D83C30B80974D077D51FA39  : public RuntimeObject
{
public:
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene> MLAPI.Messaging.InternalMessageHandler/<>c__DisplayClass18_0::onSceneLoaded
	UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * ___onSceneLoaded_0;
	// MLAPI.Serialization.NetworkBuffer MLAPI.Messaging.InternalMessageHandler/<>c__DisplayClass18_0::continuationBuffer
	NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 * ___continuationBuffer_1;

public:
	inline static int32_t get_offset_of_onSceneLoaded_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_t13F01EB262A469487D83C30B80974D077D51FA39, ___onSceneLoaded_0)); }
	inline UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * get_onSceneLoaded_0() const { return ___onSceneLoaded_0; }
	inline UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 ** get_address_of_onSceneLoaded_0() { return &___onSceneLoaded_0; }
	inline void set_onSceneLoaded_0(UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * value)
	{
		___onSceneLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onSceneLoaded_0), (void*)value);
	}

	inline static int32_t get_offset_of_continuationBuffer_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_t13F01EB262A469487D83C30B80974D077D51FA39, ___continuationBuffer_1)); }
	inline NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 * get_continuationBuffer_1() const { return ___continuationBuffer_1; }
	inline NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 ** get_address_of_continuationBuffer_1() { return &___continuationBuffer_1; }
	inline void set_continuationBuffer_1(NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 * value)
	{
		___continuationBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuationBuffer_1), (void*)value);
	}
};


// MLAPI.NetworkBehaviour/<>c
struct U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA_StaticFields
{
public:
	// MLAPI.NetworkBehaviour/<>c MLAPI.NetworkBehaviour/<>c::<>9
	U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA * ___U3CU3E9_0;
	// System.Func`2<MLAPI.Connection.NetworkClient,System.UInt64> MLAPI.NetworkBehaviour/<>c::<>9__4_0
	Func_2_t4B34F991B804537165DC5D9D406D6D143D673EE7 * ___U3CU3E9__4_0_1;
	// System.Func`2<MLAPI.Connection.NetworkClient,System.UInt64> MLAPI.NetworkBehaviour/<>c::<>9__4_1
	Func_2_t4B34F991B804537165DC5D9D406D6D143D673EE7 * ___U3CU3E9__4_1_2;
	// System.Func`2<MLAPI.Connection.NetworkClient,System.UInt64> MLAPI.NetworkBehaviour/<>c::<>9__5_0
	Func_2_t4B34F991B804537165DC5D9D406D6D143D673EE7 * ___U3CU3E9__5_0_3;
	// System.Func`2<MLAPI.Connection.NetworkClient,System.UInt64> MLAPI.NetworkBehaviour/<>c::<>9__5_1
	Func_2_t4B34F991B804537165DC5D9D406D6D143D673EE7 * ___U3CU3E9__5_1_4;
	// System.Func`2<System.Reflection.FieldInfo,System.String> MLAPI.NetworkBehaviour/<>c::<>9__52_0
	Func_2_t3E9169486444D508EC295C4254DF9267CEE35CCE * ___U3CU3E9__52_0_5;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Func_2_t4B34F991B804537165DC5D9D406D6D143D673EE7 * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Func_2_t4B34F991B804537165DC5D9D406D6D143D673EE7 ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Func_2_t4B34F991B804537165DC5D9D406D6D143D673EE7 * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA_StaticFields, ___U3CU3E9__4_1_2)); }
	inline Func_2_t4B34F991B804537165DC5D9D406D6D143D673EE7 * get_U3CU3E9__4_1_2() const { return ___U3CU3E9__4_1_2; }
	inline Func_2_t4B34F991B804537165DC5D9D406D6D143D673EE7 ** get_address_of_U3CU3E9__4_1_2() { return &___U3CU3E9__4_1_2; }
	inline void set_U3CU3E9__4_1_2(Func_2_t4B34F991B804537165DC5D9D406D6D143D673EE7 * value)
	{
		___U3CU3E9__4_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA_StaticFields, ___U3CU3E9__5_0_3)); }
	inline Func_2_t4B34F991B804537165DC5D9D406D6D143D673EE7 * get_U3CU3E9__5_0_3() const { return ___U3CU3E9__5_0_3; }
	inline Func_2_t4B34F991B804537165DC5D9D406D6D143D673EE7 ** get_address_of_U3CU3E9__5_0_3() { return &___U3CU3E9__5_0_3; }
	inline void set_U3CU3E9__5_0_3(Func_2_t4B34F991B804537165DC5D9D406D6D143D673EE7 * value)
	{
		___U3CU3E9__5_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_1_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA_StaticFields, ___U3CU3E9__5_1_4)); }
	inline Func_2_t4B34F991B804537165DC5D9D406D6D143D673EE7 * get_U3CU3E9__5_1_4() const { return ___U3CU3E9__5_1_4; }
	inline Func_2_t4B34F991B804537165DC5D9D406D6D143D673EE7 ** get_address_of_U3CU3E9__5_1_4() { return &___U3CU3E9__5_1_4; }
	inline void set_U3CU3E9__5_1_4(Func_2_t4B34F991B804537165DC5D9D406D6D143D673EE7 * value)
	{
		___U3CU3E9__5_1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__52_0_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA_StaticFields, ___U3CU3E9__52_0_5)); }
	inline Func_2_t3E9169486444D508EC295C4254DF9267CEE35CCE * get_U3CU3E9__52_0_5() const { return ___U3CU3E9__52_0_5; }
	inline Func_2_t3E9169486444D508EC295C4254DF9267CEE35CCE ** get_address_of_U3CU3E9__52_0_5() { return &___U3CU3E9__52_0_5; }
	inline void set_U3CU3E9__52_0_5(Func_2_t3E9169486444D508EC295C4254DF9267CEE35CCE * value)
	{
		___U3CU3E9__52_0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__52_0_5), (void*)value);
	}
};


// MLAPI.Configuration.NetworkConfig/<>c
struct U3CU3Ec_t85377D8F4AC5A890A77A8C78CFCF705608CD0ECE  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t85377D8F4AC5A890A77A8C78CFCF705608CD0ECE_StaticFields
{
public:
	// MLAPI.Configuration.NetworkConfig/<>c MLAPI.Configuration.NetworkConfig/<>c::<>9
	U3CU3Ec_t85377D8F4AC5A890A77A8C78CFCF705608CD0ECE * ___U3CU3E9_0;
	// System.Func`2<MLAPI.Configuration.NetworkPrefab,System.UInt64> MLAPI.Configuration.NetworkConfig/<>c::<>9__32_0
	Func_2_tE35B6DC4C9B88868C3CE65296E169E70DDA12D51 * ___U3CU3E9__32_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t85377D8F4AC5A890A77A8C78CFCF705608CD0ECE_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t85377D8F4AC5A890A77A8C78CFCF705608CD0ECE * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t85377D8F4AC5A890A77A8C78CFCF705608CD0ECE ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t85377D8F4AC5A890A77A8C78CFCF705608CD0ECE * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__32_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t85377D8F4AC5A890A77A8C78CFCF705608CD0ECE_StaticFields, ___U3CU3E9__32_0_1)); }
	inline Func_2_tE35B6DC4C9B88868C3CE65296E169E70DDA12D51 * get_U3CU3E9__32_0_1() const { return ___U3CU3E9__32_0_1; }
	inline Func_2_tE35B6DC4C9B88868C3CE65296E169E70DDA12D51 ** get_address_of_U3CU3E9__32_0_1() { return &___U3CU3E9__32_0_1; }
	inline void set_U3CU3E9__32_0_1(Func_2_tE35B6DC4C9B88868C3CE65296E169E70DDA12D51 * value)
	{
		___U3CU3E9__32_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__32_0_1), (void*)value);
	}
};


// MLAPI.NetworkManager/<>c
struct U3CU3Ec_t52CC57E9CBCF944B6D4AE9FC037E5BD3B7E5BF31  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t52CC57E9CBCF944B6D4AE9FC037E5BD3B7E5BF31_StaticFields
{
public:
	// MLAPI.NetworkManager/<>c MLAPI.NetworkManager/<>c::<>9
	U3CU3Ec_t52CC57E9CBCF944B6D4AE9FC037E5BD3B7E5BF31 * ___U3CU3E9_0;
	// System.Func`2<MLAPI.Configuration.NetworkPrefab,System.Boolean> MLAPI.NetworkManager/<>c::<>9__82_0
	Func_2_t59EB38A76202F2C295CC84F221E6450CBB4C5390 * ___U3CU3E9__82_0_1;
	// System.Func`2<MLAPI.Configuration.NetworkPrefab,System.Boolean> MLAPI.NetworkManager/<>c::<>9__82_1
	Func_2_t59EB38A76202F2C295CC84F221E6450CBB4C5390 * ___U3CU3E9__82_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t52CC57E9CBCF944B6D4AE9FC037E5BD3B7E5BF31_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t52CC57E9CBCF944B6D4AE9FC037E5BD3B7E5BF31 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t52CC57E9CBCF944B6D4AE9FC037E5BD3B7E5BF31 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t52CC57E9CBCF944B6D4AE9FC037E5BD3B7E5BF31 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__82_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t52CC57E9CBCF944B6D4AE9FC037E5BD3B7E5BF31_StaticFields, ___U3CU3E9__82_0_1)); }
	inline Func_2_t59EB38A76202F2C295CC84F221E6450CBB4C5390 * get_U3CU3E9__82_0_1() const { return ___U3CU3E9__82_0_1; }
	inline Func_2_t59EB38A76202F2C295CC84F221E6450CBB4C5390 ** get_address_of_U3CU3E9__82_0_1() { return &___U3CU3E9__82_0_1; }
	inline void set_U3CU3E9__82_0_1(Func_2_t59EB38A76202F2C295CC84F221E6450CBB4C5390 * value)
	{
		___U3CU3E9__82_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__82_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__82_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t52CC57E9CBCF944B6D4AE9FC037E5BD3B7E5BF31_StaticFields, ___U3CU3E9__82_1_2)); }
	inline Func_2_t59EB38A76202F2C295CC84F221E6450CBB4C5390 * get_U3CU3E9__82_1_2() const { return ___U3CU3E9__82_1_2; }
	inline Func_2_t59EB38A76202F2C295CC84F221E6450CBB4C5390 ** get_address_of_U3CU3E9__82_1_2() { return &___U3CU3E9__82_1_2; }
	inline void set_U3CU3E9__82_1_2(Func_2_t59EB38A76202F2C295CC84F221E6450CBB4C5390 * value)
	{
		___U3CU3E9__82_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__82_1_2), (void*)value);
	}
};


// MLAPI.NetworkManager/<ApprovalTimeout>d__102
struct U3CApprovalTimeoutU3Ed__102_tFC84204C6244AF949BE38AAB25AA969F32C32B88  : public RuntimeObject
{
public:
	// System.Int32 MLAPI.NetworkManager/<ApprovalTimeout>d__102::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MLAPI.NetworkManager/<ApprovalTimeout>d__102::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.UInt64 MLAPI.NetworkManager/<ApprovalTimeout>d__102::clientId
	uint64_t ___clientId_2;
	// MLAPI.NetworkManager MLAPI.NetworkManager/<ApprovalTimeout>d__102::<>4__this
	NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * ___U3CU3E4__this_3;
	// System.Single MLAPI.NetworkManager/<ApprovalTimeout>d__102::<timeStarted>5__1
	float ___U3CtimeStartedU3E5__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CApprovalTimeoutU3Ed__102_tFC84204C6244AF949BE38AAB25AA969F32C32B88, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CApprovalTimeoutU3Ed__102_tFC84204C6244AF949BE38AAB25AA969F32C32B88, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_clientId_2() { return static_cast<int32_t>(offsetof(U3CApprovalTimeoutU3Ed__102_tFC84204C6244AF949BE38AAB25AA969F32C32B88, ___clientId_2)); }
	inline uint64_t get_clientId_2() const { return ___clientId_2; }
	inline uint64_t* get_address_of_clientId_2() { return &___clientId_2; }
	inline void set_clientId_2(uint64_t value)
	{
		___clientId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CApprovalTimeoutU3Ed__102_tFC84204C6244AF949BE38AAB25AA969F32C32B88, ___U3CU3E4__this_3)); }
	inline NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimeStartedU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CApprovalTimeoutU3Ed__102_tFC84204C6244AF949BE38AAB25AA969F32C32B88, ___U3CtimeStartedU3E5__1_4)); }
	inline float get_U3CtimeStartedU3E5__1_4() const { return ___U3CtimeStartedU3E5__1_4; }
	inline float* get_address_of_U3CtimeStartedU3E5__1_4() { return &___U3CtimeStartedU3E5__1_4; }
	inline void set_U3CtimeStartedU3E5__1_4(float value)
	{
		___U3CtimeStartedU3E5__1_4 = value;
	}
};


// MLAPI.NetworkManager/<TimeOutSwitchSceneProgress>d__103
struct U3CTimeOutSwitchSceneProgressU3Ed__103_tB5E18C3D5260A692A05E1D3CF8CFBC0C9F343F69  : public RuntimeObject
{
public:
	// System.Int32 MLAPI.NetworkManager/<TimeOutSwitchSceneProgress>d__103::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MLAPI.NetworkManager/<TimeOutSwitchSceneProgress>d__103::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MLAPI.SceneManagement.SceneSwitchProgress MLAPI.NetworkManager/<TimeOutSwitchSceneProgress>d__103::switchSceneProgress
	SceneSwitchProgress_tAAE76AD0A7D3D42A7D0EB2EC5799E42FAFC178BD * ___switchSceneProgress_2;
	// MLAPI.NetworkManager MLAPI.NetworkManager/<TimeOutSwitchSceneProgress>d__103::<>4__this
	NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTimeOutSwitchSceneProgressU3Ed__103_tB5E18C3D5260A692A05E1D3CF8CFBC0C9F343F69, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTimeOutSwitchSceneProgressU3Ed__103_tB5E18C3D5260A692A05E1D3CF8CFBC0C9F343F69, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_switchSceneProgress_2() { return static_cast<int32_t>(offsetof(U3CTimeOutSwitchSceneProgressU3Ed__103_tB5E18C3D5260A692A05E1D3CF8CFBC0C9F343F69, ___switchSceneProgress_2)); }
	inline SceneSwitchProgress_tAAE76AD0A7D3D42A7D0EB2EC5799E42FAFC178BD * get_switchSceneProgress_2() const { return ___switchSceneProgress_2; }
	inline SceneSwitchProgress_tAAE76AD0A7D3D42A7D0EB2EC5799E42FAFC178BD ** get_address_of_switchSceneProgress_2() { return &___switchSceneProgress_2; }
	inline void set_switchSceneProgress_2(SceneSwitchProgress_tAAE76AD0A7D3D42A7D0EB2EC5799E42FAFC178BD * value)
	{
		___switchSceneProgress_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___switchSceneProgress_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CTimeOutSwitchSceneProgressU3Ed__103_tB5E18C3D5260A692A05E1D3CF8CFBC0C9F343F69, ___U3CU3E4__this_3)); }
	inline NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// MLAPI.SceneManagement.NetworkSceneManager/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tC716664DD675E4859C9F52311EC519D2E193DA9F  : public RuntimeObject
{
public:
	// MLAPI.SceneManagement.SceneSwitchProgress MLAPI.SceneManagement.NetworkSceneManager/<>c__DisplayClass24_0::switchSceneProgress
	SceneSwitchProgress_tAAE76AD0A7D3D42A7D0EB2EC5799E42FAFC178BD * ___switchSceneProgress_0;

public:
	inline static int32_t get_offset_of_switchSceneProgress_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC716664DD675E4859C9F52311EC519D2E193DA9F, ___switchSceneProgress_0)); }
	inline SceneSwitchProgress_tAAE76AD0A7D3D42A7D0EB2EC5799E42FAFC178BD * get_switchSceneProgress_0() const { return ___switchSceneProgress_0; }
	inline SceneSwitchProgress_tAAE76AD0A7D3D42A7D0EB2EC5799E42FAFC178BD ** get_address_of_switchSceneProgress_0() { return &___switchSceneProgress_0; }
	inline void set_switchSceneProgress_0(SceneSwitchProgress_tAAE76AD0A7D3D42A7D0EB2EC5799E42FAFC178BD * value)
	{
		___switchSceneProgress_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___switchSceneProgress_0), (void*)value);
	}
};


// MLAPI.Spawning.NetworkSpawnManager/<>c
struct U3CU3Ec_t7ECBA6547CA9ED518205A20A7E53317896BDAE4A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7ECBA6547CA9ED518205A20A7E53317896BDAE4A_StaticFields
{
public:
	// MLAPI.Spawning.NetworkSpawnManager/<>c MLAPI.Spawning.NetworkSpawnManager/<>c::<>9
	U3CU3Ec_t7ECBA6547CA9ED518205A20A7E53317896BDAE4A * ___U3CU3E9_0;
	// System.Func`2<MLAPI.Connection.NetworkClient,System.UInt64> MLAPI.Spawning.NetworkSpawnManager/<>c::<>9__33_0
	Func_2_t4B34F991B804537165DC5D9D406D6D143D673EE7 * ___U3CU3E9__33_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7ECBA6547CA9ED518205A20A7E53317896BDAE4A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7ECBA6547CA9ED518205A20A7E53317896BDAE4A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7ECBA6547CA9ED518205A20A7E53317896BDAE4A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7ECBA6547CA9ED518205A20A7E53317896BDAE4A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__33_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7ECBA6547CA9ED518205A20A7E53317896BDAE4A_StaticFields, ___U3CU3E9__33_0_1)); }
	inline Func_2_t4B34F991B804537165DC5D9D406D6D143D673EE7 * get_U3CU3E9__33_0_1() const { return ___U3CU3E9__33_0_1; }
	inline Func_2_t4B34F991B804537165DC5D9D406D6D143D673EE7 ** get_address_of_U3CU3E9__33_0_1() { return &___U3CU3E9__33_0_1; }
	inline void set_U3CU3E9__33_0_1(Func_2_t4B34F991B804537165DC5D9D406D6D143D673EE7 * value)
	{
		___U3CU3E9__33_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__33_0_1), (void*)value);
	}
};


// MLAPI.Serialization.SerializationManager/<>c
struct U3CU3Ec_t78BCF87DC09FAD35C57BD88E50B83287D29BC20E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t78BCF87DC09FAD35C57BD88E50B83287D29BC20E_StaticFields
{
public:
	// MLAPI.Serialization.SerializationManager/<>c MLAPI.Serialization.SerializationManager/<>c::<>9
	U3CU3Ec_t78BCF87DC09FAD35C57BD88E50B83287D29BC20E * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.FieldInfo,System.Boolean> MLAPI.Serialization.SerializationManager/<>c::<>9__11_0
	Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * ___U3CU3E9__11_0_1;
	// System.Func`2<System.Reflection.FieldInfo,System.String> MLAPI.Serialization.SerializationManager/<>c::<>9__11_1
	Func_2_t3E9169486444D508EC295C4254DF9267CEE35CCE * ___U3CU3E9__11_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t78BCF87DC09FAD35C57BD88E50B83287D29BC20E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t78BCF87DC09FAD35C57BD88E50B83287D29BC20E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t78BCF87DC09FAD35C57BD88E50B83287D29BC20E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t78BCF87DC09FAD35C57BD88E50B83287D29BC20E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__11_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t78BCF87DC09FAD35C57BD88E50B83287D29BC20E_StaticFields, ___U3CU3E9__11_0_1)); }
	inline Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * get_U3CU3E9__11_0_1() const { return ___U3CU3E9__11_0_1; }
	inline Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE ** get_address_of_U3CU3E9__11_0_1() { return &___U3CU3E9__11_0_1; }
	inline void set_U3CU3E9__11_0_1(Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * value)
	{
		___U3CU3E9__11_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__11_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__11_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t78BCF87DC09FAD35C57BD88E50B83287D29BC20E_StaticFields, ___U3CU3E9__11_1_2)); }
	inline Func_2_t3E9169486444D508EC295C4254DF9267CEE35CCE * get_U3CU3E9__11_1_2() const { return ___U3CU3E9__11_1_2; }
	inline Func_2_t3E9169486444D508EC295C4254DF9267CEE35CCE ** get_address_of_U3CU3E9__11_1_2() { return &___U3CU3E9__11_1_2; }
	inline void set_U3CU3E9__11_1_2(Func_2_t3E9169486444D508EC295C4254DF9267CEE35CCE * value)
	{
		___U3CU3E9__11_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__11_1_2), (void*)value);
	}
};


// MLAPI.NetworkUpdateLoop/NetworkEarlyUpdate/<>c
struct U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_StaticFields
{
public:
	// MLAPI.NetworkUpdateLoop/NetworkEarlyUpdate/<>c MLAPI.NetworkUpdateLoop/NetworkEarlyUpdate/<>c::<>9
	U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800 * ___U3CU3E9_0;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction MLAPI.NetworkUpdateLoop/NetworkEarlyUpdate/<>c::<>9__0_0
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_StaticFields, ___U3CU3E9__0_0_1)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// MLAPI.NetworkUpdateLoop/NetworkFixedUpdate/<>c
struct U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_StaticFields
{
public:
	// MLAPI.NetworkUpdateLoop/NetworkFixedUpdate/<>c MLAPI.NetworkUpdateLoop/NetworkFixedUpdate/<>c::<>9
	U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8 * ___U3CU3E9_0;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction MLAPI.NetworkUpdateLoop/NetworkFixedUpdate/<>c::<>9__0_0
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_StaticFields, ___U3CU3E9__0_0_1)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// MLAPI.NetworkUpdateLoop/NetworkInitialization/<>c
struct U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_StaticFields
{
public:
	// MLAPI.NetworkUpdateLoop/NetworkInitialization/<>c MLAPI.NetworkUpdateLoop/NetworkInitialization/<>c::<>9
	U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56 * ___U3CU3E9_0;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction MLAPI.NetworkUpdateLoop/NetworkInitialization/<>c::<>9__0_0
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_StaticFields, ___U3CU3E9__0_0_1)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// MLAPI.NetworkUpdateLoop/NetworkPostLateUpdate/<>c
struct U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_StaticFields
{
public:
	// MLAPI.NetworkUpdateLoop/NetworkPostLateUpdate/<>c MLAPI.NetworkUpdateLoop/NetworkPostLateUpdate/<>c::<>9
	U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED * ___U3CU3E9_0;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction MLAPI.NetworkUpdateLoop/NetworkPostLateUpdate/<>c::<>9__0_0
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_StaticFields, ___U3CU3E9__0_0_1)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// MLAPI.NetworkUpdateLoop/NetworkPreLateUpdate/<>c
struct U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_StaticFields
{
public:
	// MLAPI.NetworkUpdateLoop/NetworkPreLateUpdate/<>c MLAPI.NetworkUpdateLoop/NetworkPreLateUpdate/<>c::<>9
	U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16 * ___U3CU3E9_0;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction MLAPI.NetworkUpdateLoop/NetworkPreLateUpdate/<>c::<>9__0_0
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_StaticFields, ___U3CU3E9__0_0_1)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// MLAPI.NetworkUpdateLoop/NetworkPreUpdate/<>c
struct U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_StaticFields
{
public:
	// MLAPI.NetworkUpdateLoop/NetworkPreUpdate/<>c MLAPI.NetworkUpdateLoop/NetworkPreUpdate/<>c::<>9
	U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D * ___U3CU3E9_0;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction MLAPI.NetworkUpdateLoop/NetworkPreUpdate/<>c::<>9__0_0
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_StaticFields, ___U3CU3E9__0_0_1)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// MLAPI.NetworkUpdateLoop/NetworkUpdate/<>c
struct U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_StaticFields
{
public:
	// MLAPI.NetworkUpdateLoop/NetworkUpdate/<>c MLAPI.NetworkUpdateLoop/NetworkUpdate/<>c::<>9
	U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4 * ___U3CU3E9_0;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction MLAPI.NetworkUpdateLoop/NetworkUpdate/<>c::<>9__0_0
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_StaticFields, ___U3CU3E9__0_0_1)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____array_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.UInt64>
struct Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C 
{
public:
	// T System.Nullable`1::value
	uint64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C, ___value_0)); }
	inline uint64_t get_value_0() const { return ___value_0; }
	inline uint64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// MLAPI.Serialization.Pooled.PooledNetworkReader
struct PooledNetworkReader_tDB17DC1025307417EC373DE16F1FD1B5AA46C7C2  : public NetworkReader_tB092619323CE14E6795C4FC0E0169237625D2403
{
public:
	// MLAPI.Serialization.NetworkSerializer MLAPI.Serialization.Pooled.PooledNetworkReader::m_Serializer
	NetworkSerializer_t0693F7CA0A8240B6351C14E096A13C4D8AC40250 * ___m_Serializer_2;
	// System.Boolean MLAPI.Serialization.Pooled.PooledNetworkReader::m_IsDisposed
	bool ___m_IsDisposed_3;

public:
	inline static int32_t get_offset_of_m_Serializer_2() { return static_cast<int32_t>(offsetof(PooledNetworkReader_tDB17DC1025307417EC373DE16F1FD1B5AA46C7C2, ___m_Serializer_2)); }
	inline NetworkSerializer_t0693F7CA0A8240B6351C14E096A13C4D8AC40250 * get_m_Serializer_2() const { return ___m_Serializer_2; }
	inline NetworkSerializer_t0693F7CA0A8240B6351C14E096A13C4D8AC40250 ** get_address_of_m_Serializer_2() { return &___m_Serializer_2; }
	inline void set_m_Serializer_2(NetworkSerializer_t0693F7CA0A8240B6351C14E096A13C4D8AC40250 * value)
	{
		___m_Serializer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Serializer_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsDisposed_3() { return static_cast<int32_t>(offsetof(PooledNetworkReader_tDB17DC1025307417EC373DE16F1FD1B5AA46C7C2, ___m_IsDisposed_3)); }
	inline bool get_m_IsDisposed_3() const { return ___m_IsDisposed_3; }
	inline bool* get_address_of_m_IsDisposed_3() { return &___m_IsDisposed_3; }
	inline void set_m_IsDisposed_3(bool value)
	{
		___m_IsDisposed_3 = value;
	}
};


// MLAPI.Serialization.Pooled.PooledNetworkWriter
struct PooledNetworkWriter_t4EFF6DA061F1469895F9FDC1B4FD3EAA9DCC5A7A  : public NetworkWriter_tFF50DD965D82FE95092CE3C12A30AD51604E9CF2
{
public:
	// MLAPI.Serialization.NetworkSerializer MLAPI.Serialization.Pooled.PooledNetworkWriter::m_Serializer
	NetworkSerializer_t0693F7CA0A8240B6351C14E096A13C4D8AC40250 * ___m_Serializer_2;
	// System.Boolean MLAPI.Serialization.Pooled.PooledNetworkWriter::m_IsDisposed
	bool ___m_IsDisposed_3;

public:
	inline static int32_t get_offset_of_m_Serializer_2() { return static_cast<int32_t>(offsetof(PooledNetworkWriter_t4EFF6DA061F1469895F9FDC1B4FD3EAA9DCC5A7A, ___m_Serializer_2)); }
	inline NetworkSerializer_t0693F7CA0A8240B6351C14E096A13C4D8AC40250 * get_m_Serializer_2() const { return ___m_Serializer_2; }
	inline NetworkSerializer_t0693F7CA0A8240B6351C14E096A13C4D8AC40250 ** get_address_of_m_Serializer_2() { return &___m_Serializer_2; }
	inline void set_m_Serializer_2(NetworkSerializer_t0693F7CA0A8240B6351C14E096A13C4D8AC40250 * value)
	{
		___m_Serializer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Serializer_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsDisposed_3() { return static_cast<int32_t>(offsetof(PooledNetworkWriter_t4EFF6DA061F1469895F9FDC1B4FD3EAA9DCC5A7A, ___m_IsDisposed_3)); }
	inline bool get_m_IsDisposed_3() const { return ___m_IsDisposed_3; }
	inline bool* get_address_of_m_IsDisposed_3() { return &___m_IsDisposed_3; }
	inline void set_m_IsDisposed_3(bool value)
	{
		___m_IsDisposed_3 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// MLAPI.Serialization.UIntFloat
struct UIntFloat_tD72D24B41C58988E1D79CC5540AC6A00D59C8278 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single MLAPI.Serialization.UIntFloat::FloatValue
			float ___FloatValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___FloatValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 MLAPI.Serialization.UIntFloat::UIntValue
			uint32_t ___UIntValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UIntValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double MLAPI.Serialization.UIntFloat::DoubleValue
			double ___DoubleValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___DoubleValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 MLAPI.Serialization.UIntFloat::ULongValue
			uint64_t ___ULongValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULongValue_3_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_FloatValue_0() { return static_cast<int32_t>(offsetof(UIntFloat_tD72D24B41C58988E1D79CC5540AC6A00D59C8278, ___FloatValue_0)); }
	inline float get_FloatValue_0() const { return ___FloatValue_0; }
	inline float* get_address_of_FloatValue_0() { return &___FloatValue_0; }
	inline void set_FloatValue_0(float value)
	{
		___FloatValue_0 = value;
	}

	inline static int32_t get_offset_of_UIntValue_1() { return static_cast<int32_t>(offsetof(UIntFloat_tD72D24B41C58988E1D79CC5540AC6A00D59C8278, ___UIntValue_1)); }
	inline uint32_t get_UIntValue_1() const { return ___UIntValue_1; }
	inline uint32_t* get_address_of_UIntValue_1() { return &___UIntValue_1; }
	inline void set_UIntValue_1(uint32_t value)
	{
		___UIntValue_1 = value;
	}

	inline static int32_t get_offset_of_DoubleValue_2() { return static_cast<int32_t>(offsetof(UIntFloat_tD72D24B41C58988E1D79CC5540AC6A00D59C8278, ___DoubleValue_2)); }
	inline double get_DoubleValue_2() const { return ___DoubleValue_2; }
	inline double* get_address_of_DoubleValue_2() { return &___DoubleValue_2; }
	inline void set_DoubleValue_2(double value)
	{
		___DoubleValue_2 = value;
	}

	inline static int32_t get_offset_of_ULongValue_3() { return static_cast<int32_t>(offsetof(UIntFloat_tD72D24B41C58988E1D79CC5540AC6A00D59C8278, ___ULongValue_3)); }
	inline uint64_t get_ULongValue_3() const { return ___ULongValue_3; }
	inline uint64_t* get_address_of_ULongValue_3() { return &___ULongValue_3; }
	inline void set_ULongValue_3(uint64_t value)
	{
		___ULongValue_3 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;

public:
	inline static int32_t get_offset_of_U3CwaitTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___U3CwaitTimeU3Ek__BackingField_0)); }
	inline float get_U3CwaitTimeU3Ek__BackingField_0() const { return ___U3CwaitTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CwaitTimeU3Ek__BackingField_0() { return &___U3CwaitTimeU3Ek__BackingField_0; }
	inline void set_U3CwaitTimeU3Ek__BackingField_0(float value)
	{
		___U3CwaitTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitUntilTime_1() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___m_WaitUntilTime_1)); }
	inline float get_m_WaitUntilTime_1() const { return ___m_WaitUntilTime_1; }
	inline float* get_address_of_m_WaitUntilTime_1() { return &___m_WaitUntilTime_1; }
	inline void set_m_WaitUntilTime_1(float value)
	{
		___m_WaitUntilTime_1 = value;
	}
};


// MLAPI.NetworkUpdateLoop/NetworkEarlyUpdate
struct NetworkEarlyUpdate_t479652BD48725B36367492FA72864FCC71E5DBFE 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NetworkEarlyUpdate_t479652BD48725B36367492FA72864FCC71E5DBFE__padding[1];
	};

public:
};


// MLAPI.NetworkUpdateLoop/NetworkFixedUpdate
struct NetworkFixedUpdate_tBB90D1862102CD5FA8603B9523DF28307372546A 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NetworkFixedUpdate_tBB90D1862102CD5FA8603B9523DF28307372546A__padding[1];
	};

public:
};


// MLAPI.NetworkUpdateLoop/NetworkInitialization
struct NetworkInitialization_t9CA79804F071F80BD1715A2475F734F08D9C7E63 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NetworkInitialization_t9CA79804F071F80BD1715A2475F734F08D9C7E63__padding[1];
	};

public:
};


// MLAPI.NetworkUpdateLoop/NetworkPostLateUpdate
struct NetworkPostLateUpdate_t7F3126BE760A3B007F1AABD4C9E201F908332B3C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NetworkPostLateUpdate_t7F3126BE760A3B007F1AABD4C9E201F908332B3C__padding[1];
	};

public:
};


// MLAPI.NetworkUpdateLoop/NetworkPreLateUpdate
struct NetworkPreLateUpdate_t536C07C25A0F343BD11C8DCF5BA2988ED71CA0CA 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NetworkPreLateUpdate_t536C07C25A0F343BD11C8DCF5BA2988ED71CA0CA__padding[1];
	};

public:
};


// MLAPI.NetworkUpdateLoop/NetworkPreUpdate
struct NetworkPreUpdate_t9A2C5A970CE74462140F3359EDC0EFE38BBEDE77 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NetworkPreUpdate_t9A2C5A970CE74462140F3359EDC0EFE38BBEDE77__padding[1];
	};

public:
};


// MLAPI.NetworkUpdateLoop/NetworkUpdate
struct NetworkUpdate_t6F4ADFC346A53105D6B78B4C4236D38CD45A8F93 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NetworkUpdate_t6F4ADFC346A53105D6B78B4C4236D38CD45A8F93__padding[1];
	};

public:
};


// System.Nullable`1<UnityEngine.Quaternion>
struct Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1 
{
public:
	// T System.Nullable`1::value
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1, ___value_0)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_value_0() const { return ___value_0; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 
{
public:
	// T System.Nullable`1::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___value_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_0() const { return ___value_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.ByteEnum
struct ByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307 
{
public:
	// System.Byte System.ByteEnum::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.ConnectionAcksType
struct ConnectionAcksType_t4F4B2573A461869C52F77783DD9C379C97A5473B 
{
public:
	// System.Int32 UnityEngine.Networking.ConnectionAcksType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionAcksType_t4F4B2573A461869C52F77783DD9C379C97A5473B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// MLAPI.Configuration.HashSize
struct HashSize_t1F03D60F42043A6E0640AB6CA94EABAEEF52E77B 
{
public:
	// System.Int32 MLAPI.Configuration.HashSize::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HashSize_t1F03D60F42043A6E0640AB6CA94EABAEEF52E77B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MLAPI.Logging.LogLevel
struct LogLevel_tF7F83FF44C466BF9160949A112BDF4CB618EC00E 
{
public:
	// System.Int32 MLAPI.Logging.LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_tF7F83FF44C466BF9160949A112BDF4CB618EC00E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MLAPI.Serialization.NetworkBuffer
struct NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] MLAPI.Serialization.NetworkBuffer::m_Target
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_Target_7;
	// System.Boolean MLAPI.Serialization.NetworkBuffer::<Resizable>k__BackingField
	bool ___U3CResizableU3Ek__BackingField_8;
	// System.Single MLAPI.Serialization.NetworkBuffer::m_GrowthFactor
	float ___m_GrowthFactor_9;
	// System.UInt64 MLAPI.Serialization.NetworkBuffer::<BitPosition>k__BackingField
	uint64_t ___U3CBitPositionU3Ek__BackingField_10;
	// System.UInt64 MLAPI.Serialization.NetworkBuffer::<BitLength>k__BackingField
	uint64_t ___U3CBitLengthU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_m_Target_7() { return static_cast<int32_t>(offsetof(NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188, ___m_Target_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_Target_7() const { return ___m_Target_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_Target_7() { return &___m_Target_7; }
	inline void set_m_Target_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_Target_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResizableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188, ___U3CResizableU3Ek__BackingField_8)); }
	inline bool get_U3CResizableU3Ek__BackingField_8() const { return ___U3CResizableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CResizableU3Ek__BackingField_8() { return &___U3CResizableU3Ek__BackingField_8; }
	inline void set_U3CResizableU3Ek__BackingField_8(bool value)
	{
		___U3CResizableU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_m_GrowthFactor_9() { return static_cast<int32_t>(offsetof(NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188, ___m_GrowthFactor_9)); }
	inline float get_m_GrowthFactor_9() const { return ___m_GrowthFactor_9; }
	inline float* get_address_of_m_GrowthFactor_9() { return &___m_GrowthFactor_9; }
	inline void set_m_GrowthFactor_9(float value)
	{
		___m_GrowthFactor_9 = value;
	}

	inline static int32_t get_offset_of_U3CBitPositionU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188, ___U3CBitPositionU3Ek__BackingField_10)); }
	inline uint64_t get_U3CBitPositionU3Ek__BackingField_10() const { return ___U3CBitPositionU3Ek__BackingField_10; }
	inline uint64_t* get_address_of_U3CBitPositionU3Ek__BackingField_10() { return &___U3CBitPositionU3Ek__BackingField_10; }
	inline void set_U3CBitPositionU3Ek__BackingField_10(uint64_t value)
	{
		___U3CBitPositionU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CBitLengthU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188, ___U3CBitLengthU3Ek__BackingField_11)); }
	inline uint64_t get_U3CBitLengthU3Ek__BackingField_11() const { return ___U3CBitLengthU3Ek__BackingField_11; }
	inline uint64_t* get_address_of_U3CBitLengthU3Ek__BackingField_11() { return &___U3CBitLengthU3Ek__BackingField_11; }
	inline void set_U3CBitLengthU3Ek__BackingField_11(uint64_t value)
	{
		___U3CBitLengthU3Ek__BackingField_11 = value;
	}
};


// MLAPI.Transports.NetworkChannel
struct NetworkChannel_t017AC97DA612B8837176E40A29A49B723FD1625F 
{
public:
	// System.Byte MLAPI.Transports.NetworkChannel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkChannel_t017AC97DA612B8837176E40A29A49B723FD1625F, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// MLAPI.Transports.NetworkDelivery
struct NetworkDelivery_t0A8F6FA75C4656BE1AD2D078F327B65711421203 
{
public:
	// System.Int32 MLAPI.Transports.NetworkDelivery::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkDelivery_t0A8F6FA75C4656BE1AD2D078F327B65711421203, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.NetworkError
struct NetworkError_t55031A243A0FD02F80E44FC25FFC9B7BD6F60DE9 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkError_t55031A243A0FD02F80E44FC25FFC9B7BD6F60DE9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MLAPI.Transports.NetworkEvent
struct NetworkEvent_t73788FC751907641A05E91C8B0B6AC90B2C934DC 
{
public:
	// System.Int32 MLAPI.Transports.NetworkEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkEvent_t73788FC751907641A05E91C8B0B6AC90B2C934DC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.NetworkEventType
struct NetworkEventType_t145BD45D629C9B92E4172F8728C2639A9198A1A0 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkEventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkEventType_t145BD45D629C9B92E4172F8728C2639A9198A1A0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MLAPI.SceneManagement.NetworkSceneManager
struct NetworkSceneManager_tC54D99CCDAB94946076FBD2295C595019218A8E3  : public RuntimeObject
{
public:

public:
};

struct NetworkSceneManager_tC54D99CCDAB94946076FBD2295C595019218A8E3_StaticFields
{
public:
	// MLAPI.SceneManagement.NetworkSceneManager/SceneSwitchedDelegate MLAPI.SceneManagement.NetworkSceneManager::OnSceneSwitched
	SceneSwitchedDelegate_t6C2314AFBD4ADA9512BADDB300403D6CE2629D84 * ___OnSceneSwitched_0;
	// MLAPI.SceneManagement.NetworkSceneManager/SceneSwitchStartedDelegate MLAPI.SceneManagement.NetworkSceneManager::OnSceneSwitchStarted
	SceneSwitchStartedDelegate_t8CFB7CC811F3DE194B1F1C7E3105BD755DCC7FF4 * ___OnSceneSwitchStarted_1;
	// System.Collections.Generic.HashSet`1<System.String> MLAPI.SceneManagement.NetworkSceneManager::RegisteredSceneNames
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___RegisteredSceneNames_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> MLAPI.SceneManagement.NetworkSceneManager::SceneNameToIndex
	Dictionary_2_t99BA7D0CF2528BD5CE653B61B93932B7707E7573 * ___SceneNameToIndex_3;
	// System.Collections.Generic.Dictionary`2<System.UInt32,System.String> MLAPI.SceneManagement.NetworkSceneManager::SceneIndexToString
	Dictionary_2_t15CD6F7963840CA86C10956543710927D323EC55 * ___SceneIndexToString_4;
	// System.Collections.Generic.Dictionary`2<System.Guid,MLAPI.SceneManagement.SceneSwitchProgress> MLAPI.SceneManagement.NetworkSceneManager::SceneSwitchProgresses
	Dictionary_2_t8BE68DBC72269451AA5899F027BB23CDB7150AFE * ___SceneSwitchProgresses_5;
	// UnityEngine.SceneManagement.Scene MLAPI.SceneManagement.NetworkSceneManager::s_LastScene
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___s_LastScene_6;
	// System.String MLAPI.SceneManagement.NetworkSceneManager::s_NextSceneName
	String_t* ___s_NextSceneName_7;
	// System.Boolean MLAPI.SceneManagement.NetworkSceneManager::s_IsSwitching
	bool ___s_IsSwitching_8;
	// System.UInt32 MLAPI.SceneManagement.NetworkSceneManager::CurrentSceneIndex
	uint32_t ___CurrentSceneIndex_9;
	// System.Guid MLAPI.SceneManagement.NetworkSceneManager::CurrentSceneSwitchProgressGuid
	Guid_t  ___CurrentSceneSwitchProgressGuid_10;
	// System.Boolean MLAPI.SceneManagement.NetworkSceneManager::IsSpawnedObjectsPendingInDontDestroyOnLoad
	bool ___IsSpawnedObjectsPendingInDontDestroyOnLoad_11;
	// System.UInt32 MLAPI.SceneManagement.NetworkSceneManager::<CurrentActiveSceneIndex>k__BackingField
	uint32_t ___U3CCurrentActiveSceneIndexU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_OnSceneSwitched_0() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tC54D99CCDAB94946076FBD2295C595019218A8E3_StaticFields, ___OnSceneSwitched_0)); }
	inline SceneSwitchedDelegate_t6C2314AFBD4ADA9512BADDB300403D6CE2629D84 * get_OnSceneSwitched_0() const { return ___OnSceneSwitched_0; }
	inline SceneSwitchedDelegate_t6C2314AFBD4ADA9512BADDB300403D6CE2629D84 ** get_address_of_OnSceneSwitched_0() { return &___OnSceneSwitched_0; }
	inline void set_OnSceneSwitched_0(SceneSwitchedDelegate_t6C2314AFBD4ADA9512BADDB300403D6CE2629D84 * value)
	{
		___OnSceneSwitched_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSceneSwitched_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnSceneSwitchStarted_1() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tC54D99CCDAB94946076FBD2295C595019218A8E3_StaticFields, ___OnSceneSwitchStarted_1)); }
	inline SceneSwitchStartedDelegate_t8CFB7CC811F3DE194B1F1C7E3105BD755DCC7FF4 * get_OnSceneSwitchStarted_1() const { return ___OnSceneSwitchStarted_1; }
	inline SceneSwitchStartedDelegate_t8CFB7CC811F3DE194B1F1C7E3105BD755DCC7FF4 ** get_address_of_OnSceneSwitchStarted_1() { return &___OnSceneSwitchStarted_1; }
	inline void set_OnSceneSwitchStarted_1(SceneSwitchStartedDelegate_t8CFB7CC811F3DE194B1F1C7E3105BD755DCC7FF4 * value)
	{
		___OnSceneSwitchStarted_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSceneSwitchStarted_1), (void*)value);
	}

	inline static int32_t get_offset_of_RegisteredSceneNames_2() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tC54D99CCDAB94946076FBD2295C595019218A8E3_StaticFields, ___RegisteredSceneNames_2)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_RegisteredSceneNames_2() const { return ___RegisteredSceneNames_2; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_RegisteredSceneNames_2() { return &___RegisteredSceneNames_2; }
	inline void set_RegisteredSceneNames_2(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___RegisteredSceneNames_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RegisteredSceneNames_2), (void*)value);
	}

	inline static int32_t get_offset_of_SceneNameToIndex_3() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tC54D99CCDAB94946076FBD2295C595019218A8E3_StaticFields, ___SceneNameToIndex_3)); }
	inline Dictionary_2_t99BA7D0CF2528BD5CE653B61B93932B7707E7573 * get_SceneNameToIndex_3() const { return ___SceneNameToIndex_3; }
	inline Dictionary_2_t99BA7D0CF2528BD5CE653B61B93932B7707E7573 ** get_address_of_SceneNameToIndex_3() { return &___SceneNameToIndex_3; }
	inline void set_SceneNameToIndex_3(Dictionary_2_t99BA7D0CF2528BD5CE653B61B93932B7707E7573 * value)
	{
		___SceneNameToIndex_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneNameToIndex_3), (void*)value);
	}

	inline static int32_t get_offset_of_SceneIndexToString_4() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tC54D99CCDAB94946076FBD2295C595019218A8E3_StaticFields, ___SceneIndexToString_4)); }
	inline Dictionary_2_t15CD6F7963840CA86C10956543710927D323EC55 * get_SceneIndexToString_4() const { return ___SceneIndexToString_4; }
	inline Dictionary_2_t15CD6F7963840CA86C10956543710927D323EC55 ** get_address_of_SceneIndexToString_4() { return &___SceneIndexToString_4; }
	inline void set_SceneIndexToString_4(Dictionary_2_t15CD6F7963840CA86C10956543710927D323EC55 * value)
	{
		___SceneIndexToString_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneIndexToString_4), (void*)value);
	}

	inline static int32_t get_offset_of_SceneSwitchProgresses_5() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tC54D99CCDAB94946076FBD2295C595019218A8E3_StaticFields, ___SceneSwitchProgresses_5)); }
	inline Dictionary_2_t8BE68DBC72269451AA5899F027BB23CDB7150AFE * get_SceneSwitchProgresses_5() const { return ___SceneSwitchProgresses_5; }
	inline Dictionary_2_t8BE68DBC72269451AA5899F027BB23CDB7150AFE ** get_address_of_SceneSwitchProgresses_5() { return &___SceneSwitchProgresses_5; }
	inline void set_SceneSwitchProgresses_5(Dictionary_2_t8BE68DBC72269451AA5899F027BB23CDB7150AFE * value)
	{
		___SceneSwitchProgresses_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneSwitchProgresses_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_LastScene_6() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tC54D99CCDAB94946076FBD2295C595019218A8E3_StaticFields, ___s_LastScene_6)); }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  get_s_LastScene_6() const { return ___s_LastScene_6; }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * get_address_of_s_LastScene_6() { return &___s_LastScene_6; }
	inline void set_s_LastScene_6(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  value)
	{
		___s_LastScene_6 = value;
	}

	inline static int32_t get_offset_of_s_NextSceneName_7() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tC54D99CCDAB94946076FBD2295C595019218A8E3_StaticFields, ___s_NextSceneName_7)); }
	inline String_t* get_s_NextSceneName_7() const { return ___s_NextSceneName_7; }
	inline String_t** get_address_of_s_NextSceneName_7() { return &___s_NextSceneName_7; }
	inline void set_s_NextSceneName_7(String_t* value)
	{
		___s_NextSceneName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NextSceneName_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsSwitching_8() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tC54D99CCDAB94946076FBD2295C595019218A8E3_StaticFields, ___s_IsSwitching_8)); }
	inline bool get_s_IsSwitching_8() const { return ___s_IsSwitching_8; }
	inline bool* get_address_of_s_IsSwitching_8() { return &___s_IsSwitching_8; }
	inline void set_s_IsSwitching_8(bool value)
	{
		___s_IsSwitching_8 = value;
	}

	inline static int32_t get_offset_of_CurrentSceneIndex_9() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tC54D99CCDAB94946076FBD2295C595019218A8E3_StaticFields, ___CurrentSceneIndex_9)); }
	inline uint32_t get_CurrentSceneIndex_9() const { return ___CurrentSceneIndex_9; }
	inline uint32_t* get_address_of_CurrentSceneIndex_9() { return &___CurrentSceneIndex_9; }
	inline void set_CurrentSceneIndex_9(uint32_t value)
	{
		___CurrentSceneIndex_9 = value;
	}

	inline static int32_t get_offset_of_CurrentSceneSwitchProgressGuid_10() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tC54D99CCDAB94946076FBD2295C595019218A8E3_StaticFields, ___CurrentSceneSwitchProgressGuid_10)); }
	inline Guid_t  get_CurrentSceneSwitchProgressGuid_10() const { return ___CurrentSceneSwitchProgressGuid_10; }
	inline Guid_t * get_address_of_CurrentSceneSwitchProgressGuid_10() { return &___CurrentSceneSwitchProgressGuid_10; }
	inline void set_CurrentSceneSwitchProgressGuid_10(Guid_t  value)
	{
		___CurrentSceneSwitchProgressGuid_10 = value;
	}

	inline static int32_t get_offset_of_IsSpawnedObjectsPendingInDontDestroyOnLoad_11() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tC54D99CCDAB94946076FBD2295C595019218A8E3_StaticFields, ___IsSpawnedObjectsPendingInDontDestroyOnLoad_11)); }
	inline bool get_IsSpawnedObjectsPendingInDontDestroyOnLoad_11() const { return ___IsSpawnedObjectsPendingInDontDestroyOnLoad_11; }
	inline bool* get_address_of_IsSpawnedObjectsPendingInDontDestroyOnLoad_11() { return &___IsSpawnedObjectsPendingInDontDestroyOnLoad_11; }
	inline void set_IsSpawnedObjectsPendingInDontDestroyOnLoad_11(bool value)
	{
		___IsSpawnedObjectsPendingInDontDestroyOnLoad_11 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentActiveSceneIndexU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tC54D99CCDAB94946076FBD2295C595019218A8E3_StaticFields, ___U3CCurrentActiveSceneIndexU3Ek__BackingField_12)); }
	inline uint32_t get_U3CCurrentActiveSceneIndexU3Ek__BackingField_12() const { return ___U3CCurrentActiveSceneIndexU3Ek__BackingField_12; }
	inline uint32_t* get_address_of_U3CCurrentActiveSceneIndexU3Ek__BackingField_12() { return &___U3CCurrentActiveSceneIndexU3Ek__BackingField_12; }
	inline void set_U3CCurrentActiveSceneIndexU3Ek__BackingField_12(uint32_t value)
	{
		___U3CCurrentActiveSceneIndexU3Ek__BackingField_12 = value;
	}
};


// MLAPI.NetworkUpdateStage
struct NetworkUpdateStage_t9234BDF968545C0351B6CC20D0EFE1D357E618F1 
{
public:
	// System.Byte MLAPI.NetworkUpdateStage::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkUpdateStage_t9234BDF968545C0351B6CC20D0EFE1D357E618F1, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C 
{
public:
	// System.Type UnityEngine.LowLevel.PlayerLoopSystem::type
	Type_t * ___type_0;
	// UnityEngine.LowLevel.PlayerLoopSystem[] UnityEngine.LowLevel.PlayerLoopSystem::subSystemList
	PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* ___subSystemList_1;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction UnityEngine.LowLevel.PlayerLoopSystem::updateDelegate
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___updateDelegate_2;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::updateFunction
	intptr_t ___updateFunction_3;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::loopConditionFunction
	intptr_t ___loopConditionFunction_4;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}

	inline static int32_t get_offset_of_subSystemList_1() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C, ___subSystemList_1)); }
	inline PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* get_subSystemList_1() const { return ___subSystemList_1; }
	inline PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17** get_address_of_subSystemList_1() { return &___subSystemList_1; }
	inline void set_subSystemList_1(PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* value)
	{
		___subSystemList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subSystemList_1), (void*)value);
	}

	inline static int32_t get_offset_of_updateDelegate_2() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C, ___updateDelegate_2)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_updateDelegate_2() const { return ___updateDelegate_2; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_updateDelegate_2() { return &___updateDelegate_2; }
	inline void set_updateDelegate_2(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___updateDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_updateFunction_3() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C, ___updateFunction_3)); }
	inline intptr_t get_updateFunction_3() const { return ___updateFunction_3; }
	inline intptr_t* get_address_of_updateFunction_3() { return &___updateFunction_3; }
	inline void set_updateFunction_3(intptr_t value)
	{
		___updateFunction_3 = value;
	}

	inline static int32_t get_offset_of_loopConditionFunction_4() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C, ___loopConditionFunction_4)); }
	inline intptr_t get_loopConditionFunction_4() const { return ___loopConditionFunction_4; }
	inline intptr_t* get_address_of_loopConditionFunction_4() { return &___loopConditionFunction_4; }
	inline void set_loopConditionFunction_4(intptr_t value)
	{
		___loopConditionFunction_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_pinvoke
{
	Type_t * ___type_0;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_pinvoke* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
// Native definition for COM marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_com
{
	Type_t * ___type_0;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_com* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Networking.QosType
struct QosType_tAD0DC2835CF976743FCBBFDD0B4BC1B6392A2293 
{
public:
	// System.Int32 UnityEngine.Networking.QosType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QosType_tAD0DC2835CF976743FCBBFDD0B4BC1B6392A2293, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// MLAPI.SceneManagement.SceneSwitchProgress
struct SceneSwitchProgress_tAAE76AD0A7D3D42A7D0EB2EC5799E42FAFC178BD  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.UInt64> MLAPI.SceneManagement.SceneSwitchProgress::<DoneClients>k__BackingField
	List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * ___U3CDoneClientsU3Ek__BackingField_0;
	// System.Single MLAPI.SceneManagement.SceneSwitchProgress::<TimeAtInitiation>k__BackingField
	float ___U3CTimeAtInitiationU3Ek__BackingField_1;
	// MLAPI.SceneManagement.SceneSwitchProgress/OnCompletedDelegate MLAPI.SceneManagement.SceneSwitchProgress::OnComplete
	OnCompletedDelegate_t313D7E659CAF907C911009A8FC69E9A0226431ED * ___OnComplete_2;
	// System.Boolean MLAPI.SceneManagement.SceneSwitchProgress::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_3;
	// System.Boolean MLAPI.SceneManagement.SceneSwitchProgress::<IsAllClientsDoneLoading>k__BackingField
	bool ___U3CIsAllClientsDoneLoadingU3Ek__BackingField_4;
	// MLAPI.SceneManagement.SceneSwitchProgress/OnClientLoadedSceneDelegate MLAPI.SceneManagement.SceneSwitchProgress::OnClientLoadedScene
	OnClientLoadedSceneDelegate_t2E0C5BE468E9059E84CD5C733878D8F16C18E15E * ___OnClientLoadedScene_5;
	// System.Guid MLAPI.SceneManagement.SceneSwitchProgress::<Guid>k__BackingField
	Guid_t  ___U3CGuidU3Ek__BackingField_6;
	// UnityEngine.Coroutine MLAPI.SceneManagement.SceneSwitchProgress::m_TimeOutCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_TimeOutCoroutine_7;
	// UnityEngine.AsyncOperation MLAPI.SceneManagement.SceneSwitchProgress::m_SceneLoadOperation
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___m_SceneLoadOperation_8;

public:
	inline static int32_t get_offset_of_U3CDoneClientsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SceneSwitchProgress_tAAE76AD0A7D3D42A7D0EB2EC5799E42FAFC178BD, ___U3CDoneClientsU3Ek__BackingField_0)); }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * get_U3CDoneClientsU3Ek__BackingField_0() const { return ___U3CDoneClientsU3Ek__BackingField_0; }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B ** get_address_of_U3CDoneClientsU3Ek__BackingField_0() { return &___U3CDoneClientsU3Ek__BackingField_0; }
	inline void set_U3CDoneClientsU3Ek__BackingField_0(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * value)
	{
		___U3CDoneClientsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDoneClientsU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTimeAtInitiationU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SceneSwitchProgress_tAAE76AD0A7D3D42A7D0EB2EC5799E42FAFC178BD, ___U3CTimeAtInitiationU3Ek__BackingField_1)); }
	inline float get_U3CTimeAtInitiationU3Ek__BackingField_1() const { return ___U3CTimeAtInitiationU3Ek__BackingField_1; }
	inline float* get_address_of_U3CTimeAtInitiationU3Ek__BackingField_1() { return &___U3CTimeAtInitiationU3Ek__BackingField_1; }
	inline void set_U3CTimeAtInitiationU3Ek__BackingField_1(float value)
	{
		___U3CTimeAtInitiationU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_OnComplete_2() { return static_cast<int32_t>(offsetof(SceneSwitchProgress_tAAE76AD0A7D3D42A7D0EB2EC5799E42FAFC178BD, ___OnComplete_2)); }
	inline OnCompletedDelegate_t313D7E659CAF907C911009A8FC69E9A0226431ED * get_OnComplete_2() const { return ___OnComplete_2; }
	inline OnCompletedDelegate_t313D7E659CAF907C911009A8FC69E9A0226431ED ** get_address_of_OnComplete_2() { return &___OnComplete_2; }
	inline void set_OnComplete_2(OnCompletedDelegate_t313D7E659CAF907C911009A8FC69E9A0226431ED * value)
	{
		___OnComplete_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnComplete_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SceneSwitchProgress_tAAE76AD0A7D3D42A7D0EB2EC5799E42FAFC178BD, ___U3CIsCompletedU3Ek__BackingField_3)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_3() const { return ___U3CIsCompletedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_3() { return &___U3CIsCompletedU3Ek__BackingField_3; }
	inline void set_U3CIsCompletedU3Ek__BackingField_3(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsAllClientsDoneLoadingU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SceneSwitchProgress_tAAE76AD0A7D3D42A7D0EB2EC5799E42FAFC178BD, ___U3CIsAllClientsDoneLoadingU3Ek__BackingField_4)); }
	inline bool get_U3CIsAllClientsDoneLoadingU3Ek__BackingField_4() const { return ___U3CIsAllClientsDoneLoadingU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsAllClientsDoneLoadingU3Ek__BackingField_4() { return &___U3CIsAllClientsDoneLoadingU3Ek__BackingField_4; }
	inline void set_U3CIsAllClientsDoneLoadingU3Ek__BackingField_4(bool value)
	{
		___U3CIsAllClientsDoneLoadingU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_OnClientLoadedScene_5() { return static_cast<int32_t>(offsetof(SceneSwitchProgress_tAAE76AD0A7D3D42A7D0EB2EC5799E42FAFC178BD, ___OnClientLoadedScene_5)); }
	inline OnClientLoadedSceneDelegate_t2E0C5BE468E9059E84CD5C733878D8F16C18E15E * get_OnClientLoadedScene_5() const { return ___OnClientLoadedScene_5; }
	inline OnClientLoadedSceneDelegate_t2E0C5BE468E9059E84CD5C733878D8F16C18E15E ** get_address_of_OnClientLoadedScene_5() { return &___OnClientLoadedScene_5; }
	inline void set_OnClientLoadedScene_5(OnClientLoadedSceneDelegate_t2E0C5BE468E9059E84CD5C733878D8F16C18E15E * value)
	{
		___OnClientLoadedScene_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientLoadedScene_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGuidU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SceneSwitchProgress_tAAE76AD0A7D3D42A7D0EB2EC5799E42FAFC178BD, ___U3CGuidU3Ek__BackingField_6)); }
	inline Guid_t  get_U3CGuidU3Ek__BackingField_6() const { return ___U3CGuidU3Ek__BackingField_6; }
	inline Guid_t * get_address_of_U3CGuidU3Ek__BackingField_6() { return &___U3CGuidU3Ek__BackingField_6; }
	inline void set_U3CGuidU3Ek__BackingField_6(Guid_t  value)
	{
		___U3CGuidU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_m_TimeOutCoroutine_7() { return static_cast<int32_t>(offsetof(SceneSwitchProgress_tAAE76AD0A7D3D42A7D0EB2EC5799E42FAFC178BD, ___m_TimeOutCoroutine_7)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_TimeOutCoroutine_7() const { return ___m_TimeOutCoroutine_7; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_TimeOutCoroutine_7() { return &___m_TimeOutCoroutine_7; }
	inline void set_m_TimeOutCoroutine_7(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_TimeOutCoroutine_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TimeOutCoroutine_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_SceneLoadOperation_8() { return static_cast<int32_t>(offsetof(SceneSwitchProgress_tAAE76AD0A7D3D42A7D0EB2EC5799E42FAFC178BD, ___m_SceneLoadOperation_8)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get_m_SceneLoadOperation_8() const { return ___m_SceneLoadOperation_8; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of_m_SceneLoadOperation_8() { return &___m_SceneLoadOperation_8; }
	inline void set_m_SceneLoadOperation_8(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		___m_SceneLoadOperation_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SceneLoadOperation_8), (void*)value);
	}
};


// System.Net.Sockets.SocketError
struct SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80 
{
public:
	// System.Int32 System.Net.Sockets.SocketError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MLAPI.Profiling.TickType
struct TickType_t07A0A2C8F5754C53966354886DB748E92332D517 
{
public:
	// System.Int32 MLAPI.Profiling.TickType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TickType_t07A0A2C8F5754C53966354886DB748E92332D517, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76, ___gcHandle_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___gcHandle_1 = value;
	}
};


// MLAPI.Transports.Multiplex.MultiplexTransportAdapter/ConnectionIdSpreadMethod
struct ConnectionIdSpreadMethod_tE43E96423283DBBA7981A828DD4C519279F3D1C3 
{
public:
	// System.Int32 MLAPI.Transports.Multiplex.MultiplexTransportAdapter/ConnectionIdSpreadMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionIdSpreadMethod_tE43E96423283DBBA7981A828DD4C519279F3D1C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MLAPI.NetworkBehaviour/__NExec
struct __NExec_t448BE0CA61D26DE853B5DEBE205156786001AD25 
{
public:
	// System.Int32 MLAPI.NetworkBehaviour/__NExec::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(__NExec_t448BE0CA61D26DE853B5DEBE205156786001AD25, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MLAPI.Logging.NetworkLog/LogType
struct LogType_tA2B1524357DA1C54D136936B717DDF5AD6B9A661 
{
public:
	// System.Int32 MLAPI.Logging.NetworkLog/LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_tA2B1524357DA1C54D136936B717DDF5AD6B9A661, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MLAPI.SceneManagement.NetworkSceneManager/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t3AF943BF535D1DBC4402F5AE2F6127D5E243881E  : public RuntimeObject
{
public:
	// System.Guid MLAPI.SceneManagement.NetworkSceneManager/<>c__DisplayClass25_0::switchSceneGuid
	Guid_t  ___switchSceneGuid_0;
	// System.IO.Stream MLAPI.SceneManagement.NetworkSceneManager/<>c__DisplayClass25_0::objectStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___objectStream_1;

public:
	inline static int32_t get_offset_of_switchSceneGuid_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass25_0_t3AF943BF535D1DBC4402F5AE2F6127D5E243881E, ___switchSceneGuid_0)); }
	inline Guid_t  get_switchSceneGuid_0() const { return ___switchSceneGuid_0; }
	inline Guid_t * get_address_of_switchSceneGuid_0() { return &___switchSceneGuid_0; }
	inline void set_switchSceneGuid_0(Guid_t  value)
	{
		___switchSceneGuid_0 = value;
	}

	inline static int32_t get_offset_of_objectStream_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass25_0_t3AF943BF535D1DBC4402F5AE2F6127D5E243881E, ___objectStream_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_objectStream_1() const { return ___objectStream_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_objectStream_1() { return &___objectStream_1; }
	inline void set_objectStream_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___objectStream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectStream_1), (void*)value);
	}
};


// MLAPI.NetworkUpdateLoop/LoopSystemPosition
struct LoopSystemPosition_tAB727E11D1F08DD0762EDD9A57BD5D0114376202 
{
public:
	// System.Int32 MLAPI.NetworkUpdateLoop/LoopSystemPosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoopSystemPosition_tAB727E11D1F08DD0762EDD9A57BD5D0114376202, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MLAPI.Connection.PendingClient/State
struct State_t5A031D6BE6DCACE8802120CA8A05081CA85C425A 
{
public:
	// System.Int32 MLAPI.Connection.PendingClient/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t5A031D6BE6DCACE8802120CA8A05081CA85C425A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MLAPI.Transports.UNET.RelayTransport/MessageType
struct MessageType_t75FBE14E768B1330B84766895043071465F9AE60 
{
public:
	// System.Int32 MLAPI.Transports.UNET.RelayTransport/MessageType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageType_t75FBE14E768B1330B84766895043071465F9AE60, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MLAPI.Messaging.RpcQueueContainer/QueueItemType
struct QueueItemType_t4BE0BF011110FE4F5AC261BB86778CEAA614342F 
{
public:
	// System.Int32 MLAPI.Messaging.RpcQueueContainer/QueueItemType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QueueItemType_t4BE0BF011110FE4F5AC261BB86778CEAA614342F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MLAPI.Messaging.RpcQueueContainer/RpcQueueProcessingTypes
struct RpcQueueProcessingTypes_t4C6FCC0E4F9A71E64B0079E7F9D7078E6A415B24 
{
public:
	// System.Int32 MLAPI.Messaging.RpcQueueContainer/RpcQueueProcessingTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RpcQueueProcessingTypes_t4C6FCC0E4F9A71E64B0079E7F9D7078E6A415B24, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MLAPI.Messaging.RpcQueueHistoryFrame/QueueFrameType
struct QueueFrameType_tB401338B16A9160603921D9204C8CA5A697CC563 
{
public:
	// System.Int32 MLAPI.Messaging.RpcQueueHistoryFrame/QueueFrameType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QueueFrameType_tB401338B16A9160603921D9204C8CA5A697CC563, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MLAPI.Transports.UNET.UNetTransport/SendMode
struct SendMode_t0E936773C627F8CBC49C652F22058D96FA10B6DE 
{
public:
	// System.Int32 MLAPI.Transports.UNET.UNetTransport/SendMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SendMode_t0E936773C627F8CBC49C652F22058D96FA10B6DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MLAPI.Messaging.ClientRpcReceiveParams
struct ClientRpcReceiveParams_t6BF5F3466E03E485E0ADF199DCADF8155238E025 
{
public:
	// MLAPI.NetworkUpdateStage MLAPI.Messaging.ClientRpcReceiveParams::UpdateStage
	uint8_t ___UpdateStage_0;

public:
	inline static int32_t get_offset_of_UpdateStage_0() { return static_cast<int32_t>(offsetof(ClientRpcReceiveParams_t6BF5F3466E03E485E0ADF199DCADF8155238E025, ___UpdateStage_0)); }
	inline uint8_t get_UpdateStage_0() const { return ___UpdateStage_0; }
	inline uint8_t* get_address_of_UpdateStage_0() { return &___UpdateStage_0; }
	inline void set_UpdateStage_0(uint8_t value)
	{
		___UpdateStage_0 = value;
	}
};


// MLAPI.Messaging.ClientRpcSendParams
struct ClientRpcSendParams_tEEC8C3B8A344904A7DF03B25AB51AEE7CB4930AE 
{
public:
	// MLAPI.NetworkUpdateStage MLAPI.Messaging.ClientRpcSendParams::UpdateStage
	uint8_t ___UpdateStage_0;
	// System.UInt64[] MLAPI.Messaging.ClientRpcSendParams::TargetClientIds
	UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___TargetClientIds_1;

public:
	inline static int32_t get_offset_of_UpdateStage_0() { return static_cast<int32_t>(offsetof(ClientRpcSendParams_tEEC8C3B8A344904A7DF03B25AB51AEE7CB4930AE, ___UpdateStage_0)); }
	inline uint8_t get_UpdateStage_0() const { return ___UpdateStage_0; }
	inline uint8_t* get_address_of_UpdateStage_0() { return &___UpdateStage_0; }
	inline void set_UpdateStage_0(uint8_t value)
	{
		___UpdateStage_0 = value;
	}

	inline static int32_t get_offset_of_TargetClientIds_1() { return static_cast<int32_t>(offsetof(ClientRpcSendParams_tEEC8C3B8A344904A7DF03B25AB51AEE7CB4930AE, ___TargetClientIds_1)); }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* get_TargetClientIds_1() const { return ___TargetClientIds_1; }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2** get_address_of_TargetClientIds_1() { return &___TargetClientIds_1; }
	inline void set_TargetClientIds_1(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* value)
	{
		___TargetClientIds_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetClientIds_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of MLAPI.Messaging.ClientRpcSendParams
struct ClientRpcSendParams_tEEC8C3B8A344904A7DF03B25AB51AEE7CB4930AE_marshaled_pinvoke
{
	uint8_t ___UpdateStage_0;
	Il2CppSafeArray/*NONE*/* ___TargetClientIds_1;
};
// Native definition for COM marshalling of MLAPI.Messaging.ClientRpcSendParams
struct ClientRpcSendParams_tEEC8C3B8A344904A7DF03B25AB51AEE7CB4930AE_marshaled_com
{
	uint8_t ___UpdateStage_0;
	Il2CppSafeArray/*NONE*/* ___TargetClientIds_1;
};

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A  : public RuntimeObject
{
public:
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_PacketSize
	uint16_t ___m_PacketSize_0;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_FragmentSize
	uint16_t ___m_FragmentSize_1;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ResendTimeout
	uint32_t ___m_ResendTimeout_2;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_DisconnectTimeout
	uint32_t ___m_DisconnectTimeout_3;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ConnectTimeout
	uint32_t ___m_ConnectTimeout_4;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_MinUpdateTimeout
	uint32_t ___m_MinUpdateTimeout_5;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_PingTimeout
	uint32_t ___m_PingTimeout_6;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ReducedPingTimeout
	uint32_t ___m_ReducedPingTimeout_7;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AllCostTimeout
	uint32_t ___m_AllCostTimeout_8;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_NetworkDropThreshold
	uint8_t ___m_NetworkDropThreshold_9;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_OverflowDropThreshold
	uint8_t ___m_OverflowDropThreshold_10;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_MaxConnectionAttempt
	uint8_t ___m_MaxConnectionAttempt_11;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AckDelay
	uint32_t ___m_AckDelay_12;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_SendDelay
	uint32_t ___m_SendDelay_13;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageSize
	uint16_t ___m_MaxCombinedReliableMessageSize_14;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageCount
	uint16_t ___m_MaxCombinedReliableMessageCount_15;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxSentMessageQueueSize
	uint16_t ___m_MaxSentMessageQueueSize_16;
	// UnityEngine.Networking.ConnectionAcksType UnityEngine.Networking.ConnectionConfig::m_AcksType
	int32_t ___m_AcksType_17;
	// System.Boolean UnityEngine.Networking.ConnectionConfig::m_UsePlatformSpecificProtocols
	bool ___m_UsePlatformSpecificProtocols_18;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_InitialBandwidth
	uint32_t ___m_InitialBandwidth_19;
	// System.Single UnityEngine.Networking.ConnectionConfig::m_BandwidthPeakFactor
	float ___m_BandwidthPeakFactor_20;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_WebSocketReceiveBufferMaxSize
	uint16_t ___m_WebSocketReceiveBufferMaxSize_21;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_UdpSocketReceiveBufferMaxSize
	uint32_t ___m_UdpSocketReceiveBufferMaxSize_22;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLCertFilePath
	String_t* ___m_SSLCertFilePath_23;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLPrivateKeyFilePath
	String_t* ___m_SSLPrivateKeyFilePath_24;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLCAFilePath
	String_t* ___m_SSLCAFilePath_25;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS> UnityEngine.Networking.ConnectionConfig::m_Channels
	List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * ___m_Channels_26;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>> UnityEngine.Networking.ConnectionConfig::m_SharedOrderChannels
	List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B * ___m_SharedOrderChannels_27;

public:
	inline static int32_t get_offset_of_m_PacketSize_0() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_PacketSize_0)); }
	inline uint16_t get_m_PacketSize_0() const { return ___m_PacketSize_0; }
	inline uint16_t* get_address_of_m_PacketSize_0() { return &___m_PacketSize_0; }
	inline void set_m_PacketSize_0(uint16_t value)
	{
		___m_PacketSize_0 = value;
	}

	inline static int32_t get_offset_of_m_FragmentSize_1() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_FragmentSize_1)); }
	inline uint16_t get_m_FragmentSize_1() const { return ___m_FragmentSize_1; }
	inline uint16_t* get_address_of_m_FragmentSize_1() { return &___m_FragmentSize_1; }
	inline void set_m_FragmentSize_1(uint16_t value)
	{
		___m_FragmentSize_1 = value;
	}

	inline static int32_t get_offset_of_m_ResendTimeout_2() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_ResendTimeout_2)); }
	inline uint32_t get_m_ResendTimeout_2() const { return ___m_ResendTimeout_2; }
	inline uint32_t* get_address_of_m_ResendTimeout_2() { return &___m_ResendTimeout_2; }
	inline void set_m_ResendTimeout_2(uint32_t value)
	{
		___m_ResendTimeout_2 = value;
	}

	inline static int32_t get_offset_of_m_DisconnectTimeout_3() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_DisconnectTimeout_3)); }
	inline uint32_t get_m_DisconnectTimeout_3() const { return ___m_DisconnectTimeout_3; }
	inline uint32_t* get_address_of_m_DisconnectTimeout_3() { return &___m_DisconnectTimeout_3; }
	inline void set_m_DisconnectTimeout_3(uint32_t value)
	{
		___m_DisconnectTimeout_3 = value;
	}

	inline static int32_t get_offset_of_m_ConnectTimeout_4() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_ConnectTimeout_4)); }
	inline uint32_t get_m_ConnectTimeout_4() const { return ___m_ConnectTimeout_4; }
	inline uint32_t* get_address_of_m_ConnectTimeout_4() { return &___m_ConnectTimeout_4; }
	inline void set_m_ConnectTimeout_4(uint32_t value)
	{
		___m_ConnectTimeout_4 = value;
	}

	inline static int32_t get_offset_of_m_MinUpdateTimeout_5() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_MinUpdateTimeout_5)); }
	inline uint32_t get_m_MinUpdateTimeout_5() const { return ___m_MinUpdateTimeout_5; }
	inline uint32_t* get_address_of_m_MinUpdateTimeout_5() { return &___m_MinUpdateTimeout_5; }
	inline void set_m_MinUpdateTimeout_5(uint32_t value)
	{
		___m_MinUpdateTimeout_5 = value;
	}

	inline static int32_t get_offset_of_m_PingTimeout_6() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_PingTimeout_6)); }
	inline uint32_t get_m_PingTimeout_6() const { return ___m_PingTimeout_6; }
	inline uint32_t* get_address_of_m_PingTimeout_6() { return &___m_PingTimeout_6; }
	inline void set_m_PingTimeout_6(uint32_t value)
	{
		___m_PingTimeout_6 = value;
	}

	inline static int32_t get_offset_of_m_ReducedPingTimeout_7() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_ReducedPingTimeout_7)); }
	inline uint32_t get_m_ReducedPingTimeout_7() const { return ___m_ReducedPingTimeout_7; }
	inline uint32_t* get_address_of_m_ReducedPingTimeout_7() { return &___m_ReducedPingTimeout_7; }
	inline void set_m_ReducedPingTimeout_7(uint32_t value)
	{
		___m_ReducedPingTimeout_7 = value;
	}

	inline static int32_t get_offset_of_m_AllCostTimeout_8() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_AllCostTimeout_8)); }
	inline uint32_t get_m_AllCostTimeout_8() const { return ___m_AllCostTimeout_8; }
	inline uint32_t* get_address_of_m_AllCostTimeout_8() { return &___m_AllCostTimeout_8; }
	inline void set_m_AllCostTimeout_8(uint32_t value)
	{
		___m_AllCostTimeout_8 = value;
	}

	inline static int32_t get_offset_of_m_NetworkDropThreshold_9() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_NetworkDropThreshold_9)); }
	inline uint8_t get_m_NetworkDropThreshold_9() const { return ___m_NetworkDropThreshold_9; }
	inline uint8_t* get_address_of_m_NetworkDropThreshold_9() { return &___m_NetworkDropThreshold_9; }
	inline void set_m_NetworkDropThreshold_9(uint8_t value)
	{
		___m_NetworkDropThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_OverflowDropThreshold_10() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_OverflowDropThreshold_10)); }
	inline uint8_t get_m_OverflowDropThreshold_10() const { return ___m_OverflowDropThreshold_10; }
	inline uint8_t* get_address_of_m_OverflowDropThreshold_10() { return &___m_OverflowDropThreshold_10; }
	inline void set_m_OverflowDropThreshold_10(uint8_t value)
	{
		___m_OverflowDropThreshold_10 = value;
	}

	inline static int32_t get_offset_of_m_MaxConnectionAttempt_11() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_MaxConnectionAttempt_11)); }
	inline uint8_t get_m_MaxConnectionAttempt_11() const { return ___m_MaxConnectionAttempt_11; }
	inline uint8_t* get_address_of_m_MaxConnectionAttempt_11() { return &___m_MaxConnectionAttempt_11; }
	inline void set_m_MaxConnectionAttempt_11(uint8_t value)
	{
		___m_MaxConnectionAttempt_11 = value;
	}

	inline static int32_t get_offset_of_m_AckDelay_12() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_AckDelay_12)); }
	inline uint32_t get_m_AckDelay_12() const { return ___m_AckDelay_12; }
	inline uint32_t* get_address_of_m_AckDelay_12() { return &___m_AckDelay_12; }
	inline void set_m_AckDelay_12(uint32_t value)
	{
		___m_AckDelay_12 = value;
	}

	inline static int32_t get_offset_of_m_SendDelay_13() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_SendDelay_13)); }
	inline uint32_t get_m_SendDelay_13() const { return ___m_SendDelay_13; }
	inline uint32_t* get_address_of_m_SendDelay_13() { return &___m_SendDelay_13; }
	inline void set_m_SendDelay_13(uint32_t value)
	{
		___m_SendDelay_13 = value;
	}

	inline static int32_t get_offset_of_m_MaxCombinedReliableMessageSize_14() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_MaxCombinedReliableMessageSize_14)); }
	inline uint16_t get_m_MaxCombinedReliableMessageSize_14() const { return ___m_MaxCombinedReliableMessageSize_14; }
	inline uint16_t* get_address_of_m_MaxCombinedReliableMessageSize_14() { return &___m_MaxCombinedReliableMessageSize_14; }
	inline void set_m_MaxCombinedReliableMessageSize_14(uint16_t value)
	{
		___m_MaxCombinedReliableMessageSize_14 = value;
	}

	inline static int32_t get_offset_of_m_MaxCombinedReliableMessageCount_15() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_MaxCombinedReliableMessageCount_15)); }
	inline uint16_t get_m_MaxCombinedReliableMessageCount_15() const { return ___m_MaxCombinedReliableMessageCount_15; }
	inline uint16_t* get_address_of_m_MaxCombinedReliableMessageCount_15() { return &___m_MaxCombinedReliableMessageCount_15; }
	inline void set_m_MaxCombinedReliableMessageCount_15(uint16_t value)
	{
		___m_MaxCombinedReliableMessageCount_15 = value;
	}

	inline static int32_t get_offset_of_m_MaxSentMessageQueueSize_16() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_MaxSentMessageQueueSize_16)); }
	inline uint16_t get_m_MaxSentMessageQueueSize_16() const { return ___m_MaxSentMessageQueueSize_16; }
	inline uint16_t* get_address_of_m_MaxSentMessageQueueSize_16() { return &___m_MaxSentMessageQueueSize_16; }
	inline void set_m_MaxSentMessageQueueSize_16(uint16_t value)
	{
		___m_MaxSentMessageQueueSize_16 = value;
	}

	inline static int32_t get_offset_of_m_AcksType_17() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_AcksType_17)); }
	inline int32_t get_m_AcksType_17() const { return ___m_AcksType_17; }
	inline int32_t* get_address_of_m_AcksType_17() { return &___m_AcksType_17; }
	inline void set_m_AcksType_17(int32_t value)
	{
		___m_AcksType_17 = value;
	}

	inline static int32_t get_offset_of_m_UsePlatformSpecificProtocols_18() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_UsePlatformSpecificProtocols_18)); }
	inline bool get_m_UsePlatformSpecificProtocols_18() const { return ___m_UsePlatformSpecificProtocols_18; }
	inline bool* get_address_of_m_UsePlatformSpecificProtocols_18() { return &___m_UsePlatformSpecificProtocols_18; }
	inline void set_m_UsePlatformSpecificProtocols_18(bool value)
	{
		___m_UsePlatformSpecificProtocols_18 = value;
	}

	inline static int32_t get_offset_of_m_InitialBandwidth_19() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_InitialBandwidth_19)); }
	inline uint32_t get_m_InitialBandwidth_19() const { return ___m_InitialBandwidth_19; }
	inline uint32_t* get_address_of_m_InitialBandwidth_19() { return &___m_InitialBandwidth_19; }
	inline void set_m_InitialBandwidth_19(uint32_t value)
	{
		___m_InitialBandwidth_19 = value;
	}

	inline static int32_t get_offset_of_m_BandwidthPeakFactor_20() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_BandwidthPeakFactor_20)); }
	inline float get_m_BandwidthPeakFactor_20() const { return ___m_BandwidthPeakFactor_20; }
	inline float* get_address_of_m_BandwidthPeakFactor_20() { return &___m_BandwidthPeakFactor_20; }
	inline void set_m_BandwidthPeakFactor_20(float value)
	{
		___m_BandwidthPeakFactor_20 = value;
	}

	inline static int32_t get_offset_of_m_WebSocketReceiveBufferMaxSize_21() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_WebSocketReceiveBufferMaxSize_21)); }
	inline uint16_t get_m_WebSocketReceiveBufferMaxSize_21() const { return ___m_WebSocketReceiveBufferMaxSize_21; }
	inline uint16_t* get_address_of_m_WebSocketReceiveBufferMaxSize_21() { return &___m_WebSocketReceiveBufferMaxSize_21; }
	inline void set_m_WebSocketReceiveBufferMaxSize_21(uint16_t value)
	{
		___m_WebSocketReceiveBufferMaxSize_21 = value;
	}

	inline static int32_t get_offset_of_m_UdpSocketReceiveBufferMaxSize_22() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_UdpSocketReceiveBufferMaxSize_22)); }
	inline uint32_t get_m_UdpSocketReceiveBufferMaxSize_22() const { return ___m_UdpSocketReceiveBufferMaxSize_22; }
	inline uint32_t* get_address_of_m_UdpSocketReceiveBufferMaxSize_22() { return &___m_UdpSocketReceiveBufferMaxSize_22; }
	inline void set_m_UdpSocketReceiveBufferMaxSize_22(uint32_t value)
	{
		___m_UdpSocketReceiveBufferMaxSize_22 = value;
	}

	inline static int32_t get_offset_of_m_SSLCertFilePath_23() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_SSLCertFilePath_23)); }
	inline String_t* get_m_SSLCertFilePath_23() const { return ___m_SSLCertFilePath_23; }
	inline String_t** get_address_of_m_SSLCertFilePath_23() { return &___m_SSLCertFilePath_23; }
	inline void set_m_SSLCertFilePath_23(String_t* value)
	{
		___m_SSLCertFilePath_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SSLCertFilePath_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_SSLPrivateKeyFilePath_24() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_SSLPrivateKeyFilePath_24)); }
	inline String_t* get_m_SSLPrivateKeyFilePath_24() const { return ___m_SSLPrivateKeyFilePath_24; }
	inline String_t** get_address_of_m_SSLPrivateKeyFilePath_24() { return &___m_SSLPrivateKeyFilePath_24; }
	inline void set_m_SSLPrivateKeyFilePath_24(String_t* value)
	{
		___m_SSLPrivateKeyFilePath_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SSLPrivateKeyFilePath_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_SSLCAFilePath_25() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_SSLCAFilePath_25)); }
	inline String_t* get_m_SSLCAFilePath_25() const { return ___m_SSLCAFilePath_25; }
	inline String_t** get_address_of_m_SSLCAFilePath_25() { return &___m_SSLCAFilePath_25; }
	inline void set_m_SSLCAFilePath_25(String_t* value)
	{
		___m_SSLCAFilePath_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SSLCAFilePath_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_Channels_26() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_Channels_26)); }
	inline List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * get_m_Channels_26() const { return ___m_Channels_26; }
	inline List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 ** get_address_of_m_Channels_26() { return &___m_Channels_26; }
	inline void set_m_Channels_26(List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * value)
	{
		___m_Channels_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Channels_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_SharedOrderChannels_27() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_SharedOrderChannels_27)); }
	inline List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B * get_m_SharedOrderChannels_27() const { return ___m_SharedOrderChannels_27; }
	inline List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B ** get_address_of_m_SharedOrderChannels_27() { return &___m_SharedOrderChannels_27; }
	inline void set_m_SharedOrderChannels_27(List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B * value)
	{
		___m_SharedOrderChannels_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SharedOrderChannels_27), (void*)value);
	}
};


// MLAPI.Exceptions.InvalidChannelException
struct InvalidChannelException_tF4ED82C45BB31FFD3BB4D9920BA8147F4C9E7591  : public Exception_t
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// MLAPI.Configuration.NetworkConfig
struct NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE  : public RuntimeObject
{
public:
	// System.UInt16 MLAPI.Configuration.NetworkConfig::ProtocolVersion
	uint16_t ___ProtocolVersion_0;
	// MLAPI.Transports.NetworkTransport MLAPI.Configuration.NetworkConfig::NetworkTransport
	NetworkTransport_tDF741042D9F54F61AF98FA3645A80D42374A54D3 * ___NetworkTransport_1;
	// System.Collections.Generic.List`1<System.String> MLAPI.Configuration.NetworkConfig::RegisteredScenes
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___RegisteredScenes_2;
	// System.Boolean MLAPI.Configuration.NetworkConfig::AllowRuntimeSceneChanges
	bool ___AllowRuntimeSceneChanges_3;
	// System.Collections.Generic.List`1<MLAPI.Configuration.NetworkPrefab> MLAPI.Configuration.NetworkConfig::NetworkPrefabs
	List_1_t0D5492393F71417A7F4AE4AEBC9817E5CDE22195 * ___NetworkPrefabs_4;
	// MLAPI.Configuration.NullableBoolSerializable MLAPI.Configuration.NetworkConfig::PlayerPrefabHash
	NullableBoolSerializable_t26C239CD7D047107A37052B0D4CE8E56F1C951ED * ___PlayerPrefabHash_5;
	// System.Boolean MLAPI.Configuration.NetworkConfig::CreatePlayerPrefab
	bool ___CreatePlayerPrefab_6;
	// System.Int32 MLAPI.Configuration.NetworkConfig::ReceiveTickrate
	int32_t ___ReceiveTickrate_7;
	// System.Single MLAPI.Configuration.NetworkConfig::NetworkTickIntervalSec
	float ___NetworkTickIntervalSec_8;
	// System.Int32 MLAPI.Configuration.NetworkConfig::MaxReceiveEventsPerTickRate
	int32_t ___MaxReceiveEventsPerTickRate_9;
	// System.Int32 MLAPI.Configuration.NetworkConfig::EventTickrate
	int32_t ___EventTickrate_10;
	// System.Int32 MLAPI.Configuration.NetworkConfig::ClientConnectionBufferTimeout
	int32_t ___ClientConnectionBufferTimeout_11;
	// System.Boolean MLAPI.Configuration.NetworkConfig::ConnectionApproval
	bool ___ConnectionApproval_12;
	// System.Byte[] MLAPI.Configuration.NetworkConfig::ConnectionData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ConnectionData_13;
	// System.Boolean MLAPI.Configuration.NetworkConfig::EnableTimeResync
	bool ___EnableTimeResync_14;
	// System.Int32 MLAPI.Configuration.NetworkConfig::TimeResyncInterval
	int32_t ___TimeResyncInterval_15;
	// System.Boolean MLAPI.Configuration.NetworkConfig::EnableNetworkVariable
	bool ___EnableNetworkVariable_16;
	// System.Boolean MLAPI.Configuration.NetworkConfig::EnsureNetworkVariableLengthSafety
	bool ___EnsureNetworkVariableLengthSafety_17;
	// System.Boolean MLAPI.Configuration.NetworkConfig::EnableSceneManagement
	bool ___EnableSceneManagement_18;
	// System.Boolean MLAPI.Configuration.NetworkConfig::ForceSamePrefabs
	bool ___ForceSamePrefabs_19;
	// System.Boolean MLAPI.Configuration.NetworkConfig::UsePrefabSync
	bool ___UsePrefabSync_20;
	// System.Boolean MLAPI.Configuration.NetworkConfig::RecycleNetworkIds
	bool ___RecycleNetworkIds_21;
	// System.Single MLAPI.Configuration.NetworkConfig::NetworkIdRecycleDelay
	float ___NetworkIdRecycleDelay_22;
	// MLAPI.Configuration.HashSize MLAPI.Configuration.NetworkConfig::RpcHashSize
	int32_t ___RpcHashSize_23;
	// System.Int32 MLAPI.Configuration.NetworkConfig::LoadSceneTimeOut
	int32_t ___LoadSceneTimeOut_24;
	// System.Boolean MLAPI.Configuration.NetworkConfig::EnableMessageBuffering
	bool ___EnableMessageBuffering_25;
	// System.Single MLAPI.Configuration.NetworkConfig::MessageBufferTimeout
	float ___MessageBufferTimeout_26;
	// System.Boolean MLAPI.Configuration.NetworkConfig::EnableNetworkLogs
	bool ___EnableNetworkLogs_27;
	// System.Nullable`1<System.UInt64> MLAPI.Configuration.NetworkConfig::m_ConfigHash
	Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  ___m_ConfigHash_28;

public:
	inline static int32_t get_offset_of_ProtocolVersion_0() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___ProtocolVersion_0)); }
	inline uint16_t get_ProtocolVersion_0() const { return ___ProtocolVersion_0; }
	inline uint16_t* get_address_of_ProtocolVersion_0() { return &___ProtocolVersion_0; }
	inline void set_ProtocolVersion_0(uint16_t value)
	{
		___ProtocolVersion_0 = value;
	}

	inline static int32_t get_offset_of_NetworkTransport_1() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___NetworkTransport_1)); }
	inline NetworkTransport_tDF741042D9F54F61AF98FA3645A80D42374A54D3 * get_NetworkTransport_1() const { return ___NetworkTransport_1; }
	inline NetworkTransport_tDF741042D9F54F61AF98FA3645A80D42374A54D3 ** get_address_of_NetworkTransport_1() { return &___NetworkTransport_1; }
	inline void set_NetworkTransport_1(NetworkTransport_tDF741042D9F54F61AF98FA3645A80D42374A54D3 * value)
	{
		___NetworkTransport_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetworkTransport_1), (void*)value);
	}

	inline static int32_t get_offset_of_RegisteredScenes_2() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___RegisteredScenes_2)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_RegisteredScenes_2() const { return ___RegisteredScenes_2; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_RegisteredScenes_2() { return &___RegisteredScenes_2; }
	inline void set_RegisteredScenes_2(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___RegisteredScenes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RegisteredScenes_2), (void*)value);
	}

	inline static int32_t get_offset_of_AllowRuntimeSceneChanges_3() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___AllowRuntimeSceneChanges_3)); }
	inline bool get_AllowRuntimeSceneChanges_3() const { return ___AllowRuntimeSceneChanges_3; }
	inline bool* get_address_of_AllowRuntimeSceneChanges_3() { return &___AllowRuntimeSceneChanges_3; }
	inline void set_AllowRuntimeSceneChanges_3(bool value)
	{
		___AllowRuntimeSceneChanges_3 = value;
	}

	inline static int32_t get_offset_of_NetworkPrefabs_4() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___NetworkPrefabs_4)); }
	inline List_1_t0D5492393F71417A7F4AE4AEBC9817E5CDE22195 * get_NetworkPrefabs_4() const { return ___NetworkPrefabs_4; }
	inline List_1_t0D5492393F71417A7F4AE4AEBC9817E5CDE22195 ** get_address_of_NetworkPrefabs_4() { return &___NetworkPrefabs_4; }
	inline void set_NetworkPrefabs_4(List_1_t0D5492393F71417A7F4AE4AEBC9817E5CDE22195 * value)
	{
		___NetworkPrefabs_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetworkPrefabs_4), (void*)value);
	}

	inline static int32_t get_offset_of_PlayerPrefabHash_5() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___PlayerPrefabHash_5)); }
	inline NullableBoolSerializable_t26C239CD7D047107A37052B0D4CE8E56F1C951ED * get_PlayerPrefabHash_5() const { return ___PlayerPrefabHash_5; }
	inline NullableBoolSerializable_t26C239CD7D047107A37052B0D4CE8E56F1C951ED ** get_address_of_PlayerPrefabHash_5() { return &___PlayerPrefabHash_5; }
	inline void set_PlayerPrefabHash_5(NullableBoolSerializable_t26C239CD7D047107A37052B0D4CE8E56F1C951ED * value)
	{
		___PlayerPrefabHash_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerPrefabHash_5), (void*)value);
	}

	inline static int32_t get_offset_of_CreatePlayerPrefab_6() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___CreatePlayerPrefab_6)); }
	inline bool get_CreatePlayerPrefab_6() const { return ___CreatePlayerPrefab_6; }
	inline bool* get_address_of_CreatePlayerPrefab_6() { return &___CreatePlayerPrefab_6; }
	inline void set_CreatePlayerPrefab_6(bool value)
	{
		___CreatePlayerPrefab_6 = value;
	}

	inline static int32_t get_offset_of_ReceiveTickrate_7() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___ReceiveTickrate_7)); }
	inline int32_t get_ReceiveTickrate_7() const { return ___ReceiveTickrate_7; }
	inline int32_t* get_address_of_ReceiveTickrate_7() { return &___ReceiveTickrate_7; }
	inline void set_ReceiveTickrate_7(int32_t value)
	{
		___ReceiveTickrate_7 = value;
	}

	inline static int32_t get_offset_of_NetworkTickIntervalSec_8() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___NetworkTickIntervalSec_8)); }
	inline float get_NetworkTickIntervalSec_8() const { return ___NetworkTickIntervalSec_8; }
	inline float* get_address_of_NetworkTickIntervalSec_8() { return &___NetworkTickIntervalSec_8; }
	inline void set_NetworkTickIntervalSec_8(float value)
	{
		___NetworkTickIntervalSec_8 = value;
	}

	inline static int32_t get_offset_of_MaxReceiveEventsPerTickRate_9() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___MaxReceiveEventsPerTickRate_9)); }
	inline int32_t get_MaxReceiveEventsPerTickRate_9() const { return ___MaxReceiveEventsPerTickRate_9; }
	inline int32_t* get_address_of_MaxReceiveEventsPerTickRate_9() { return &___MaxReceiveEventsPerTickRate_9; }
	inline void set_MaxReceiveEventsPerTickRate_9(int32_t value)
	{
		___MaxReceiveEventsPerTickRate_9 = value;
	}

	inline static int32_t get_offset_of_EventTickrate_10() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___EventTickrate_10)); }
	inline int32_t get_EventTickrate_10() const { return ___EventTickrate_10; }
	inline int32_t* get_address_of_EventTickrate_10() { return &___EventTickrate_10; }
	inline void set_EventTickrate_10(int32_t value)
	{
		___EventTickrate_10 = value;
	}

	inline static int32_t get_offset_of_ClientConnectionBufferTimeout_11() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___ClientConnectionBufferTimeout_11)); }
	inline int32_t get_ClientConnectionBufferTimeout_11() const { return ___ClientConnectionBufferTimeout_11; }
	inline int32_t* get_address_of_ClientConnectionBufferTimeout_11() { return &___ClientConnectionBufferTimeout_11; }
	inline void set_ClientConnectionBufferTimeout_11(int32_t value)
	{
		___ClientConnectionBufferTimeout_11 = value;
	}

	inline static int32_t get_offset_of_ConnectionApproval_12() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___ConnectionApproval_12)); }
	inline bool get_ConnectionApproval_12() const { return ___ConnectionApproval_12; }
	inline bool* get_address_of_ConnectionApproval_12() { return &___ConnectionApproval_12; }
	inline void set_ConnectionApproval_12(bool value)
	{
		___ConnectionApproval_12 = value;
	}

	inline static int32_t get_offset_of_ConnectionData_13() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___ConnectionData_13)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_ConnectionData_13() const { return ___ConnectionData_13; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_ConnectionData_13() { return &___ConnectionData_13; }
	inline void set_ConnectionData_13(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___ConnectionData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectionData_13), (void*)value);
	}

	inline static int32_t get_offset_of_EnableTimeResync_14() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___EnableTimeResync_14)); }
	inline bool get_EnableTimeResync_14() const { return ___EnableTimeResync_14; }
	inline bool* get_address_of_EnableTimeResync_14() { return &___EnableTimeResync_14; }
	inline void set_EnableTimeResync_14(bool value)
	{
		___EnableTimeResync_14 = value;
	}

	inline static int32_t get_offset_of_TimeResyncInterval_15() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___TimeResyncInterval_15)); }
	inline int32_t get_TimeResyncInterval_15() const { return ___TimeResyncInterval_15; }
	inline int32_t* get_address_of_TimeResyncInterval_15() { return &___TimeResyncInterval_15; }
	inline void set_TimeResyncInterval_15(int32_t value)
	{
		___TimeResyncInterval_15 = value;
	}

	inline static int32_t get_offset_of_EnableNetworkVariable_16() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___EnableNetworkVariable_16)); }
	inline bool get_EnableNetworkVariable_16() const { return ___EnableNetworkVariable_16; }
	inline bool* get_address_of_EnableNetworkVariable_16() { return &___EnableNetworkVariable_16; }
	inline void set_EnableNetworkVariable_16(bool value)
	{
		___EnableNetworkVariable_16 = value;
	}

	inline static int32_t get_offset_of_EnsureNetworkVariableLengthSafety_17() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___EnsureNetworkVariableLengthSafety_17)); }
	inline bool get_EnsureNetworkVariableLengthSafety_17() const { return ___EnsureNetworkVariableLengthSafety_17; }
	inline bool* get_address_of_EnsureNetworkVariableLengthSafety_17() { return &___EnsureNetworkVariableLengthSafety_17; }
	inline void set_EnsureNetworkVariableLengthSafety_17(bool value)
	{
		___EnsureNetworkVariableLengthSafety_17 = value;
	}

	inline static int32_t get_offset_of_EnableSceneManagement_18() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___EnableSceneManagement_18)); }
	inline bool get_EnableSceneManagement_18() const { return ___EnableSceneManagement_18; }
	inline bool* get_address_of_EnableSceneManagement_18() { return &___EnableSceneManagement_18; }
	inline void set_EnableSceneManagement_18(bool value)
	{
		___EnableSceneManagement_18 = value;
	}

	inline static int32_t get_offset_of_ForceSamePrefabs_19() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___ForceSamePrefabs_19)); }
	inline bool get_ForceSamePrefabs_19() const { return ___ForceSamePrefabs_19; }
	inline bool* get_address_of_ForceSamePrefabs_19() { return &___ForceSamePrefabs_19; }
	inline void set_ForceSamePrefabs_19(bool value)
	{
		___ForceSamePrefabs_19 = value;
	}

	inline static int32_t get_offset_of_UsePrefabSync_20() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___UsePrefabSync_20)); }
	inline bool get_UsePrefabSync_20() const { return ___UsePrefabSync_20; }
	inline bool* get_address_of_UsePrefabSync_20() { return &___UsePrefabSync_20; }
	inline void set_UsePrefabSync_20(bool value)
	{
		___UsePrefabSync_20 = value;
	}

	inline static int32_t get_offset_of_RecycleNetworkIds_21() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___RecycleNetworkIds_21)); }
	inline bool get_RecycleNetworkIds_21() const { return ___RecycleNetworkIds_21; }
	inline bool* get_address_of_RecycleNetworkIds_21() { return &___RecycleNetworkIds_21; }
	inline void set_RecycleNetworkIds_21(bool value)
	{
		___RecycleNetworkIds_21 = value;
	}

	inline static int32_t get_offset_of_NetworkIdRecycleDelay_22() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___NetworkIdRecycleDelay_22)); }
	inline float get_NetworkIdRecycleDelay_22() const { return ___NetworkIdRecycleDelay_22; }
	inline float* get_address_of_NetworkIdRecycleDelay_22() { return &___NetworkIdRecycleDelay_22; }
	inline void set_NetworkIdRecycleDelay_22(float value)
	{
		___NetworkIdRecycleDelay_22 = value;
	}

	inline static int32_t get_offset_of_RpcHashSize_23() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___RpcHashSize_23)); }
	inline int32_t get_RpcHashSize_23() const { return ___RpcHashSize_23; }
	inline int32_t* get_address_of_RpcHashSize_23() { return &___RpcHashSize_23; }
	inline void set_RpcHashSize_23(int32_t value)
	{
		___RpcHashSize_23 = value;
	}

	inline static int32_t get_offset_of_LoadSceneTimeOut_24() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___LoadSceneTimeOut_24)); }
	inline int32_t get_LoadSceneTimeOut_24() const { return ___LoadSceneTimeOut_24; }
	inline int32_t* get_address_of_LoadSceneTimeOut_24() { return &___LoadSceneTimeOut_24; }
	inline void set_LoadSceneTimeOut_24(int32_t value)
	{
		___LoadSceneTimeOut_24 = value;
	}

	inline static int32_t get_offset_of_EnableMessageBuffering_25() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___EnableMessageBuffering_25)); }
	inline bool get_EnableMessageBuffering_25() const { return ___EnableMessageBuffering_25; }
	inline bool* get_address_of_EnableMessageBuffering_25() { return &___EnableMessageBuffering_25; }
	inline void set_EnableMessageBuffering_25(bool value)
	{
		___EnableMessageBuffering_25 = value;
	}

	inline static int32_t get_offset_of_MessageBufferTimeout_26() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___MessageBufferTimeout_26)); }
	inline float get_MessageBufferTimeout_26() const { return ___MessageBufferTimeout_26; }
	inline float* get_address_of_MessageBufferTimeout_26() { return &___MessageBufferTimeout_26; }
	inline void set_MessageBufferTimeout_26(float value)
	{
		___MessageBufferTimeout_26 = value;
	}

	inline static int32_t get_offset_of_EnableNetworkLogs_27() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___EnableNetworkLogs_27)); }
	inline bool get_EnableNetworkLogs_27() const { return ___EnableNetworkLogs_27; }
	inline bool* get_address_of_EnableNetworkLogs_27() { return &___EnableNetworkLogs_27; }
	inline void set_EnableNetworkLogs_27(bool value)
	{
		___EnableNetworkLogs_27 = value;
	}

	inline static int32_t get_offset_of_m_ConfigHash_28() { return static_cast<int32_t>(offsetof(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE, ___m_ConfigHash_28)); }
	inline Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  get_m_ConfigHash_28() const { return ___m_ConfigHash_28; }
	inline Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C * get_address_of_m_ConfigHash_28() { return &___m_ConfigHash_28; }
	inline void set_m_ConfigHash_28(Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  value)
	{
		___m_ConfigHash_28 = value;
	}
};


// MLAPI.Serialization.Pooled.PooledNetworkBuffer
struct PooledNetworkBuffer_tED514246F37E8636BB4EF9FD6CD9F0AA843EE941  : public NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188
{
public:
	// System.Boolean MLAPI.Serialization.Pooled.PooledNetworkBuffer::isDisposed
	bool ___isDisposed_12;

public:
	inline static int32_t get_offset_of_isDisposed_12() { return static_cast<int32_t>(offsetof(PooledNetworkBuffer_tED514246F37E8636BB4EF9FD6CD9F0AA843EE941, ___isDisposed_12)); }
	inline bool get_isDisposed_12() const { return ___isDisposed_12; }
	inline bool* get_address_of_isDisposed_12() { return &___isDisposed_12; }
	inline void set_isDisposed_12(bool value)
	{
		___isDisposed_12 = value;
	}
};


// MLAPI.Messaging.ServerRpcReceiveParams
struct ServerRpcReceiveParams_t544584F0C47B5D42DF345FC12EECE75580008B75 
{
public:
	// MLAPI.NetworkUpdateStage MLAPI.Messaging.ServerRpcReceiveParams::UpdateStage
	uint8_t ___UpdateStage_0;
	// System.UInt64 MLAPI.Messaging.ServerRpcReceiveParams::SenderClientId
	uint64_t ___SenderClientId_1;

public:
	inline static int32_t get_offset_of_UpdateStage_0() { return static_cast<int32_t>(offsetof(ServerRpcReceiveParams_t544584F0C47B5D42DF345FC12EECE75580008B75, ___UpdateStage_0)); }
	inline uint8_t get_UpdateStage_0() const { return ___UpdateStage_0; }
	inline uint8_t* get_address_of_UpdateStage_0() { return &___UpdateStage_0; }
	inline void set_UpdateStage_0(uint8_t value)
	{
		___UpdateStage_0 = value;
	}

	inline static int32_t get_offset_of_SenderClientId_1() { return static_cast<int32_t>(offsetof(ServerRpcReceiveParams_t544584F0C47B5D42DF345FC12EECE75580008B75, ___SenderClientId_1)); }
	inline uint64_t get_SenderClientId_1() const { return ___SenderClientId_1; }
	inline uint64_t* get_address_of_SenderClientId_1() { return &___SenderClientId_1; }
	inline void set_SenderClientId_1(uint64_t value)
	{
		___SenderClientId_1 = value;
	}
};


// MLAPI.Messaging.ServerRpcSendParams
struct ServerRpcSendParams_t23FF16DFF529BE6814D940280DF96523CE0CEA89 
{
public:
	// MLAPI.NetworkUpdateStage MLAPI.Messaging.ServerRpcSendParams::UpdateStage
	uint8_t ___UpdateStage_0;

public:
	inline static int32_t get_offset_of_UpdateStage_0() { return static_cast<int32_t>(offsetof(ServerRpcSendParams_t23FF16DFF529BE6814D940280DF96523CE0CEA89, ___UpdateStage_0)); }
	inline uint8_t get_UpdateStage_0() const { return ___UpdateStage_0; }
	inline uint8_t* get_address_of_UpdateStage_0() { return &___UpdateStage_0; }
	inline void set_UpdateStage_0(uint8_t value)
	{
		___UpdateStage_0 = value;
	}
};


// MLAPI.Transports.Tasks.SocketTask
struct SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322  : public RuntimeObject
{
public:
	// System.Boolean MLAPI.Transports.Tasks.SocketTask::<IsDone>k__BackingField
	bool ___U3CIsDoneU3Ek__BackingField_0;
	// System.Boolean MLAPI.Transports.Tasks.SocketTask::<Success>k__BackingField
	bool ___U3CSuccessU3Ek__BackingField_1;
	// System.Exception MLAPI.Transports.Tasks.SocketTask::<TransportException>k__BackingField
	Exception_t * ___U3CTransportExceptionU3Ek__BackingField_2;
	// System.Net.Sockets.SocketError MLAPI.Transports.Tasks.SocketTask::<SocketError>k__BackingField
	int32_t ___U3CSocketErrorU3Ek__BackingField_3;
	// System.Int32 MLAPI.Transports.Tasks.SocketTask::<TransportCode>k__BackingField
	int32_t ___U3CTransportCodeU3Ek__BackingField_4;
	// System.String MLAPI.Transports.Tasks.SocketTask::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_5;
	// System.Object MLAPI.Transports.Tasks.SocketTask::<State>k__BackingField
	RuntimeObject * ___U3CStateU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CIsDoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322, ___U3CIsDoneU3Ek__BackingField_0)); }
	inline bool get_U3CIsDoneU3Ek__BackingField_0() const { return ___U3CIsDoneU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsDoneU3Ek__BackingField_0() { return &___U3CIsDoneU3Ek__BackingField_0; }
	inline void set_U3CIsDoneU3Ek__BackingField_0(bool value)
	{
		___U3CIsDoneU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSuccessU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322, ___U3CSuccessU3Ek__BackingField_1)); }
	inline bool get_U3CSuccessU3Ek__BackingField_1() const { return ___U3CSuccessU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CSuccessU3Ek__BackingField_1() { return &___U3CSuccessU3Ek__BackingField_1; }
	inline void set_U3CSuccessU3Ek__BackingField_1(bool value)
	{
		___U3CSuccessU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTransportExceptionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322, ___U3CTransportExceptionU3Ek__BackingField_2)); }
	inline Exception_t * get_U3CTransportExceptionU3Ek__BackingField_2() const { return ___U3CTransportExceptionU3Ek__BackingField_2; }
	inline Exception_t ** get_address_of_U3CTransportExceptionU3Ek__BackingField_2() { return &___U3CTransportExceptionU3Ek__BackingField_2; }
	inline void set_U3CTransportExceptionU3Ek__BackingField_2(Exception_t * value)
	{
		___U3CTransportExceptionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTransportExceptionU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSocketErrorU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322, ___U3CSocketErrorU3Ek__BackingField_3)); }
	inline int32_t get_U3CSocketErrorU3Ek__BackingField_3() const { return ___U3CSocketErrorU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CSocketErrorU3Ek__BackingField_3() { return &___U3CSocketErrorU3Ek__BackingField_3; }
	inline void set_U3CSocketErrorU3Ek__BackingField_3(int32_t value)
	{
		___U3CSocketErrorU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTransportCodeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322, ___U3CTransportCodeU3Ek__BackingField_4)); }
	inline int32_t get_U3CTransportCodeU3Ek__BackingField_4() const { return ___U3CTransportCodeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CTransportCodeU3Ek__BackingField_4() { return &___U3CTransportCodeU3Ek__BackingField_4; }
	inline void set_U3CTransportCodeU3Ek__BackingField_4(int32_t value)
	{
		___U3CTransportCodeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322, ___U3CMessageU3Ek__BackingField_5)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_5() const { return ___U3CMessageU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_5() { return &___U3CMessageU3Ek__BackingField_5; }
	inline void set_U3CMessageU3Ek__BackingField_5(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322, ___U3CStateU3Ek__BackingField_6)); }
	inline RuntimeObject * get_U3CStateU3Ek__BackingField_6() const { return ___U3CStateU3Ek__BackingField_6; }
	inline RuntimeObject ** get_address_of_U3CStateU3Ek__BackingField_6() { return &___U3CStateU3Ek__BackingField_6; }
	inline void set_U3CStateU3Ek__BackingField_6(RuntimeObject * value)
	{
		___U3CStateU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStateU3Ek__BackingField_6), (void*)value);
	}
};


// MLAPI.Exceptions.SpawnStateException
struct SpawnStateException_tEF5EB7D83B74141861F781C099D7B41CC3143E4E  : public Exception_t
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// MLAPI.Profiling.TickEvent
struct TickEvent_t6ED6E2A0F7108928D72CFC0F0774EB1390A9C63D  : public RuntimeObject
{
public:
	// MLAPI.Profiling.TickType MLAPI.Profiling.TickEvent::EventType
	int32_t ___EventType_0;
	// System.UInt32 MLAPI.Profiling.TickEvent::Bytes
	uint32_t ___Bytes_1;
	// System.String MLAPI.Profiling.TickEvent::ChannelName
	String_t* ___ChannelName_2;
	// System.String MLAPI.Profiling.TickEvent::MessageType
	String_t* ___MessageType_3;
	// System.Boolean MLAPI.Profiling.TickEvent::Closed
	bool ___Closed_4;

public:
	inline static int32_t get_offset_of_EventType_0() { return static_cast<int32_t>(offsetof(TickEvent_t6ED6E2A0F7108928D72CFC0F0774EB1390A9C63D, ___EventType_0)); }
	inline int32_t get_EventType_0() const { return ___EventType_0; }
	inline int32_t* get_address_of_EventType_0() { return &___EventType_0; }
	inline void set_EventType_0(int32_t value)
	{
		___EventType_0 = value;
	}

	inline static int32_t get_offset_of_Bytes_1() { return static_cast<int32_t>(offsetof(TickEvent_t6ED6E2A0F7108928D72CFC0F0774EB1390A9C63D, ___Bytes_1)); }
	inline uint32_t get_Bytes_1() const { return ___Bytes_1; }
	inline uint32_t* get_address_of_Bytes_1() { return &___Bytes_1; }
	inline void set_Bytes_1(uint32_t value)
	{
		___Bytes_1 = value;
	}

	inline static int32_t get_offset_of_ChannelName_2() { return static_cast<int32_t>(offsetof(TickEvent_t6ED6E2A0F7108928D72CFC0F0774EB1390A9C63D, ___ChannelName_2)); }
	inline String_t* get_ChannelName_2() const { return ___ChannelName_2; }
	inline String_t** get_address_of_ChannelName_2() { return &___ChannelName_2; }
	inline void set_ChannelName_2(String_t* value)
	{
		___ChannelName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ChannelName_2), (void*)value);
	}

	inline static int32_t get_offset_of_MessageType_3() { return static_cast<int32_t>(offsetof(TickEvent_t6ED6E2A0F7108928D72CFC0F0774EB1390A9C63D, ___MessageType_3)); }
	inline String_t* get_MessageType_3() const { return ___MessageType_3; }
	inline String_t** get_address_of_MessageType_3() { return &___MessageType_3; }
	inline void set_MessageType_3(String_t* value)
	{
		___MessageType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageType_3), (void*)value);
	}

	inline static int32_t get_offset_of_Closed_4() { return static_cast<int32_t>(offsetof(TickEvent_t6ED6E2A0F7108928D72CFC0F0774EB1390A9C63D, ___Closed_4)); }
	inline bool get_Closed_4() const { return ___Closed_4; }
	inline bool* get_address_of_Closed_4() { return &___Closed_4; }
	inline void set_Closed_4(bool value)
	{
		___Closed_4 = value;
	}
};


// MLAPI.Transports.TransportChannel
struct TransportChannel_t0A8B4B6112B5AAAA3261EDB8AB9F8707DD8F7D73 
{
public:
	// MLAPI.Transports.NetworkChannel MLAPI.Transports.TransportChannel::Channel
	uint8_t ___Channel_0;
	// MLAPI.Transports.NetworkDelivery MLAPI.Transports.TransportChannel::Delivery
	int32_t ___Delivery_1;

public:
	inline static int32_t get_offset_of_Channel_0() { return static_cast<int32_t>(offsetof(TransportChannel_t0A8B4B6112B5AAAA3261EDB8AB9F8707DD8F7D73, ___Channel_0)); }
	inline uint8_t get_Channel_0() const { return ___Channel_0; }
	inline uint8_t* get_address_of_Channel_0() { return &___Channel_0; }
	inline void set_Channel_0(uint8_t value)
	{
		___Channel_0 = value;
	}

	inline static int32_t get_offset_of_Delivery_1() { return static_cast<int32_t>(offsetof(TransportChannel_t0A8B4B6112B5AAAA3261EDB8AB9F8707DD8F7D73, ___Delivery_1)); }
	inline int32_t get_Delivery_1() const { return ___Delivery_1; }
	inline int32_t* get_address_of_Delivery_1() { return &___Delivery_1; }
	inline void set_Delivery_1(int32_t value)
	{
		___Delivery_1 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// MLAPI.Transports.UNetChannel
struct UNetChannel_tEC908B6737ABA9307E2DEB4A3F276B0EED170DC1  : public RuntimeObject
{
public:
	// MLAPI.Transports.NetworkChannel MLAPI.Transports.UNetChannel::Id
	uint8_t ___Id_0;
	// UnityEngine.Networking.QosType MLAPI.Transports.UNetChannel::Type
	int32_t ___Type_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(UNetChannel_tEC908B6737ABA9307E2DEB4A3F276B0EED170DC1, ___Id_0)); }
	inline uint8_t get_Id_0() const { return ___Id_0; }
	inline uint8_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(uint8_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(UNetChannel_tEC908B6737ABA9307E2DEB4A3F276B0EED170DC1, ___Type_1)); }
	inline int32_t get_Type_1() const { return ___Type_1; }
	inline int32_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(int32_t value)
	{
		___Type_1 = value;
	}
};


// MLAPI.Exceptions.VisibilityChangeException
struct VisibilityChangeException_tC5DD75E45FD92C347A5D4424CE259BC4AD71EA2B  : public Exception_t
{
public:

public:
};


// MLAPI.Messaging.Buffering.BufferManager/BufferedMessage
struct BufferedMessage_t8356882120EC2EDBFA1113B993B9926A2E9A8027 
{
public:
	// System.UInt64 MLAPI.Messaging.Buffering.BufferManager/BufferedMessage::SenderClientId
	uint64_t ___SenderClientId_0;
	// MLAPI.Transports.NetworkChannel MLAPI.Messaging.Buffering.BufferManager/BufferedMessage::NetworkChannel
	uint8_t ___NetworkChannel_1;
	// MLAPI.Serialization.Pooled.PooledNetworkBuffer MLAPI.Messaging.Buffering.BufferManager/BufferedMessage::NetworkBuffer
	PooledNetworkBuffer_tED514246F37E8636BB4EF9FD6CD9F0AA843EE941 * ___NetworkBuffer_2;
	// System.Single MLAPI.Messaging.Buffering.BufferManager/BufferedMessage::ReceiveTime
	float ___ReceiveTime_3;
	// System.Single MLAPI.Messaging.Buffering.BufferManager/BufferedMessage::BufferTime
	float ___BufferTime_4;

public:
	inline static int32_t get_offset_of_SenderClientId_0() { return static_cast<int32_t>(offsetof(BufferedMessage_t8356882120EC2EDBFA1113B993B9926A2E9A8027, ___SenderClientId_0)); }
	inline uint64_t get_SenderClientId_0() const { return ___SenderClientId_0; }
	inline uint64_t* get_address_of_SenderClientId_0() { return &___SenderClientId_0; }
	inline void set_SenderClientId_0(uint64_t value)
	{
		___SenderClientId_0 = value;
	}

	inline static int32_t get_offset_of_NetworkChannel_1() { return static_cast<int32_t>(offsetof(BufferedMessage_t8356882120EC2EDBFA1113B993B9926A2E9A8027, ___NetworkChannel_1)); }
	inline uint8_t get_NetworkChannel_1() const { return ___NetworkChannel_1; }
	inline uint8_t* get_address_of_NetworkChannel_1() { return &___NetworkChannel_1; }
	inline void set_NetworkChannel_1(uint8_t value)
	{
		___NetworkChannel_1 = value;
	}

	inline static int32_t get_offset_of_NetworkBuffer_2() { return static_cast<int32_t>(offsetof(BufferedMessage_t8356882120EC2EDBFA1113B993B9926A2E9A8027, ___NetworkBuffer_2)); }
	inline PooledNetworkBuffer_tED514246F37E8636BB4EF9FD6CD9F0AA843EE941 * get_NetworkBuffer_2() const { return ___NetworkBuffer_2; }
	inline PooledNetworkBuffer_tED514246F37E8636BB4EF9FD6CD9F0AA843EE941 ** get_address_of_NetworkBuffer_2() { return &___NetworkBuffer_2; }
	inline void set_NetworkBuffer_2(PooledNetworkBuffer_tED514246F37E8636BB4EF9FD6CD9F0AA843EE941 * value)
	{
		___NetworkBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetworkBuffer_2), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveTime_3() { return static_cast<int32_t>(offsetof(BufferedMessage_t8356882120EC2EDBFA1113B993B9926A2E9A8027, ___ReceiveTime_3)); }
	inline float get_ReceiveTime_3() const { return ___ReceiveTime_3; }
	inline float* get_address_of_ReceiveTime_3() { return &___ReceiveTime_3; }
	inline void set_ReceiveTime_3(float value)
	{
		___ReceiveTime_3 = value;
	}

	inline static int32_t get_offset_of_BufferTime_4() { return static_cast<int32_t>(offsetof(BufferedMessage_t8356882120EC2EDBFA1113B993B9926A2E9A8027, ___BufferTime_4)); }
	inline float get_BufferTime_4() const { return ___BufferTime_4; }
	inline float* get_address_of_BufferTime_4() { return &___BufferTime_4; }
	inline void set_BufferTime_4(float value)
	{
		___BufferTime_4 = value;
	}
};

// Native definition for P/Invoke marshalling of MLAPI.Messaging.Buffering.BufferManager/BufferedMessage
struct BufferedMessage_t8356882120EC2EDBFA1113B993B9926A2E9A8027_marshaled_pinvoke
{
	uint64_t ___SenderClientId_0;
	uint8_t ___NetworkChannel_1;
	PooledNetworkBuffer_tED514246F37E8636BB4EF9FD6CD9F0AA843EE941 * ___NetworkBuffer_2;
	float ___ReceiveTime_3;
	float ___BufferTime_4;
};
// Native definition for COM marshalling of MLAPI.Messaging.Buffering.BufferManager/BufferedMessage
struct BufferedMessage_t8356882120EC2EDBFA1113B993B9926A2E9A8027_marshaled_com
{
	uint64_t ___SenderClientId_0;
	uint8_t ___NetworkChannel_1;
	PooledNetworkBuffer_tED514246F37E8636BB4EF9FD6CD9F0AA843EE941 * ___NetworkBuffer_2;
	float ___ReceiveTime_3;
	float ___BufferTime_4;
};

// MLAPI.Messaging.RpcBatcher/SendStream
struct SendStream_tA08E935512570E03909E77420EA1A89F758CBEDB  : public RuntimeObject
{
public:
	// MLAPI.Transports.NetworkChannel MLAPI.Messaging.RpcBatcher/SendStream::NetworkChannel
	uint8_t ___NetworkChannel_0;
	// MLAPI.Serialization.Pooled.PooledNetworkBuffer MLAPI.Messaging.RpcBatcher/SendStream::Buffer
	PooledNetworkBuffer_tED514246F37E8636BB4EF9FD6CD9F0AA843EE941 * ___Buffer_1;
	// MLAPI.Serialization.Pooled.PooledNetworkWriter MLAPI.Messaging.RpcBatcher/SendStream::Writer
	PooledNetworkWriter_t4EFF6DA061F1469895F9FDC1B4FD3EAA9DCC5A7A * ___Writer_2;
	// System.Boolean MLAPI.Messaging.RpcBatcher/SendStream::IsEmpty
	bool ___IsEmpty_3;

public:
	inline static int32_t get_offset_of_NetworkChannel_0() { return static_cast<int32_t>(offsetof(SendStream_tA08E935512570E03909E77420EA1A89F758CBEDB, ___NetworkChannel_0)); }
	inline uint8_t get_NetworkChannel_0() const { return ___NetworkChannel_0; }
	inline uint8_t* get_address_of_NetworkChannel_0() { return &___NetworkChannel_0; }
	inline void set_NetworkChannel_0(uint8_t value)
	{
		___NetworkChannel_0 = value;
	}

	inline static int32_t get_offset_of_Buffer_1() { return static_cast<int32_t>(offsetof(SendStream_tA08E935512570E03909E77420EA1A89F758CBEDB, ___Buffer_1)); }
	inline PooledNetworkBuffer_tED514246F37E8636BB4EF9FD6CD9F0AA843EE941 * get_Buffer_1() const { return ___Buffer_1; }
	inline PooledNetworkBuffer_tED514246F37E8636BB4EF9FD6CD9F0AA843EE941 ** get_address_of_Buffer_1() { return &___Buffer_1; }
	inline void set_Buffer_1(PooledNetworkBuffer_tED514246F37E8636BB4EF9FD6CD9F0AA843EE941 * value)
	{
		___Buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_Writer_2() { return static_cast<int32_t>(offsetof(SendStream_tA08E935512570E03909E77420EA1A89F758CBEDB, ___Writer_2)); }
	inline PooledNetworkWriter_t4EFF6DA061F1469895F9FDC1B4FD3EAA9DCC5A7A * get_Writer_2() const { return ___Writer_2; }
	inline PooledNetworkWriter_t4EFF6DA061F1469895F9FDC1B4FD3EAA9DCC5A7A ** get_address_of_Writer_2() { return &___Writer_2; }
	inline void set_Writer_2(PooledNetworkWriter_t4EFF6DA061F1469895F9FDC1B4FD3EAA9DCC5A7A * value)
	{
		___Writer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Writer_2), (void*)value);
	}

	inline static int32_t get_offset_of_IsEmpty_3() { return static_cast<int32_t>(offsetof(SendStream_tA08E935512570E03909E77420EA1A89F758CBEDB, ___IsEmpty_3)); }
	inline bool get_IsEmpty_3() const { return ___IsEmpty_3; }
	inline bool* get_address_of_IsEmpty_3() { return &___IsEmpty_3; }
	inline void set_IsEmpty_3(bool value)
	{
		___IsEmpty_3 = value;
	}
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// MLAPI.Messaging.ClientRpcParams
struct ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5 
{
public:
	// MLAPI.Messaging.ClientRpcSendParams MLAPI.Messaging.ClientRpcParams::Send
	ClientRpcSendParams_tEEC8C3B8A344904A7DF03B25AB51AEE7CB4930AE  ___Send_0;
	// MLAPI.Messaging.ClientRpcReceiveParams MLAPI.Messaging.ClientRpcParams::Receive
	ClientRpcReceiveParams_t6BF5F3466E03E485E0ADF199DCADF8155238E025  ___Receive_1;

public:
	inline static int32_t get_offset_of_Send_0() { return static_cast<int32_t>(offsetof(ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5, ___Send_0)); }
	inline ClientRpcSendParams_tEEC8C3B8A344904A7DF03B25AB51AEE7CB4930AE  get_Send_0() const { return ___Send_0; }
	inline ClientRpcSendParams_tEEC8C3B8A344904A7DF03B25AB51AEE7CB4930AE * get_address_of_Send_0() { return &___Send_0; }
	inline void set_Send_0(ClientRpcSendParams_tEEC8C3B8A344904A7DF03B25AB51AEE7CB4930AE  value)
	{
		___Send_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Send_0))->___TargetClientIds_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_Receive_1() { return static_cast<int32_t>(offsetof(ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5, ___Receive_1)); }
	inline ClientRpcReceiveParams_t6BF5F3466E03E485E0ADF199DCADF8155238E025  get_Receive_1() const { return ___Receive_1; }
	inline ClientRpcReceiveParams_t6BF5F3466E03E485E0ADF199DCADF8155238E025 * get_address_of_Receive_1() { return &___Receive_1; }
	inline void set_Receive_1(ClientRpcReceiveParams_t6BF5F3466E03E485E0ADF199DCADF8155238E025  value)
	{
		___Receive_1 = value;
	}
};

// Native definition for P/Invoke marshalling of MLAPI.Messaging.ClientRpcParams
struct ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshaled_pinvoke
{
	ClientRpcSendParams_tEEC8C3B8A344904A7DF03B25AB51AEE7CB4930AE_marshaled_pinvoke ___Send_0;
	ClientRpcReceiveParams_t6BF5F3466E03E485E0ADF199DCADF8155238E025  ___Receive_1;
};
// Native definition for COM marshalling of MLAPI.Messaging.ClientRpcParams
struct ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshaled_com
{
	ClientRpcSendParams_tEEC8C3B8A344904A7DF03B25AB51AEE7CB4930AE_marshaled_com ___Send_0;
	ClientRpcReceiveParams_t6BF5F3466E03E485E0ADF199DCADF8155238E025  ___Receive_1;
};

// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// MLAPI.Messaging.ServerRpcParams
struct ServerRpcParams_t74FE2EF257335DF21E21E9B3C58521A25491D63E 
{
public:
	// MLAPI.Messaging.ServerRpcSendParams MLAPI.Messaging.ServerRpcParams::Send
	ServerRpcSendParams_t23FF16DFF529BE6814D940280DF96523CE0CEA89  ___Send_0;
	// MLAPI.Messaging.ServerRpcReceiveParams MLAPI.Messaging.ServerRpcParams::Receive
	ServerRpcReceiveParams_t544584F0C47B5D42DF345FC12EECE75580008B75  ___Receive_1;

public:
	inline static int32_t get_offset_of_Send_0() { return static_cast<int32_t>(offsetof(ServerRpcParams_t74FE2EF257335DF21E21E9B3C58521A25491D63E, ___Send_0)); }
	inline ServerRpcSendParams_t23FF16DFF529BE6814D940280DF96523CE0CEA89  get_Send_0() const { return ___Send_0; }
	inline ServerRpcSendParams_t23FF16DFF529BE6814D940280DF96523CE0CEA89 * get_address_of_Send_0() { return &___Send_0; }
	inline void set_Send_0(ServerRpcSendParams_t23FF16DFF529BE6814D940280DF96523CE0CEA89  value)
	{
		___Send_0 = value;
	}

	inline static int32_t get_offset_of_Receive_1() { return static_cast<int32_t>(offsetof(ServerRpcParams_t74FE2EF257335DF21E21E9B3C58521A25491D63E, ___Receive_1)); }
	inline ServerRpcReceiveParams_t544584F0C47B5D42DF345FC12EECE75580008B75  get_Receive_1() const { return ___Receive_1; }
	inline ServerRpcReceiveParams_t544584F0C47B5D42DF345FC12EECE75580008B75 * get_address_of_Receive_1() { return &___Receive_1; }
	inline void set_Receive_1(ServerRpcReceiveParams_t544584F0C47B5D42DF345FC12EECE75580008B75  value)
	{
		___Receive_1 = value;
	}
};


// MLAPI.Messaging.CustomMessagingManager/HandleNamedMessageDelegate
struct HandleNamedMessageDelegate_t48D537515395A953E5BA2EAD144E5F67F0A5FD95  : public MulticastDelegate_t
{
public:

public:
};


// MLAPI.Messaging.CustomMessagingManager/UnnamedMessageDelegate
struct UnnamedMessageDelegate_t2F9B77602495FA7493A23F7FDBADABF830C9CCA8  : public MulticastDelegate_t
{
public:

public:
};


// MLAPI.NetworkManager/ConnectionApprovedDelegate
struct ConnectionApprovedDelegate_t796D80F1A53D781AD8C7C8AD51C94CDC89EC37F9  : public MulticastDelegate_t
{
public:

public:
};


// MLAPI.NetworkManager/PerformanceDataEventHandler
struct PerformanceDataEventHandler_t64BB43DAA5EF453BF11D2DC16DC169DDC6AF7920  : public MulticastDelegate_t
{
public:

public:
};


// MLAPI.NetworkObject/SpawnDelegate
struct SpawnDelegate_tCE3B6000F86A9D77908A4C5D7B2FDAF0E44BE305  : public MulticastDelegate_t
{
public:

public:
};


// MLAPI.NetworkObject/VisibilityDelegate
struct VisibilityDelegate_tCD922F272D3C2DCB1DE3FF7866D6646DB6672320  : public MulticastDelegate_t
{
public:

public:
};


// MLAPI.SceneManagement.NetworkSceneManager/SceneSwitchStartedDelegate
struct SceneSwitchStartedDelegate_t8CFB7CC811F3DE194B1F1C7E3105BD755DCC7FF4  : public MulticastDelegate_t
{
public:

public:
};


// MLAPI.SceneManagement.NetworkSceneManager/SceneSwitchedDelegate
struct SceneSwitchedDelegate_t6C2314AFBD4ADA9512BADDB300403D6CE2629D84  : public MulticastDelegate_t
{
public:

public:
};


// MLAPI.Spawning.NetworkSpawnManager/DestroyHandlerDelegate
struct DestroyHandlerDelegate_tDD380C1764FBD3606ECCC747A421C8F8BB31720F  : public MulticastDelegate_t
{
public:

public:
};


// MLAPI.Spawning.NetworkSpawnManager/SpawnHandlerDelegate
struct SpawnHandlerDelegate_t9BC50B28F51B8CE7F990FCDD5C94AF5CCEE30C39  : public MulticastDelegate_t
{
public:

public:
};


// MLAPI.Transports.NetworkTransport/RequestChannelsDelegate
struct RequestChannelsDelegate_tE7B26EED431984C7ABC96FB2B3DF3A497E8281C0  : public MulticastDelegate_t
{
public:

public:
};


// MLAPI.Transports.NetworkTransport/TransportEventDelegate
struct TransportEventDelegate_t6756296C9F115149F6A4735F14E96E74C38A17BE  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA  : public MulticastDelegate_t
{
public:

public:
};


// MLAPI.Messaging.RpcBatcher/ReceiveCallbackType
struct ReceiveCallbackType_t36FD76FC1120FA943322E0875256A966B182D585  : public MulticastDelegate_t
{
public:

public:
};


// MLAPI.Messaging.RpcBatcher/SendCallbackType
struct SendCallbackType_t574B1C363DFB9AC796AD9AEBE0EA83C710FD45C8  : public MulticastDelegate_t
{
public:

public:
};


// MLAPI.SceneManagement.SceneSwitchProgress/OnClientLoadedSceneDelegate
struct OnClientLoadedSceneDelegate_t2E0C5BE468E9059E84CD5C733878D8F16C18E15E  : public MulticastDelegate_t
{
public:

public:
};


// MLAPI.SceneManagement.SceneSwitchProgress/OnCompletedDelegate
struct OnCompletedDelegate_t313D7E659CAF907C911009A8FC69E9A0226431ED  : public MulticastDelegate_t
{
public:

public:
};


// MLAPI.Serialization.SerializationManager/BoxedDeserializationDelegate
struct BoxedDeserializationDelegate_tBB4F64607DE5A2C9C4043F7CDE06C620449F3E29  : public MulticastDelegate_t
{
public:

public:
};


// MLAPI.Serialization.SerializationManager/BoxedSerializationDelegate
struct BoxedSerializationDelegate_t63673361FB0667EAA1243BD22C4B2EBC31A35A1B  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// MLAPI.Messaging.__RpcParams
struct __RpcParams_t688A2CF0903E25B4A8ED740ADB62E1B557F22061 
{
public:
	// MLAPI.Messaging.ServerRpcParams MLAPI.Messaging.__RpcParams::Server
	ServerRpcParams_t74FE2EF257335DF21E21E9B3C58521A25491D63E  ___Server_0;
	// MLAPI.Messaging.ClientRpcParams MLAPI.Messaging.__RpcParams::Client
	ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5  ___Client_1;

public:
	inline static int32_t get_offset_of_Server_0() { return static_cast<int32_t>(offsetof(__RpcParams_t688A2CF0903E25B4A8ED740ADB62E1B557F22061, ___Server_0)); }
	inline ServerRpcParams_t74FE2EF257335DF21E21E9B3C58521A25491D63E  get_Server_0() const { return ___Server_0; }
	inline ServerRpcParams_t74FE2EF257335DF21E21E9B3C58521A25491D63E * get_address_of_Server_0() { return &___Server_0; }
	inline void set_Server_0(ServerRpcParams_t74FE2EF257335DF21E21E9B3C58521A25491D63E  value)
	{
		___Server_0 = value;
	}

	inline static int32_t get_offset_of_Client_1() { return static_cast<int32_t>(offsetof(__RpcParams_t688A2CF0903E25B4A8ED740ADB62E1B557F22061, ___Client_1)); }
	inline ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5  get_Client_1() const { return ___Client_1; }
	inline ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5 * get_address_of_Client_1() { return &___Client_1; }
	inline void set_Client_1(ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5  value)
	{
		___Client_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Client_1))->___Send_0))->___TargetClientIds_1), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of MLAPI.Messaging.__RpcParams
struct __RpcParams_t688A2CF0903E25B4A8ED740ADB62E1B557F22061_marshaled_pinvoke
{
	ServerRpcParams_t74FE2EF257335DF21E21E9B3C58521A25491D63E  ___Server_0;
	ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshaled_pinvoke ___Client_1;
};
// Native definition for COM marshalling of MLAPI.Messaging.__RpcParams
struct __RpcParams_t688A2CF0903E25B4A8ED740ADB62E1B557F22061_marshaled_com
{
	ServerRpcParams_t74FE2EF257335DF21E21E9B3C58521A25491D63E  ___Server_0;
	ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshaled_com ___Client_1;
};

// MLAPI.NetworkManager
struct NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MLAPI.Messaging.RpcQueueContainer MLAPI.NetworkManager::<RpcQueueContainer>k__BackingField
	RpcQueueContainer_t7530418AFC2B684BD1CB0799E9C10A66B2F3E572 * ___U3CRpcQueueContainerU3Ek__BackingField_12;
	// MLAPI.NetworkTickSystem MLAPI.NetworkManager::<NetworkTickSystem>k__BackingField
	NetworkTickSystem_tE0D11EE8F9DC64F1B98E1B405926D8BA4A7C850F * ___U3CNetworkTickSystemU3Ek__BackingField_13;
	// System.Single MLAPI.NetworkManager::m_NetworkTimeOffset
	float ___m_NetworkTimeOffset_15;
	// System.Single MLAPI.NetworkManager::m_CurrentNetworkTimeOffset
	float ___m_CurrentNetworkTimeOffset_16;
	// System.Boolean MLAPI.NetworkManager::DontDestroy
	bool ___DontDestroy_17;
	// System.Boolean MLAPI.NetworkManager::RunInBackground
	bool ___RunInBackground_18;
	// MLAPI.Logging.LogLevel MLAPI.NetworkManager::LogLevel
	int32_t ___LogLevel_19;
	// System.UInt64 MLAPI.NetworkManager::m_LocalClientId
	uint64_t ___m_LocalClientId_21;
	// System.Collections.Generic.Dictionary`2<System.UInt64,MLAPI.Connection.NetworkClient> MLAPI.NetworkManager::ConnectedClients
	Dictionary_2_t1F45833D57768B96BCAA47F7DDD032561D0D84BD * ___ConnectedClients_22;
	// System.Collections.Generic.List`1<MLAPI.Connection.NetworkClient> MLAPI.NetworkManager::ConnectedClientsList
	List_1_t3A508A14B962436191D0F4A254F5A2F44CDBBB1F * ___ConnectedClientsList_23;
	// System.Collections.Generic.Dictionary`2<System.UInt64,MLAPI.Connection.PendingClient> MLAPI.NetworkManager::PendingClients
	Dictionary_2_tB515236EBFA6EB2166398426DC099A96363476D4 * ___PendingClients_24;
	// System.Boolean MLAPI.NetworkManager::<IsServer>k__BackingField
	bool ___U3CIsServerU3Ek__BackingField_25;
	// System.Boolean MLAPI.NetworkManager::<IsClient>k__BackingField
	bool ___U3CIsClientU3Ek__BackingField_26;
	// System.Boolean MLAPI.NetworkManager::<IsListening>k__BackingField
	bool ___U3CIsListeningU3Ek__BackingField_27;
	// System.Boolean MLAPI.NetworkManager::<IsConnectedClient>k__BackingField
	bool ___U3CIsConnectedClientU3Ek__BackingField_28;
	// System.Action`1<System.UInt64> MLAPI.NetworkManager::OnClientConnectedCallback
	Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 * ___OnClientConnectedCallback_29;
	// System.Action`1<System.UInt64> MLAPI.NetworkManager::OnClientDisconnectCallback
	Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 * ___OnClientDisconnectCallback_30;
	// System.Action MLAPI.NetworkManager::OnServerStarted
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnServerStarted_31;
	// System.Action`3<System.Byte[],System.UInt64,MLAPI.NetworkManager/ConnectionApprovedDelegate> MLAPI.NetworkManager::ConnectionApprovalCallback
	Action_3_tB63365B9C49B76072D34290B5E212D7247DC49DA * ___ConnectionApprovalCallback_32;
	// MLAPI.Configuration.NetworkConfig MLAPI.NetworkManager::NetworkConfig
	NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE * ___NetworkConfig_33;
	// System.String MLAPI.NetworkManager::<ConnectedHostname>k__BackingField
	String_t* ___U3CConnectedHostnameU3Ek__BackingField_34;
	// System.Single MLAPI.NetworkManager::m_LastReceiveTickTime
	float ___m_LastReceiveTickTime_36;
	// System.Single MLAPI.NetworkManager::m_LastEventTickTime
	float ___m_LastEventTickTime_37;
	// System.Single MLAPI.NetworkManager::m_LastTimeSyncTime
	float ___m_LastTimeSyncTime_38;
	// MLAPI.Serialization.NetworkBuffer MLAPI.NetworkManager::m_InputBufferWrapper
	NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 * ___m_InputBufferWrapper_39;
	// MLAPI.Messaging.RpcBatcher MLAPI.NetworkManager::m_RpcBatcher
	RpcBatcher_t7190F2A9459E99FE3CB45E4F51BA46398799AA57 * ___m_RpcBatcher_40;
	// System.Collections.Generic.List`1<MLAPI.NetworkObject> MLAPI.NetworkManager::m_ObservedObjects
	List_1_tC61ECBC114E2583254C366ECBFE31AFC2D38149B * ___m_ObservedObjects_41;

public:
	inline static int32_t get_offset_of_U3CRpcQueueContainerU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___U3CRpcQueueContainerU3Ek__BackingField_12)); }
	inline RpcQueueContainer_t7530418AFC2B684BD1CB0799E9C10A66B2F3E572 * get_U3CRpcQueueContainerU3Ek__BackingField_12() const { return ___U3CRpcQueueContainerU3Ek__BackingField_12; }
	inline RpcQueueContainer_t7530418AFC2B684BD1CB0799E9C10A66B2F3E572 ** get_address_of_U3CRpcQueueContainerU3Ek__BackingField_12() { return &___U3CRpcQueueContainerU3Ek__BackingField_12; }
	inline void set_U3CRpcQueueContainerU3Ek__BackingField_12(RpcQueueContainer_t7530418AFC2B684BD1CB0799E9C10A66B2F3E572 * value)
	{
		___U3CRpcQueueContainerU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRpcQueueContainerU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNetworkTickSystemU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___U3CNetworkTickSystemU3Ek__BackingField_13)); }
	inline NetworkTickSystem_tE0D11EE8F9DC64F1B98E1B405926D8BA4A7C850F * get_U3CNetworkTickSystemU3Ek__BackingField_13() const { return ___U3CNetworkTickSystemU3Ek__BackingField_13; }
	inline NetworkTickSystem_tE0D11EE8F9DC64F1B98E1B405926D8BA4A7C850F ** get_address_of_U3CNetworkTickSystemU3Ek__BackingField_13() { return &___U3CNetworkTickSystemU3Ek__BackingField_13; }
	inline void set_U3CNetworkTickSystemU3Ek__BackingField_13(NetworkTickSystem_tE0D11EE8F9DC64F1B98E1B405926D8BA4A7C850F * value)
	{
		___U3CNetworkTickSystemU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNetworkTickSystemU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_NetworkTimeOffset_15() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___m_NetworkTimeOffset_15)); }
	inline float get_m_NetworkTimeOffset_15() const { return ___m_NetworkTimeOffset_15; }
	inline float* get_address_of_m_NetworkTimeOffset_15() { return &___m_NetworkTimeOffset_15; }
	inline void set_m_NetworkTimeOffset_15(float value)
	{
		___m_NetworkTimeOffset_15 = value;
	}

	inline static int32_t get_offset_of_m_CurrentNetworkTimeOffset_16() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___m_CurrentNetworkTimeOffset_16)); }
	inline float get_m_CurrentNetworkTimeOffset_16() const { return ___m_CurrentNetworkTimeOffset_16; }
	inline float* get_address_of_m_CurrentNetworkTimeOffset_16() { return &___m_CurrentNetworkTimeOffset_16; }
	inline void set_m_CurrentNetworkTimeOffset_16(float value)
	{
		___m_CurrentNetworkTimeOffset_16 = value;
	}

	inline static int32_t get_offset_of_DontDestroy_17() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___DontDestroy_17)); }
	inline bool get_DontDestroy_17() const { return ___DontDestroy_17; }
	inline bool* get_address_of_DontDestroy_17() { return &___DontDestroy_17; }
	inline void set_DontDestroy_17(bool value)
	{
		___DontDestroy_17 = value;
	}

	inline static int32_t get_offset_of_RunInBackground_18() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___RunInBackground_18)); }
	inline bool get_RunInBackground_18() const { return ___RunInBackground_18; }
	inline bool* get_address_of_RunInBackground_18() { return &___RunInBackground_18; }
	inline void set_RunInBackground_18(bool value)
	{
		___RunInBackground_18 = value;
	}

	inline static int32_t get_offset_of_LogLevel_19() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___LogLevel_19)); }
	inline int32_t get_LogLevel_19() const { return ___LogLevel_19; }
	inline int32_t* get_address_of_LogLevel_19() { return &___LogLevel_19; }
	inline void set_LogLevel_19(int32_t value)
	{
		___LogLevel_19 = value;
	}

	inline static int32_t get_offset_of_m_LocalClientId_21() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___m_LocalClientId_21)); }
	inline uint64_t get_m_LocalClientId_21() const { return ___m_LocalClientId_21; }
	inline uint64_t* get_address_of_m_LocalClientId_21() { return &___m_LocalClientId_21; }
	inline void set_m_LocalClientId_21(uint64_t value)
	{
		___m_LocalClientId_21 = value;
	}

	inline static int32_t get_offset_of_ConnectedClients_22() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___ConnectedClients_22)); }
	inline Dictionary_2_t1F45833D57768B96BCAA47F7DDD032561D0D84BD * get_ConnectedClients_22() const { return ___ConnectedClients_22; }
	inline Dictionary_2_t1F45833D57768B96BCAA47F7DDD032561D0D84BD ** get_address_of_ConnectedClients_22() { return &___ConnectedClients_22; }
	inline void set_ConnectedClients_22(Dictionary_2_t1F45833D57768B96BCAA47F7DDD032561D0D84BD * value)
	{
		___ConnectedClients_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectedClients_22), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectedClientsList_23() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___ConnectedClientsList_23)); }
	inline List_1_t3A508A14B962436191D0F4A254F5A2F44CDBBB1F * get_ConnectedClientsList_23() const { return ___ConnectedClientsList_23; }
	inline List_1_t3A508A14B962436191D0F4A254F5A2F44CDBBB1F ** get_address_of_ConnectedClientsList_23() { return &___ConnectedClientsList_23; }
	inline void set_ConnectedClientsList_23(List_1_t3A508A14B962436191D0F4A254F5A2F44CDBBB1F * value)
	{
		___ConnectedClientsList_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectedClientsList_23), (void*)value);
	}

	inline static int32_t get_offset_of_PendingClients_24() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___PendingClients_24)); }
	inline Dictionary_2_tB515236EBFA6EB2166398426DC099A96363476D4 * get_PendingClients_24() const { return ___PendingClients_24; }
	inline Dictionary_2_tB515236EBFA6EB2166398426DC099A96363476D4 ** get_address_of_PendingClients_24() { return &___PendingClients_24; }
	inline void set_PendingClients_24(Dictionary_2_tB515236EBFA6EB2166398426DC099A96363476D4 * value)
	{
		___PendingClients_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PendingClients_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsServerU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___U3CIsServerU3Ek__BackingField_25)); }
	inline bool get_U3CIsServerU3Ek__BackingField_25() const { return ___U3CIsServerU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CIsServerU3Ek__BackingField_25() { return &___U3CIsServerU3Ek__BackingField_25; }
	inline void set_U3CIsServerU3Ek__BackingField_25(bool value)
	{
		___U3CIsServerU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CIsClientU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___U3CIsClientU3Ek__BackingField_26)); }
	inline bool get_U3CIsClientU3Ek__BackingField_26() const { return ___U3CIsClientU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CIsClientU3Ek__BackingField_26() { return &___U3CIsClientU3Ek__BackingField_26; }
	inline void set_U3CIsClientU3Ek__BackingField_26(bool value)
	{
		___U3CIsClientU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CIsListeningU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___U3CIsListeningU3Ek__BackingField_27)); }
	inline bool get_U3CIsListeningU3Ek__BackingField_27() const { return ___U3CIsListeningU3Ek__BackingField_27; }
	inline bool* get_address_of_U3CIsListeningU3Ek__BackingField_27() { return &___U3CIsListeningU3Ek__BackingField_27; }
	inline void set_U3CIsListeningU3Ek__BackingField_27(bool value)
	{
		___U3CIsListeningU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CIsConnectedClientU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___U3CIsConnectedClientU3Ek__BackingField_28)); }
	inline bool get_U3CIsConnectedClientU3Ek__BackingField_28() const { return ___U3CIsConnectedClientU3Ek__BackingField_28; }
	inline bool* get_address_of_U3CIsConnectedClientU3Ek__BackingField_28() { return &___U3CIsConnectedClientU3Ek__BackingField_28; }
	inline void set_U3CIsConnectedClientU3Ek__BackingField_28(bool value)
	{
		___U3CIsConnectedClientU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_OnClientConnectedCallback_29() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___OnClientConnectedCallback_29)); }
	inline Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 * get_OnClientConnectedCallback_29() const { return ___OnClientConnectedCallback_29; }
	inline Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 ** get_address_of_OnClientConnectedCallback_29() { return &___OnClientConnectedCallback_29; }
	inline void set_OnClientConnectedCallback_29(Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 * value)
	{
		___OnClientConnectedCallback_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientConnectedCallback_29), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientDisconnectCallback_30() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___OnClientDisconnectCallback_30)); }
	inline Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 * get_OnClientDisconnectCallback_30() const { return ___OnClientDisconnectCallback_30; }
	inline Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 ** get_address_of_OnClientDisconnectCallback_30() { return &___OnClientDisconnectCallback_30; }
	inline void set_OnClientDisconnectCallback_30(Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 * value)
	{
		___OnClientDisconnectCallback_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientDisconnectCallback_30), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerStarted_31() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___OnServerStarted_31)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnServerStarted_31() const { return ___OnServerStarted_31; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnServerStarted_31() { return &___OnServerStarted_31; }
	inline void set_OnServerStarted_31(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnServerStarted_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerStarted_31), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectionApprovalCallback_32() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___ConnectionApprovalCallback_32)); }
	inline Action_3_tB63365B9C49B76072D34290B5E212D7247DC49DA * get_ConnectionApprovalCallback_32() const { return ___ConnectionApprovalCallback_32; }
	inline Action_3_tB63365B9C49B76072D34290B5E212D7247DC49DA ** get_address_of_ConnectionApprovalCallback_32() { return &___ConnectionApprovalCallback_32; }
	inline void set_ConnectionApprovalCallback_32(Action_3_tB63365B9C49B76072D34290B5E212D7247DC49DA * value)
	{
		___ConnectionApprovalCallback_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectionApprovalCallback_32), (void*)value);
	}

	inline static int32_t get_offset_of_NetworkConfig_33() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___NetworkConfig_33)); }
	inline NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE * get_NetworkConfig_33() const { return ___NetworkConfig_33; }
	inline NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE ** get_address_of_NetworkConfig_33() { return &___NetworkConfig_33; }
	inline void set_NetworkConfig_33(NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE * value)
	{
		___NetworkConfig_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetworkConfig_33), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConnectedHostnameU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___U3CConnectedHostnameU3Ek__BackingField_34)); }
	inline String_t* get_U3CConnectedHostnameU3Ek__BackingField_34() const { return ___U3CConnectedHostnameU3Ek__BackingField_34; }
	inline String_t** get_address_of_U3CConnectedHostnameU3Ek__BackingField_34() { return &___U3CConnectedHostnameU3Ek__BackingField_34; }
	inline void set_U3CConnectedHostnameU3Ek__BackingField_34(String_t* value)
	{
		___U3CConnectedHostnameU3Ek__BackingField_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConnectedHostnameU3Ek__BackingField_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastReceiveTickTime_36() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___m_LastReceiveTickTime_36)); }
	inline float get_m_LastReceiveTickTime_36() const { return ___m_LastReceiveTickTime_36; }
	inline float* get_address_of_m_LastReceiveTickTime_36() { return &___m_LastReceiveTickTime_36; }
	inline void set_m_LastReceiveTickTime_36(float value)
	{
		___m_LastReceiveTickTime_36 = value;
	}

	inline static int32_t get_offset_of_m_LastEventTickTime_37() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___m_LastEventTickTime_37)); }
	inline float get_m_LastEventTickTime_37() const { return ___m_LastEventTickTime_37; }
	inline float* get_address_of_m_LastEventTickTime_37() { return &___m_LastEventTickTime_37; }
	inline void set_m_LastEventTickTime_37(float value)
	{
		___m_LastEventTickTime_37 = value;
	}

	inline static int32_t get_offset_of_m_LastTimeSyncTime_38() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___m_LastTimeSyncTime_38)); }
	inline float get_m_LastTimeSyncTime_38() const { return ___m_LastTimeSyncTime_38; }
	inline float* get_address_of_m_LastTimeSyncTime_38() { return &___m_LastTimeSyncTime_38; }
	inline void set_m_LastTimeSyncTime_38(float value)
	{
		___m_LastTimeSyncTime_38 = value;
	}

	inline static int32_t get_offset_of_m_InputBufferWrapper_39() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___m_InputBufferWrapper_39)); }
	inline NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 * get_m_InputBufferWrapper_39() const { return ___m_InputBufferWrapper_39; }
	inline NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 ** get_address_of_m_InputBufferWrapper_39() { return &___m_InputBufferWrapper_39; }
	inline void set_m_InputBufferWrapper_39(NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 * value)
	{
		___m_InputBufferWrapper_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputBufferWrapper_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_RpcBatcher_40() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___m_RpcBatcher_40)); }
	inline RpcBatcher_t7190F2A9459E99FE3CB45E4F51BA46398799AA57 * get_m_RpcBatcher_40() const { return ___m_RpcBatcher_40; }
	inline RpcBatcher_t7190F2A9459E99FE3CB45E4F51BA46398799AA57 ** get_address_of_m_RpcBatcher_40() { return &___m_RpcBatcher_40; }
	inline void set_m_RpcBatcher_40(RpcBatcher_t7190F2A9459E99FE3CB45E4F51BA46398799AA57 * value)
	{
		___m_RpcBatcher_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RpcBatcher_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_ObservedObjects_41() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE, ___m_ObservedObjects_41)); }
	inline List_1_tC61ECBC114E2583254C366ECBFE31AFC2D38149B * get_m_ObservedObjects_41() const { return ___m_ObservedObjects_41; }
	inline List_1_tC61ECBC114E2583254C366ECBFE31AFC2D38149B ** get_address_of_m_ObservedObjects_41() { return &___m_ObservedObjects_41; }
	inline void set_m_ObservedObjects_41(List_1_tC61ECBC114E2583254C366ECBFE31AFC2D38149B * value)
	{
		___m_ObservedObjects_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ObservedObjects_41), (void*)value);
	}
};

struct NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.UInt32,System.Action`3<MLAPI.NetworkBehaviour,MLAPI.Serialization.NetworkSerializer,MLAPI.Messaging.__RpcParams>> MLAPI.NetworkManager::__ntable
	Dictionary_2_t8F4CFFA1F5482842327C32BE6E50334EBEA0B3A0 * _____ntable_4;
	// Unity.Profiling.ProfilerMarker MLAPI.NetworkManager::s_EventTick
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_EventTick_5;
	// Unity.Profiling.ProfilerMarker MLAPI.NetworkManager::s_ReceiveTick
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_ReceiveTick_6;
	// Unity.Profiling.ProfilerMarker MLAPI.NetworkManager::s_SyncTime
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_SyncTime_7;
	// Unity.Profiling.ProfilerMarker MLAPI.NetworkManager::s_TransportConnect
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_TransportConnect_8;
	// Unity.Profiling.ProfilerMarker MLAPI.NetworkManager::s_HandleIncomingData
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_HandleIncomingData_9;
	// Unity.Profiling.ProfilerMarker MLAPI.NetworkManager::s_TransportDisconnect
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_TransportDisconnect_10;
	// Unity.Profiling.ProfilerMarker MLAPI.NetworkManager::s_InvokeRpc
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_InvokeRpc_11;
	// MLAPI.NetworkManager/PerformanceDataEventHandler MLAPI.NetworkManager::OnPerformanceDataEvent
	PerformanceDataEventHandler_t64BB43DAA5EF453BF11D2DC16DC169DDC6AF7920 * ___OnPerformanceDataEvent_14;
	// MLAPI.NetworkManager MLAPI.NetworkManager::<Singleton>k__BackingField
	NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * ___U3CSingletonU3Ek__BackingField_20;
	// System.Action MLAPI.NetworkManager::OnSingletonReady
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSingletonReady_35;

public:
	inline static int32_t get_offset_of___ntable_4() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_StaticFields, _____ntable_4)); }
	inline Dictionary_2_t8F4CFFA1F5482842327C32BE6E50334EBEA0B3A0 * get___ntable_4() const { return _____ntable_4; }
	inline Dictionary_2_t8F4CFFA1F5482842327C32BE6E50334EBEA0B3A0 ** get_address_of___ntable_4() { return &_____ntable_4; }
	inline void set___ntable_4(Dictionary_2_t8F4CFFA1F5482842327C32BE6E50334EBEA0B3A0 * value)
	{
		_____ntable_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&_____ntable_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_EventTick_5() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_StaticFields, ___s_EventTick_5)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_EventTick_5() const { return ___s_EventTick_5; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_EventTick_5() { return &___s_EventTick_5; }
	inline void set_s_EventTick_5(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_EventTick_5 = value;
	}

	inline static int32_t get_offset_of_s_ReceiveTick_6() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_StaticFields, ___s_ReceiveTick_6)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_ReceiveTick_6() const { return ___s_ReceiveTick_6; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_ReceiveTick_6() { return &___s_ReceiveTick_6; }
	inline void set_s_ReceiveTick_6(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_ReceiveTick_6 = value;
	}

	inline static int32_t get_offset_of_s_SyncTime_7() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_StaticFields, ___s_SyncTime_7)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_SyncTime_7() const { return ___s_SyncTime_7; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_SyncTime_7() { return &___s_SyncTime_7; }
	inline void set_s_SyncTime_7(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_SyncTime_7 = value;
	}

	inline static int32_t get_offset_of_s_TransportConnect_8() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_StaticFields, ___s_TransportConnect_8)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_TransportConnect_8() const { return ___s_TransportConnect_8; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_TransportConnect_8() { return &___s_TransportConnect_8; }
	inline void set_s_TransportConnect_8(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_TransportConnect_8 = value;
	}

	inline static int32_t get_offset_of_s_HandleIncomingData_9() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_StaticFields, ___s_HandleIncomingData_9)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_HandleIncomingData_9() const { return ___s_HandleIncomingData_9; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_HandleIncomingData_9() { return &___s_HandleIncomingData_9; }
	inline void set_s_HandleIncomingData_9(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_HandleIncomingData_9 = value;
	}

	inline static int32_t get_offset_of_s_TransportDisconnect_10() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_StaticFields, ___s_TransportDisconnect_10)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_TransportDisconnect_10() const { return ___s_TransportDisconnect_10; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_TransportDisconnect_10() { return &___s_TransportDisconnect_10; }
	inline void set_s_TransportDisconnect_10(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_TransportDisconnect_10 = value;
	}

	inline static int32_t get_offset_of_s_InvokeRpc_11() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_StaticFields, ___s_InvokeRpc_11)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_InvokeRpc_11() const { return ___s_InvokeRpc_11; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_InvokeRpc_11() { return &___s_InvokeRpc_11; }
	inline void set_s_InvokeRpc_11(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_InvokeRpc_11 = value;
	}

	inline static int32_t get_offset_of_OnPerformanceDataEvent_14() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_StaticFields, ___OnPerformanceDataEvent_14)); }
	inline PerformanceDataEventHandler_t64BB43DAA5EF453BF11D2DC16DC169DDC6AF7920 * get_OnPerformanceDataEvent_14() const { return ___OnPerformanceDataEvent_14; }
	inline PerformanceDataEventHandler_t64BB43DAA5EF453BF11D2DC16DC169DDC6AF7920 ** get_address_of_OnPerformanceDataEvent_14() { return &___OnPerformanceDataEvent_14; }
	inline void set_OnPerformanceDataEvent_14(PerformanceDataEventHandler_t64BB43DAA5EF453BF11D2DC16DC169DDC6AF7920 * value)
	{
		___OnPerformanceDataEvent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPerformanceDataEvent_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSingletonU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_StaticFields, ___U3CSingletonU3Ek__BackingField_20)); }
	inline NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * get_U3CSingletonU3Ek__BackingField_20() const { return ___U3CSingletonU3Ek__BackingField_20; }
	inline NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE ** get_address_of_U3CSingletonU3Ek__BackingField_20() { return &___U3CSingletonU3Ek__BackingField_20; }
	inline void set_U3CSingletonU3Ek__BackingField_20(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * value)
	{
		___U3CSingletonU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSingletonU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_OnSingletonReady_35() { return static_cast<int32_t>(offsetof(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_StaticFields, ___OnSingletonReady_35)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSingletonReady_35() const { return ___OnSingletonReady_35; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSingletonReady_35() { return &___OnSingletonReady_35; }
	inline void set_OnSingletonReady_35(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSingletonReady_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSingletonReady_35), (void*)value);
	}
};


// MLAPI.NetworkObject
struct NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.UInt64 MLAPI.NetworkObject::<NetworkObjectId>k__BackingField
	uint64_t ___U3CNetworkObjectIdU3Ek__BackingField_4;
	// System.Nullable`1<System.UInt64> MLAPI.NetworkObject::OwnerClientIdInternal
	Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  ___OwnerClientIdInternal_5;
	// System.UInt64 MLAPI.NetworkObject::NetworkInstanceId
	uint64_t ___NetworkInstanceId_6;
	// System.UInt64 MLAPI.NetworkObject::PrefabHash
	uint64_t ___PrefabHash_7;
	// System.String MLAPI.NetworkObject::PrefabHashGenerator
	String_t* ___PrefabHashGenerator_8;
	// System.Boolean MLAPI.NetworkObject::AlwaysReplicateAsRoot
	bool ___AlwaysReplicateAsRoot_9;
	// System.Boolean MLAPI.NetworkObject::<IsPlayerObject>k__BackingField
	bool ___U3CIsPlayerObjectU3Ek__BackingField_10;
	// System.Boolean MLAPI.NetworkObject::<IsSpawned>k__BackingField
	bool ___U3CIsSpawnedU3Ek__BackingField_11;
	// System.Nullable`1<System.Boolean> MLAPI.NetworkObject::<IsSceneObject>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CIsSceneObjectU3Ek__BackingField_12;
	// System.Boolean MLAPI.NetworkObject::<DestroyWithScene>k__BackingField
	bool ___U3CDestroyWithSceneU3Ek__BackingField_13;
	// MLAPI.NetworkObject/VisibilityDelegate MLAPI.NetworkObject::CheckObjectVisibility
	VisibilityDelegate_tCD922F272D3C2DCB1DE3FF7866D6646DB6672320 * ___CheckObjectVisibility_14;
	// MLAPI.NetworkObject/SpawnDelegate MLAPI.NetworkObject::IncludeTransformWhenSpawning
	SpawnDelegate_tCE3B6000F86A9D77908A4C5D7B2FDAF0E44BE305 * ___IncludeTransformWhenSpawning_15;
	// System.Boolean MLAPI.NetworkObject::DontDestroyWithOwner
	bool ___DontDestroyWithOwner_16;
	// System.Collections.Generic.HashSet`1<System.UInt64> MLAPI.NetworkObject::m_Observers
	HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * ___m_Observers_17;
	// System.Collections.Generic.List`1<MLAPI.NetworkBehaviour> MLAPI.NetworkObject::m_ChildNetworkBehaviours
	List_1_tD347F97F8E9D90D6ABC5A86061E3E64721D4010B * ___m_ChildNetworkBehaviours_18;

public:
	inline static int32_t get_offset_of_U3CNetworkObjectIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60, ___U3CNetworkObjectIdU3Ek__BackingField_4)); }
	inline uint64_t get_U3CNetworkObjectIdU3Ek__BackingField_4() const { return ___U3CNetworkObjectIdU3Ek__BackingField_4; }
	inline uint64_t* get_address_of_U3CNetworkObjectIdU3Ek__BackingField_4() { return &___U3CNetworkObjectIdU3Ek__BackingField_4; }
	inline void set_U3CNetworkObjectIdU3Ek__BackingField_4(uint64_t value)
	{
		___U3CNetworkObjectIdU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_OwnerClientIdInternal_5() { return static_cast<int32_t>(offsetof(NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60, ___OwnerClientIdInternal_5)); }
	inline Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  get_OwnerClientIdInternal_5() const { return ___OwnerClientIdInternal_5; }
	inline Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C * get_address_of_OwnerClientIdInternal_5() { return &___OwnerClientIdInternal_5; }
	inline void set_OwnerClientIdInternal_5(Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  value)
	{
		___OwnerClientIdInternal_5 = value;
	}

	inline static int32_t get_offset_of_NetworkInstanceId_6() { return static_cast<int32_t>(offsetof(NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60, ___NetworkInstanceId_6)); }
	inline uint64_t get_NetworkInstanceId_6() const { return ___NetworkInstanceId_6; }
	inline uint64_t* get_address_of_NetworkInstanceId_6() { return &___NetworkInstanceId_6; }
	inline void set_NetworkInstanceId_6(uint64_t value)
	{
		___NetworkInstanceId_6 = value;
	}

	inline static int32_t get_offset_of_PrefabHash_7() { return static_cast<int32_t>(offsetof(NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60, ___PrefabHash_7)); }
	inline uint64_t get_PrefabHash_7() const { return ___PrefabHash_7; }
	inline uint64_t* get_address_of_PrefabHash_7() { return &___PrefabHash_7; }
	inline void set_PrefabHash_7(uint64_t value)
	{
		___PrefabHash_7 = value;
	}

	inline static int32_t get_offset_of_PrefabHashGenerator_8() { return static_cast<int32_t>(offsetof(NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60, ___PrefabHashGenerator_8)); }
	inline String_t* get_PrefabHashGenerator_8() const { return ___PrefabHashGenerator_8; }
	inline String_t** get_address_of_PrefabHashGenerator_8() { return &___PrefabHashGenerator_8; }
	inline void set_PrefabHashGenerator_8(String_t* value)
	{
		___PrefabHashGenerator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PrefabHashGenerator_8), (void*)value);
	}

	inline static int32_t get_offset_of_AlwaysReplicateAsRoot_9() { return static_cast<int32_t>(offsetof(NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60, ___AlwaysReplicateAsRoot_9)); }
	inline bool get_AlwaysReplicateAsRoot_9() const { return ___AlwaysReplicateAsRoot_9; }
	inline bool* get_address_of_AlwaysReplicateAsRoot_9() { return &___AlwaysReplicateAsRoot_9; }
	inline void set_AlwaysReplicateAsRoot_9(bool value)
	{
		___AlwaysReplicateAsRoot_9 = value;
	}

	inline static int32_t get_offset_of_U3CIsPlayerObjectU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60, ___U3CIsPlayerObjectU3Ek__BackingField_10)); }
	inline bool get_U3CIsPlayerObjectU3Ek__BackingField_10() const { return ___U3CIsPlayerObjectU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIsPlayerObjectU3Ek__BackingField_10() { return &___U3CIsPlayerObjectU3Ek__BackingField_10; }
	inline void set_U3CIsPlayerObjectU3Ek__BackingField_10(bool value)
	{
		___U3CIsPlayerObjectU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CIsSpawnedU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60, ___U3CIsSpawnedU3Ek__BackingField_11)); }
	inline bool get_U3CIsSpawnedU3Ek__BackingField_11() const { return ___U3CIsSpawnedU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CIsSpawnedU3Ek__BackingField_11() { return &___U3CIsSpawnedU3Ek__BackingField_11; }
	inline void set_U3CIsSpawnedU3Ek__BackingField_11(bool value)
	{
		___U3CIsSpawnedU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CIsSceneObjectU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60, ___U3CIsSceneObjectU3Ek__BackingField_12)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CIsSceneObjectU3Ek__BackingField_12() const { return ___U3CIsSceneObjectU3Ek__BackingField_12; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CIsSceneObjectU3Ek__BackingField_12() { return &___U3CIsSceneObjectU3Ek__BackingField_12; }
	inline void set_U3CIsSceneObjectU3Ek__BackingField_12(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CIsSceneObjectU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CDestroyWithSceneU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60, ___U3CDestroyWithSceneU3Ek__BackingField_13)); }
	inline bool get_U3CDestroyWithSceneU3Ek__BackingField_13() const { return ___U3CDestroyWithSceneU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CDestroyWithSceneU3Ek__BackingField_13() { return &___U3CDestroyWithSceneU3Ek__BackingField_13; }
	inline void set_U3CDestroyWithSceneU3Ek__BackingField_13(bool value)
	{
		___U3CDestroyWithSceneU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_CheckObjectVisibility_14() { return static_cast<int32_t>(offsetof(NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60, ___CheckObjectVisibility_14)); }
	inline VisibilityDelegate_tCD922F272D3C2DCB1DE3FF7866D6646DB6672320 * get_CheckObjectVisibility_14() const { return ___CheckObjectVisibility_14; }
	inline VisibilityDelegate_tCD922F272D3C2DCB1DE3FF7866D6646DB6672320 ** get_address_of_CheckObjectVisibility_14() { return &___CheckObjectVisibility_14; }
	inline void set_CheckObjectVisibility_14(VisibilityDelegate_tCD922F272D3C2DCB1DE3FF7866D6646DB6672320 * value)
	{
		___CheckObjectVisibility_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckObjectVisibility_14), (void*)value);
	}

	inline static int32_t get_offset_of_IncludeTransformWhenSpawning_15() { return static_cast<int32_t>(offsetof(NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60, ___IncludeTransformWhenSpawning_15)); }
	inline SpawnDelegate_tCE3B6000F86A9D77908A4C5D7B2FDAF0E44BE305 * get_IncludeTransformWhenSpawning_15() const { return ___IncludeTransformWhenSpawning_15; }
	inline SpawnDelegate_tCE3B6000F86A9D77908A4C5D7B2FDAF0E44BE305 ** get_address_of_IncludeTransformWhenSpawning_15() { return &___IncludeTransformWhenSpawning_15; }
	inline void set_IncludeTransformWhenSpawning_15(SpawnDelegate_tCE3B6000F86A9D77908A4C5D7B2FDAF0E44BE305 * value)
	{
		___IncludeTransformWhenSpawning_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IncludeTransformWhenSpawning_15), (void*)value);
	}

	inline static int32_t get_offset_of_DontDestroyWithOwner_16() { return static_cast<int32_t>(offsetof(NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60, ___DontDestroyWithOwner_16)); }
	inline bool get_DontDestroyWithOwner_16() const { return ___DontDestroyWithOwner_16; }
	inline bool* get_address_of_DontDestroyWithOwner_16() { return &___DontDestroyWithOwner_16; }
	inline void set_DontDestroyWithOwner_16(bool value)
	{
		___DontDestroyWithOwner_16 = value;
	}

	inline static int32_t get_offset_of_m_Observers_17() { return static_cast<int32_t>(offsetof(NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60, ___m_Observers_17)); }
	inline HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * get_m_Observers_17() const { return ___m_Observers_17; }
	inline HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E ** get_address_of_m_Observers_17() { return &___m_Observers_17; }
	inline void set_m_Observers_17(HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * value)
	{
		___m_Observers_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Observers_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChildNetworkBehaviours_18() { return static_cast<int32_t>(offsetof(NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60, ___m_ChildNetworkBehaviours_18)); }
	inline List_1_tD347F97F8E9D90D6ABC5A86061E3E64721D4010B * get_m_ChildNetworkBehaviours_18() const { return ___m_ChildNetworkBehaviours_18; }
	inline List_1_tD347F97F8E9D90D6ABC5A86061E3E64721D4010B ** get_address_of_m_ChildNetworkBehaviours_18() { return &___m_ChildNetworkBehaviours_18; }
	inline void set_m_ChildNetworkBehaviours_18(List_1_tD347F97F8E9D90D6ABC5A86061E3E64721D4010B * value)
	{
		___m_ChildNetworkBehaviours_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildNetworkBehaviours_18), (void*)value);
	}
};


// MLAPI.Transports.NetworkTransport
struct NetworkTransport_tDF741042D9F54F61AF98FA3645A80D42374A54D3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MLAPI.Transports.NetworkTransport/RequestChannelsDelegate MLAPI.Transports.NetworkTransport::OnChannelRegistration
	RequestChannelsDelegate_tE7B26EED431984C7ABC96FB2B3DF3A497E8281C0 * ___OnChannelRegistration_4;
	// MLAPI.Transports.TransportChannel[] MLAPI.Transports.NetworkTransport::m_ChannelsCache
	TransportChannelU5BU5D_t208E5D124870294ED76728A47941D06E0ADA7411* ___m_ChannelsCache_5;
	// MLAPI.Transports.TransportChannel[] MLAPI.Transports.NetworkTransport::MLAPI_INTERNAL_CHANNELS
	TransportChannelU5BU5D_t208E5D124870294ED76728A47941D06E0ADA7411* ___MLAPI_INTERNAL_CHANNELS_6;
	// MLAPI.Transports.NetworkTransport/TransportEventDelegate MLAPI.Transports.NetworkTransport::OnTransportEvent
	TransportEventDelegate_t6756296C9F115149F6A4735F14E96E74C38A17BE * ___OnTransportEvent_7;

public:
	inline static int32_t get_offset_of_OnChannelRegistration_4() { return static_cast<int32_t>(offsetof(NetworkTransport_tDF741042D9F54F61AF98FA3645A80D42374A54D3, ___OnChannelRegistration_4)); }
	inline RequestChannelsDelegate_tE7B26EED431984C7ABC96FB2B3DF3A497E8281C0 * get_OnChannelRegistration_4() const { return ___OnChannelRegistration_4; }
	inline RequestChannelsDelegate_tE7B26EED431984C7ABC96FB2B3DF3A497E8281C0 ** get_address_of_OnChannelRegistration_4() { return &___OnChannelRegistration_4; }
	inline void set_OnChannelRegistration_4(RequestChannelsDelegate_tE7B26EED431984C7ABC96FB2B3DF3A497E8281C0 * value)
	{
		___OnChannelRegistration_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnChannelRegistration_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChannelsCache_5() { return static_cast<int32_t>(offsetof(NetworkTransport_tDF741042D9F54F61AF98FA3645A80D42374A54D3, ___m_ChannelsCache_5)); }
	inline TransportChannelU5BU5D_t208E5D124870294ED76728A47941D06E0ADA7411* get_m_ChannelsCache_5() const { return ___m_ChannelsCache_5; }
	inline TransportChannelU5BU5D_t208E5D124870294ED76728A47941D06E0ADA7411** get_address_of_m_ChannelsCache_5() { return &___m_ChannelsCache_5; }
	inline void set_m_ChannelsCache_5(TransportChannelU5BU5D_t208E5D124870294ED76728A47941D06E0ADA7411* value)
	{
		___m_ChannelsCache_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChannelsCache_5), (void*)value);
	}

	inline static int32_t get_offset_of_MLAPI_INTERNAL_CHANNELS_6() { return static_cast<int32_t>(offsetof(NetworkTransport_tDF741042D9F54F61AF98FA3645A80D42374A54D3, ___MLAPI_INTERNAL_CHANNELS_6)); }
	inline TransportChannelU5BU5D_t208E5D124870294ED76728A47941D06E0ADA7411* get_MLAPI_INTERNAL_CHANNELS_6() const { return ___MLAPI_INTERNAL_CHANNELS_6; }
	inline TransportChannelU5BU5D_t208E5D124870294ED76728A47941D06E0ADA7411** get_address_of_MLAPI_INTERNAL_CHANNELS_6() { return &___MLAPI_INTERNAL_CHANNELS_6; }
	inline void set_MLAPI_INTERNAL_CHANNELS_6(TransportChannelU5BU5D_t208E5D124870294ED76728A47941D06E0ADA7411* value)
	{
		___MLAPI_INTERNAL_CHANNELS_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MLAPI_INTERNAL_CHANNELS_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnTransportEvent_7() { return static_cast<int32_t>(offsetof(NetworkTransport_tDF741042D9F54F61AF98FA3645A80D42374A54D3, ___OnTransportEvent_7)); }
	inline TransportEventDelegate_t6756296C9F115149F6A4735F14E96E74C38A17BE * get_OnTransportEvent_7() const { return ___OnTransportEvent_7; }
	inline TransportEventDelegate_t6756296C9F115149F6A4735F14E96E74C38A17BE ** get_address_of_OnTransportEvent_7() { return &___OnTransportEvent_7; }
	inline void set_OnTransportEvent_7(TransportEventDelegate_t6756296C9F115149F6A4735F14E96E74C38A17BE * value)
	{
		___OnTransportEvent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTransportEvent_7), (void*)value);
	}
};


// MLAPI.Transports.UNET.UNetTransport
struct UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C  : public NetworkTransport_tDF741042D9F54F61AF98FA3645A80D42374A54D3
{
public:
	// System.Int32 MLAPI.Transports.UNET.UNetTransport::MessageBufferSize
	int32_t ___MessageBufferSize_10;
	// System.Int32 MLAPI.Transports.UNET.UNetTransport::MaxConnections
	int32_t ___MaxConnections_11;
	// System.Int32 MLAPI.Transports.UNET.UNetTransport::MaxSentMessageQueueSize
	int32_t ___MaxSentMessageQueueSize_12;
	// System.String MLAPI.Transports.UNET.UNetTransport::ConnectAddress
	String_t* ___ConnectAddress_13;
	// System.Int32 MLAPI.Transports.UNET.UNetTransport::ConnectPort
	int32_t ___ConnectPort_14;
	// System.Int32 MLAPI.Transports.UNET.UNetTransport::ServerListenPort
	int32_t ___ServerListenPort_15;
	// System.Int32 MLAPI.Transports.UNET.UNetTransport::ServerWebsocketListenPort
	int32_t ___ServerWebsocketListenPort_16;
	// System.Boolean MLAPI.Transports.UNET.UNetTransport::SupportWebsocket
	bool ___SupportWebsocket_17;
	// System.Collections.Generic.List`1<MLAPI.Transports.UNetChannel> MLAPI.Transports.UNET.UNetTransport::Channels
	List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3 * ___Channels_18;
	// System.Boolean MLAPI.Transports.UNET.UNetTransport::UseMLAPIRelay
	bool ___UseMLAPIRelay_19;
	// System.String MLAPI.Transports.UNET.UNetTransport::MLAPIRelayAddress
	String_t* ___MLAPIRelayAddress_20;
	// System.Int32 MLAPI.Transports.UNET.UNetTransport::MLAPIRelayPort
	int32_t ___MLAPIRelayPort_21;
	// MLAPI.Transports.UNET.UNetTransport/SendMode MLAPI.Transports.UNET.UNetTransport::MessageSendMode
	int32_t ___MessageSendMode_22;
	// System.Byte[] MLAPI.Transports.UNET.UNetTransport::m_MessageBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_MessageBuffer_23;
	// System.WeakReference MLAPI.Transports.UNET.UNetTransport::m_TemporaryBufferReference
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___m_TemporaryBufferReference_24;
	// System.Collections.Generic.Dictionary`2<MLAPI.Transports.NetworkChannel,System.Int32> MLAPI.Transports.UNET.UNetTransport::m_ChannelNameToId
	Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206 * ___m_ChannelNameToId_25;
	// System.Collections.Generic.Dictionary`2<System.Int32,MLAPI.Transports.NetworkChannel> MLAPI.Transports.UNET.UNetTransport::m_ChannelIdToName
	Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C * ___m_ChannelIdToName_26;
	// System.Int32 MLAPI.Transports.UNET.UNetTransport::m_ServerConnectionId
	int32_t ___m_ServerConnectionId_27;
	// System.Int32 MLAPI.Transports.UNET.UNetTransport::m_ServerHostId
	int32_t ___m_ServerHostId_28;
	// MLAPI.Transports.Tasks.SocketTask MLAPI.Transports.UNET.UNetTransport::m_ConnectTask
	SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * ___m_ConnectTask_29;

public:
	inline static int32_t get_offset_of_MessageBufferSize_10() { return static_cast<int32_t>(offsetof(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C, ___MessageBufferSize_10)); }
	inline int32_t get_MessageBufferSize_10() const { return ___MessageBufferSize_10; }
	inline int32_t* get_address_of_MessageBufferSize_10() { return &___MessageBufferSize_10; }
	inline void set_MessageBufferSize_10(int32_t value)
	{
		___MessageBufferSize_10 = value;
	}

	inline static int32_t get_offset_of_MaxConnections_11() { return static_cast<int32_t>(offsetof(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C, ___MaxConnections_11)); }
	inline int32_t get_MaxConnections_11() const { return ___MaxConnections_11; }
	inline int32_t* get_address_of_MaxConnections_11() { return &___MaxConnections_11; }
	inline void set_MaxConnections_11(int32_t value)
	{
		___MaxConnections_11 = value;
	}

	inline static int32_t get_offset_of_MaxSentMessageQueueSize_12() { return static_cast<int32_t>(offsetof(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C, ___MaxSentMessageQueueSize_12)); }
	inline int32_t get_MaxSentMessageQueueSize_12() const { return ___MaxSentMessageQueueSize_12; }
	inline int32_t* get_address_of_MaxSentMessageQueueSize_12() { return &___MaxSentMessageQueueSize_12; }
	inline void set_MaxSentMessageQueueSize_12(int32_t value)
	{
		___MaxSentMessageQueueSize_12 = value;
	}

	inline static int32_t get_offset_of_ConnectAddress_13() { return static_cast<int32_t>(offsetof(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C, ___ConnectAddress_13)); }
	inline String_t* get_ConnectAddress_13() const { return ___ConnectAddress_13; }
	inline String_t** get_address_of_ConnectAddress_13() { return &___ConnectAddress_13; }
	inline void set_ConnectAddress_13(String_t* value)
	{
		___ConnectAddress_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectAddress_13), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectPort_14() { return static_cast<int32_t>(offsetof(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C, ___ConnectPort_14)); }
	inline int32_t get_ConnectPort_14() const { return ___ConnectPort_14; }
	inline int32_t* get_address_of_ConnectPort_14() { return &___ConnectPort_14; }
	inline void set_ConnectPort_14(int32_t value)
	{
		___ConnectPort_14 = value;
	}

	inline static int32_t get_offset_of_ServerListenPort_15() { return static_cast<int32_t>(offsetof(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C, ___ServerListenPort_15)); }
	inline int32_t get_ServerListenPort_15() const { return ___ServerListenPort_15; }
	inline int32_t* get_address_of_ServerListenPort_15() { return &___ServerListenPort_15; }
	inline void set_ServerListenPort_15(int32_t value)
	{
		___ServerListenPort_15 = value;
	}

	inline static int32_t get_offset_of_ServerWebsocketListenPort_16() { return static_cast<int32_t>(offsetof(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C, ___ServerWebsocketListenPort_16)); }
	inline int32_t get_ServerWebsocketListenPort_16() const { return ___ServerWebsocketListenPort_16; }
	inline int32_t* get_address_of_ServerWebsocketListenPort_16() { return &___ServerWebsocketListenPort_16; }
	inline void set_ServerWebsocketListenPort_16(int32_t value)
	{
		___ServerWebsocketListenPort_16 = value;
	}

	inline static int32_t get_offset_of_SupportWebsocket_17() { return static_cast<int32_t>(offsetof(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C, ___SupportWebsocket_17)); }
	inline bool get_SupportWebsocket_17() const { return ___SupportWebsocket_17; }
	inline bool* get_address_of_SupportWebsocket_17() { return &___SupportWebsocket_17; }
	inline void set_SupportWebsocket_17(bool value)
	{
		___SupportWebsocket_17 = value;
	}

	inline static int32_t get_offset_of_Channels_18() { return static_cast<int32_t>(offsetof(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C, ___Channels_18)); }
	inline List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3 * get_Channels_18() const { return ___Channels_18; }
	inline List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3 ** get_address_of_Channels_18() { return &___Channels_18; }
	inline void set_Channels_18(List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3 * value)
	{
		___Channels_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Channels_18), (void*)value);
	}

	inline static int32_t get_offset_of_UseMLAPIRelay_19() { return static_cast<int32_t>(offsetof(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C, ___UseMLAPIRelay_19)); }
	inline bool get_UseMLAPIRelay_19() const { return ___UseMLAPIRelay_19; }
	inline bool* get_address_of_UseMLAPIRelay_19() { return &___UseMLAPIRelay_19; }
	inline void set_UseMLAPIRelay_19(bool value)
	{
		___UseMLAPIRelay_19 = value;
	}

	inline static int32_t get_offset_of_MLAPIRelayAddress_20() { return static_cast<int32_t>(offsetof(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C, ___MLAPIRelayAddress_20)); }
	inline String_t* get_MLAPIRelayAddress_20() const { return ___MLAPIRelayAddress_20; }
	inline String_t** get_address_of_MLAPIRelayAddress_20() { return &___MLAPIRelayAddress_20; }
	inline void set_MLAPIRelayAddress_20(String_t* value)
	{
		___MLAPIRelayAddress_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MLAPIRelayAddress_20), (void*)value);
	}

	inline static int32_t get_offset_of_MLAPIRelayPort_21() { return static_cast<int32_t>(offsetof(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C, ___MLAPIRelayPort_21)); }
	inline int32_t get_MLAPIRelayPort_21() const { return ___MLAPIRelayPort_21; }
	inline int32_t* get_address_of_MLAPIRelayPort_21() { return &___MLAPIRelayPort_21; }
	inline void set_MLAPIRelayPort_21(int32_t value)
	{
		___MLAPIRelayPort_21 = value;
	}

	inline static int32_t get_offset_of_MessageSendMode_22() { return static_cast<int32_t>(offsetof(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C, ___MessageSendMode_22)); }
	inline int32_t get_MessageSendMode_22() const { return ___MessageSendMode_22; }
	inline int32_t* get_address_of_MessageSendMode_22() { return &___MessageSendMode_22; }
	inline void set_MessageSendMode_22(int32_t value)
	{
		___MessageSendMode_22 = value;
	}

	inline static int32_t get_offset_of_m_MessageBuffer_23() { return static_cast<int32_t>(offsetof(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C, ___m_MessageBuffer_23)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_MessageBuffer_23() const { return ___m_MessageBuffer_23; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_MessageBuffer_23() { return &___m_MessageBuffer_23; }
	inline void set_m_MessageBuffer_23(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_MessageBuffer_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MessageBuffer_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_TemporaryBufferReference_24() { return static_cast<int32_t>(offsetof(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C, ___m_TemporaryBufferReference_24)); }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * get_m_TemporaryBufferReference_24() const { return ___m_TemporaryBufferReference_24; }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** get_address_of_m_TemporaryBufferReference_24() { return &___m_TemporaryBufferReference_24; }
	inline void set_m_TemporaryBufferReference_24(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * value)
	{
		___m_TemporaryBufferReference_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TemporaryBufferReference_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChannelNameToId_25() { return static_cast<int32_t>(offsetof(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C, ___m_ChannelNameToId_25)); }
	inline Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206 * get_m_ChannelNameToId_25() const { return ___m_ChannelNameToId_25; }
	inline Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206 ** get_address_of_m_ChannelNameToId_25() { return &___m_ChannelNameToId_25; }
	inline void set_m_ChannelNameToId_25(Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206 * value)
	{
		___m_ChannelNameToId_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChannelNameToId_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChannelIdToName_26() { return static_cast<int32_t>(offsetof(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C, ___m_ChannelIdToName_26)); }
	inline Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C * get_m_ChannelIdToName_26() const { return ___m_ChannelIdToName_26; }
	inline Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C ** get_address_of_m_ChannelIdToName_26() { return &___m_ChannelIdToName_26; }
	inline void set_m_ChannelIdToName_26(Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C * value)
	{
		___m_ChannelIdToName_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChannelIdToName_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ServerConnectionId_27() { return static_cast<int32_t>(offsetof(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C, ___m_ServerConnectionId_27)); }
	inline int32_t get_m_ServerConnectionId_27() const { return ___m_ServerConnectionId_27; }
	inline int32_t* get_address_of_m_ServerConnectionId_27() { return &___m_ServerConnectionId_27; }
	inline void set_m_ServerConnectionId_27(int32_t value)
	{
		___m_ServerConnectionId_27 = value;
	}

	inline static int32_t get_offset_of_m_ServerHostId_28() { return static_cast<int32_t>(offsetof(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C, ___m_ServerHostId_28)); }
	inline int32_t get_m_ServerHostId_28() const { return ___m_ServerHostId_28; }
	inline int32_t* get_address_of_m_ServerHostId_28() { return &___m_ServerHostId_28; }
	inline void set_m_ServerHostId_28(int32_t value)
	{
		___m_ServerHostId_28 = value;
	}

	inline static int32_t get_offset_of_m_ConnectTask_29() { return static_cast<int32_t>(offsetof(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C, ___m_ConnectTask_29)); }
	inline SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * get_m_ConnectTask_29() const { return ___m_ConnectTask_29; }
	inline SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 ** get_address_of_m_ConnectTask_29() { return &___m_ConnectTask_29; }
	inline void set_m_ConnectTask_29(SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * value)
	{
		___m_ConnectTask_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConnectTask_29), (void*)value);
	}
};

struct UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_StaticFields
{
public:
	// MLAPI.Profiling.ProfilingDataStore MLAPI.Transports.UNET.UNetTransport::s_TransportProfilerData
	ProfilingDataStore_t1E7070AC4F046AA186604C4185FCB4AC1956E333 * ___s_TransportProfilerData_8;
	// System.Boolean MLAPI.Transports.UNET.UNetTransport::ProfilerEnabled
	bool ___ProfilerEnabled_9;

public:
	inline static int32_t get_offset_of_s_TransportProfilerData_8() { return static_cast<int32_t>(offsetof(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_StaticFields, ___s_TransportProfilerData_8)); }
	inline ProfilingDataStore_t1E7070AC4F046AA186604C4185FCB4AC1956E333 * get_s_TransportProfilerData_8() const { return ___s_TransportProfilerData_8; }
	inline ProfilingDataStore_t1E7070AC4F046AA186604C4185FCB4AC1956E333 ** get_address_of_s_TransportProfilerData_8() { return &___s_TransportProfilerData_8; }
	inline void set_s_TransportProfilerData_8(ProfilingDataStore_t1E7070AC4F046AA186604C4185FCB4AC1956E333 * value)
	{
		___s_TransportProfilerData_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TransportProfilerData_8), (void*)value);
	}

	inline static int32_t get_offset_of_ProfilerEnabled_9() { return static_cast<int32_t>(offsetof(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_StaticFields, ___ProfilerEnabled_9)); }
	inline bool get_ProfilerEnabled_9() const { return ___ProfilerEnabled_9; }
	inline bool* get_address_of_ProfilerEnabled_9() { return &___ProfilerEnabled_9; }
	inline void set_ProfilerEnabled_9(bool value)
	{
		___ProfilerEnabled_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// MLAPI.Transports.Tasks.SocketTask[]
struct SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * m_Items[1];

public:
	inline SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// MLAPI.Transports.TransportChannel[]
struct TransportChannelU5BU5D_t208E5D124870294ED76728A47941D06E0ADA7411  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TransportChannel_t0A8B4B6112B5AAAA3261EDB8AB9F8707DD8F7D73  m_Items[1];

public:
	inline TransportChannel_t0A8B4B6112B5AAAA3261EDB8AB9F8707DD8F7D73  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TransportChannel_t0A8B4B6112B5AAAA3261EDB8AB9F8707DD8F7D73 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TransportChannel_t0A8B4B6112B5AAAA3261EDB8AB9F8707DD8F7D73  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TransportChannel_t0A8B4B6112B5AAAA3261EDB8AB9F8707DD8F7D73  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TransportChannel_t0A8B4B6112B5AAAA3261EDB8AB9F8707DD8F7D73 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TransportChannel_t0A8B4B6112B5AAAA3261EDB8AB9F8707DD8F7D73  value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshal_pinvoke(const ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5& unmarshaled, ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshal_pinvoke_back(const ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshaled_pinvoke& marshaled, ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5& unmarshaled);
IL2CPP_EXTERN_C void ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshal_pinvoke_cleanup(ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshal_com(const ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5& unmarshaled, ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshaled_com& marshaled);
IL2CPP_EXTERN_C void ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshal_com_back(const ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshaled_com& marshaled, ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5& unmarshaled);
IL2CPP_EXTERN_C void ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshal_com_cleanup(ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshaled_com& marshaled);
IL2CPP_EXTERN_C void AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshal_pinvoke(const AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86& unmarshaled, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshal_pinvoke_back(const AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke& marshaled, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86& unmarshaled);
IL2CPP_EXTERN_C void AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshal_pinvoke_cleanup(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke& marshaled);

// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m0CC9A90FFDE8345CBB45E1F0401F08966DD3F665_gshared (Dictionary_2_tF3A2ED84A24958E105C74C0E6BCAE0EE2F30AE75 * __this, uint8_t ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m4FD85F2F391F4213E0F85D9A08ABEB3A6B7AD338_gshared (Dictionary_2_tF3A2ED84A24958E105C74C0E6BCAE0EE2F30AE75 * __this, uint8_t ___key0, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_gshared (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.ByteEnum>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m8B503F77239DED23CC937904571627AC3516B429_gshared (Dictionary_2_t30FF3A644631804450E0BAC990378F699D61B451 * __this, int32_t ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.ByteEnum>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Dictionary_2_get_Item_mBA425CE277CCF635B086ABF6FF345A07A5EBB029_gshared (Dictionary_2_t30FF3A644631804450E0BAC990378F699D61B451 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.ByteEnum>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m981A79B269EABADA5445242BAA126F2235A46CA6_gshared (Dictionary_2_t30FF3A644631804450E0BAC990378F699D61B451 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m3726DEEEFB166A71F3030E011DB115767C6FCE9E_gshared (Dictionary_2_tF3A2ED84A24958E105C74C0E6BCAE0EE2F30AE75 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.ByteEnum>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m3953BEADC468D707FC5CAC5A6BF685470740D95E_gshared (Dictionary_2_t30FF3A644631804450E0BAC990378F699D61B451 * __this, int32_t ___key0, uint8_t ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mCF5854608E2BF24562AEFE9045E0F672BAD57FE3_gshared (Dictionary_2_tF3A2ED84A24958E105C74C0E6BCAE0EE2F30AE75 * __this, uint8_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m879CB6850F1B23021370EC6312DF6D3326151B97_gshared (Dictionary_2_tF3A2ED84A24958E105C74C0E6BCAE0EE2F30AE75 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.ByteEnum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m415055B0C8C65E34C86159F668370256A8A31826_gshared (Dictionary_2_t30FF3A644631804450E0BAC990378F699D61B451 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mB73741D6C00A2B328922E49704E1797FE3600487_gshared (Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 * __this, uint64_t ___key0, const RuntimeMethod* method);

// MLAPI.Transports.Tasks.SocketTask[] MLAPI.Transports.Tasks.SocketTasks::get_Tasks()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A* SocketTasks_get_Tasks_mF087E77B35CBE627B72634D6FECBFEA8F1306AE8_inline (SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432 * __this, const RuntimeMethod* method);
// System.Boolean MLAPI.Transports.Tasks.SocketTask::get_IsDone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SocketTask_get_IsDone_m81A9EA33FE518DF4F9EA0A9780C555662823BC47_inline (SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * __this, const RuntimeMethod* method);
// System.Boolean MLAPI.Transports.Tasks.SocketTask::get_Success()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SocketTask_get_Success_m3BFB888B17C75D627C70916162D91538A50D7DE7_inline (SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B (Exception_t * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080 (Exception_t * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// MLAPI.Serialization.Pooled.PooledNetworkWriter MLAPI.Serialization.Pooled.PooledNetworkWriter::Get(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledNetworkWriter_t4EFF6DA061F1469895F9FDC1B4FD3EAA9DCC5A7A * PooledNetworkWriter_Get_m3B65761E11C9BD7A96EF57F8DA5CE2E26DF09620 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method);
// System.Void MLAPI.Serialization.NetworkWriter::WriteByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WriteByte_m92F3168EE2CC1BC83DEB2C6B7A05C3AEDEDB48A6 (NetworkWriter_tFF50DD965D82FE95092CE3C12A30AD51604E9CF2 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void MLAPI.Serialization.NetworkWriter::WriteUInt32Packed(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WriteUInt32Packed_m65B81BE04804DDE666A0EE7ED7CD349EAC01D72A (NetworkWriter_tFF50DD965D82FE95092CE3C12A30AD51604E9CF2 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void MLAPI.Serialization.NetworkWriter::WriteStringPacked(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WriteStringPacked_m68F41867BE5A1E5A802365338F952BCF923F398C (NetworkWriter_tFF50DD965D82FE95092CE3C12A30AD51604E9CF2 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Void MLAPI.Serialization.NetworkWriter::WriteBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WriteBool_mBC4A70E8FE06379CE89DF3AE01E77BE7AD00F740 (NetworkWriter_tFF50DD965D82FE95092CE3C12A30AD51604E9CF2 * __this, bool ___value0, const RuntimeMethod* method);
// MLAPI.Serialization.Pooled.PooledNetworkReader MLAPI.Serialization.Pooled.PooledNetworkReader::Get(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledNetworkReader_tDB17DC1025307417EC373DE16F1FD1B5AA46C7C2 * PooledNetworkReader_Get_m6454F431B9193D60AB8B8DAC90C5324FA079C127 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method);
// System.Void MLAPI.Profiling.TickEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickEvent__ctor_m2394C3A78074D2BC30C3C9D5E396A4A0ADCCFB87 (TickEvent_t6ED6E2A0F7108928D72CFC0F0774EB1390A9C63D * __this, const RuntimeMethod* method);
// System.Int32 MLAPI.Serialization.NetworkReader::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkReader_ReadByte_m556DD341100470ACA1E4AF25F8BFCDB440C03A35 (NetworkReader_tB092619323CE14E6795C4FC0E0169237625D2403 * __this, const RuntimeMethod* method);
// System.UInt32 MLAPI.Serialization.NetworkReader::ReadUInt32Packed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetworkReader_ReadUInt32Packed_m24E405F56127D0089AD3FA83665AC1C1A93725B2 (NetworkReader_tB092619323CE14E6795C4FC0E0169237625D2403 * __this, const RuntimeMethod* method);
// System.String MLAPI.Serialization.NetworkReader::ReadStringPacked(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkReader_ReadStringPacked_mC10B1D16E5F924035A9E4B8AD966E5D8C18D98B9 (NetworkReader_tB092619323CE14E6795C4FC0E0169237625D2403 * __this, StringBuilder_t * ___builder0, const RuntimeMethod* method);
// System.Boolean MLAPI.Serialization.NetworkReader::ReadBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkReader_ReadBool_mEE86966A13D3C647CA7C21688F0ED4EB3C286EEF (NetworkReader_tB092619323CE14E6795C4FC0E0169237625D2403 * __this, const RuntimeMethod* method);
// System.Void MLAPI.Transports.TransportChannel::.ctor(MLAPI.Transports.NetworkChannel,MLAPI.Transports.NetworkDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransportChannel__ctor_m98D085AC9B752A4ACDE5912DA3D2A6731E5F676F (TransportChannel_t0A8B4B6112B5AAAA3261EDB8AB9F8707DD8F7D73 * __this, uint8_t ___channel0, int32_t ___delivery1, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB (Type_t * __this, const RuntimeMethod* method);
// System.Type System.Nullable::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629 (Type_t * ___nullableType0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.UInt64 MLAPI.Transports.UNET.UNetTransport::GetMLAPIClientId(System.Byte,System.UInt16,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UNetTransport_GetMLAPIClientId_m571B08D02375DD7ECB5A0CC31FC75229DD9CAD1F (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, uint8_t ___hostId0, uint16_t ___connectionId1, bool ___isServer2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkTransport::get_IsStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_get_IsStarted_m16B139370CAED45416649D8D43AD059EF4CBE05E (const RuntimeMethod* method);
// MLAPI.NetworkManager MLAPI.NetworkManager::get_Singleton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * NetworkManager_get_Singleton_m4A3EAA6822FD326519757EF5899202B2C5884B13_inline (const RuntimeMethod* method);
// System.Boolean MLAPI.NetworkManager::get_IsServer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsServer_m20570D2A773CF3C919CF2EFA520C9DAFB16DF51A_inline (NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<MLAPI.Connection.NetworkClient>::get_Item(System.Int32)
inline NetworkClient_t0DF198CA47B274F9A545CC0E08507786069E2DE6 * List_1_get_Item_mD7515F0017B083FF47FE011EAE8FD7609D2DE427_inline (List_1_t3A508A14B962436191D0F4A254F5A2F44CDBBB1F * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  NetworkClient_t0DF198CA47B274F9A545CC0E08507786069E2DE6 * (*) (List_1_t3A508A14B962436191D0F4A254F5A2F44CDBBB1F *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void MLAPI.Transports.UNET.UNetTransport::SendQueued(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_SendQueued_mAB8F64DACFEEFF3343B30217C54E6BA76D849440 (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, uint64_t ___clientId0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<MLAPI.Connection.NetworkClient>::get_Count()
inline int32_t List_1_get_Count_m786BB72883B9B30A983BA96A3DFD15F5A206D953_inline (List_1_t3A508A14B962436191D0F4A254F5A2F44CDBBB1F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3A508A14B962436191D0F4A254F5A2F44CDBBB1F *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.UInt64 MLAPI.NetworkManager::get_LocalClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetworkManager_get_LocalClientId_mDBBDDF5CE9D3E64EF51899519E062A6CAB45407B (NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * __this, const RuntimeMethod* method);
// System.Void MLAPI.Profiling.ProfilingDataStore::Increment(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilingDataStore_Increment_m3672D05E10CEC335626C2B5E276FBADBFE06B4D0 (ProfilingDataStore_t1E7070AC4F046AA186604C4185FCB4AC1956E333 * __this, String_t* ___fieldName0, int32_t ___count1, const RuntimeMethod* method);
// System.Void MLAPI.Transports.UNET.UNetTransport::GetUNetConnectionDetails(System.UInt64,System.Byte&,System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_GetUNetConnectionDetails_m5AB001B134B8B2727374626702CD46419E9F705D (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, uint64_t ___clientId0, uint8_t* ___hostId1, uint16_t* ___connectionId2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<MLAPI.Transports.NetworkChannel,System.Int32>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mD8FB600C8C87D9181A050E1CD828AA7D5545B105 (Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206 * __this, uint8_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206 *, uint8_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m0CC9A90FFDE8345CBB45E1F0401F08966DD3F665_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<MLAPI.Transports.NetworkChannel,System.Int32>::get_Item(!0)
inline int32_t Dictionary_2_get_Item_m7C742CE8268D14396B24D20675855E13A99A4BDB (Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206 * __this, uint8_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206 *, uint8_t, const RuntimeMethod*))Dictionary_2_get_Item_m4FD85F2F391F4213E0F85D9A08ABEB3A6B7AD338_gshared)(__this, ___key0, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline)(__this, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_gshared_inline)(__this, method);
}
// System.Void System.WeakReference::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m11BFDB039514BDCE23425FD90E8C414D051B2F13 (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_gshared_inline)(__this, method);
}
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Boolean MLAPI.Transports.UNET.RelayTransport::QueueMessageForSending(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RelayTransport_QueueMessageForSending_m361A782F33CEC6B64F9CCD38FB69E12D095E6C21 (int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer3, int32_t ___size4, uint8_t* ___error5, const RuntimeMethod* method);
// System.Boolean MLAPI.Transports.UNET.RelayTransport::Send(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RelayTransport_Send_mD7EFD8C0F9DFBFCBC721F3B7ABD5321960966689 (int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer3, int32_t ___size4, uint8_t* ___error5, const RuntimeMethod* method);
// System.Boolean MLAPI.Transports.UNET.RelayTransport::SendQueuedMessages(System.Int32,System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RelayTransport_SendQueuedMessages_mA7E82B225CEE378EC93A86449113C30B30FC83B4 (int32_t ___hostId0, int32_t ___connectionId1, uint8_t* ___error2, const RuntimeMethod* method);
// UnityEngine.Networking.NetworkEventType MLAPI.Transports.UNET.RelayTransport::Receive(System.Int32&,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RelayTransport_Receive_m7BD89BF133B281E93081FE7CD2F58A053147CD9E (int32_t* ___hostId0, int32_t* ___connectionId1, int32_t* ___channelId2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer3, int32_t ___bufferSize4, int32_t* ___receivedSize5, uint8_t* ___error6, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B (const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[],System.Int32,System.Int32)
inline void ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_gshared)(__this, ___array0, ___offset1, ___count2, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,MLAPI.Transports.NetworkChannel>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m9183F6C70EBC3C7AB57280DEF5DD7DD813464139 (Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m8B503F77239DED23CC937904571627AC3516B429_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int32,MLAPI.Transports.NetworkChannel>::get_Item(!0)
inline uint8_t Dictionary_2_get_Item_m5F82950FC4ECC16C66979A3E076EC43A0F47EC54 (Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mBA425CE277CCF635B086ABF6FF345A07A5EBB029_gshared)(__this, ___key0, method);
}
// System.Void MLAPI.Transports.Tasks.SocketTask::set_Message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketTask_set_Message_m545A20402C966CD20271A79857B1DEAD86428A3B_inline (SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void MLAPI.Transports.Tasks.SocketTask::set_SocketError(System.Net.Sockets.SocketError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketTask_set_SocketError_mF76003AEB28E4FEED8B7C59446A981B03ED8D062_inline (SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void MLAPI.Transports.Tasks.SocketTask::set_State(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketTask_set_State_mFF4A85A2BCEBEA6B153F0F6D578B8DC7387D5E46_inline (SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void MLAPI.Transports.Tasks.SocketTask::set_Success(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketTask_set_Success_mAC4F7C19AEC4AF1FAD8B2419E4CC7BC336B8CF99_inline (SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void MLAPI.Transports.Tasks.SocketTask::set_TransportCode(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketTask_set_TransportCode_m343E5732D03E7AA59805CF44E2222820F6881518_inline (SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void MLAPI.Transports.Tasks.SocketTask::set_TransportException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketTask_set_TransportException_m2A47250811FB888D0E797D9D49029F8F0F3AECFB_inline (SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * __this, Exception_t * ___value0, const RuntimeMethod* method);
// System.Void MLAPI.Transports.Tasks.SocketTask::set_IsDone(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketTask_set_IsDone_m15BAB4BD42E4BD25E31C50B5CD987DA6677D502B_inline (SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * __this, bool ___value0, const RuntimeMethod* method);
// MLAPI.Transports.Tasks.SocketTask MLAPI.Transports.Tasks.SocketTask::get_Working()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * SocketTask_get_Working_mF690DA818087A2525B6F9EB1EF6E68FB9F975BB3 (const RuntimeMethod* method);
// UnityEngine.Networking.ConnectionConfig MLAPI.Transports.UNET.UNetTransport::GetConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * UNetTransport_GetConfig_mC86152445C0CB267FDFEEF52C89772C5A90B1A71 (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopology::.ctor(UnityEngine.Networking.ConnectionConfig,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopology__ctor_m402906F2EFF083571541B3EDED1729CA3FDB6244 (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * __this, ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * ___defaultConfig0, int32_t ___maxDefaultConnections1, const RuntimeMethod* method);
// System.Int32 MLAPI.Transports.UNET.RelayTransport::AddHost(UnityEngine.Networking.HostTopology,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RelayTransport_AddHost_m1A9CDEFDB3B42867989C69AD9D74BCB8EC42CE13 (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * ___topology0, bool ___createServer1, const RuntimeMethod* method);
// System.Int32 MLAPI.Transports.UNET.RelayTransport::Connect(System.Int32,System.String,System.Int32,System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RelayTransport_Connect_m9EEBF364B20DDCFEA8EC538DD0C92645F82F05DF (int32_t ___hostId0, String_t* ___serverAddress1, int32_t ___serverPort2, int32_t ___exceptionConnectionId3, uint8_t* ___error4, const RuntimeMethod* method);
// MLAPI.Transports.Tasks.SocketTasks MLAPI.Transports.Tasks.SocketTask::AsTasks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432 * SocketTask_AsTasks_mC232E3DA8C3F1D2ED737CCC2BCEF6A5B6E3F32E9 (SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::AddWebsocketHost(UnityEngine.Networking.HostTopology,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddWebsocketHost_mB3864DBBDF764C49AD73BC89237F4C9EBFC4252A (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * ___topology0, int32_t ___port1, const RuntimeMethod* method);
// MLAPI.Logging.LogLevel MLAPI.Logging.NetworkLog::get_CurrentLogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkLog_get_CurrentLogLevel_m53F4291FB71E3AF2A33D4914346DC84D6557CC77 (const RuntimeMethod* method);
// System.Void MLAPI.Logging.NetworkLog::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkLog_LogError_m009C7BF365E700438059CD10FACDDD808F07952F (String_t* ___message0, const RuntimeMethod* method);
// System.Int32 MLAPI.Transports.UNET.RelayTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RelayTransport_AddHost_m986E8762C6C64895963E440EC848F09E40D77321 (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * ___topology0, int32_t ___port1, bool ___createServer2, const RuntimeMethod* method);
// MLAPI.Transports.Tasks.SocketTask MLAPI.Transports.Tasks.SocketTask::get_Done()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * SocketTask_get_Done_m27185C65FDB7C2976AAA08D444194A69370DFFF7 (const RuntimeMethod* method);
// System.Boolean MLAPI.Transports.UNET.RelayTransport::Disconnect(System.Int32,System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RelayTransport_Disconnect_m3E4E1A84100FA2A8F1655459CC5C6B9A4EDA44FB (int32_t ___hostId0, int32_t ___connectionId1, uint8_t* ___error2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::GetCurrentRTT(System.Int32,System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_GetCurrentRTT_mF6F860C6EE547DF877313DB56D7348F5101B0F9B (int32_t ___hostId0, int32_t ___connectionId1, uint8_t* ___error2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,MLAPI.Transports.NetworkChannel>::Clear()
inline void Dictionary_2_Clear_mA3E7E38B5662A6304C1B7EB6307FA1B882881F79 (Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C *, const RuntimeMethod*))Dictionary_2_Clear_m981A79B269EABADA5445242BAA126F2235A46CA6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<MLAPI.Transports.NetworkChannel,System.Int32>::Clear()
inline void Dictionary_2_Clear_mF52594485C53F4479A7A43524A28E24620DB870E (Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206 *, const RuntimeMethod*))Dictionary_2_Clear_m3726DEEEFB166A71F3030E011DB115767C6FCE9E_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.NetworkTransport::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_Shutdown_mCDADD01490BB0C9B0F5BAFB391E207C7B0298DC4 (const RuntimeMethod* method);
// System.Void MLAPI.Transports.UNET.UNetTransport::UpdateRelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_UpdateRelay_mAB9444FADD858B04EDD921E787558C09BF0C5743 (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, const RuntimeMethod* method);
// System.Void MLAPI.Profiling.ProfilingDataStore::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilingDataStore_Clear_m69A09AB4A6CE38F9A292667B9089458D41ED5975 (ProfilingDataStore_t1E7070AC4F046AA186604C4185FCB4AC1956E333 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransport::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_Init_m07410A194825D614DBE8A08B746E06EC6481AEF3 (const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig__ctor_mCB0E2B50103AB6B3917758DC5FC0E52AD153DED3 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// MLAPI.Transports.TransportChannel[] MLAPI.Transports.NetworkTransport::get_MLAPI_CHANNELS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransportChannelU5BU5D_t208E5D124870294ED76728A47941D06E0ADA7411* NetworkTransport_get_MLAPI_CHANNELS_m894790FF073103C74937CF2E392D34B2D61B99F4 (NetworkTransport_tDF741042D9F54F61AF98FA3645A80D42374A54D3 * __this, const RuntimeMethod* method);
// System.Int32 MLAPI.Transports.UNET.UNetTransport::AddMLAPIChannel(MLAPI.Transports.NetworkDelivery,UnityEngine.Networking.ConnectionConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UNetTransport_AddMLAPIChannel_mB373845B03B3983222B469A48905F3E0B324AAB8 (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, int32_t ___type0, ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * ___config1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,MLAPI.Transports.NetworkChannel>::Add(!0,!1)
inline void Dictionary_2_Add_m4B938DDB8F008FFF8F7938CC1D8E1A056F5B5136 (Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C * __this, int32_t ___key0, uint8_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C *, int32_t, uint8_t, const RuntimeMethod*))Dictionary_2_Add_m3953BEADC468D707FC5CAC5A6BF685470740D95E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<MLAPI.Transports.NetworkChannel,System.Int32>::Add(!0,!1)
inline void Dictionary_2_Add_mC0F551D754EA6B4CC8C811B2AB0F3D616BC58FBD (Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206 * __this, uint8_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206 *, uint8_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_mCF5854608E2BF24562AEFE9045E0F672BAD57FE3_gshared)(__this, ___key0, ___value1, method);
}
// !0 System.Collections.Generic.List`1<MLAPI.Transports.UNetChannel>::get_Item(System.Int32)
inline UNetChannel_tEC908B6737ABA9307E2DEB4A3F276B0EED170DC1 * List_1_get_Item_m8ED9DA6719F1C5CB2BD43DEBC46B41A08E940D09_inline (List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  UNetChannel_tEC908B6737ABA9307E2DEB4A3F276B0EED170DC1 * (*) (List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 MLAPI.Transports.UNET.UNetTransport::AddUNETChannel(UnityEngine.Networking.QosType,UnityEngine.Networking.ConnectionConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UNetTransport_AddUNETChannel_mFE0EC9440C83129351D76B63B2651D3CDA9911FD (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, int32_t ___type0, ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * ___config1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void MLAPI.Exceptions.InvalidChannelException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidChannelException__ctor_mEA2AD4549AA434B505B0DCC4764E1A40C5462D2D (InvalidChannelException_tF4ED82C45BB31FFD3BB4D9920BA8147F4C9E7591 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<MLAPI.Transports.UNetChannel>::get_Count()
inline int32_t List_1_get_Count_mBB7C25308910122B943CA0E02A845F7A8689F090_inline (List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_MaxSentMessageQueueSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_MaxSentMessageQueueSize_m59FEBBA265404CE7AD03CCB255BCC186DA1CDFB8 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Byte UnityEngine.Networking.ConnectionConfig::AddChannel(UnityEngine.Networking.QosType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void MLAPI.Transports.UNET.RelayTransport::set_Enabled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RelayTransport_set_Enabled_m151B14939BE0D33A3AC5EF026FFBBA69938C59E8_inline (bool ___value0, const RuntimeMethod* method);
// System.Void MLAPI.Transports.UNET.RelayTransport::set_RelayAddress(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RelayTransport_set_RelayAddress_m934751BBF6697AE0B983635E7034E23DF55316C5_inline (String_t* ___value0, const RuntimeMethod* method);
// System.Void MLAPI.Transports.UNET.RelayTransport::set_RelayPort(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RelayTransport_set_RelayPort_m45906FDC2C2DB42A7633C3DED68E6F1B5082AD91_inline (uint16_t ___value0, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Int32> MLAPI.Profiling.ProfilingDataStore::GetReadonly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProfilingDataStore_GetReadonly_m9C0E6EA14454D5AF7279D17A01D1DA3283A89940 (ProfilingDataStore_t1E7070AC4F046AA186604C4185FCB4AC1956E333 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<MLAPI.Transports.UNetChannel>::.ctor()
inline void List_1__ctor_m40F68142CBB96190EF2941DA700FFBE4B9E6F6E7 (List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<MLAPI.Transports.NetworkChannel,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mB73D5724F1F1F1B5AF95EB1270B7869213E7F5DB (Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206 *, const RuntimeMethod*))Dictionary_2__ctor_m879CB6850F1B23021370EC6312DF6D3326151B97_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,MLAPI.Transports.NetworkChannel>::.ctor()
inline void Dictionary_2__ctor_m3CFAFE6B984DE6170E1D0416D3EF31B644C3ECFD (Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C *, const RuntimeMethod*))Dictionary_2__ctor_m415055B0C8C65E34C86159F668370256A8A31826_gshared)(__this, method);
}
// System.Void MLAPI.Transports.NetworkTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport__ctor_m2017A0591134F76727F7CED368118DCB7C384E22 (NetworkTransport_tDF741042D9F54F61AF98FA3645A80D42374A54D3 * __this, const RuntimeMethod* method);
// System.Void MLAPI.Profiling.ProfilingDataStore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilingDataStore__ctor_m3192A14ACCAE0A04481FA34492B58C49052F5724 (ProfilingDataStore_t1E7070AC4F046AA186604C4185FCB4AC1956E333 * __this, const RuntimeMethod* method);
// System.Void MLAPI.NetworkManager::HandleApproval(System.UInt64,System.Boolean,System.Nullable`1<System.UInt64>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Quaternion>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_HandleApproval_m38F031C3242583FF6CBEAC0C6A636C1BD6F0F6D0 (NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * __this, uint64_t ___clientId0, bool ___createPlayerObject1, Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  ___playerPrefabHash2, bool ___approved3, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___position4, Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  ___rotation5, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::remove_activeSceneChanged(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_remove_activeSceneChanged_m393D580B1E306AE2A549810D409E64A226EFCF8D (UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * ___value0, const RuntimeMethod* method);
// System.Void MLAPI.Messaging.InternalMessageHandler::<HandleConnectionApproved>g__DelayedSpawnAction|18_0(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalMessageHandler_U3CHandleConnectionApprovedU3Eg__DelayedSpawnActionU7C18_0_mAB15DAB0C5122AE1375D466B7A0EA9C645DADF09 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___continuationStream0, const RuntimeMethod* method);
// System.Void MLAPI.Messaging.InternalMessageHandler/<>c__DisplayClass18_0::<HandleConnectionApproved>g__OnSceneLoadComplete|1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0_U3CHandleConnectionApprovedU3Eg__OnSceneLoadCompleteU7C1_m4EFC5FD9CB3F38C3EE7A17372FB4D44C1C561219 (U3CU3Ec__DisplayClass18_0_t13F01EB262A469487D83C30B80974D077D51FA39 * __this, const RuntimeMethod* method);
// System.Void MLAPI.NetworkBehaviour/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2AE917294F24B10DA90D48CDC2485682D88BD6B1 (U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA * __this, const RuntimeMethod* method);
// System.Void MLAPI.Configuration.NetworkConfig/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m25A4CB82E7F8F263901E31C624D7E18A4AA32116 (U3CU3Ec_t85377D8F4AC5A890A77A8C78CFCF705608CD0ECE * __this, const RuntimeMethod* method);
// System.UInt64 MLAPI.Configuration.NetworkPrefab::get_Hash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetworkPrefab_get_Hash_m3AA332350212DA75CAA31BAF74FB2D233C723DF8 (NetworkPrefab_t7630C6985562B806CE10338714F59F0C6A5B5F71 * __this, const RuntimeMethod* method);
// System.Void MLAPI.NetworkManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1808F26C774B94EBFFA144E0E66FC0AF73B87C95 (U3CU3Ec_t52CC57E9CBCF944B6D4AE9FC037E5BD3B7E5BF31 * __this, const RuntimeMethod* method);
// System.Single MLAPI.NetworkManager::get_NetworkTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkManager_get_NetworkTime_m143DC36E3CDBB4D0437CF7AF63234EA69B197B5B (NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,MLAPI.Connection.PendingClient>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m88F56EEA2071E35893FAEE69E65D835A844F0569 (Dictionary_2_tB515236EBFA6EB2166398426DC099A96363476D4 * __this, uint64_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB515236EBFA6EB2166398426DC099A96363476D4 *, uint64_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mB73741D6C00A2B328922E49704E1797FE3600487_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,MLAPI.Connection.NetworkClient>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m373A5F9286FD587C70D03680E95C170DE8420D91 (Dictionary_2_t1F45833D57768B96BCAA47F7DDD032561D0D84BD * __this, uint64_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1F45833D57768B96BCAA47F7DDD032561D0D84BD *, uint64_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mB73741D6C00A2B328922E49704E1797FE3600487_gshared)(__this, ___key0, method);
}
// System.Void MLAPI.Logging.NetworkLog::LogInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkLog_LogInfo_m3A9941F513A0FE9035AA25D41129F3251C4E5A5C (String_t* ___message0, const RuntimeMethod* method);
// System.Void MLAPI.NetworkManager::DisconnectClient(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_DisconnectClient_m0E0BA1A459C8B316D065907323D0619B677C5B9C (NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * __this, uint64_t ___clientId0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225 (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, float ___time0, const RuntimeMethod* method);
// System.Void MLAPI.SceneManagement.SceneSwitchProgress::SetTimedOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSwitchProgress_SetTimedOut_mDF92EA233301647E7BF7120975624F41DD63CEA4 (SceneSwitchProgress_tAAE76AD0A7D3D42A7D0EB2EC5799E42FAFC178BD * __this, const RuntimeMethod* method);
// System.Guid MLAPI.SceneManagement.SceneSwitchProgress::get_Guid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t  SceneSwitchProgress_get_Guid_mEAE9C8740076E6C390DC413C9633B682804BF7F5_inline (SceneSwitchProgress_tAAE76AD0A7D3D42A7D0EB2EC5799E42FAFC178BD * __this, const RuntimeMethod* method);
// System.Void MLAPI.SceneManagement.NetworkSceneManager::OnSceneLoaded(System.Guid,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManager_OnSceneLoaded_m0192D41AE902327791D388A82A90A0DD1BE85246 (Guid_t  ___switchSceneGuid0, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___objectStream1, const RuntimeMethod* method);
// System.Void MLAPI.Spawning.NetworkSpawnManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6CE06F8771DAE4A390E2A57D99ED34E31850FC6B (U3CU3Ec_t7ECBA6547CA9ED518205A20A7E53317896BDAE4A * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319 (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// MLAPI.Serialization.Pooled.PooledNetworkBuffer MLAPI.Serialization.Pooled.PooledNetworkBuffer::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledNetworkBuffer_tED514246F37E8636BB4EF9FD6CD9F0AA843EE941 * PooledNetworkBuffer_Get_mBB34012907A69D355FFDA90D653381E31E690CDF (const RuntimeMethod* method);
// System.Void MLAPI.Serialization.SerializationManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m321D6CF87BA926309D238658302530D3C789EE8B (U3CU3Ec_t78BCF87DC09FAD35C57BD88E50B83287D29BC20E * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsPublic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsPublic_mA7FB5E40024835CA07195F3E1BFCBD41E9E013BD (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean MLAPI.Serialization.SerializationManager::IsTypeSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationManager_IsTypeSupported_m848FB4F7B09CC1010D31ADE1F70EE644B8E63801 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void MLAPI.NetworkUpdateLoop/NetworkEarlyUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2B13C1B74F4E81103D5F4BCB9D19E5AFAD305DB5 (U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800 * __this, const RuntimeMethod* method);
// System.Void MLAPI.NetworkUpdateLoop::RunNetworkUpdateStage(MLAPI.NetworkUpdateStage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkUpdateLoop_RunNetworkUpdateStage_mFB91EA24D90F2BB8D821F13842B3D32E4E7F38C6 (uint8_t ___updateStage0, const RuntimeMethod* method);
// System.Void MLAPI.NetworkUpdateLoop/NetworkFixedUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE135C8BF42D12E4C497D880418869652E8D66BA9 (U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8 * __this, const RuntimeMethod* method);
// System.Void MLAPI.NetworkUpdateLoop/NetworkInitialization/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE9A245CFBAE70653A9AAEBAC0931087A5B6AA077 (U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56 * __this, const RuntimeMethod* method);
// System.Void MLAPI.NetworkUpdateLoop/NetworkPostLateUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4892922627A2134C6E433C5FB213845895DD6EFC (U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED * __this, const RuntimeMethod* method);
// System.Void MLAPI.NetworkUpdateLoop/NetworkPreLateUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5F608C89C8980413AE77A02C7FC3307601C186ED (U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16 * __this, const RuntimeMethod* method);
// System.Void MLAPI.NetworkUpdateLoop/NetworkPreUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD6D20CD4786B764C1EE32107C65DB7B0DD57C837 (U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D * __this, const RuntimeMethod* method);
// System.Void MLAPI.NetworkUpdateLoop/NetworkUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3B5EFFE96354374A0E1F7AC8124E34EEA35620FA (U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// MLAPI.Transports.Tasks.SocketTask[] MLAPI.Transports.Tasks.SocketTasks::get_Tasks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A* SocketTasks_get_Tasks_mF087E77B35CBE627B72634D6FECBFEA8F1306AE8 (SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432 * __this, const RuntimeMethod* method)
{
	{
		// public SocketTask[] Tasks { get; set; }
		SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A* L_0 = __this->get_U3CTasksU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void MLAPI.Transports.Tasks.SocketTasks::set_Tasks(MLAPI.Transports.Tasks.SocketTask[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketTasks_set_Tasks_mC9394F9D327667695B3CF0521F324669E296FCEA (SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432 * __this, SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A* ___value0, const RuntimeMethod* method)
{
	{
		// public SocketTask[] Tasks { get; set; }
		SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A* L_0 = ___value0;
		__this->set_U3CTasksU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean MLAPI.Transports.Tasks.SocketTasks::get_IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketTasks_get_IsDone_m55DF82B1CCA45E1E08195A7DB0A16AB6C36B8FF7 (SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// for (int i = 0; i < Tasks.Length; i++)
		V_0 = 0;
		goto IL_0024;
	}

IL_0005:
	{
		// if (!Tasks[i].IsDone)
		SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A* L_0;
		L_0 = SocketTasks_get_Tasks_mF087E77B35CBE627B72634D6FECBFEA8F1306AE8_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4;
		L_4 = SocketTask_get_IsDone_m81A9EA33FE518DF4F9EA0A9780C555662823BC47_inline(L_3, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0037;
	}

IL_001f:
	{
		// for (int i = 0; i < Tasks.Length; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0024:
	{
		// for (int i = 0; i < Tasks.Length; i++)
		int32_t L_7 = V_0;
		SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A* L_8;
		L_8 = SocketTasks_get_Tasks_mF087E77B35CBE627B72634D6FECBFEA8F1306AE8_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		V_3 = (bool)((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))? 1 : 0);
		bool L_9 = V_3;
		if (L_9)
		{
			goto IL_0005;
		}
	}
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0037;
	}

IL_0037:
	{
		// }
		bool L_10 = V_2;
		return L_10;
	}
}
// System.Boolean MLAPI.Transports.Tasks.SocketTasks::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketTasks_get_Success_mC235AEC4DB03CD4CDDE045CE7B167890FB996F54 (SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// for (int i = 0; i < Tasks.Length; i++)
		V_0 = 0;
		goto IL_0024;
	}

IL_0005:
	{
		// if (!Tasks[i].Success)
		SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A* L_0;
		L_0 = SocketTasks_get_Tasks_mF087E77B35CBE627B72634D6FECBFEA8F1306AE8_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4;
		L_4 = SocketTask_get_Success_m3BFB888B17C75D627C70916162D91538A50D7DE7_inline(L_3, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0037;
	}

IL_001f:
	{
		// for (int i = 0; i < Tasks.Length; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0024:
	{
		// for (int i = 0; i < Tasks.Length; i++)
		int32_t L_7 = V_0;
		SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A* L_8;
		L_8 = SocketTasks_get_Tasks_mF087E77B35CBE627B72634D6FECBFEA8F1306AE8_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		V_3 = (bool)((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))? 1 : 0);
		bool L_9 = V_3;
		if (L_9)
		{
			goto IL_0005;
		}
	}
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0037;
	}

IL_0037:
	{
		// }
		bool L_10 = V_2;
		return L_10;
	}
}
// System.Boolean MLAPI.Transports.Tasks.SocketTasks::get_AnySuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketTasks_get_AnySuccess_mA90E6FD395E5D7EDDBBF4A806C6D4B2CC9665D47 (SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// for (int i = 0; i < Tasks.Length; i++)
		V_0 = 0;
		goto IL_0021;
	}

IL_0005:
	{
		// if (Tasks[i].Success)
		SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A* L_0;
		L_0 = SocketTasks_get_Tasks_mF087E77B35CBE627B72634D6FECBFEA8F1306AE8_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4;
		L_4 = SocketTask_get_Success_m3BFB888B17C75D627C70916162D91538A50D7DE7_inline(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0034;
	}

IL_001c:
	{
		// for (int i = 0; i < Tasks.Length; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0021:
	{
		// for (int i = 0; i < Tasks.Length; i++)
		int32_t L_7 = V_0;
		SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A* L_8;
		L_8 = SocketTasks_get_Tasks_mF087E77B35CBE627B72634D6FECBFEA8F1306AE8_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		V_3 = (bool)((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))? 1 : 0);
		bool L_9 = V_3;
		if (L_9)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0034;
	}

IL_0034:
	{
		// }
		bool L_10 = V_2;
		return L_10;
	}
}
// System.Boolean MLAPI.Transports.Tasks.SocketTasks::get_AnyDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketTasks_get_AnyDone_m0207B981EF6656B9ECA1C68AA7413AF8D6FEFF38 (SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// for (int i = 0; i < Tasks.Length; i++)
		V_0 = 0;
		goto IL_0021;
	}

IL_0005:
	{
		// if (Tasks[i].IsDone)
		SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A* L_0;
		L_0 = SocketTasks_get_Tasks_mF087E77B35CBE627B72634D6FECBFEA8F1306AE8_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4;
		L_4 = SocketTask_get_IsDone_m81A9EA33FE518DF4F9EA0A9780C555662823BC47_inline(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0034;
	}

IL_001c:
	{
		// for (int i = 0; i < Tasks.Length; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0021:
	{
		// for (int i = 0; i < Tasks.Length; i++)
		int32_t L_7 = V_0;
		SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A* L_8;
		L_8 = SocketTasks_get_Tasks_mF087E77B35CBE627B72634D6FECBFEA8F1306AE8_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		V_3 = (bool)((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))? 1 : 0);
		bool L_9 = V_3;
		if (L_9)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0034;
	}

IL_0034:
	{
		// }
		bool L_10 = V_2;
		return L_10;
	}
}
// System.Void MLAPI.Transports.Tasks.SocketTasks::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketTasks__ctor_m18EF5442A6FF14CD632AD77A6FDC6CA0F7653F19 (SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.Exceptions.SpawnStateException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnStateException__ctor_m637568465AA6A2B781EC74CB58907BDC5A72DBEE (SpawnStateException_tEF5EB7D83B74141861F781C099D7B41CC3143E4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SpawnStateException() { }
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(__this, /*hidden argument*/NULL);
		// public SpawnStateException() { }
		return;
	}
}
// System.Void MLAPI.Exceptions.SpawnStateException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnStateException__ctor_m1FB7A9EE24A3CFD4FDB2600D20F7C2C178D8EDB3 (SpawnStateException_tEF5EB7D83B74141861F781C099D7B41CC3143E4E * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SpawnStateException(string message) : base(message) { }
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
		// public SpawnStateException(string message) : base(message) { }
		return;
	}
}
// System.Void MLAPI.Exceptions.SpawnStateException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnStateException__ctor_m10E6282F81A096D605660B9007C541E96B297D57 (SpawnStateException_tEF5EB7D83B74141861F781C099D7B41CC3143E4E * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SpawnStateException(string message, Exception inner) : base(message, inner) { }
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___inner1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080(__this, L_0, L_1, /*hidden argument*/NULL);
		// public SpawnStateException(string message, Exception inner) : base(message, inner) { }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.Profiling.TickEvent::SerializeToStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickEvent_SerializeToStream_m07A7D66E790421C9E38358498F1BA1F26FFE9A19 (TickEvent_t6ED6E2A0F7108928D72CFC0F0774EB1390A9C63D * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PooledNetworkWriter_t4EFF6DA061F1469895F9FDC1B4FD3EAA9DCC5A7A * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (var writer = PooledNetworkWriter.Get(stream))
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		PooledNetworkWriter_t4EFF6DA061F1469895F9FDC1B4FD3EAA9DCC5A7A * L_1;
		L_1 = PooledNetworkWriter_Get_m3B65761E11C9BD7A96EF57F8DA5CE2E26DF09620(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		// writer.WriteByte((byte)EventType);
		PooledNetworkWriter_t4EFF6DA061F1469895F9FDC1B4FD3EAA9DCC5A7A * L_2 = V_0;
		int32_t L_3 = __this->get_EventType_0();
		NullCheck(L_2);
		NetworkWriter_WriteByte_m92F3168EE2CC1BC83DEB2C6B7A05C3AEDEDB48A6(L_2, (uint8_t)((int32_t)((uint8_t)L_3)), /*hidden argument*/NULL);
		// writer.WriteUInt32Packed(Bytes);
		PooledNetworkWriter_t4EFF6DA061F1469895F9FDC1B4FD3EAA9DCC5A7A * L_4 = V_0;
		uint32_t L_5 = __this->get_Bytes_1();
		NullCheck(L_4);
		NetworkWriter_WriteUInt32Packed_m65B81BE04804DDE666A0EE7ED7CD349EAC01D72A(L_4, L_5, /*hidden argument*/NULL);
		// writer.WriteStringPacked(ChannelName);
		PooledNetworkWriter_t4EFF6DA061F1469895F9FDC1B4FD3EAA9DCC5A7A * L_6 = V_0;
		String_t* L_7 = __this->get_ChannelName_2();
		NullCheck(L_6);
		NetworkWriter_WriteStringPacked_m68F41867BE5A1E5A802365338F952BCF923F398C(L_6, L_7, /*hidden argument*/NULL);
		// writer.WriteStringPacked(MessageType);
		PooledNetworkWriter_t4EFF6DA061F1469895F9FDC1B4FD3EAA9DCC5A7A * L_8 = V_0;
		String_t* L_9 = __this->get_MessageType_3();
		NullCheck(L_8);
		NetworkWriter_WriteStringPacked_m68F41867BE5A1E5A802365338F952BCF923F398C(L_8, L_9, /*hidden argument*/NULL);
		// writer.WriteBool(Closed);
		PooledNetworkWriter_t4EFF6DA061F1469895F9FDC1B4FD3EAA9DCC5A7A * L_10 = V_0;
		bool L_11 = __this->get_Closed_4();
		NullCheck(L_10);
		NetworkWriter_WriteBool_mBC4A70E8FE06379CE89DF3AE01E77BE7AD00F740(L_10, L_11, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x59, FINALLY_004e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		{
			PooledNetworkWriter_t4EFF6DA061F1469895F9FDC1B4FD3EAA9DCC5A7A * L_12 = V_0;
			if (!L_12)
			{
				goto IL_0058;
			}
		}

IL_0051:
		{
			PooledNetworkWriter_t4EFF6DA061F1469895F9FDC1B4FD3EAA9DCC5A7A * L_13 = V_0;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_13);
		}

IL_0058:
		{
			IL2CPP_END_FINALLY(78)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x59, IL_0059)
	}

IL_0059:
	{
		// }
		return;
	}
}
// MLAPI.Profiling.TickEvent MLAPI.Profiling.TickEvent::FromStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TickEvent_t6ED6E2A0F7108928D72CFC0F0774EB1390A9C63D * TickEvent_FromStream_m86C3E7C9ABCDDDB853E38EE75E7726CACB16B288 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TickEvent_t6ED6E2A0F7108928D72CFC0F0774EB1390A9C63D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PooledNetworkReader_tDB17DC1025307417EC373DE16F1FD1B5AA46C7C2 * V_0 = NULL;
	TickEvent_t6ED6E2A0F7108928D72CFC0F0774EB1390A9C63D * V_1 = NULL;
	TickEvent_t6ED6E2A0F7108928D72CFC0F0774EB1390A9C63D * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (var reader = PooledNetworkReader.Get(stream))
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		PooledNetworkReader_tDB17DC1025307417EC373DE16F1FD1B5AA46C7C2 * L_1;
		L_1 = PooledNetworkReader_Get_m6454F431B9193D60AB8B8DAC90C5324FA079C127(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		// var tickEvent = new TickEvent
		// {
		//     EventType = (TickType)reader.ReadByte(),
		//     Bytes = reader.ReadUInt32Packed(),
		//     ChannelName = reader.ReadStringPacked(),
		//     MessageType = reader.ReadStringPacked(),
		//     Closed = reader.ReadBool()
		// };
		TickEvent_t6ED6E2A0F7108928D72CFC0F0774EB1390A9C63D * L_2 = (TickEvent_t6ED6E2A0F7108928D72CFC0F0774EB1390A9C63D *)il2cpp_codegen_object_new(TickEvent_t6ED6E2A0F7108928D72CFC0F0774EB1390A9C63D_il2cpp_TypeInfo_var);
		TickEvent__ctor_m2394C3A78074D2BC30C3C9D5E396A4A0ADCCFB87(L_2, /*hidden argument*/NULL);
		TickEvent_t6ED6E2A0F7108928D72CFC0F0774EB1390A9C63D * L_3 = L_2;
		PooledNetworkReader_tDB17DC1025307417EC373DE16F1FD1B5AA46C7C2 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = NetworkReader_ReadByte_m556DD341100470ACA1E4AF25F8BFCDB440C03A35(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->set_EventType_0(L_5);
		TickEvent_t6ED6E2A0F7108928D72CFC0F0774EB1390A9C63D * L_6 = L_3;
		PooledNetworkReader_tDB17DC1025307417EC373DE16F1FD1B5AA46C7C2 * L_7 = V_0;
		NullCheck(L_7);
		uint32_t L_8;
		L_8 = NetworkReader_ReadUInt32Packed_m24E405F56127D0089AD3FA83665AC1C1A93725B2(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_Bytes_1(L_8);
		TickEvent_t6ED6E2A0F7108928D72CFC0F0774EB1390A9C63D * L_9 = L_6;
		PooledNetworkReader_tDB17DC1025307417EC373DE16F1FD1B5AA46C7C2 * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = NetworkReader_ReadStringPacked_mC10B1D16E5F924035A9E4B8AD966E5D8C18D98B9(L_10, (StringBuilder_t *)NULL, /*hidden argument*/NULL);
		NullCheck(L_9);
		L_9->set_ChannelName_2(L_11);
		TickEvent_t6ED6E2A0F7108928D72CFC0F0774EB1390A9C63D * L_12 = L_9;
		PooledNetworkReader_tDB17DC1025307417EC373DE16F1FD1B5AA46C7C2 * L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = NetworkReader_ReadStringPacked_mC10B1D16E5F924035A9E4B8AD966E5D8C18D98B9(L_13, (StringBuilder_t *)NULL, /*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_MessageType_3(L_14);
		TickEvent_t6ED6E2A0F7108928D72CFC0F0774EB1390A9C63D * L_15 = L_12;
		PooledNetworkReader_tDB17DC1025307417EC373DE16F1FD1B5AA46C7C2 * L_16 = V_0;
		NullCheck(L_16);
		bool L_17;
		L_17 = NetworkReader_ReadBool_mEE86966A13D3C647CA7C21688F0ED4EB3C286EEF(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		L_15->set_Closed_4(L_17);
		V_1 = L_15;
		// return tickEvent;
		TickEvent_t6ED6E2A0F7108928D72CFC0F0774EB1390A9C63D * L_18 = V_1;
		V_2 = L_18;
		IL2CPP_LEAVE(0x5C, FINALLY_0051);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			PooledNetworkReader_tDB17DC1025307417EC373DE16F1FD1B5AA46C7C2 * L_19 = V_0;
			if (!L_19)
			{
				goto IL_005b;
			}
		}

IL_0054:
		{
			PooledNetworkReader_tDB17DC1025307417EC373DE16F1FD1B5AA46C7C2 * L_20 = V_0;
			NullCheck(L_20);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_20);
		}

IL_005b:
		{
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
	}

IL_005c:
	{
		// }
		TickEvent_t6ED6E2A0F7108928D72CFC0F0774EB1390A9C63D * L_21 = V_2;
		return L_21;
	}
}
// System.Void MLAPI.Profiling.TickEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickEvent__ctor_m2394C3A78074D2BC30C3C9D5E396A4A0ADCCFB87 (TickEvent_t6ED6E2A0F7108928D72CFC0F0774EB1390A9C63D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.Transports.TransportChannel::.ctor(MLAPI.Transports.NetworkChannel,MLAPI.Transports.NetworkDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransportChannel__ctor_m98D085AC9B752A4ACDE5912DA3D2A6731E5F676F (TransportChannel_t0A8B4B6112B5AAAA3261EDB8AB9F8707DD8F7D73 * __this, uint8_t ___channel0, int32_t ___delivery1, const RuntimeMethod* method)
{
	{
		// Channel = channel;
		uint8_t L_0 = ___channel0;
		__this->set_Channel_0(L_0);
		// Delivery = delivery;
		int32_t L_1 = ___delivery1;
		__this->set_Delivery_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TransportChannel__ctor_m98D085AC9B752A4ACDE5912DA3D2A6731E5F676F_AdjustorThunk (RuntimeObject * __this, uint8_t ___channel0, int32_t ___delivery1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransportChannel_t0A8B4B6112B5AAAA3261EDB8AB9F8707DD8F7D73 * _thisAdjusted = reinterpret_cast<TransportChannel_t0A8B4B6112B5AAAA3261EDB8AB9F8707DD8F7D73 *>(__this + _offset);
	TransportChannel__ctor_m98D085AC9B752A4ACDE5912DA3D2A6731E5F676F(_thisAdjusted, ___channel0, ___delivery1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean MLAPI.Reflection.TypeExtensions::HasInterface(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_HasInterface_m7FEC3D5621D5C4A8573745194C38CEE36CF0CB09 (Type_t * ___type0, Type_t * ___interfaceType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// var ifaces = type.GetInterfaces();
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_1;
		L_1 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(48 /* System.Type[] System.Type::GetInterfaces() */, L_0);
		V_0 = L_1;
		// for (int i = 0; i < ifaces.Length; i++)
		V_1 = 0;
		goto IL_0023;
	}

IL_000c:
	{
		// if (ifaces[i] == interfaceType) return true;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Type_t * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Type_t * L_6 = ___interfaceType1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_001e;
		}
	}
	{
		// if (ifaces[i] == interfaceType) return true;
		V_3 = (bool)1;
		goto IL_0033;
	}

IL_001e:
	{
		// for (int i = 0; i < ifaces.Length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0023:
	{
		// for (int i = 0; i < ifaces.Length; i++)
		int32_t L_10 = V_1;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_11 = V_0;
		NullCheck(L_11);
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_000c;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0033;
	}

IL_0033:
	{
		// }
		bool L_13 = V_3;
		return L_13;
	}
}
// System.Boolean MLAPI.Reflection.TypeExtensions::IsNullable(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsNullable_mAD2A6A9CBEA2F0DD1262C77E8EE76C5A928C6AF5 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!type.IsValueType) return true; // ref-type
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// if (!type.IsValueType) return true; // ref-type
		V_1 = (bool)1;
		goto IL_0021;
	}

IL_0012:
	{
		// return Nullable.GetUnderlyingType(type) != null;
		Type_t * L_3 = ___type0;
		Type_t * L_4;
		L_4 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_4, (Type_t *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		bool L_6 = V_1;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.Transports.UNetChannel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetChannel__ctor_m31404CB7461835C7CCA11256FA87BA19B7694115 (UNetChannel_tEC908B6737ABA9307E2DEB4A3F276B0EED170DC1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt64 MLAPI.Transports.UNET.UNetTransport::get_ServerClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UNetTransport_get_ServerClientId_mECCFF9CF597FF0F5422F1E8F5B900D7B01D00BC5 (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, const RuntimeMethod* method)
{
	{
		// public override ulong ServerClientId => GetMLAPIClientId(0, 0, true);
		uint64_t L_0;
		L_0 = UNetTransport_GetMLAPIClientId_m571B08D02375DD7ECB5A0CC31FC75229DD9CAD1F(__this, (uint8_t)0, (uint16_t)0, (bool)1, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void MLAPI.Transports.UNET.UNetTransport::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_LateUpdate_mE2CE0FDEAB7E181661DA9BDA2BF0364FED70AE20 (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m786BB72883B9B30A983BA96A3DFD15F5A206D953_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD7515F0017B083FF47FE011EAE8FD7609D2DE427_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		// if (UnityEngine.Networking.NetworkTransport.IsStarted && MessageSendMode == SendMode.Queued)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NetworkTransport_get_IsStarted_m16B139370CAED45416649D8D43AD059EF4CBE05E(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = __this->get_MessageSendMode_22();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_007b;
		}
	}
	{
		// if (NetworkManager.Singleton.IsServer)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_il2cpp_TypeInfo_var);
		NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * L_3;
		L_3 = NetworkManager_get_Singleton_m4A3EAA6822FD326519757EF5899202B2C5884B13_inline(/*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = NetworkManager_get_IsServer_m20570D2A773CF3C919CF2EFA520C9DAFB16DF51A_inline(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0067;
		}
	}
	{
		// for (int i = 0; i < NetworkManager.Singleton.ConnectedClientsList.Count; i++)
		V_2 = 0;
		goto IL_004e;
	}

IL_002c:
	{
		// SendQueued(NetworkManager.Singleton.ConnectedClientsList[i].ClientId);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_il2cpp_TypeInfo_var);
		NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * L_6;
		L_6 = NetworkManager_get_Singleton_m4A3EAA6822FD326519757EF5899202B2C5884B13_inline(/*hidden argument*/NULL);
		NullCheck(L_6);
		List_1_t3A508A14B962436191D0F4A254F5A2F44CDBBB1F * L_7 = L_6->get_ConnectedClientsList_23();
		int32_t L_8 = V_2;
		NullCheck(L_7);
		NetworkClient_t0DF198CA47B274F9A545CC0E08507786069E2DE6 * L_9;
		L_9 = List_1_get_Item_mD7515F0017B083FF47FE011EAE8FD7609D2DE427_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_mD7515F0017B083FF47FE011EAE8FD7609D2DE427_RuntimeMethod_var);
		NullCheck(L_9);
		uint64_t L_10 = L_9->get_ClientId_0();
		UNetTransport_SendQueued_mAB8F64DACFEEFF3343B30217C54E6BA76D849440(__this, L_10, /*hidden argument*/NULL);
		// for (int i = 0; i < NetworkManager.Singleton.ConnectedClientsList.Count; i++)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_004e:
	{
		// for (int i = 0; i < NetworkManager.Singleton.ConnectedClientsList.Count; i++)
		int32_t L_12 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_il2cpp_TypeInfo_var);
		NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * L_13;
		L_13 = NetworkManager_get_Singleton_m4A3EAA6822FD326519757EF5899202B2C5884B13_inline(/*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_t3A508A14B962436191D0F4A254F5A2F44CDBBB1F * L_14 = L_13->get_ConnectedClientsList_23();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m786BB72883B9B30A983BA96A3DFD15F5A206D953_inline(L_14, /*hidden argument*/List_1_get_Count_m786BB72883B9B30A983BA96A3DFD15F5A206D953_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_12) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (L_16)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_007a;
	}

IL_0067:
	{
		// SendQueued(NetworkManager.Singleton.LocalClientId);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_il2cpp_TypeInfo_var);
		NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * L_17;
		L_17 = NetworkManager_get_Singleton_m4A3EAA6822FD326519757EF5899202B2C5884B13_inline(/*hidden argument*/NULL);
		NullCheck(L_17);
		uint64_t L_18;
		L_18 = NetworkManager_get_LocalClientId_mDBBDDF5CE9D3E64EF51899519E062A6CAB45407B(L_17, /*hidden argument*/NULL);
		UNetTransport_SendQueued_mAB8F64DACFEEFF3343B30217C54E6BA76D849440(__this, L_18, /*hidden argument*/NULL);
	}

IL_007a:
	{
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void MLAPI.Transports.UNET.UNetTransport::Send(System.UInt64,System.ArraySegment`1<System.Byte>,MLAPI.Transports.NetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_Send_m9512DC9D7C53EE46506F0C1251AA4EC7153A5B38 (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, uint64_t ___clientId0, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___data1, uint8_t ___networkChannel2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD8FB600C8C87D9181A050E1CD828AA7D5545B105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7C742CE8268D14396B24D20675855E13A99A4BDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE60EDCA57B59D9D1A7EDD0064A76B4311985F734);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	uint16_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	RuntimeObject * V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	uint8_t V_11 = 0x0;
	uint8_t V_12 = 0x0;
	int32_t G_B12_0 = 0;
	{
		// if (ProfilerEnabled)
		IL2CPP_RUNTIME_CLASS_INIT(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_il2cpp_TypeInfo_var);
		bool L_0 = ((UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_StaticFields*)il2cpp_codegen_static_fields_for(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_il2cpp_TypeInfo_var))->get_ProfilerEnabled_9();
		V_4 = L_0;
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// s_TransportProfilerData.Increment(ProfilerConstants.NumberOfTransportSends);
		IL2CPP_RUNTIME_CLASS_INIT(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_il2cpp_TypeInfo_var);
		ProfilingDataStore_t1E7070AC4F046AA186604C4185FCB4AC1956E333 * L_2 = ((UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_StaticFields*)il2cpp_codegen_static_fields_for(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_il2cpp_TypeInfo_var))->get_s_TransportProfilerData_8();
		NullCheck(L_2);
		ProfilingDataStore_Increment_m3672D05E10CEC335626C2B5E276FBADBFE06B4D0(L_2, _stringLiteralE60EDCA57B59D9D1A7EDD0064A76B4311985F734, 1, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// GetUNetConnectionDetails(clientId, out byte hostId, out ushort connectionId);
		uint64_t L_3 = ___clientId0;
		UNetTransport_GetUNetConnectionDetails_m5AB001B134B8B2727374626702CD46419E9F705D(__this, L_3, (uint8_t*)(&V_0), (uint16_t*)(&V_1), /*hidden argument*/NULL);
		// int channelId = 0;
		V_2 = 0;
		// if (m_ChannelNameToId.ContainsKey(networkChannel))
		Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206 * L_4 = __this->get_m_ChannelNameToId_25();
		uint8_t L_5 = ___networkChannel2;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_mD8FB600C8C87D9181A050E1CD828AA7D5545B105(L_4, L_5, /*hidden argument*/Dictionary_2_ContainsKey_mD8FB600C8C87D9181A050E1CD828AA7D5545B105_RuntimeMethod_var);
		V_5 = L_6;
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		// channelId = m_ChannelNameToId[networkChannel];
		Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206 * L_8 = __this->get_m_ChannelNameToId_25();
		uint8_t L_9 = ___networkChannel2;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = Dictionary_2_get_Item_m7C742CE8268D14396B24D20675855E13A99A4BDB(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m7C742CE8268D14396B24D20675855E13A99A4BDB_RuntimeMethod_var);
		V_2 = L_10;
		goto IL_005f;
	}

IL_0050:
	{
		// channelId = m_ChannelNameToId[NetworkChannel.Internal];
		Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206 * L_11 = __this->get_m_ChannelNameToId_25();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Dictionary_2_get_Item_m7C742CE8268D14396B24D20675855E13A99A4BDB(L_11, 0, /*hidden argument*/Dictionary_2_get_Item_m7C742CE8268D14396B24D20675855E13A99A4BDB_RuntimeMethod_var);
		V_2 = L_12;
	}

IL_005f:
	{
		// if (data.Offset > 0)
		int32_t L_13;
		L_13 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___data1), /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_13) > ((int32_t)0))? 1 : 0);
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_011a;
		}
	}
	{
		// if (m_MessageBuffer.Length >= data.Count)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = __this->get_m_MessageBuffer_23();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___data1), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		V_7 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))) < ((int32_t)L_16))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_7;
		if (!L_17)
		{
			goto IL_0098;
		}
	}
	{
		// buffer = m_MessageBuffer;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = __this->get_m_MessageBuffer_23();
		V_3 = L_18;
		goto IL_00fa;
	}

IL_0098:
	{
		// object bufferRef = null;
		V_8 = NULL;
		// if (m_TemporaryBufferReference != null && ((bufferRef = m_TemporaryBufferReference.Target) != null) && ((byte[])bufferRef).Length >= data.Count)
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_19 = __this->get_m_TemporaryBufferReference_24();
		if (!L_19)
		{
			goto IL_00cb;
		}
	}
	{
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_20 = __this->get_m_TemporaryBufferReference_24();
		NullCheck(L_20);
		RuntimeObject * L_21;
		L_21 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_20);
		RuntimeObject * L_22 = L_21;
		V_8 = L_22;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		RuntimeObject * L_23 = V_8;
		NullCheck(((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_23, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var)));
		int32_t L_24;
		L_24 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___data1), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		G_B12_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_23, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var)))->max_length)))) < ((int32_t)L_24))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B12_0 = 0;
	}

IL_00cc:
	{
		V_9 = (bool)G_B12_0;
		bool L_25 = V_9;
		if (!L_25)
		{
			goto IL_00de;
		}
	}
	{
		// buffer = (byte[])bufferRef;
		RuntimeObject * L_26 = V_8;
		V_3 = ((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_26, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var));
		goto IL_00f9;
	}

IL_00de:
	{
		// buffer = new byte[data.Count];
		int32_t L_27;
		L_27 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___data1), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_27);
		V_3 = L_28;
		// m_TemporaryBufferReference = new WeakReference(buffer);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = V_3;
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_30 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)il2cpp_codegen_object_new(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var);
		WeakReference__ctor_m11BFDB039514BDCE23425FD90E8C414D051B2F13(L_30, (RuntimeObject *)(RuntimeObject *)L_29, /*hidden argument*/NULL);
		__this->set_m_TemporaryBufferReference_24(L_30);
	}

IL_00f9:
	{
	}

IL_00fa:
	{
		// Buffer.BlockCopy(data.Array, data.Offset, buffer, 0, data.Count);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31;
		L_31 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___data1), /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		int32_t L_32;
		L_32 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___data1), /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = V_3;
		int32_t L_34;
		L_34 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___data1), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_31, L_32, (RuntimeArray *)(RuntimeArray *)L_33, 0, L_34, /*hidden argument*/NULL);
		goto IL_0124;
	}

IL_011a:
	{
		// buffer = data.Array;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35;
		L_35 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___data1), /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		V_3 = L_35;
	}

IL_0124:
	{
		// if (MessageSendMode == SendMode.Queued)
		int32_t L_36 = __this->get_MessageSendMode_22();
		V_10 = (bool)((((int32_t)L_36) == ((int32_t)1))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_014a;
		}
	}
	{
		// RelayTransport.QueueMessageForSending(hostId, connectionId, channelId, buffer, data.Count, out byte error);
		uint8_t L_38 = V_0;
		uint16_t L_39 = V_1;
		int32_t L_40 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_41 = V_3;
		int32_t L_42;
		L_42 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___data1), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = RelayTransport_QueueMessageForSending_m361A782F33CEC6B64F9CCD38FB69E12D095E6C21(L_38, L_39, L_40, L_41, L_42, (uint8_t*)(&V_11), /*hidden argument*/NULL);
		goto IL_015f;
	}

IL_014a:
	{
		// RelayTransport.Send(hostId, connectionId, channelId, buffer, data.Count, out byte error);
		uint8_t L_44 = V_0;
		uint16_t L_45 = V_1;
		int32_t L_46 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_47 = V_3;
		int32_t L_48;
		L_48 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___data1), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = RelayTransport_Send_mD7EFD8C0F9DFBFCBC721F3B7ABD5321960966689(L_44, L_45, L_46, L_47, L_48, (uint8_t*)(&V_12), /*hidden argument*/NULL);
	}

IL_015f:
	{
		// }
		return;
	}
}
// System.Void MLAPI.Transports.UNET.UNetTransport::SendQueued(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_SendQueued_mAB8F64DACFEEFF3343B30217C54E6BA76D849440 (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, uint64_t ___clientId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C3C8B464860DEB0AA13CF0E8B018E4D0C821868);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	uint16_t V_1 = 0;
	uint8_t V_2 = 0x0;
	bool V_3 = false;
	{
		// if (ProfilerEnabled)
		IL2CPP_RUNTIME_CLASS_INIT(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_il2cpp_TypeInfo_var);
		bool L_0 = ((UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_StaticFields*)il2cpp_codegen_static_fields_for(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_il2cpp_TypeInfo_var))->get_ProfilerEnabled_9();
		V_3 = L_0;
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// s_TransportProfilerData.Increment(ProfilerConstants.NumberOfTransportSendQueues);
		IL2CPP_RUNTIME_CLASS_INIT(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_il2cpp_TypeInfo_var);
		ProfilingDataStore_t1E7070AC4F046AA186604C4185FCB4AC1956E333 * L_2 = ((UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_StaticFields*)il2cpp_codegen_static_fields_for(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_il2cpp_TypeInfo_var))->get_s_TransportProfilerData_8();
		NullCheck(L_2);
		ProfilingDataStore_Increment_m3672D05E10CEC335626C2B5E276FBADBFE06B4D0(L_2, _stringLiteral9C3C8B464860DEB0AA13CF0E8B018E4D0C821868, 1, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// GetUNetConnectionDetails(clientId, out byte hostId, out ushort connectionId);
		uint64_t L_3 = ___clientId0;
		UNetTransport_GetUNetConnectionDetails_m5AB001B134B8B2727374626702CD46419E9F705D(__this, L_3, (uint8_t*)(&V_0), (uint16_t*)(&V_1), /*hidden argument*/NULL);
		// RelayTransport.SendQueuedMessages(hostId, connectionId, out byte error);
		uint8_t L_4 = V_0;
		uint16_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = RelayTransport_SendQueuedMessages_mA7E82B225CEE378EC93A86449113C30B30FC83B4(L_4, L_5, (uint8_t*)(&V_2), /*hidden argument*/NULL);
		// }
		return;
	}
}
// MLAPI.Transports.NetworkEvent MLAPI.Transports.UNET.UNetTransport::PollEvent(System.UInt64&,MLAPI.Transports.NetworkChannel&,System.ArraySegment`1<System.Byte>&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UNetTransport_PollEvent_m0FE04EB9DB435C176490397BF5EF24B13F7715BA (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, uint64_t* ___clientId0, uint8_t* ___networkChannel1, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * ___payload2, float* ___receiveTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m9183F6C70EBC3C7AB57280DEF5DD7DD813464139_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5F82950FC4ECC16C66979A3E076EC43A0F47EC54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint8_t V_5 = 0x0;
	int32_t V_6 = 0;
	bool V_7 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B17_0 = 0;
	SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * G_B21_0 = NULL;
	SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * G_B20_0 = NULL;
	int32_t G_B22_0 = 0;
	SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * G_B22_1 = NULL;
	{
		// var eventType = RelayTransport.Receive(out int hostId, out int connectionId, out int channelId, m_MessageBuffer, m_MessageBuffer.Length, out int receivedSize, out byte error);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_m_MessageBuffer_23();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_m_MessageBuffer_23();
		NullCheck(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = RelayTransport_Receive_m7BD89BF133B281E93081FE7CD2F58A053147CD9E((int32_t*)(&V_1), (int32_t*)(&V_2), (int32_t*)(&V_3), L_0, ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t*)(&V_4), (uint8_t*)(&V_5), /*hidden argument*/NULL);
		V_0 = L_2;
		// clientId = GetMLAPIClientId((byte)hostId, (ushort)connectionId, false);
		uint64_t* L_3 = ___clientId0;
		int32_t L_4 = V_1;
		int32_t L_5 = V_2;
		uint64_t L_6;
		L_6 = UNetTransport_GetMLAPIClientId_m571B08D02375DD7ECB5A0CC31FC75229DD9CAD1F(__this, (uint8_t)((int32_t)((uint8_t)L_4)), (uint16_t)((int32_t)((uint16_t)L_5)), (bool)0, /*hidden argument*/NULL);
		*((int64_t*)L_3) = (int64_t)L_6;
		// receiveTime = UnityEngine.Time.realtimeSinceStartup;
		float* L_7 = ___receiveTime3;
		float L_8;
		L_8 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		*((float*)L_7) = (float)L_8;
		// var networkError = (NetworkError)error;
		uint8_t L_9 = V_5;
		V_6 = L_9;
		// if (networkError == NetworkError.MessageToLong)
		int32_t L_10 = V_6;
		V_7 = (bool)((((int32_t)L_10) == ((int32_t)7))? 1 : 0);
		bool L_11 = V_7;
		if (!L_11)
		{
			goto IL_00d5;
		}
	}
	{
		// if (m_TemporaryBufferReference != null && m_TemporaryBufferReference.IsAlive && ((byte[])m_TemporaryBufferReference.Target).Length >= receivedSize)
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_12 = __this->get_m_TemporaryBufferReference_24();
		if (!L_12)
		{
			goto IL_0077;
		}
	}
	{
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_13 = __this->get_m_TemporaryBufferReference_24();
		NullCheck(L_13);
		bool L_14;
		L_14 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_13);
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_15 = __this->get_m_TemporaryBufferReference_24();
		NullCheck(L_15);
		RuntimeObject * L_16;
		L_16 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_15);
		NullCheck(((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_16, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var)));
		int32_t L_17 = V_4;
		G_B5_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_16, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var)))->max_length)))) < ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0078;
	}

IL_0077:
	{
		G_B5_0 = 0;
	}

IL_0078:
	{
		V_9 = (bool)G_B5_0;
		bool L_18 = V_9;
		if (!L_18)
		{
			goto IL_0094;
		}
	}
	{
		// tempBuffer = (byte[])m_TemporaryBufferReference.Target;
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_19 = __this->get_m_TemporaryBufferReference_24();
		NullCheck(L_19);
		RuntimeObject * L_20;
		L_20 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_19);
		V_8 = ((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_20, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var));
		goto IL_00ac;
	}

IL_0094:
	{
		// tempBuffer = new byte[receivedSize];
		int32_t L_21 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_21);
		V_8 = L_22;
		// m_TemporaryBufferReference = new WeakReference(tempBuffer);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = V_8;
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_24 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)il2cpp_codegen_object_new(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var);
		WeakReference__ctor_m11BFDB039514BDCE23425FD90E8C414D051B2F13(L_24, (RuntimeObject *)(RuntimeObject *)L_23, /*hidden argument*/NULL);
		__this->set_m_TemporaryBufferReference_24(L_24);
	}

IL_00ac:
	{
		// eventType = RelayTransport.Receive(out hostId, out connectionId, out channelId, tempBuffer, tempBuffer.Length, out receivedSize, out error);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = V_8;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = V_8;
		NullCheck(L_26);
		IL2CPP_RUNTIME_CLASS_INIT(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = RelayTransport_Receive_m7BD89BF133B281E93081FE7CD2F58A053147CD9E((int32_t*)(&V_1), (int32_t*)(&V_2), (int32_t*)(&V_3), L_25, ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))), (int32_t*)(&V_4), (uint8_t*)(&V_5), /*hidden argument*/NULL);
		V_0 = L_27;
		// payload = new ArraySegment<byte>(tempBuffer, 0, receivedSize);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * L_28 = ___payload2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = V_8;
		int32_t L_30 = V_4;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_31;
		memset((&L_31), 0, sizeof(L_31));
		ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D((&L_31), L_29, 0, L_30, /*hidden argument*/ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		*(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)L_28 = L_31;
		Il2CppCodeGenWriteBarrier((void**)&(((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)L_28)->____array_0), (void*)NULL);
		goto IL_00eb;
	}

IL_00d5:
	{
		// payload = new ArraySegment<byte>(m_MessageBuffer, 0, receivedSize);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * L_32 = ___payload2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = __this->get_m_MessageBuffer_23();
		int32_t L_34 = V_4;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_35;
		memset((&L_35), 0, sizeof(L_35));
		ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D((&L_35), L_33, 0, L_34, /*hidden argument*/ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		*(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)L_32 = L_35;
		Il2CppCodeGenWriteBarrier((void**)&(((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)L_32)->____array_0), (void*)NULL);
	}

IL_00eb:
	{
		// if (m_ChannelIdToName.ContainsKey(channelId))
		Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C * L_36 = __this->get_m_ChannelIdToName_26();
		int32_t L_37 = V_3;
		NullCheck(L_36);
		bool L_38;
		L_38 = Dictionary_2_ContainsKey_m9183F6C70EBC3C7AB57280DEF5DD7DD813464139(L_36, L_37, /*hidden argument*/Dictionary_2_ContainsKey_m9183F6C70EBC3C7AB57280DEF5DD7DD813464139_RuntimeMethod_var);
		V_10 = L_38;
		bool L_39 = V_10;
		if (!L_39)
		{
			goto IL_010f;
		}
	}
	{
		// networkChannel = m_ChannelIdToName[channelId];
		uint8_t* L_40 = ___networkChannel1;
		Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C * L_41 = __this->get_m_ChannelIdToName_26();
		int32_t L_42 = V_3;
		NullCheck(L_41);
		uint8_t L_43;
		L_43 = Dictionary_2_get_Item_m5F82950FC4ECC16C66979A3E076EC43A0F47EC54(L_41, L_42, /*hidden argument*/Dictionary_2_get_Item_m5F82950FC4ECC16C66979A3E076EC43A0F47EC54_RuntimeMethod_var);
		*((int8_t*)L_40) = (int8_t)L_43;
		goto IL_0114;
	}

IL_010f:
	{
		// networkChannel = NetworkChannel.Internal;
		uint8_t* L_44 = ___networkChannel1;
		*((int8_t*)L_44) = (int8_t)0;
	}

IL_0114:
	{
		// if (m_ConnectTask != null && hostId == m_ServerHostId && connectionId == m_ServerConnectionId)
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_45 = __this->get_m_ConnectTask_29();
		if (!L_45)
		{
			goto IL_0130;
		}
	}
	{
		int32_t L_46 = V_1;
		int32_t L_47 = __this->get_m_ServerHostId_28();
		if ((!(((uint32_t)L_46) == ((uint32_t)L_47))))
		{
			goto IL_0130;
		}
	}
	{
		int32_t L_48 = V_2;
		int32_t L_49 = __this->get_m_ServerConnectionId_27();
		G_B17_0 = ((((int32_t)L_48) == ((int32_t)L_49))? 1 : 0);
		goto IL_0131;
	}

IL_0130:
	{
		G_B17_0 = 0;
	}

IL_0131:
	{
		V_11 = (bool)G_B17_0;
		bool L_50 = V_11;
		if (!L_50)
		{
			goto IL_0229;
		}
	}
	{
		// if (eventType == NetworkEventType.ConnectEvent)
		int32_t L_51 = V_0;
		V_12 = (bool)((((int32_t)L_51) == ((int32_t)1))? 1 : 0);
		bool L_52 = V_12;
		if (!L_52)
		{
			goto IL_01b8;
		}
	}
	{
		// m_ConnectTask.Message = null;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_53 = __this->get_m_ConnectTask_29();
		NullCheck(L_53);
		SocketTask_set_Message_m545A20402C966CD20271A79857B1DEAD86428A3B_inline(L_53, (String_t*)NULL, /*hidden argument*/NULL);
		// m_ConnectTask.SocketError = networkError == NetworkError.Ok ? System.Net.Sockets.SocketError.Success : System.Net.Sockets.SocketError.SocketError;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_54 = __this->get_m_ConnectTask_29();
		int32_t L_55 = V_6;
		G_B20_0 = L_54;
		if (!L_55)
		{
			G_B21_0 = L_54;
			goto IL_0160;
		}
	}
	{
		G_B22_0 = (-1);
		G_B22_1 = G_B20_0;
		goto IL_0161;
	}

IL_0160:
	{
		G_B22_0 = 0;
		G_B22_1 = G_B21_0;
	}

IL_0161:
	{
		NullCheck(G_B22_1);
		SocketTask_set_SocketError_mF76003AEB28E4FEED8B7C59446A981B03ED8D062_inline(G_B22_1, G_B22_0, /*hidden argument*/NULL);
		// m_ConnectTask.State = null;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_56 = __this->get_m_ConnectTask_29();
		NullCheck(L_56);
		SocketTask_set_State_mFF4A85A2BCEBEA6B153F0F6D578B8DC7387D5E46_inline(L_56, NULL, /*hidden argument*/NULL);
		// m_ConnectTask.Success = networkError == NetworkError.Ok;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_57 = __this->get_m_ConnectTask_29();
		int32_t L_58 = V_6;
		NullCheck(L_57);
		SocketTask_set_Success_mAC4F7C19AEC4AF1FAD8B2419E4CC7BC336B8CF99_inline(L_57, (bool)((((int32_t)L_58) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// m_ConnectTask.TransportCode = (byte)networkError;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_59 = __this->get_m_ConnectTask_29();
		int32_t L_60 = V_6;
		NullCheck(L_59);
		SocketTask_set_TransportCode_m343E5732D03E7AA59805CF44E2222820F6881518_inline(L_59, ((int32_t)((uint8_t)L_60)), /*hidden argument*/NULL);
		// m_ConnectTask.TransportException = null;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_61 = __this->get_m_ConnectTask_29();
		NullCheck(L_61);
		SocketTask_set_TransportException_m2A47250811FB888D0E797D9D49029F8F0F3AECFB_inline(L_61, (Exception_t *)NULL, /*hidden argument*/NULL);
		// m_ConnectTask.IsDone = true;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_62 = __this->get_m_ConnectTask_29();
		NullCheck(L_62);
		SocketTask_set_IsDone_m15BAB4BD42E4BD25E31C50B5CD987DA6677D502B_inline(L_62, (bool)1, /*hidden argument*/NULL);
		// m_ConnectTask = null;
		__this->set_m_ConnectTask_29((SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 *)NULL);
		goto IL_0228;
	}

IL_01b8:
	{
		// else if (eventType == NetworkEventType.DisconnectEvent)
		int32_t L_63 = V_0;
		V_13 = (bool)((((int32_t)L_63) == ((int32_t)2))? 1 : 0);
		bool L_64 = V_13;
		if (!L_64)
		{
			goto IL_0228;
		}
	}
	{
		// m_ConnectTask.Message = null;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_65 = __this->get_m_ConnectTask_29();
		NullCheck(L_65);
		SocketTask_set_Message_m545A20402C966CD20271A79857B1DEAD86428A3B_inline(L_65, (String_t*)NULL, /*hidden argument*/NULL);
		// m_ConnectTask.SocketError = System.Net.Sockets.SocketError.SocketError;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_66 = __this->get_m_ConnectTask_29();
		NullCheck(L_66);
		SocketTask_set_SocketError_mF76003AEB28E4FEED8B7C59446A981B03ED8D062_inline(L_66, (-1), /*hidden argument*/NULL);
		// m_ConnectTask.State = null;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_67 = __this->get_m_ConnectTask_29();
		NullCheck(L_67);
		SocketTask_set_State_mFF4A85A2BCEBEA6B153F0F6D578B8DC7387D5E46_inline(L_67, NULL, /*hidden argument*/NULL);
		// m_ConnectTask.Success = false;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_68 = __this->get_m_ConnectTask_29();
		NullCheck(L_68);
		SocketTask_set_Success_mAC4F7C19AEC4AF1FAD8B2419E4CC7BC336B8CF99_inline(L_68, (bool)0, /*hidden argument*/NULL);
		// m_ConnectTask.TransportCode = (byte)networkError;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_69 = __this->get_m_ConnectTask_29();
		int32_t L_70 = V_6;
		NullCheck(L_69);
		SocketTask_set_TransportCode_m343E5732D03E7AA59805CF44E2222820F6881518_inline(L_69, ((int32_t)((uint8_t)L_70)), /*hidden argument*/NULL);
		// m_ConnectTask.TransportException = null;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_71 = __this->get_m_ConnectTask_29();
		NullCheck(L_71);
		SocketTask_set_TransportException_m2A47250811FB888D0E797D9D49029F8F0F3AECFB_inline(L_71, (Exception_t *)NULL, /*hidden argument*/NULL);
		// m_ConnectTask.IsDone = true;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_72 = __this->get_m_ConnectTask_29();
		NullCheck(L_72);
		SocketTask_set_IsDone_m15BAB4BD42E4BD25E31C50B5CD987DA6677D502B_inline(L_72, (bool)1, /*hidden argument*/NULL);
		// m_ConnectTask = null;
		__this->set_m_ConnectTask_29((SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 *)NULL);
	}

IL_0228:
	{
	}

IL_0229:
	{
		// if (networkError == NetworkError.Timeout)
		int32_t L_73 = V_6;
		V_14 = (bool)((((int32_t)L_73) == ((int32_t)6))? 1 : 0);
		bool L_74 = V_14;
		if (!L_74)
		{
			goto IL_0238;
		}
	}
	{
		// eventType = NetworkEventType.DisconnectEvent;
		V_0 = 2;
	}

IL_0238:
	{
		// switch (eventType)
		int32_t L_75 = V_0;
		V_16 = L_75;
		int32_t L_76 = V_16;
		V_15 = L_76;
		int32_t L_77 = V_15;
		switch (L_77)
		{
			case 0:
			{
				goto IL_025c;
			}
			case 1:
			{
				goto IL_0261;
			}
			case 2:
			{
				goto IL_0266;
			}
			case 3:
			{
				goto IL_026b;
			}
			case 4:
			{
				goto IL_0270;
			}
		}
	}
	{
		goto IL_0275;
	}

IL_025c:
	{
		// return NetworkEvent.Data;
		V_17 = 0;
		goto IL_027a;
	}

IL_0261:
	{
		// return NetworkEvent.Connect;
		V_17 = 1;
		goto IL_027a;
	}

IL_0266:
	{
		// return NetworkEvent.Disconnect;
		V_17 = 2;
		goto IL_027a;
	}

IL_026b:
	{
		// return NetworkEvent.Nothing;
		V_17 = 3;
		goto IL_027a;
	}

IL_0270:
	{
		// return NetworkEvent.Nothing;
		V_17 = 3;
		goto IL_027a;
	}

IL_0275:
	{
		// return NetworkEvent.Nothing;
		V_17 = 3;
		goto IL_027a;
	}

IL_027a:
	{
		// }
		int32_t L_78 = V_17;
		return L_78;
	}
}
// MLAPI.Transports.Tasks.SocketTasks MLAPI.Transports.UNET.UNetTransport::StartClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432 * UNetTransport_StartClient_m5C42588286A82D2FAF75A507622C139A335F1FD2 (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HostTopology_t268779309BB2D69F29D1A182662C79818813892B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * V_0 = NULL;
	uint8_t V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432 * V_5 = NULL;
	{
		// var socketTask = SocketTask.Working;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_0;
		L_0 = SocketTask_get_Working_mF690DA818087A2525B6F9EB1EF6E68FB9F975BB3(/*hidden argument*/NULL);
		V_0 = L_0;
		// m_ServerHostId = RelayTransport.AddHost(new HostTopology(GetConfig(), 1), false);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_1;
		L_1 = UNetTransport_GetConfig_mC86152445C0CB267FDFEEF52C89772C5A90B1A71(__this, /*hidden argument*/NULL);
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_2 = (HostTopology_t268779309BB2D69F29D1A182662C79818813892B *)il2cpp_codegen_object_new(HostTopology_t268779309BB2D69F29D1A182662C79818813892B_il2cpp_TypeInfo_var);
		HostTopology__ctor_m402906F2EFF083571541B3EDED1729CA3FDB6244(L_2, L_1, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = RelayTransport_AddHost_m1A9CDEFDB3B42867989C69AD9D74BCB8EC42CE13(L_2, (bool)0, /*hidden argument*/NULL);
		__this->set_m_ServerHostId_28(L_3);
		// m_ServerConnectionId = RelayTransport.Connect(m_ServerHostId, ConnectAddress, ConnectPort, 0, out byte error);
		int32_t L_4 = __this->get_m_ServerHostId_28();
		String_t* L_5 = __this->get_ConnectAddress_13();
		int32_t L_6 = __this->get_ConnectPort_14();
		int32_t L_7;
		L_7 = RelayTransport_Connect_m9EEBF364B20DDCFEA8EC538DD0C92645F82F05DF(L_4, L_5, L_6, 0, (uint8_t*)(&V_1), /*hidden argument*/NULL);
		__this->set_m_ServerConnectionId_27(L_7);
		// var connectError = (NetworkError)error;
		uint8_t L_8 = V_1;
		V_2 = L_8;
		// switch (connectError)
		int32_t L_9 = V_2;
		V_4 = L_9;
		int32_t L_10 = V_4;
		V_3 = L_10;
		int32_t L_11 = V_3;
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		goto IL_0075;
	}

IL_004c:
	{
		// socketTask.Success = true;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_12 = V_0;
		NullCheck(L_12);
		SocketTask_set_Success_mAC4F7C19AEC4AF1FAD8B2419E4CC7BC336B8CF99_inline(L_12, (bool)1, /*hidden argument*/NULL);
		// socketTask.TransportCode = error;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_13 = V_0;
		uint8_t L_14 = V_1;
		NullCheck(L_13);
		SocketTask_set_TransportCode_m343E5732D03E7AA59805CF44E2222820F6881518_inline(L_13, L_14, /*hidden argument*/NULL);
		// socketTask.SocketError = System.Net.Sockets.SocketError.Success;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_15 = V_0;
		NullCheck(L_15);
		SocketTask_set_SocketError_mF76003AEB28E4FEED8B7C59446A981B03ED8D062_inline(L_15, 0, /*hidden argument*/NULL);
		// socketTask.IsDone = false;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_16 = V_0;
		NullCheck(L_16);
		SocketTask_set_IsDone_m15BAB4BD42E4BD25E31C50B5CD987DA6677D502B_inline(L_16, (bool)0, /*hidden argument*/NULL);
		// m_ConnectTask = socketTask;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_17 = V_0;
		__this->set_m_ConnectTask_29(L_17);
		// break;
		goto IL_0097;
	}

IL_0075:
	{
		// socketTask.Success = false;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_18 = V_0;
		NullCheck(L_18);
		SocketTask_set_Success_mAC4F7C19AEC4AF1FAD8B2419E4CC7BC336B8CF99_inline(L_18, (bool)0, /*hidden argument*/NULL);
		// socketTask.TransportCode = error;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_19 = V_0;
		uint8_t L_20 = V_1;
		NullCheck(L_19);
		SocketTask_set_TransportCode_m343E5732D03E7AA59805CF44E2222820F6881518_inline(L_19, L_20, /*hidden argument*/NULL);
		// socketTask.SocketError = System.Net.Sockets.SocketError.SocketError;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_21 = V_0;
		NullCheck(L_21);
		SocketTask_set_SocketError_mF76003AEB28E4FEED8B7C59446A981B03ED8D062_inline(L_21, (-1), /*hidden argument*/NULL);
		// socketTask.IsDone = true;
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_22 = V_0;
		NullCheck(L_22);
		SocketTask_set_IsDone_m15BAB4BD42E4BD25E31C50B5CD987DA6677D502B_inline(L_22, (bool)1, /*hidden argument*/NULL);
		// break;
		goto IL_0097;
	}

IL_0097:
	{
		// return socketTask.AsTasks();
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_23 = V_0;
		NullCheck(L_23);
		SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432 * L_24;
		L_24 = SocketTask_AsTasks_mC232E3DA8C3F1D2ED737CCC2BCEF6A5B6E3F32E9(L_23, /*hidden argument*/NULL);
		V_5 = L_24;
		goto IL_00a1;
	}

IL_00a1:
	{
		// }
		SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432 * L_25 = V_5;
		return L_25;
	}
}
// MLAPI.Transports.Tasks.SocketTasks MLAPI.Transports.UNET.UNetTransport::StartServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432 * UNetTransport_StartServer_mEACE5F5A4F3B4B4244B1AC57CF011F8D3CC47BA3 (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HostTopology_t268779309BB2D69F29D1A182662C79818813892B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13BA3FBD6E78977215CB5A9D8903BD214A7B74E3);
		s_Il2CppMethodInitialized = true;
	}
	HostTopology_t268779309BB2D69F29D1A182662C79818813892B * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432 * V_6 = NULL;
	{
		// var topology = new HostTopology(GetConfig(), MaxConnections);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_0;
		L_0 = UNetTransport_GetConfig_mC86152445C0CB267FDFEEF52C89772C5A90B1A71(__this, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_MaxConnections_11();
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_2 = (HostTopology_t268779309BB2D69F29D1A182662C79818813892B *)il2cpp_codegen_object_new(HostTopology_t268779309BB2D69F29D1A182662C79818813892B_il2cpp_TypeInfo_var);
		HostTopology__ctor_m402906F2EFF083571541B3EDED1729CA3FDB6244(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (SupportWebsocket)
		bool L_3 = __this->get_SupportWebsocket_17();
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_005c;
		}
	}
	{
		// if (!UseMLAPIRelay)
		bool L_5 = __this->get_UseMLAPIRelay_19();
		V_3 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// int websocketHostId = UnityEngine.Networking.NetworkTransport.AddWebsocketHost(topology, ServerWebsocketListenPort);
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_7 = V_0;
		int32_t L_8 = __this->get_ServerWebsocketListenPort_16();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = NetworkTransport_AddWebsocketHost_mB3864DBBDF764C49AD73BC89237F4C9EBFC4252A(L_7, L_8, /*hidden argument*/NULL);
		V_4 = L_9;
		goto IL_005b;
	}

IL_003d:
	{
		// if (NetworkLog.CurrentLogLevel <= LogLevel.Error) NetworkLog.LogError("Cannot create websocket host when using MLAPI relay");
		int32_t L_10;
		L_10 = NetworkLog_get_CurrentLogLevel_m53F4291FB71E3AF2A33D4914346DC84D6557CC77(/*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_10) > ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_005a;
		}
	}
	{
		// if (NetworkLog.CurrentLogLevel <= LogLevel.Error) NetworkLog.LogError("Cannot create websocket host when using MLAPI relay");
		NetworkLog_LogError_m009C7BF365E700438059CD10FACDDD808F07952F(_stringLiteral13BA3FBD6E78977215CB5A9D8903BD214A7B74E3, /*hidden argument*/NULL);
	}

IL_005a:
	{
	}

IL_005b:
	{
	}

IL_005c:
	{
		// int normalHostId = RelayTransport.AddHost(topology, ServerListenPort, true);
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_12 = V_0;
		int32_t L_13 = __this->get_ServerListenPort_15();
		IL2CPP_RUNTIME_CLASS_INIT(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = RelayTransport_AddHost_m986E8762C6C64895963E440EC848F09E40D77321(L_12, L_13, (bool)1, /*hidden argument*/NULL);
		V_1 = L_14;
		// return SocketTask.Done.AsTasks();
		SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * L_15;
		L_15 = SocketTask_get_Done_m27185C65FDB7C2976AAA08D444194A69370DFFF7(/*hidden argument*/NULL);
		NullCheck(L_15);
		SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432 * L_16;
		L_16 = SocketTask_AsTasks_mC232E3DA8C3F1D2ED737CCC2BCEF6A5B6E3F32E9(L_15, /*hidden argument*/NULL);
		V_6 = L_16;
		goto IL_0078;
	}

IL_0078:
	{
		// }
		SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432 * L_17 = V_6;
		return L_17;
	}
}
// System.Void MLAPI.Transports.UNET.UNetTransport::DisconnectRemoteClient(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_DisconnectRemoteClient_m6A65D67947C8E291B2AD827585C7AAE3E5D146FA (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, uint64_t ___clientId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	uint16_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		// GetUNetConnectionDetails(clientId, out byte hostId, out ushort connectionId);
		uint64_t L_0 = ___clientId0;
		UNetTransport_GetUNetConnectionDetails_m5AB001B134B8B2727374626702CD46419E9F705D(__this, L_0, (uint8_t*)(&V_0), (uint16_t*)(&V_1), /*hidden argument*/NULL);
		// RelayTransport.Disconnect((int)hostId, (int)connectionId, out byte error);
		uint8_t L_1 = V_0;
		uint16_t L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = RelayTransport_Disconnect_m3E4E1A84100FA2A8F1655459CC5C6B9A4EDA44FB(L_1, L_2, (uint8_t*)(&V_2), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MLAPI.Transports.UNET.UNetTransport::DisconnectLocalClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_DisconnectLocalClient_mAD4B006F86EB6D27BBD7214719BDA2387FEA9ADB (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		// RelayTransport.Disconnect(m_ServerHostId, m_ServerConnectionId, out byte error);
		int32_t L_0 = __this->get_m_ServerHostId_28();
		int32_t L_1 = __this->get_m_ServerConnectionId_27();
		IL2CPP_RUNTIME_CLASS_INIT(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = RelayTransport_Disconnect_m3E4E1A84100FA2A8F1655459CC5C6B9A4EDA44FB(L_0, L_1, (uint8_t*)(&V_0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.UInt64 MLAPI.Transports.UNET.UNetTransport::GetCurrentRtt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UNetTransport_GetCurrentRtt_mEDB33073F0C4E3E97CD4473BBB2840F9BB5E97FE (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, uint64_t ___clientId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	uint16_t V_1 = 0;
	bool V_2 = false;
	uint64_t V_3 = 0;
	uint8_t V_4 = 0x0;
	{
		// GetUNetConnectionDetails(clientId, out byte hostId, out ushort connectionId);
		uint64_t L_0 = ___clientId0;
		UNetTransport_GetUNetConnectionDetails_m5AB001B134B8B2727374626702CD46419E9F705D(__this, L_0, (uint8_t*)(&V_0), (uint16_t*)(&V_1), /*hidden argument*/NULL);
		// if (UseMLAPIRelay)
		bool L_1 = __this->get_UseMLAPIRelay_19();
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// return 0;
		V_3 = ((int64_t)((int64_t)0));
		goto IL_002b;
	}

IL_001d:
	{
		// return (ulong)UnityEngine.Networking.NetworkTransport.GetCurrentRTT((int)hostId, (int)connectionId, out byte error);
		uint8_t L_3 = V_0;
		uint16_t L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = NetworkTransport_GetCurrentRTT_mF6F860C6EE547DF877313DB56D7348F5101B0F9B(L_3, L_4, (uint8_t*)(&V_4), /*hidden argument*/NULL);
		V_3 = ((int64_t)((int64_t)L_5));
		goto IL_002b;
	}

IL_002b:
	{
		// }
		uint64_t L_6 = V_3;
		return L_6;
	}
}
// System.Void MLAPI.Transports.UNET.UNetTransport::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_Shutdown_m5451607AF088D967CB7787DE7A7BE18394396AB5 (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mA3E7E38B5662A6304C1B7EB6307FA1B882881F79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mF52594485C53F4479A7A43524A28E24620DB870E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ChannelIdToName.Clear();
		Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C * L_0 = __this->get_m_ChannelIdToName_26();
		NullCheck(L_0);
		Dictionary_2_Clear_mA3E7E38B5662A6304C1B7EB6307FA1B882881F79(L_0, /*hidden argument*/Dictionary_2_Clear_mA3E7E38B5662A6304C1B7EB6307FA1B882881F79_RuntimeMethod_var);
		// m_ChannelNameToId.Clear();
		Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206 * L_1 = __this->get_m_ChannelNameToId_25();
		NullCheck(L_1);
		Dictionary_2_Clear_mF52594485C53F4479A7A43524A28E24620DB870E(L_1, /*hidden argument*/Dictionary_2_Clear_mF52594485C53F4479A7A43524A28E24620DB870E_RuntimeMethod_var);
		// UnityEngine.Networking.NetworkTransport.Shutdown();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		NetworkTransport_Shutdown_mCDADD01490BB0C9B0F5BAFB391E207C7B0298DC4(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MLAPI.Transports.UNET.UNetTransport::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_Init_m80F6905F8FD49ACC3A4D7101F650E56B78AD2CFD (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateRelay();
		UNetTransport_UpdateRelay_mAB9444FADD858B04EDD921E787558C09BF0C5743(__this, /*hidden argument*/NULL);
		// m_MessageBuffer = new byte[MessageBufferSize];
		int32_t L_0 = __this->get_MessageBufferSize_10();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_m_MessageBuffer_23(L_1);
		// s_TransportProfilerData.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_il2cpp_TypeInfo_var);
		ProfilingDataStore_t1E7070AC4F046AA186604C4185FCB4AC1956E333 * L_2 = ((UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_StaticFields*)il2cpp_codegen_static_fields_for(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_il2cpp_TypeInfo_var))->get_s_TransportProfilerData_8();
		NullCheck(L_2);
		ProfilingDataStore_Clear_m69A09AB4A6CE38F9A292667B9089458D41ED5975(L_2, /*hidden argument*/NULL);
		// UnityEngine.Networking.NetworkTransport.Init();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		NetworkTransport_Init_m07410A194825D614DBE8A08B746E06EC6481AEF3(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.UInt64 MLAPI.Transports.UNET.UNetTransport::GetMLAPIClientId(System.Byte,System.UInt16,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UNetTransport_GetMLAPIClientId_m571B08D02375DD7ECB5A0CC31FC75229DD9CAD1F (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, uint8_t ___hostId0, uint16_t ___connectionId1, bool ___isServer2, const RuntimeMethod* method)
{
	bool V_0 = false;
	uint64_t V_1 = 0;
	{
		// if (isServer)
		bool L_0 = ___isServer2;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return 0;
		V_1 = ((int64_t)((int64_t)0));
		goto IL_001b;
	}

IL_000c:
	{
		// return ((ulong)connectionId | (ulong)hostId << 16) + 1;
		uint16_t L_2 = ___connectionId1;
		uint8_t L_3 = ___hostId0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_2))|(int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_3))<<(int32_t)((int32_t)16))))), (int64_t)((int64_t)((int64_t)1))));
		goto IL_001b;
	}

IL_001b:
	{
		// }
		uint64_t L_4 = V_1;
		return L_4;
	}
}
// System.Void MLAPI.Transports.UNET.UNetTransport::GetUNetConnectionDetails(System.UInt64,System.Byte&,System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_GetUNetConnectionDetails_m5AB001B134B8B2727374626702CD46419E9F705D (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, uint64_t ___clientId0, uint8_t* ___hostId1, uint16_t* ___connectionId2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (clientId == 0)
		uint64_t L_0 = ___clientId0;
		V_0 = (bool)((((int64_t)L_0) == ((int64_t)((int64_t)((int64_t)0))))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// hostId = (byte)m_ServerHostId;
		uint8_t* L_2 = ___hostId1;
		int32_t L_3 = __this->get_m_ServerHostId_28();
		*((int8_t*)L_2) = (int8_t)((int32_t)((uint8_t)L_3));
		// connectionId = (ushort)m_ServerConnectionId;
		uint16_t* L_4 = ___connectionId2;
		int32_t L_5 = __this->get_m_ServerConnectionId_27();
		*((int16_t*)L_4) = (int16_t)((int32_t)((uint16_t)L_5));
		goto IL_0033;
	}

IL_0020:
	{
		// hostId = (byte)((clientId - 1) >> 16);
		uint8_t* L_6 = ___hostId1;
		uint64_t L_7 = ___clientId0;
		*((int8_t*)L_6) = (int8_t)((int32_t)((uint8_t)((int64_t)((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_7, (int64_t)((int64_t)((int64_t)1))))>>((int32_t)16)))));
		// connectionId = (ushort)((clientId - 1));
		uint16_t* L_8 = ___connectionId2;
		uint64_t L_9 = ___clientId0;
		*((int16_t*)L_8) = (int16_t)((int32_t)((uint16_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_9, (int64_t)((int64_t)((int64_t)1))))));
	}

IL_0033:
	{
		// }
		return;
	}
}
// UnityEngine.Networking.ConnectionConfig MLAPI.Transports.UNET.UNetTransport::GetConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * UNetTransport_GetConfig_mC86152445C0CB267FDFEEF52C89772C5A90B1A71 (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4B938DDB8F008FFF8F7938CC1D8E1A056F5B5136_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC0F551D754EA6B4CC8C811B2AB0F3D616BC58FBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD8FB600C8C87D9181A050E1CD828AA7D5545B105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBB7C25308910122B943CA0E02A845F7A8689F090_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8ED9DA6719F1C5CB2BD43DEBC46B41A08E940D09_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * V_8 = NULL;
	{
		// var connectionConfig = new ConnectionConfig();
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_0 = (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A *)il2cpp_codegen_object_new(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A_il2cpp_TypeInfo_var);
		ConnectionConfig__ctor_mCB0E2B50103AB6B3917758DC5FC0E52AD153DED3(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// for (int i = 0; i < MLAPI_CHANNELS.Length; i++)
		V_1 = 0;
		goto IL_0066;
	}

IL_000b:
	{
		// int channelId = AddMLAPIChannel(MLAPI_CHANNELS[i].Delivery, connectionConfig);
		TransportChannelU5BU5D_t208E5D124870294ED76728A47941D06E0ADA7411* L_1;
		L_1 = NetworkTransport_get_MLAPI_CHANNELS_m894790FF073103C74937CF2E392D34B2D61B99F4(__this, /*hidden argument*/NULL);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_Delivery_1();
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_4 = V_0;
		int32_t L_5;
		L_5 = UNetTransport_AddMLAPIChannel_mB373845B03B3983222B469A48905F3E0B324AAB8(__this, L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// m_ChannelIdToName.Add(channelId, MLAPI_CHANNELS[i].Channel);
		Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C * L_6 = __this->get_m_ChannelIdToName_26();
		int32_t L_7 = V_2;
		TransportChannelU5BU5D_t208E5D124870294ED76728A47941D06E0ADA7411* L_8;
		L_8 = NetworkTransport_get_MLAPI_CHANNELS_m894790FF073103C74937CF2E392D34B2D61B99F4(__this, /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		uint8_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->get_Channel_0();
		NullCheck(L_6);
		Dictionary_2_Add_m4B938DDB8F008FFF8F7938CC1D8E1A056F5B5136(L_6, L_7, L_10, /*hidden argument*/Dictionary_2_Add_m4B938DDB8F008FFF8F7938CC1D8E1A056F5B5136_RuntimeMethod_var);
		// m_ChannelNameToId.Add(MLAPI_CHANNELS[i].Channel, channelId);
		Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206 * L_11 = __this->get_m_ChannelNameToId_25();
		TransportChannelU5BU5D_t208E5D124870294ED76728A47941D06E0ADA7411* L_12;
		L_12 = NetworkTransport_get_MLAPI_CHANNELS_m894790FF073103C74937CF2E392D34B2D61B99F4(__this, /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		NullCheck(L_12);
		uint8_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->get_Channel_0();
		int32_t L_15 = V_2;
		NullCheck(L_11);
		Dictionary_2_Add_mC0F551D754EA6B4CC8C811B2AB0F3D616BC58FBD(L_11, L_14, L_15, /*hidden argument*/Dictionary_2_Add_mC0F551D754EA6B4CC8C811B2AB0F3D616BC58FBD_RuntimeMethod_var);
		// for (int i = 0; i < MLAPI_CHANNELS.Length; i++)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0066:
	{
		// for (int i = 0; i < MLAPI_CHANNELS.Length; i++)
		int32_t L_17 = V_1;
		TransportChannelU5BU5D_t208E5D124870294ED76728A47941D06E0ADA7411* L_18;
		L_18 = NetworkTransport_get_MLAPI_CHANNELS_m894790FF073103C74937CF2E392D34B2D61B99F4(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		V_3 = (bool)((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))? 1 : 0);
		bool L_19 = V_3;
		if (L_19)
		{
			goto IL_000b;
		}
	}
	{
		// for (int i = 0; i < Channels.Count; i++)
		V_4 = 0;
		goto IL_011b;
	}

IL_007d:
	{
		// int channelId = AddUNETChannel(Channels[i].Type, connectionConfig);
		List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3 * L_20 = __this->get_Channels_18();
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UNetChannel_tEC908B6737ABA9307E2DEB4A3F276B0EED170DC1 * L_22;
		L_22 = List_1_get_Item_m8ED9DA6719F1C5CB2BD43DEBC46B41A08E940D09_inline(L_20, L_21, /*hidden argument*/List_1_get_Item_m8ED9DA6719F1C5CB2BD43DEBC46B41A08E940D09_RuntimeMethod_var);
		NullCheck(L_22);
		int32_t L_23 = L_22->get_Type_1();
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_24 = V_0;
		int32_t L_25;
		L_25 = UNetTransport_AddUNETChannel_mFE0EC9440C83129351D76B63B2651D3CDA9911FD(__this, L_23, L_24, /*hidden argument*/NULL);
		V_5 = L_25;
		// if (m_ChannelNameToId.ContainsKey(Channels[i].Id))
		Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206 * L_26 = __this->get_m_ChannelNameToId_25();
		List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3 * L_27 = __this->get_Channels_18();
		int32_t L_28 = V_4;
		NullCheck(L_27);
		UNetChannel_tEC908B6737ABA9307E2DEB4A3F276B0EED170DC1 * L_29;
		L_29 = List_1_get_Item_m8ED9DA6719F1C5CB2BD43DEBC46B41A08E940D09_inline(L_27, L_28, /*hidden argument*/List_1_get_Item_m8ED9DA6719F1C5CB2BD43DEBC46B41A08E940D09_RuntimeMethod_var);
		NullCheck(L_29);
		uint8_t L_30 = L_29->get_Id_0();
		NullCheck(L_26);
		bool L_31;
		L_31 = Dictionary_2_ContainsKey_mD8FB600C8C87D9181A050E1CD828AA7D5545B105(L_26, L_30, /*hidden argument*/Dictionary_2_ContainsKey_mD8FB600C8C87D9181A050E1CD828AA7D5545B105_RuntimeMethod_var);
		V_6 = L_31;
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_00d4;
		}
	}
	{
		// throw new InvalidChannelException($"Channel {channelId} already exists");
		int32_t L_33 = V_5;
		int32_t L_34 = L_33;
		RuntimeObject * L_35 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_34);
		String_t* L_36;
		L_36 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB0C529BD929B922EED9AF9804F3106F6E16BA22)), L_35, /*hidden argument*/NULL);
		InvalidChannelException_tF4ED82C45BB31FFD3BB4D9920BA8147F4C9E7591 * L_37 = (InvalidChannelException_tF4ED82C45BB31FFD3BB4D9920BA8147F4C9E7591 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidChannelException_tF4ED82C45BB31FFD3BB4D9920BA8147F4C9E7591_il2cpp_TypeInfo_var)));
		InvalidChannelException__ctor_mEA2AD4549AA434B505B0DCC4764E1A40C5462D2D(L_37, L_36, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UNetTransport_GetConfig_mC86152445C0CB267FDFEEF52C89772C5A90B1A71_RuntimeMethod_var)));
	}

IL_00d4:
	{
		// m_ChannelIdToName.Add(channelId, Channels[i].Id);
		Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C * L_38 = __this->get_m_ChannelIdToName_26();
		int32_t L_39 = V_5;
		List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3 * L_40 = __this->get_Channels_18();
		int32_t L_41 = V_4;
		NullCheck(L_40);
		UNetChannel_tEC908B6737ABA9307E2DEB4A3F276B0EED170DC1 * L_42;
		L_42 = List_1_get_Item_m8ED9DA6719F1C5CB2BD43DEBC46B41A08E940D09_inline(L_40, L_41, /*hidden argument*/List_1_get_Item_m8ED9DA6719F1C5CB2BD43DEBC46B41A08E940D09_RuntimeMethod_var);
		NullCheck(L_42);
		uint8_t L_43 = L_42->get_Id_0();
		NullCheck(L_38);
		Dictionary_2_Add_m4B938DDB8F008FFF8F7938CC1D8E1A056F5B5136(L_38, L_39, L_43, /*hidden argument*/Dictionary_2_Add_m4B938DDB8F008FFF8F7938CC1D8E1A056F5B5136_RuntimeMethod_var);
		// m_ChannelNameToId.Add(Channels[i].Id, channelId);
		Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206 * L_44 = __this->get_m_ChannelNameToId_25();
		List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3 * L_45 = __this->get_Channels_18();
		int32_t L_46 = V_4;
		NullCheck(L_45);
		UNetChannel_tEC908B6737ABA9307E2DEB4A3F276B0EED170DC1 * L_47;
		L_47 = List_1_get_Item_m8ED9DA6719F1C5CB2BD43DEBC46B41A08E940D09_inline(L_45, L_46, /*hidden argument*/List_1_get_Item_m8ED9DA6719F1C5CB2BD43DEBC46B41A08E940D09_RuntimeMethod_var);
		NullCheck(L_47);
		uint8_t L_48 = L_47->get_Id_0();
		int32_t L_49 = V_5;
		NullCheck(L_44);
		Dictionary_2_Add_mC0F551D754EA6B4CC8C811B2AB0F3D616BC58FBD(L_44, L_48, L_49, /*hidden argument*/Dictionary_2_Add_mC0F551D754EA6B4CC8C811B2AB0F3D616BC58FBD_RuntimeMethod_var);
		// for (int i = 0; i < Channels.Count; i++)
		int32_t L_50 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_011b:
	{
		// for (int i = 0; i < Channels.Count; i++)
		int32_t L_51 = V_4;
		List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3 * L_52 = __this->get_Channels_18();
		NullCheck(L_52);
		int32_t L_53;
		L_53 = List_1_get_Count_mBB7C25308910122B943CA0E02A845F7A8689F090_inline(L_52, /*hidden argument*/List_1_get_Count_mBB7C25308910122B943CA0E02A845F7A8689F090_RuntimeMethod_var);
		V_7 = (bool)((((int32_t)L_51) < ((int32_t)L_53))? 1 : 0);
		bool L_54 = V_7;
		if (L_54)
		{
			goto IL_007d;
		}
	}
	{
		// connectionConfig.MaxSentMessageQueueSize = (ushort)MaxSentMessageQueueSize;
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_55 = V_0;
		int32_t L_56 = __this->get_MaxSentMessageQueueSize_12();
		NullCheck(L_55);
		ConnectionConfig_set_MaxSentMessageQueueSize_m59FEBBA265404CE7AD03CCB255BCC186DA1CDFB8(L_55, (uint16_t)((int32_t)((uint16_t)L_56)), /*hidden argument*/NULL);
		// return connectionConfig;
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_57 = V_0;
		V_8 = L_57;
		goto IL_0146;
	}

IL_0146:
	{
		// }
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_58 = V_8;
		return L_58;
	}
}
// System.Int32 MLAPI.Transports.UNET.UNetTransport::AddMLAPIChannel(MLAPI.Transports.NetworkDelivery,UnityEngine.Networking.ConnectionConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UNetTransport_AddMLAPIChannel_mB373845B03B3983222B469A48905F3E0B324AAB8 (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, int32_t ___type0, ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * ___config1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// switch (type)
		int32_t L_0 = ___type0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_002b;
			}
			case 3:
			{
				goto IL_0035;
			}
			case 4:
			{
				goto IL_003f;
			}
		}
	}
	{
		goto IL_0054;
	}

IL_0021:
	{
		// return config.AddChannel(QosType.Unreliable);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_3 = ___config1;
		NullCheck(L_3);
		uint8_t L_4;
		L_4 = ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6(L_3, 0, /*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_0058;
	}

IL_002b:
	{
		// return config.AddChannel(QosType.Reliable);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_5 = ___config1;
		NullCheck(L_5);
		uint8_t L_6;
		L_6 = ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6(L_5, 3, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_0058;
	}

IL_0035:
	{
		// return config.AddChannel(QosType.ReliableSequenced);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_7 = ___config1;
		NullCheck(L_7);
		uint8_t L_8;
		L_8 = ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6(L_7, 5, /*hidden argument*/NULL);
		V_2 = L_8;
		goto IL_0058;
	}

IL_003f:
	{
		// return config.AddChannel(QosType.ReliableFragmentedSequenced);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_9 = ___config1;
		NullCheck(L_9);
		uint8_t L_10;
		L_10 = ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6(L_9, ((int32_t)10), /*hidden argument*/NULL);
		V_2 = L_10;
		goto IL_0058;
	}

IL_004a:
	{
		// return config.AddChannel(QosType.UnreliableSequenced);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_11 = ___config1;
		NullCheck(L_11);
		uint8_t L_12;
		L_12 = ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6(L_11, 2, /*hidden argument*/NULL);
		V_2 = L_12;
		goto IL_0058;
	}

IL_0054:
	{
		// return 0;
		V_2 = 0;
		goto IL_0058;
	}

IL_0058:
	{
		// }
		int32_t L_13 = V_2;
		return L_13;
	}
}
// System.Int32 MLAPI.Transports.UNET.UNetTransport::AddUNETChannel(UnityEngine.Networking.QosType,UnityEngine.Networking.ConnectionConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UNetTransport_AddUNETChannel_mFE0EC9440C83129351D76B63B2651D3CDA9911FD (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, int32_t ___type0, ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * ___config1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// switch (type)
		int32_t L_0 = ___type0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0039;
			}
			case 1:
			{
				goto IL_0043;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_0057;
			}
			case 4:
			{
				goto IL_0061;
			}
			case 5:
			{
				goto IL_006b;
			}
			case 6:
			{
				goto IL_0075;
			}
			case 7:
			{
				goto IL_007f;
			}
			case 8:
			{
				goto IL_0089;
			}
			case 9:
			{
				goto IL_0093;
			}
			case 10:
			{
				goto IL_009e;
			}
		}
	}
	{
		goto IL_00a9;
	}

IL_0039:
	{
		// return config.AddChannel(QosType.Unreliable);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_3 = ___config1;
		NullCheck(L_3);
		uint8_t L_4;
		L_4 = ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6(L_3, 0, /*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_00ad;
	}

IL_0043:
	{
		// return config.AddChannel(QosType.UnreliableFragmented);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_5 = ___config1;
		NullCheck(L_5);
		uint8_t L_6;
		L_6 = ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6(L_5, 1, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_00ad;
	}

IL_004d:
	{
		// return config.AddChannel(QosType.UnreliableSequenced);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_7 = ___config1;
		NullCheck(L_7);
		uint8_t L_8;
		L_8 = ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6(L_7, 2, /*hidden argument*/NULL);
		V_2 = L_8;
		goto IL_00ad;
	}

IL_0057:
	{
		// return config.AddChannel(QosType.Reliable);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_9 = ___config1;
		NullCheck(L_9);
		uint8_t L_10;
		L_10 = ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6(L_9, 3, /*hidden argument*/NULL);
		V_2 = L_10;
		goto IL_00ad;
	}

IL_0061:
	{
		// return config.AddChannel(QosType.ReliableFragmented);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_11 = ___config1;
		NullCheck(L_11);
		uint8_t L_12;
		L_12 = ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6(L_11, 4, /*hidden argument*/NULL);
		V_2 = L_12;
		goto IL_00ad;
	}

IL_006b:
	{
		// return config.AddChannel(QosType.ReliableSequenced);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_13 = ___config1;
		NullCheck(L_13);
		uint8_t L_14;
		L_14 = ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6(L_13, 5, /*hidden argument*/NULL);
		V_2 = L_14;
		goto IL_00ad;
	}

IL_0075:
	{
		// return config.AddChannel(QosType.StateUpdate);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_15 = ___config1;
		NullCheck(L_15);
		uint8_t L_16;
		L_16 = ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6(L_15, 6, /*hidden argument*/NULL);
		V_2 = L_16;
		goto IL_00ad;
	}

IL_007f:
	{
		// return config.AddChannel(QosType.ReliableStateUpdate);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_17 = ___config1;
		NullCheck(L_17);
		uint8_t L_18;
		L_18 = ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6(L_17, 7, /*hidden argument*/NULL);
		V_2 = L_18;
		goto IL_00ad;
	}

IL_0089:
	{
		// return config.AddChannel(QosType.AllCostDelivery);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_19 = ___config1;
		NullCheck(L_19);
		uint8_t L_20;
		L_20 = ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6(L_19, 8, /*hidden argument*/NULL);
		V_2 = L_20;
		goto IL_00ad;
	}

IL_0093:
	{
		// return config.AddChannel(QosType.UnreliableFragmentedSequenced);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_21 = ___config1;
		NullCheck(L_21);
		uint8_t L_22;
		L_22 = ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6(L_21, ((int32_t)9), /*hidden argument*/NULL);
		V_2 = L_22;
		goto IL_00ad;
	}

IL_009e:
	{
		// return config.AddChannel(QosType.ReliableFragmentedSequenced);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_23 = ___config1;
		NullCheck(L_23);
		uint8_t L_24;
		L_24 = ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6(L_23, ((int32_t)10), /*hidden argument*/NULL);
		V_2 = L_24;
		goto IL_00ad;
	}

IL_00a9:
	{
		// return 0;
		V_2 = 0;
		goto IL_00ad;
	}

IL_00ad:
	{
		// }
		int32_t L_25 = V_2;
		return L_25;
	}
}
// System.Void MLAPI.Transports.UNET.UNetTransport::UpdateRelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_UpdateRelay_mAB9444FADD858B04EDD921E787558C09BF0C5743 (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RelayTransport.Enabled = UseMLAPIRelay;
		bool L_0 = __this->get_UseMLAPIRelay_19();
		IL2CPP_RUNTIME_CLASS_INIT(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var);
		RelayTransport_set_Enabled_m151B14939BE0D33A3AC5EF026FFBBA69938C59E8_inline(L_0, /*hidden argument*/NULL);
		// RelayTransport.RelayAddress = MLAPIRelayAddress;
		String_t* L_1 = __this->get_MLAPIRelayAddress_20();
		RelayTransport_set_RelayAddress_m934751BBF6697AE0B983635E7034E23DF55316C5_inline(L_1, /*hidden argument*/NULL);
		// RelayTransport.RelayPort = (ushort)MLAPIRelayPort;
		int32_t L_2 = __this->get_MLAPIRelayPort_21();
		RelayTransport_set_RelayPort_m45906FDC2C2DB42A7633C3DED68E6F1B5082AD91_inline((uint16_t)((int32_t)((uint16_t)L_2)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MLAPI.Transports.UNET.UNetTransport::BeginNewTick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_BeginNewTick_mB2C810B358F9874D37B0A1E6ED92BAC56B8FE249 (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_TransportProfilerData.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_il2cpp_TypeInfo_var);
		ProfilingDataStore_t1E7070AC4F046AA186604C4185FCB4AC1956E333 * L_0 = ((UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_StaticFields*)il2cpp_codegen_static_fields_for(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_il2cpp_TypeInfo_var))->get_s_TransportProfilerData_8();
		NullCheck(L_0);
		ProfilingDataStore_Clear_m69A09AB4A6CE38F9A292667B9089458D41ED5975(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Int32> MLAPI.Transports.UNET.UNetTransport::GetTransportProfilerData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UNetTransport_GetTransportProfilerData_m3202F37440E75CA9DF9B110B61A9AC6CB6A3060A (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return s_TransportProfilerData.GetReadonly();
		IL2CPP_RUNTIME_CLASS_INIT(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_il2cpp_TypeInfo_var);
		ProfilingDataStore_t1E7070AC4F046AA186604C4185FCB4AC1956E333 * L_0 = ((UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_StaticFields*)il2cpp_codegen_static_fields_for(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_il2cpp_TypeInfo_var))->get_s_TransportProfilerData_8();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ProfilingDataStore_GetReadonly_m9C0E6EA14454D5AF7279D17A01D1DA3283A89940(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// System.Void MLAPI.Transports.UNET.UNetTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport__ctor_m433EBCF26235C9CB8575C96876200B44F3D8148C (UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3CFAFE6B984DE6170E1D0416D3EF31B644C3ECFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB73D5724F1F1F1B5AF95EB1270B7869213E7F5DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m40F68142CBB96190EF2941DA700FFBE4B9E6F6E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral559FB4092E4502B9C92043C390F08D8869627695);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int MessageBufferSize = 1024 * 5;
		__this->set_MessageBufferSize_10(((int32_t)5120));
		// public int MaxConnections = 100;
		__this->set_MaxConnections_11(((int32_t)100));
		// public int MaxSentMessageQueueSize = 128;
		__this->set_MaxSentMessageQueueSize_12(((int32_t)128));
		// public string ConnectAddress = "127.0.0.1";
		__this->set_ConnectAddress_13(_stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE);
		// public int ConnectPort = 7777;
		__this->set_ConnectPort_14(((int32_t)7777));
		// public int ServerListenPort = 7777;
		__this->set_ServerListenPort_15(((int32_t)7777));
		// public int ServerWebsocketListenPort = 8887;
		__this->set_ServerWebsocketListenPort_16(((int32_t)8887));
		// public bool SupportWebsocket = false;
		__this->set_SupportWebsocket_17((bool)0);
		// public List<UNetChannel> Channels = new List<UNetChannel>();
		List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3 * L_0 = (List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3 *)il2cpp_codegen_object_new(List_1_tA4634B9CA7355C0724D1C5D7E5C1B7FC90A5FEA3_il2cpp_TypeInfo_var);
		List_1__ctor_m40F68142CBB96190EF2941DA700FFBE4B9E6F6E7(L_0, /*hidden argument*/List_1__ctor_m40F68142CBB96190EF2941DA700FFBE4B9E6F6E7_RuntimeMethod_var);
		__this->set_Channels_18(L_0);
		// public bool UseMLAPIRelay = false;
		__this->set_UseMLAPIRelay_19((bool)0);
		// public string MLAPIRelayAddress = "184.72.104.138";
		__this->set_MLAPIRelayAddress_20(_stringLiteral559FB4092E4502B9C92043C390F08D8869627695);
		// public int MLAPIRelayPort = 8888;
		__this->set_MLAPIRelayPort_21(((int32_t)8888));
		// public SendMode MessageSendMode = SendMode.Immediately;
		__this->set_MessageSendMode_22(0);
		// private readonly Dictionary<NetworkChannel, int> m_ChannelNameToId = new Dictionary<NetworkChannel, int>();
		Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206 * L_1 = (Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206 *)il2cpp_codegen_object_new(Dictionary_2_tBE0596BE2C5409EC305BA75E9FA7A75537E03206_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB73D5724F1F1F1B5AF95EB1270B7869213E7F5DB(L_1, /*hidden argument*/Dictionary_2__ctor_mB73D5724F1F1F1B5AF95EB1270B7869213E7F5DB_RuntimeMethod_var);
		__this->set_m_ChannelNameToId_25(L_1);
		// private readonly Dictionary<int, NetworkChannel> m_ChannelIdToName = new Dictionary<int, NetworkChannel>();
		Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C * L_2 = (Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C *)il2cpp_codegen_object_new(Dictionary_2_tD516986268FACBECB0B686E98001520021D4518C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3CFAFE6B984DE6170E1D0416D3EF31B644C3ECFD(L_2, /*hidden argument*/Dictionary_2__ctor_m3CFAFE6B984DE6170E1D0416D3EF31B644C3ECFD_RuntimeMethod_var);
		__this->set_m_ChannelIdToName_26(L_2);
		NetworkTransport__ctor_m2017A0591134F76727F7CED368118DCB7C384E22(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MLAPI.Transports.UNET.UNetTransport::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport__cctor_m15DB95F7E0D1B4A3C21468239D90CEFAE1CCCC85 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilingDataStore_t1E7070AC4F046AA186604C4185FCB4AC1956E333_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static ProfilingDataStore s_TransportProfilerData = new ProfilingDataStore();
		ProfilingDataStore_t1E7070AC4F046AA186604C4185FCB4AC1956E333 * L_0 = (ProfilingDataStore_t1E7070AC4F046AA186604C4185FCB4AC1956E333 *)il2cpp_codegen_object_new(ProfilingDataStore_t1E7070AC4F046AA186604C4185FCB4AC1956E333_il2cpp_TypeInfo_var);
		ProfilingDataStore__ctor_m3192A14ACCAE0A04481FA34492B58C49052F5724(L_0, /*hidden argument*/NULL);
		((UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_StaticFields*)il2cpp_codegen_static_fields_for(UNetTransport_tB5A7DD0B723365F1EC0AF88FC0ECCFCF0F2E301C_il2cpp_TypeInfo_var))->set_s_TransportProfilerData_8(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.Exceptions.VisibilityChangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityChangeException__ctor_m8D7DA9FCB6AEF4082BCB868C3C5A3242ABBE52FD (VisibilityChangeException_tC5DD75E45FD92C347A5D4424CE259BC4AD71EA2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VisibilityChangeException() { }
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(__this, /*hidden argument*/NULL);
		// public VisibilityChangeException() { }
		return;
	}
}
// System.Void MLAPI.Exceptions.VisibilityChangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityChangeException__ctor_m283EBCE956B7A5B7305E7416C45682BAFF930A63 (VisibilityChangeException_tC5DD75E45FD92C347A5D4424CE259BC4AD71EA2B * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VisibilityChangeException(string message) : base(message) { }
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
		// public VisibilityChangeException(string message) : base(message) { }
		return;
	}
}
// System.Void MLAPI.Exceptions.VisibilityChangeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityChangeException__ctor_mC245CF3E259A4B2485E030826DA70357CB34EA30 (VisibilityChangeException_tC5DD75E45FD92C347A5D4424CE259BC4AD71EA2B * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VisibilityChangeException(string message, Exception inner) : base(message, inner) { }
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___inner1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080(__this, L_0, L_1, /*hidden argument*/NULL);
		// public VisibilityChangeException(string message, Exception inner) : base(message, inner) { }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: MLAPI.Messaging.__RpcParams
IL2CPP_EXTERN_C void __RpcParams_t688A2CF0903E25B4A8ED740ADB62E1B557F22061_marshal_pinvoke(const __RpcParams_t688A2CF0903E25B4A8ED740ADB62E1B557F22061& unmarshaled, __RpcParams_t688A2CF0903E25B4A8ED740ADB62E1B557F22061_marshaled_pinvoke& marshaled)
{
	marshaled.___Server_0 = unmarshaled.get_Server_0();
	ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshal_pinvoke(unmarshaled.get_Client_1(), marshaled.___Client_1);
}
IL2CPP_EXTERN_C void __RpcParams_t688A2CF0903E25B4A8ED740ADB62E1B557F22061_marshal_pinvoke_back(const __RpcParams_t688A2CF0903E25B4A8ED740ADB62E1B557F22061_marshaled_pinvoke& marshaled, __RpcParams_t688A2CF0903E25B4A8ED740ADB62E1B557F22061& unmarshaled)
{
	ServerRpcParams_t74FE2EF257335DF21E21E9B3C58521A25491D63E  unmarshaled_Server_temp_0;
	memset((&unmarshaled_Server_temp_0), 0, sizeof(unmarshaled_Server_temp_0));
	unmarshaled_Server_temp_0 = marshaled.___Server_0;
	unmarshaled.set_Server_0(unmarshaled_Server_temp_0);
	ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5  unmarshaled_Client_temp_1;
	memset((&unmarshaled_Client_temp_1), 0, sizeof(unmarshaled_Client_temp_1));
	ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshal_pinvoke_back(marshaled.___Client_1, unmarshaled_Client_temp_1);
	unmarshaled.set_Client_1(unmarshaled_Client_temp_1);
}
// Conversion method for clean up from marshalling of: MLAPI.Messaging.__RpcParams
IL2CPP_EXTERN_C void __RpcParams_t688A2CF0903E25B4A8ED740ADB62E1B557F22061_marshal_pinvoke_cleanup(__RpcParams_t688A2CF0903E25B4A8ED740ADB62E1B557F22061_marshaled_pinvoke& marshaled)
{
	ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshal_pinvoke_cleanup(marshaled.___Client_1);
}


// Conversion methods for marshalling of: MLAPI.Messaging.__RpcParams
IL2CPP_EXTERN_C void __RpcParams_t688A2CF0903E25B4A8ED740ADB62E1B557F22061_marshal_com(const __RpcParams_t688A2CF0903E25B4A8ED740ADB62E1B557F22061& unmarshaled, __RpcParams_t688A2CF0903E25B4A8ED740ADB62E1B557F22061_marshaled_com& marshaled)
{
	marshaled.___Server_0 = unmarshaled.get_Server_0();
	ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshal_com(unmarshaled.get_Client_1(), marshaled.___Client_1);
}
IL2CPP_EXTERN_C void __RpcParams_t688A2CF0903E25B4A8ED740ADB62E1B557F22061_marshal_com_back(const __RpcParams_t688A2CF0903E25B4A8ED740ADB62E1B557F22061_marshaled_com& marshaled, __RpcParams_t688A2CF0903E25B4A8ED740ADB62E1B557F22061& unmarshaled)
{
	ServerRpcParams_t74FE2EF257335DF21E21E9B3C58521A25491D63E  unmarshaled_Server_temp_0;
	memset((&unmarshaled_Server_temp_0), 0, sizeof(unmarshaled_Server_temp_0));
	unmarshaled_Server_temp_0 = marshaled.___Server_0;
	unmarshaled.set_Server_0(unmarshaled_Server_temp_0);
	ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5  unmarshaled_Client_temp_1;
	memset((&unmarshaled_Client_temp_1), 0, sizeof(unmarshaled_Client_temp_1));
	ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshal_com_back(marshaled.___Client_1, unmarshaled_Client_temp_1);
	unmarshaled.set_Client_1(unmarshaled_Client_temp_1);
}
// Conversion method for clean up from marshalling of: MLAPI.Messaging.__RpcParams
IL2CPP_EXTERN_C void __RpcParams_t688A2CF0903E25B4A8ED740ADB62E1B557F22061_marshal_com_cleanup(__RpcParams_t688A2CF0903E25B4A8ED740ADB62E1B557F22061_marshaled_com& marshaled)
{
	ClientRpcParams_t904FA1505AAEE55F62EF175A67E5C09E933AEEC5_marshal_com_cleanup(marshaled.___Client_1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: MLAPI.Messaging.Buffering.BufferManager/BufferedMessage
IL2CPP_EXTERN_C void BufferedMessage_t8356882120EC2EDBFA1113B993B9926A2E9A8027_marshal_pinvoke(const BufferedMessage_t8356882120EC2EDBFA1113B993B9926A2E9A8027& unmarshaled, BufferedMessage_t8356882120EC2EDBFA1113B993B9926A2E9A8027_marshaled_pinvoke& marshaled)
{
	Exception_t* ___NetworkBuffer_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'NetworkBuffer' of type 'BufferedMessage': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___NetworkBuffer_2Exception, NULL);
}
IL2CPP_EXTERN_C void BufferedMessage_t8356882120EC2EDBFA1113B993B9926A2E9A8027_marshal_pinvoke_back(const BufferedMessage_t8356882120EC2EDBFA1113B993B9926A2E9A8027_marshaled_pinvoke& marshaled, BufferedMessage_t8356882120EC2EDBFA1113B993B9926A2E9A8027& unmarshaled)
{
	Exception_t* ___NetworkBuffer_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'NetworkBuffer' of type 'BufferedMessage': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___NetworkBuffer_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: MLAPI.Messaging.Buffering.BufferManager/BufferedMessage
IL2CPP_EXTERN_C void BufferedMessage_t8356882120EC2EDBFA1113B993B9926A2E9A8027_marshal_pinvoke_cleanup(BufferedMessage_t8356882120EC2EDBFA1113B993B9926A2E9A8027_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: MLAPI.Messaging.Buffering.BufferManager/BufferedMessage
IL2CPP_EXTERN_C void BufferedMessage_t8356882120EC2EDBFA1113B993B9926A2E9A8027_marshal_com(const BufferedMessage_t8356882120EC2EDBFA1113B993B9926A2E9A8027& unmarshaled, BufferedMessage_t8356882120EC2EDBFA1113B993B9926A2E9A8027_marshaled_com& marshaled)
{
	Exception_t* ___NetworkBuffer_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'NetworkBuffer' of type 'BufferedMessage': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___NetworkBuffer_2Exception, NULL);
}
IL2CPP_EXTERN_C void BufferedMessage_t8356882120EC2EDBFA1113B993B9926A2E9A8027_marshal_com_back(const BufferedMessage_t8356882120EC2EDBFA1113B993B9926A2E9A8027_marshaled_com& marshaled, BufferedMessage_t8356882120EC2EDBFA1113B993B9926A2E9A8027& unmarshaled)
{
	Exception_t* ___NetworkBuffer_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'NetworkBuffer' of type 'BufferedMessage': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___NetworkBuffer_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: MLAPI.Messaging.Buffering.BufferManager/BufferedMessage
IL2CPP_EXTERN_C void BufferedMessage_t8356882120EC2EDBFA1113B993B9926A2E9A8027_marshal_com_cleanup(BufferedMessage_t8356882120EC2EDBFA1113B993B9926A2E9A8027_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.Messaging.CustomMessagingManager/HandleNamedMessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleNamedMessageDelegate__ctor_m90110759017FC5CE11188D5E1592A412C7D35DEE (HandleNamedMessageDelegate_t48D537515395A953E5BA2EAD144E5F67F0A5FD95 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MLAPI.Messaging.CustomMessagingManager/HandleNamedMessageDelegate::Invoke(System.UInt64,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleNamedMessageDelegate_Invoke_mD11ED9CD785BADA09141444C2E5F700212B1F50A (HandleNamedMessageDelegate_t48D537515395A953E5BA2EAD144E5F67F0A5FD95 * __this, uint64_t ___sender0, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___payload1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (uint64_t, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___payload1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint64_t, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___payload1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< uint64_t, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(targetMethod, targetThis, ___sender0, ___payload1);
					else
						GenericVirtActionInvoker2< uint64_t, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(targetMethod, targetThis, ___sender0, ___payload1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< uint64_t, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___payload1);
					else
						VirtActionInvoker2< uint64_t, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___payload1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint64_t, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___payload1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MLAPI.Messaging.CustomMessagingManager/HandleNamedMessageDelegate::BeginInvoke(System.UInt64,System.IO.Stream,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandleNamedMessageDelegate_BeginInvoke_m9F8CADE01089161091D72918FCB42FF17B2AF16F (HandleNamedMessageDelegate_t48D537515395A953E5BA2EAD144E5F67F0A5FD95 * __this, uint64_t ___sender0, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___payload1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___sender0);
	__d_args[1] = ___payload1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void MLAPI.Messaging.CustomMessagingManager/HandleNamedMessageDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleNamedMessageDelegate_EndInvoke_m0FC333B0658AEC4E122C59E59C089A845FF1F843 (HandleNamedMessageDelegate_t48D537515395A953E5BA2EAD144E5F67F0A5FD95 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.Messaging.CustomMessagingManager/UnnamedMessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnnamedMessageDelegate__ctor_mDF0529364FD6420A103A17A2062F2CC79F81DB8A (UnnamedMessageDelegate_t2F9B77602495FA7493A23F7FDBADABF830C9CCA8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MLAPI.Messaging.CustomMessagingManager/UnnamedMessageDelegate::Invoke(System.UInt64,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnnamedMessageDelegate_Invoke_m36D8736F7244F797E93497139BA318D3F9F510D4 (UnnamedMessageDelegate_t2F9B77602495FA7493A23F7FDBADABF830C9CCA8 * __this, uint64_t ___clientId0, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (uint64_t, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___clientId0, ___stream1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint64_t, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, ___stream1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< uint64_t, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(targetMethod, targetThis, ___clientId0, ___stream1);
					else
						GenericVirtActionInvoker2< uint64_t, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(targetMethod, targetThis, ___clientId0, ___stream1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< uint64_t, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___clientId0, ___stream1);
					else
						VirtActionInvoker2< uint64_t, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___clientId0, ___stream1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint64_t, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, ___stream1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MLAPI.Messaging.CustomMessagingManager/UnnamedMessageDelegate::BeginInvoke(System.UInt64,System.IO.Stream,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnnamedMessageDelegate_BeginInvoke_mA198BB8A3A00A48F5417B76C23C12D30940890DA (UnnamedMessageDelegate_t2F9B77602495FA7493A23F7FDBADABF830C9CCA8 * __this, uint64_t ___clientId0, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___clientId0);
	__d_args[1] = ___stream1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void MLAPI.Messaging.CustomMessagingManager/UnnamedMessageDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnnamedMessageDelegate_EndInvoke_m262C47A027F159381FF7379BCE36E5293950E865 (UnnamedMessageDelegate_t2F9B77602495FA7493A23F7FDBADABF830C9CCA8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.Messaging.InternalMessageHandler/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mBD4898094B3E9191EE8ACE10C5FF5CCAB0D01F8F (U3CU3Ec__DisplayClass17_0_tF77F38290AC0444E45AAC2C0A85E2EA517F8A32E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MLAPI.Messaging.InternalMessageHandler/<>c__DisplayClass17_0::<HandleConnectionRequest>b__0(System.Boolean,System.Nullable`1<System.UInt64>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Quaternion>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0_U3CHandleConnectionRequestU3Eb__0_m4ADA7363958F1C57BD27F6B204EA6F89E5A5E1E0 (U3CU3Ec__DisplayClass17_0_tF77F38290AC0444E45AAC2C0A85E2EA517F8A32E * __this, bool ___createPlayerObject0, Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  ___playerPrefabHash1, bool ___approved2, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___position3, Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  ___rotation4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NetworkManager.Singleton.InvokeConnectionApproval(connectionBuffer, clientId, (createPlayerObject, playerPrefabHash, approved, position, rotation) => { NetworkManager.Singleton.HandleApproval(clientId, createPlayerObject, playerPrefabHash, approved, position, rotation); });
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_il2cpp_TypeInfo_var);
		NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * L_0;
		L_0 = NetworkManager_get_Singleton_m4A3EAA6822FD326519757EF5899202B2C5884B13_inline(/*hidden argument*/NULL);
		uint64_t L_1 = __this->get_clientId_0();
		bool L_2 = ___createPlayerObject0;
		Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  L_3 = ___playerPrefabHash1;
		bool L_4 = ___approved2;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_5 = ___position3;
		Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  L_6 = ___rotation4;
		NullCheck(L_0);
		NetworkManager_HandleApproval_m38F031C3242583FF6CBEAC0C6A636C1BD6F0F6D0(L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		// NetworkManager.Singleton.InvokeConnectionApproval(connectionBuffer, clientId, (createPlayerObject, playerPrefabHash, approved, position, rotation) => { NetworkManager.Singleton.HandleApproval(clientId, createPlayerObject, playerPrefabHash, approved, position, rotation); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.Messaging.InternalMessageHandler/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m7961745F6A4A572EDFB9D4A4614D76012FC82B05 (U3CU3Ec__DisplayClass18_0_t13F01EB262A469487D83C30B80974D077D51FA39 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MLAPI.Messaging.InternalMessageHandler/<>c__DisplayClass18_0::<HandleConnectionApproved>g__OnSceneLoadComplete|1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0_U3CHandleConnectionApprovedU3Eg__OnSceneLoadCompleteU7C1_m4EFC5FD9CB3F38C3EE7A17372FB4D44C1C561219 (U3CU3Ec__DisplayClass18_0_t13F01EB262A469487D83C30B80974D077D51FA39 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalMessageHandler_tA25F24F7E2F975CD4D0170D786631671DD1160BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkSceneManager_tC54D99CCDAB94946076FBD2295C595019218A8E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.activeSceneChanged -= onSceneLoaded;
		UnityAction_2_t617D40B57FD0E410A99764D18A04CAA0E4CB35D4 * L_0 = __this->get_onSceneLoaded_0();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_remove_activeSceneChanged_m393D580B1E306AE2A549810D409E64A226EFCF8D(L_0, /*hidden argument*/NULL);
		// NetworkSceneManager.IsSpawnedObjectsPendingInDontDestroyOnLoad = false;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkSceneManager_tC54D99CCDAB94946076FBD2295C595019218A8E3_il2cpp_TypeInfo_var);
		((NetworkSceneManager_tC54D99CCDAB94946076FBD2295C595019218A8E3_StaticFields*)il2cpp_codegen_static_fields_for(NetworkSceneManager_tC54D99CCDAB94946076FBD2295C595019218A8E3_il2cpp_TypeInfo_var))->set_IsSpawnedObjectsPendingInDontDestroyOnLoad_11((bool)0);
		// DelayedSpawnAction(continuationBuffer);
		NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 * L_1 = __this->get_continuationBuffer_1();
		IL2CPP_RUNTIME_CLASS_INIT(InternalMessageHandler_tA25F24F7E2F975CD4D0170D786631671DD1160BE_il2cpp_TypeInfo_var);
		InternalMessageHandler_U3CHandleConnectionApprovedU3Eg__DelayedSpawnActionU7C18_0_mAB15DAB0C5122AE1375D466B7A0EA9C645DADF09(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MLAPI.Messaging.InternalMessageHandler/<>c__DisplayClass18_0::<HandleConnectionApproved>b__2(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0_U3CHandleConnectionApprovedU3Eb__2_m78422811A8C214FBF95E9BED32C3BE9E37E2BC52 (U3CU3Ec__DisplayClass18_0_t13F01EB262A469487D83C30B80974D077D51FA39 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___oldScene0, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___newScene1, const RuntimeMethod* method)
{
	{
		// onSceneLoaded = (oldScene, newScene) => { OnSceneLoadComplete(); };
		U3CU3Ec__DisplayClass18_0_U3CHandleConnectionApprovedU3Eg__OnSceneLoadCompleteU7C1_m4EFC5FD9CB3F38C3EE7A17372FB4D44C1C561219(__this, /*hidden argument*/NULL);
		// onSceneLoaded = (oldScene, newScene) => { OnSceneLoadComplete(); };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.NetworkBehaviour/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m27368C325A606E8E4274E254187CAB49E1D3ABE3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA * L_0 = (U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA *)il2cpp_codegen_object_new(U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2AE917294F24B10DA90D48CDC2485682D88BD6B1(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MLAPI.NetworkBehaviour/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2AE917294F24B10DA90D48CDC2485682D88BD6B1 (U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.UInt64 MLAPI.NetworkBehaviour/<>c::<__beginSendClientRpc>b__4_0(MLAPI.Connection.NetworkClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t U3CU3Ec_U3C__beginSendClientRpcU3Eb__4_0_m0BB522C373BBCAF581B516B16798F1E7C92ACEBD (U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA * __this, NetworkClient_t0DF198CA47B274F9A545CC0E08507786069E2DE6 * ___c0, const RuntimeMethod* method)
{
	{
		// ulong[] ClientIds = clientRpcParams.Send.TargetClientIds ?? NetworkManager.Singleton.ConnectedClientsList.Select(c => c.ClientId).ToArray();
		NetworkClient_t0DF198CA47B274F9A545CC0E08507786069E2DE6 * L_0 = ___c0;
		NullCheck(L_0);
		uint64_t L_1 = L_0->get_ClientId_0();
		return L_1;
	}
}
// System.UInt64 MLAPI.NetworkBehaviour/<>c::<__beginSendClientRpc>b__4_1(MLAPI.Connection.NetworkClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t U3CU3Ec_U3C__beginSendClientRpcU3Eb__4_1_m02E20FEFF7DE4056DF04EDADCFBD7063494F8225 (U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA * __this, NetworkClient_t0DF198CA47B274F9A545CC0E08507786069E2DE6 * ___c0, const RuntimeMethod* method)
{
	{
		// ClientIds = NetworkManager.Singleton.ConnectedClientsList.Select(c => c.ClientId).ToArray();
		NetworkClient_t0DF198CA47B274F9A545CC0E08507786069E2DE6 * L_0 = ___c0;
		NullCheck(L_0);
		uint64_t L_1 = L_0->get_ClientId_0();
		return L_1;
	}
}
// System.UInt64 MLAPI.NetworkBehaviour/<>c::<__endSendClientRpc>b__5_0(MLAPI.Connection.NetworkClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t U3CU3Ec_U3C__endSendClientRpcU3Eb__5_0_m5278209C1F7FB2D990A4FD67E280EE73E20F5E2B (U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA * __this, NetworkClient_t0DF198CA47B274F9A545CC0E08507786069E2DE6 * ___c0, const RuntimeMethod* method)
{
	{
		// ulong[] ClientIds = clientRpcParams.Send.TargetClientIds ?? NetworkManager.Singleton.ConnectedClientsList.Select(c => c.ClientId).ToArray();
		NetworkClient_t0DF198CA47B274F9A545CC0E08507786069E2DE6 * L_0 = ___c0;
		NullCheck(L_0);
		uint64_t L_1 = L_0->get_ClientId_0();
		return L_1;
	}
}
// System.UInt64 MLAPI.NetworkBehaviour/<>c::<__endSendClientRpc>b__5_1(MLAPI.Connection.NetworkClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t U3CU3Ec_U3C__endSendClientRpcU3Eb__5_1_m30FF3D9207F7F21BCB0AFC8C6AE4CBF0E139FC4E (U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA * __this, NetworkClient_t0DF198CA47B274F9A545CC0E08507786069E2DE6 * ___c0, const RuntimeMethod* method)
{
	{
		// ClientIds = NetworkManager.Singleton.ConnectedClientsList.Select(c => c.ClientId).ToArray();
		NetworkClient_t0DF198CA47B274F9A545CC0E08507786069E2DE6 * L_0 = ___c0;
		NullCheck(L_0);
		uint64_t L_1 = L_0->get_ClientId_0();
		return L_1;
	}
}
// System.String MLAPI.NetworkBehaviour/<>c::<GetFieldInfoForTypeRecursive>b__52_0(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetFieldInfoForTypeRecursiveU3Eb__52_0_m6E7BC4FFAC4A548FF8B15135B8C7832B2E69A7AB (U3CU3Ec_t7E5E04108242800830A4CDABD994D1D6DC155ECA * __this, FieldInfo_t * ___x0, const RuntimeMethod* method)
{
	{
		// return list.OrderBy(x => x.Name, StringComparer.Ordinal).ToArray();
		FieldInfo_t * L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.Configuration.NetworkConfig/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFF95C8B0CD13F409FCBB0576C1E1052DD6DBBF36 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t85377D8F4AC5A890A77A8C78CFCF705608CD0ECE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t85377D8F4AC5A890A77A8C78CFCF705608CD0ECE * L_0 = (U3CU3Ec_t85377D8F4AC5A890A77A8C78CFCF705608CD0ECE *)il2cpp_codegen_object_new(U3CU3Ec_t85377D8F4AC5A890A77A8C78CFCF705608CD0ECE_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m25A4CB82E7F8F263901E31C624D7E18A4AA32116(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t85377D8F4AC5A890A77A8C78CFCF705608CD0ECE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t85377D8F4AC5A890A77A8C78CFCF705608CD0ECE_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MLAPI.Configuration.NetworkConfig/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m25A4CB82E7F8F263901E31C624D7E18A4AA32116 (U3CU3Ec_t85377D8F4AC5A890A77A8C78CFCF705608CD0ECE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.UInt64 MLAPI.Configuration.NetworkConfig/<>c::<GetConfig>b__32_0(MLAPI.Configuration.NetworkPrefab)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t U3CU3Ec_U3CGetConfigU3Eb__32_0_m21237E5D2B6E5F015829DB864D6A8F61A3F04EE1 (U3CU3Ec_t85377D8F4AC5A890A77A8C78CFCF705608CD0ECE * __this, NetworkPrefab_t7630C6985562B806CE10338714F59F0C6A5B5F71 * ___x0, const RuntimeMethod* method)
{
	{
		// var sortedPrefabList = NetworkPrefabs.OrderBy(x => x.Hash).ToList();
		NetworkPrefab_t7630C6985562B806CE10338714F59F0C6A5B5F71 * L_0 = ___x0;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = NetworkPrefab_get_Hash_m3AA332350212DA75CAA31BAF74FB2D233C723DF8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.NetworkManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDB2470248B5EF5D8E71D9FCACB0DAFBB9CFF8FE3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t52CC57E9CBCF944B6D4AE9FC037E5BD3B7E5BF31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t52CC57E9CBCF944B6D4AE9FC037E5BD3B7E5BF31 * L_0 = (U3CU3Ec_t52CC57E9CBCF944B6D4AE9FC037E5BD3B7E5BF31 *)il2cpp_codegen_object_new(U3CU3Ec_t52CC57E9CBCF944B6D4AE9FC037E5BD3B7E5BF31_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m1808F26C774B94EBFFA144E0E66FC0AF73B87C95(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t52CC57E9CBCF944B6D4AE9FC037E5BD3B7E5BF31_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t52CC57E9CBCF944B6D4AE9FC037E5BD3B7E5BF31_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MLAPI.NetworkManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1808F26C774B94EBFFA144E0E66FC0AF73B87C95 (U3CU3Ec_t52CC57E9CBCF944B6D4AE9FC037E5BD3B7E5BF31 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MLAPI.NetworkManager/<>c::<OnValidate>b__82_0(MLAPI.Configuration.NetworkPrefab)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3COnValidateU3Eb__82_0_m812F2538FB765715D2546CB0AD4AC24779DF1E31 (U3CU3Ec_t52CC57E9CBCF944B6D4AE9FC037E5BD3B7E5BF31 * __this, NetworkPrefab_t7630C6985562B806CE10338714F59F0C6A5B5F71 * ___x0, const RuntimeMethod* method)
{
	{
		// int playerPrefabCount = NetworkConfig.NetworkPrefabs.Count(x => x.PlayerPrefab);
		NetworkPrefab_t7630C6985562B806CE10338714F59F0C6A5B5F71 * L_0 = ___x0;
		NullCheck(L_0);
		bool L_1 = L_0->get_PlayerPrefab_1();
		return L_1;
	}
}
// System.Boolean MLAPI.NetworkManager/<>c::<OnValidate>b__82_1(MLAPI.Configuration.NetworkPrefab)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3COnValidateU3Eb__82_1_m6AA86E310D467307BDECF75EFE4E5DE065258439 (U3CU3Ec_t52CC57E9CBCF944B6D4AE9FC037E5BD3B7E5BF31 * __this, NetworkPrefab_t7630C6985562B806CE10338714F59F0C6A5B5F71 * ___x0, const RuntimeMethod* method)
{
	{
		// var networkPrefab = NetworkConfig.NetworkPrefabs.FirstOrDefault(x => x.PlayerPrefab);
		NetworkPrefab_t7630C6985562B806CE10338714F59F0C6A5B5F71 * L_0 = ___x0;
		NullCheck(L_0);
		bool L_1 = L_0->get_PlayerPrefab_1();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.NetworkManager/<ApprovalTimeout>d__102::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CApprovalTimeoutU3Ed__102__ctor_mE2CAD082E0F328476B482FD5539D4C0495E4D1EA (U3CApprovalTimeoutU3Ed__102_tFC84204C6244AF949BE38AAB25AA969F32C32B88 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MLAPI.NetworkManager/<ApprovalTimeout>d__102::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CApprovalTimeoutU3Ed__102_System_IDisposable_Dispose_m164974C5EE4485A805BEF37B68FB995DDF79F294 (U3CApprovalTimeoutU3Ed__102_tFC84204C6244AF949BE38AAB25AA969F32C32B88 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MLAPI.NetworkManager/<ApprovalTimeout>d__102::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CApprovalTimeoutU3Ed__102_MoveNext_mCDBF979FAA4B3ACB5D8151AAF9B3090A8A4A06F8 (U3CApprovalTimeoutU3Ed__102_tFC84204C6244AF949BE38AAB25AA969F32C32B88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m373A5F9286FD587C70D03680E95C170DE8420D91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m88F56EEA2071E35893FAEE69E65D835A844F0569_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2514C8C3D2C3A644AAEF8B2ACFA718E5BA204652);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B13_0 = 0;
	int32_t G_B17_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0044;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float timeStarted = NetworkTime;
		NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * L_3 = __this->get_U3CU3E4__this_3();
		NullCheck(L_3);
		float L_4;
		L_4 = NetworkManager_get_NetworkTime_m143DC36E3CDBB4D0437CF7AF63234EA69B197B5B(L_3, /*hidden argument*/NULL);
		__this->set_U3CtimeStartedU3E5__1_4(L_4);
		goto IL_004c;
	}

IL_0033:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0044:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_004c:
	{
		// while (NetworkTime - timeStarted < NetworkConfig.ClientConnectionBufferTimeout && PendingClients.ContainsKey(clientId))
		NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_5);
		float L_6;
		L_6 = NetworkManager_get_NetworkTime_m143DC36E3CDBB4D0437CF7AF63234EA69B197B5B(L_5, /*hidden argument*/NULL);
		float L_7 = __this->get_U3CtimeStartedU3E5__1_4();
		NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * L_8 = __this->get_U3CU3E4__this_3();
		NullCheck(L_8);
		NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE * L_9 = L_8->get_NetworkConfig_33();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_ClientConnectionBufferTimeout_11();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_6, (float)L_7))) < ((float)((float)((float)L_10))))))
		{
			goto IL_0089;
		}
	}
	{
		NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * L_11 = __this->get_U3CU3E4__this_3();
		NullCheck(L_11);
		Dictionary_2_tB515236EBFA6EB2166398426DC099A96363476D4 * L_12 = L_11->get_PendingClients_24();
		uint64_t L_13 = __this->get_clientId_2();
		NullCheck(L_12);
		bool L_14;
		L_14 = Dictionary_2_ContainsKey_m88F56EEA2071E35893FAEE69E65D835A844F0569(L_12, L_13, /*hidden argument*/Dictionary_2_ContainsKey_m88F56EEA2071E35893FAEE69E65D835A844F0569_RuntimeMethod_var);
		G_B13_0 = ((int32_t)(L_14));
		goto IL_008a;
	}

IL_0089:
	{
		G_B13_0 = 0;
	}

IL_008a:
	{
		V_1 = (bool)G_B13_0;
		bool L_15 = V_1;
		if (L_15)
		{
			goto IL_0033;
		}
	}
	{
		// if (PendingClients.ContainsKey(clientId) && !ConnectedClients.ContainsKey(clientId))
		NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * L_16 = __this->get_U3CU3E4__this_3();
		NullCheck(L_16);
		Dictionary_2_tB515236EBFA6EB2166398426DC099A96363476D4 * L_17 = L_16->get_PendingClients_24();
		uint64_t L_18 = __this->get_clientId_2();
		NullCheck(L_17);
		bool L_19;
		L_19 = Dictionary_2_ContainsKey_m88F56EEA2071E35893FAEE69E65D835A844F0569(L_17, L_18, /*hidden argument*/Dictionary_2_ContainsKey_m88F56EEA2071E35893FAEE69E65D835A844F0569_RuntimeMethod_var);
		if (!L_19)
		{
			goto IL_00c1;
		}
	}
	{
		NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * L_20 = __this->get_U3CU3E4__this_3();
		NullCheck(L_20);
		Dictionary_2_t1F45833D57768B96BCAA47F7DDD032561D0D84BD * L_21 = L_20->get_ConnectedClients_22();
		uint64_t L_22 = __this->get_clientId_2();
		NullCheck(L_21);
		bool L_23;
		L_23 = Dictionary_2_ContainsKey_m373A5F9286FD587C70D03680E95C170DE8420D91(L_21, L_22, /*hidden argument*/Dictionary_2_ContainsKey_m373A5F9286FD587C70D03680E95C170DE8420D91_RuntimeMethod_var);
		G_B17_0 = ((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		goto IL_00c2;
	}

IL_00c1:
	{
		G_B17_0 = 0;
	}

IL_00c2:
	{
		V_2 = (bool)G_B17_0;
		bool L_24 = V_2;
		if (!L_24)
		{
			goto IL_0106;
		}
	}
	{
		// if (NetworkLog.CurrentLogLevel <= LogLevel.Developer)
		int32_t L_25;
		L_25 = NetworkLog_get_CurrentLogLevel_m53F4291FB71E3AF2A33D4914346DC84D6557CC77(/*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)((((int32_t)L_25) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_3;
		if (!L_26)
		{
			goto IL_00f3;
		}
	}
	{
		// NetworkLog.LogInfo($"Client {clientId} Handshake Timed Out");
		uint64_t L_27 = __this->get_clientId_2();
		uint64_t L_28 = L_27;
		RuntimeObject * L_29 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_28);
		String_t* L_30;
		L_30 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral2514C8C3D2C3A644AAEF8B2ACFA718E5BA204652, L_29, /*hidden argument*/NULL);
		NetworkLog_LogInfo_m3A9941F513A0FE9035AA25D41129F3251C4E5A5C(L_30, /*hidden argument*/NULL);
	}

IL_00f3:
	{
		// DisconnectClient(clientId);
		NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * L_31 = __this->get_U3CU3E4__this_3();
		uint64_t L_32 = __this->get_clientId_2();
		NullCheck(L_31);
		NetworkManager_DisconnectClient_m0E0BA1A459C8B316D065907323D0619B677C5B9C(L_31, L_32, /*hidden argument*/NULL);
	}

IL_0106:
	{
		// }
		return (bool)0;
	}
}
// System.Object MLAPI.NetworkManager/<ApprovalTimeout>d__102::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CApprovalTimeoutU3Ed__102_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA276A44A28F6C872C2325B2755850BE5A0F96070 (U3CApprovalTimeoutU3Ed__102_tFC84204C6244AF949BE38AAB25AA969F32C32B88 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MLAPI.NetworkManager/<ApprovalTimeout>d__102::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CApprovalTimeoutU3Ed__102_System_Collections_IEnumerator_Reset_m42D6D0E9BD75991CD66275372C4832C32F0ADA7D (U3CApprovalTimeoutU3Ed__102_tFC84204C6244AF949BE38AAB25AA969F32C32B88 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CApprovalTimeoutU3Ed__102_System_Collections_IEnumerator_Reset_m42D6D0E9BD75991CD66275372C4832C32F0ADA7D_RuntimeMethod_var)));
	}
}
// System.Object MLAPI.NetworkManager/<ApprovalTimeout>d__102::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CApprovalTimeoutU3Ed__102_System_Collections_IEnumerator_get_Current_mB9BD584B6A79B2AEA5DF19663834FF56A794483A (U3CApprovalTimeoutU3Ed__102_tFC84204C6244AF949BE38AAB25AA969F32C32B88 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.NetworkManager/<TimeOutSwitchSceneProgress>d__103::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimeOutSwitchSceneProgressU3Ed__103__ctor_m8A9968925BC96E88D438C1DA754C8366071529C3 (U3CTimeOutSwitchSceneProgressU3Ed__103_tB5E18C3D5260A692A05E1D3CF8CFBC0C9F343F69 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MLAPI.NetworkManager/<TimeOutSwitchSceneProgress>d__103::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimeOutSwitchSceneProgressU3Ed__103_System_IDisposable_Dispose_mF9C89AB6A875B6FAE6FD42B1407186594D43FE6E (U3CTimeOutSwitchSceneProgressU3Ed__103_tB5E18C3D5260A692A05E1D3CF8CFBC0C9F343F69 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MLAPI.NetworkManager/<TimeOutSwitchSceneProgress>d__103::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTimeOutSwitchSceneProgressU3Ed__103_MoveNext_mB451286D1228B9F5102BFB248611C74E2F389109 (U3CTimeOutSwitchSceneProgressU3Ed__103_tB5E18C3D5260A692A05E1D3CF8CFBC0C9F343F69 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0045;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSecondsRealtime(NetworkConfig.LoadSceneTimeOut);
		NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * L_3 = __this->get_U3CU3E4__this_3();
		NullCheck(L_3);
		NetworkConfig_tB3BA60B2F6E35D32F21E38DBDBCD280ACBD8D2AE * L_4 = L_3->get_NetworkConfig_33();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_LoadSceneTimeOut_24();
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_6 = (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225(L_6, ((float)((float)L_5)), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0045:
	{
		__this->set_U3CU3E1__state_0((-1));
		// switchSceneProgress.SetTimedOut();
		SceneSwitchProgress_tAAE76AD0A7D3D42A7D0EB2EC5799E42FAFC178BD * L_7 = __this->get_switchSceneProgress_2();
		NullCheck(L_7);
		SceneSwitchProgress_SetTimedOut_mDF92EA233301647E7BF7120975624F41DD63CEA4(L_7, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object MLAPI.NetworkManager/<TimeOutSwitchSceneProgress>d__103::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTimeOutSwitchSceneProgressU3Ed__103_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m18A5255531BE6DA9A81BEF2F5165D8E09BFEF659 (U3CTimeOutSwitchSceneProgressU3Ed__103_tB5E18C3D5260A692A05E1D3CF8CFBC0C9F343F69 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MLAPI.NetworkManager/<TimeOutSwitchSceneProgress>d__103::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimeOutSwitchSceneProgressU3Ed__103_System_Collections_IEnumerator_Reset_mE21942985D27178FF2EA831AB7A6DA2D9439AE65 (U3CTimeOutSwitchSceneProgressU3Ed__103_tB5E18C3D5260A692A05E1D3CF8CFBC0C9F343F69 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTimeOutSwitchSceneProgressU3Ed__103_System_Collections_IEnumerator_Reset_mE21942985D27178FF2EA831AB7A6DA2D9439AE65_RuntimeMethod_var)));
	}
}
// System.Object MLAPI.NetworkManager/<TimeOutSwitchSceneProgress>d__103::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTimeOutSwitchSceneProgressU3Ed__103_System_Collections_IEnumerator_get_Current_mEBBA4CB1CF41EC49CAF8F2A2DEEBBB5CEE6844E2 (U3CTimeOutSwitchSceneProgressU3Ed__103_tB5E18C3D5260A692A05E1D3CF8CFBC0C9F343F69 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.NetworkManager/ConnectionApprovedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionApprovedDelegate__ctor_mF594D236B685D77DE1EC21AA8F52FE1F9AD39815 (ConnectionApprovedDelegate_t796D80F1A53D781AD8C7C8AD51C94CDC89EC37F9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MLAPI.NetworkManager/ConnectionApprovedDelegate::Invoke(System.Boolean,System.Nullable`1<System.UInt64>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Quaternion>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionApprovedDelegate_Invoke_m5376CA3E16D4B71EAAA08A36232A40C62CB6B6FF (ConnectionApprovedDelegate_t796D80F1A53D781AD8C7C8AD51C94CDC89EC37F9 * __this, bool ___createPlayerObject0, Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  ___playerPrefabHash1, bool ___approved2, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___position3, Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  ___rotation4, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef void (*FunctionPointerType) (bool, Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C , bool, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 , Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___createPlayerObject0, ___playerPrefabHash1, ___approved2, ___position3, ___rotation4, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C , bool, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 , Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___createPlayerObject0, ___playerPrefabHash1, ___approved2, ___position3, ___rotation4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker5< bool, Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C , bool, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 , Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  >::Invoke(targetMethod, targetThis, ___createPlayerObject0, ___playerPrefabHash1, ___approved2, ___position3, ___rotation4);
					else
						GenericVirtActionInvoker5< bool, Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C , bool, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 , Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  >::Invoke(targetMethod, targetThis, ___createPlayerObject0, ___playerPrefabHash1, ___approved2, ___position3, ___rotation4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< bool, Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C , bool, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 , Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___createPlayerObject0, ___playerPrefabHash1, ___approved2, ___position3, ___rotation4);
					else
						VirtActionInvoker5< bool, Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C , bool, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 , Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___createPlayerObject0, ___playerPrefabHash1, ___approved2, ___position3, ___rotation4);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C , bool, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 , Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___createPlayerObject0, ___playerPrefabHash1, ___approved2, ___position3, ___rotation4, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MLAPI.NetworkManager/ConnectionApprovedDelegate::BeginInvoke(System.Boolean,System.Nullable`1<System.UInt64>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Quaternion>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionApprovedDelegate_BeginInvoke_mB915195C76DDD26AFAD1C3BAC1E78F1825561DBA (ConnectionApprovedDelegate_t796D80F1A53D781AD8C7C8AD51C94CDC89EC37F9 * __this, bool ___createPlayerObject0, Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  ___playerPrefabHash1, bool ___approved2, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___position3, Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  ___rotation4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___createPlayerObject0);
	__d_args[1] = Box(Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C_il2cpp_TypeInfo_var, &___playerPrefabHash1);
	__d_args[2] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___approved2);
	__d_args[3] = Box(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258_il2cpp_TypeInfo_var, &___position3);
	__d_args[4] = Box(Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1_il2cpp_TypeInfo_var, &___rotation4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// System.Void MLAPI.NetworkManager/ConnectionApprovedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionApprovedDelegate_EndInvoke_m305BA159477A1F04FACC29B84D2EFE25EF90006E (ConnectionApprovedDelegate_t796D80F1A53D781AD8C7C8AD51C94CDC89EC37F9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.NetworkManager/PerformanceDataEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerformanceDataEventHandler__ctor_m27A6DF3505799A9CCE3B7AFB938C2D1F1E3A62D6 (PerformanceDataEventHandler_t64BB43DAA5EF453BF11D2DC16DC169DDC6AF7920 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MLAPI.NetworkManager/PerformanceDataEventHandler::Invoke(MLAPI.Profiling.PerformanceTickData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerformanceDataEventHandler_Invoke_mDC3BBE7FB7284251D1E1D83BE6F26354C129BC15 (PerformanceDataEventHandler_t64BB43DAA5EF453BF11D2DC16DC169DDC6AF7920 * __this, PerformanceTickData_tDA5CED757DA6E1D027F9EECA2A80D6EEC3248CFD * ___profilerData0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (PerformanceTickData_tDA5CED757DA6E1D027F9EECA2A80D6EEC3248CFD *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___profilerData0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, PerformanceTickData_tDA5CED757DA6E1D027F9EECA2A80D6EEC3248CFD *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___profilerData0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___profilerData0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___profilerData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___profilerData0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___profilerData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (PerformanceTickData_tDA5CED757DA6E1D027F9EECA2A80D6EEC3248CFD *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___profilerData0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< PerformanceTickData_tDA5CED757DA6E1D027F9EECA2A80D6EEC3248CFD * >::Invoke(targetMethod, targetThis, ___profilerData0);
					else
						GenericVirtActionInvoker1< PerformanceTickData_tDA5CED757DA6E1D027F9EECA2A80D6EEC3248CFD * >::Invoke(targetMethod, targetThis, ___profilerData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< PerformanceTickData_tDA5CED757DA6E1D027F9EECA2A80D6EEC3248CFD * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___profilerData0);
					else
						VirtActionInvoker1< PerformanceTickData_tDA5CED757DA6E1D027F9EECA2A80D6EEC3248CFD * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___profilerData0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (PerformanceTickData_tDA5CED757DA6E1D027F9EECA2A80D6EEC3248CFD *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___profilerData0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PerformanceTickData_tDA5CED757DA6E1D027F9EECA2A80D6EEC3248CFD *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___profilerData0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult MLAPI.NetworkManager/PerformanceDataEventHandler::BeginInvoke(MLAPI.Profiling.PerformanceTickData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PerformanceDataEventHandler_BeginInvoke_m10688BC9C753C94767062D52BBF737BAB4C575E6 (PerformanceDataEventHandler_t64BB43DAA5EF453BF11D2DC16DC169DDC6AF7920 * __this, PerformanceTickData_tDA5CED757DA6E1D027F9EECA2A80D6EEC3248CFD * ___profilerData0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___profilerData0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void MLAPI.NetworkManager/PerformanceDataEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerformanceDataEventHandler_EndInvoke_mDD3B322B6273D352FFD7A2DEBF594842A37E2DF0 (PerformanceDataEventHandler_t64BB43DAA5EF453BF11D2DC16DC169DDC6AF7920 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_SpawnDelegate_tCE3B6000F86A9D77908A4C5D7B2FDAF0E44BE305 (SpawnDelegate_tCE3B6000F86A9D77908A4C5D7B2FDAF0E44BE305 * __this, uint64_t ___clientId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___clientId0);

	return static_cast<bool>(returnValue);
}
// System.Void MLAPI.NetworkObject/SpawnDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnDelegate__ctor_mE9969B6092414DF4EA5BC9E371754ABDCEF79B6D (SpawnDelegate_tCE3B6000F86A9D77908A4C5D7B2FDAF0E44BE305 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean MLAPI.NetworkObject/SpawnDelegate::Invoke(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpawnDelegate_Invoke_m422B4DFD1BC70E95891D9478EF72593F17BA54EE (SpawnDelegate_tCE3B6000F86A9D77908A4C5D7B2FDAF0E44BE305 * __this, uint64_t ___clientId0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___clientId0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, uint64_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, uint64_t >::Invoke(targetMethod, targetThis, ___clientId0);
					else
						result = GenericVirtFuncInvoker1< bool, uint64_t >::Invoke(targetMethod, targetThis, ___clientId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___clientId0);
					else
						result = VirtFuncInvoker1< bool, uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___clientId0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, uint64_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult MLAPI.NetworkObject/SpawnDelegate::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnDelegate_BeginInvoke_mD8E4F0547ADC0A549DC3F3FC2993F25748460997 (SpawnDelegate_tCE3B6000F86A9D77908A4C5D7B2FDAF0E44BE305 * __this, uint64_t ___clientId0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___clientId0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Boolean MLAPI.NetworkObject/SpawnDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpawnDelegate_EndInvoke_m9DD998BFEF0E714446CAF1A055D4DC34F46837B2 (SpawnDelegate_tCE3B6000F86A9D77908A4C5D7B2FDAF0E44BE305 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_VisibilityDelegate_tCD922F272D3C2DCB1DE3FF7866D6646DB6672320 (VisibilityDelegate_tCD922F272D3C2DCB1DE3FF7866D6646DB6672320 * __this, uint64_t ___clientId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___clientId0);

	return static_cast<bool>(returnValue);
}
// System.Void MLAPI.NetworkObject/VisibilityDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityDelegate__ctor_m4C408C4BA9F9AF46AB1E16EF848B4642C5627AF7 (VisibilityDelegate_tCD922F272D3C2DCB1DE3FF7866D6646DB6672320 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean MLAPI.NetworkObject/VisibilityDelegate::Invoke(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisibilityDelegate_Invoke_m757A05CC676951FC1C6B0A0C5C11380C672D8685 (VisibilityDelegate_tCD922F272D3C2DCB1DE3FF7866D6646DB6672320 * __this, uint64_t ___clientId0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___clientId0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, uint64_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, uint64_t >::Invoke(targetMethod, targetThis, ___clientId0);
					else
						result = GenericVirtFuncInvoker1< bool, uint64_t >::Invoke(targetMethod, targetThis, ___clientId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___clientId0);
					else
						result = VirtFuncInvoker1< bool, uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___clientId0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, uint64_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult MLAPI.NetworkObject/VisibilityDelegate::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisibilityDelegate_BeginInvoke_m628B2479CDC0A5E0922AF44DF95E060641ACE9F7 (VisibilityDelegate_tCD922F272D3C2DCB1DE3FF7866D6646DB6672320 * __this, uint64_t ___clientId0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___clientId0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Boolean MLAPI.NetworkObject/VisibilityDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisibilityDelegate_EndInvoke_m226DCE4A1BD4883197B02909AAFF68385758834A (VisibilityDelegate_tCD922F272D3C2DCB1DE3FF7866D6646DB6672320 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.SceneManagement.NetworkSceneManager/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_m36F74305DE8B63D80176B74F8C0C3D50CA2A2EFE (U3CU3Ec__DisplayClass24_0_tC716664DD675E4859C9F52311EC519D2E193DA9F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MLAPI.SceneManagement.NetworkSceneManager/<>c__DisplayClass24_0::<SwitchScene>b__0(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CSwitchSceneU3Eb__0_mB9E47CC63E54BECF8A8BC28FF0362B1AF7CD98AD (U3CU3Ec__DisplayClass24_0_tC716664DD675E4859C9F52311EC519D2E193DA9F * __this, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___asyncOp20, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkSceneManager_tC54D99CCDAB94946076FBD2295C595019218A8E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sceneLoad.completed += (AsyncOperation asyncOp2) => { OnSceneLoaded(switchSceneProgress.Guid, null); };
		SceneSwitchProgress_tAAE76AD0A7D3D42A7D0EB2EC5799E42FAFC178BD * L_0 = __this->get_switchSceneProgress_0();
		NullCheck(L_0);
		Guid_t  L_1;
		L_1 = SceneSwitchProgress_get_Guid_mEAE9C8740076E6C390DC413C9633B682804BF7F5_inline(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkSceneManager_tC54D99CCDAB94946076FBD2295C595019218A8E3_il2cpp_TypeInfo_var);
		NetworkSceneManager_OnSceneLoaded_m0192D41AE902327791D388A82A90A0DD1BE85246(L_1, (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)NULL, /*hidden argument*/NULL);
		// sceneLoad.completed += (AsyncOperation asyncOp2) => { OnSceneLoaded(switchSceneProgress.Guid, null); };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.SceneManagement.NetworkSceneManager/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_m586050667B4B2C7C00519F9C4FA4B843AA2A5512 (U3CU3Ec__DisplayClass25_0_t3AF943BF535D1DBC4402F5AE2F6127D5E243881E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MLAPI.SceneManagement.NetworkSceneManager/<>c__DisplayClass25_0::<OnSceneSwitch>b__0(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0_U3COnSceneSwitchU3Eb__0_m5ED8C0BEF893F5EFE8769C51A9D9528B9629F7C9 (U3CU3Ec__DisplayClass25_0_t3AF943BF535D1DBC4402F5AE2F6127D5E243881E * __this, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___asyncOp20, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkSceneManager_tC54D99CCDAB94946076FBD2295C595019218A8E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sceneLoad.completed += asyncOp2 => OnSceneLoaded(switchSceneGuid, objectStream);
		Guid_t  L_0 = __this->get_switchSceneGuid_0();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = __this->get_objectStream_1();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkSceneManager_tC54D99CCDAB94946076FBD2295C595019218A8E3_il2cpp_TypeInfo_var);
		NetworkSceneManager_OnSceneLoaded_m0192D41AE902327791D388A82A90A0DD1BE85246(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SceneSwitchStartedDelegate_t8CFB7CC811F3DE194B1F1C7E3105BD755DCC7FF4 (SceneSwitchStartedDelegate_t8CFB7CC811F3DE194B1F1C7E3105BD755DCC7FF4 * __this, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___operation0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___operation0' to native representation
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke ____operation0_marshaled = AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke();
	if (___operation0 != NULL)
	{
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshal_pinvoke(*___operation0, ____operation0_marshaled);
	}

	// Native function invocation
	il2cppPInvokeFunc(___operation0 != NULL ? (&____operation0_marshaled) : NULL);

	// Marshaling cleanup of parameter '___operation0' native representation
	if ((&____operation0_marshaled) != NULL)
	{
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshal_pinvoke_cleanup(____operation0_marshaled);
	}

}
// System.Void MLAPI.SceneManagement.NetworkSceneManager/SceneSwitchStartedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSwitchStartedDelegate__ctor_m4A315B943E10F6CA2FCEAB4F03DCD5F968FD112D (SceneSwitchStartedDelegate_t8CFB7CC811F3DE194B1F1C7E3105BD755DCC7FF4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MLAPI.SceneManagement.NetworkSceneManager/SceneSwitchStartedDelegate::Invoke(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSwitchStartedDelegate_Invoke_m2682F6B16BBCF0BDA6A345FA994B0F0516E42116 (SceneSwitchStartedDelegate_t8CFB7CC811F3DE194B1F1C7E3105BD755DCC7FF4 * __this, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___operation0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___operation0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___operation0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___operation0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___operation0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___operation0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___operation0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___operation0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * >::Invoke(targetMethod, targetThis, ___operation0);
					else
						GenericVirtActionInvoker1< AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * >::Invoke(targetMethod, targetThis, ___operation0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___operation0);
					else
						VirtActionInvoker1< AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___operation0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___operation0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___operation0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult MLAPI.SceneManagement.NetworkSceneManager/SceneSwitchStartedDelegate::BeginInvoke(UnityEngine.AsyncOperation,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneSwitchStartedDelegate_BeginInvoke_mEDF842948E5CFED7DB2256B57284D11625A655E0 (SceneSwitchStartedDelegate_t8CFB7CC811F3DE194B1F1C7E3105BD755DCC7FF4 * __this, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___operation0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___operation0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void MLAPI.SceneManagement.NetworkSceneManager/SceneSwitchStartedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSwitchStartedDelegate_EndInvoke_mC901244C18CE4817AEFDB0989971C0E372C164F5 (SceneSwitchStartedDelegate_t8CFB7CC811F3DE194B1F1C7E3105BD755DCC7FF4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SceneSwitchedDelegate_t6C2314AFBD4ADA9512BADDB300403D6CE2629D84 (SceneSwitchedDelegate_t6C2314AFBD4ADA9512BADDB300403D6CE2629D84 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void MLAPI.SceneManagement.NetworkSceneManager/SceneSwitchedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSwitchedDelegate__ctor_m839FB447DB075EDC7205E4D1EB67F6EED03C151B (SceneSwitchedDelegate_t6C2314AFBD4ADA9512BADDB300403D6CE2629D84 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MLAPI.SceneManagement.NetworkSceneManager/SceneSwitchedDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSwitchedDelegate_Invoke_m7096FA770BAF409318C173DC739AA1809B8C8C25 (SceneSwitchedDelegate_t6C2314AFBD4ADA9512BADDB300403D6CE2629D84 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MLAPI.SceneManagement.NetworkSceneManager/SceneSwitchedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneSwitchedDelegate_BeginInvoke_mE9129A6C2158C84FE6BFCDB8DFE867118FF598FC (SceneSwitchedDelegate_t6C2314AFBD4ADA9512BADDB300403D6CE2629D84 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void MLAPI.SceneManagement.NetworkSceneManager/SceneSwitchedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSwitchedDelegate_EndInvoke_mE80225E2A9E9C95C63CB63C028252CBD21A7CC51 (SceneSwitchedDelegate_t6C2314AFBD4ADA9512BADDB300403D6CE2629D84 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.Spawning.NetworkSpawnManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7755CA3C64B722349BEE9BEF9EF7177572C2B4AC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7ECBA6547CA9ED518205A20A7E53317896BDAE4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7ECBA6547CA9ED518205A20A7E53317896BDAE4A * L_0 = (U3CU3Ec_t7ECBA6547CA9ED518205A20A7E53317896BDAE4A *)il2cpp_codegen_object_new(U3CU3Ec_t7ECBA6547CA9ED518205A20A7E53317896BDAE4A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6CE06F8771DAE4A390E2A57D99ED34E31850FC6B(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7ECBA6547CA9ED518205A20A7E53317896BDAE4A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7ECBA6547CA9ED518205A20A7E53317896BDAE4A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MLAPI.Spawning.NetworkSpawnManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6CE06F8771DAE4A390E2A57D99ED34E31850FC6B (U3CU3Ec_t7ECBA6547CA9ED518205A20A7E53317896BDAE4A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.UInt64 MLAPI.Spawning.NetworkSpawnManager/<>c::<OnDestroyObject>b__33_0(MLAPI.Connection.NetworkClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t U3CU3Ec_U3COnDestroyObjectU3Eb__33_0_m39458E8E222E0264A2B7C4AAB94CA6002750BA64 (U3CU3Ec_t7ECBA6547CA9ED518205A20A7E53317896BDAE4A * __this, NetworkClient_t0DF198CA47B274F9A545CC0E08507786069E2DE6 * ___c0, const RuntimeMethod* method)
{
	{
		// ClientNetworkIds = NetworkManager.Singleton.ConnectedClientsList.Select(c => c.ClientId).ToArray()
		NetworkClient_t0DF198CA47B274F9A545CC0E08507786069E2DE6 * L_0 = ___c0;
		NullCheck(L_0);
		uint64_t L_1 = L_0->get_ClientId_0();
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.Spawning.NetworkSpawnManager/DestroyHandlerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyHandlerDelegate__ctor_mF8A239E39B6CE6A5D0211608BD46C828C10A52B5 (DestroyHandlerDelegate_tDD380C1764FBD3606ECCC747A421C8F8BB31720F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MLAPI.Spawning.NetworkSpawnManager/DestroyHandlerDelegate::Invoke(MLAPI.NetworkObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyHandlerDelegate_Invoke_mD9B9016DBD3C81CCA7F3DF36F1266EA1B786F844 (DestroyHandlerDelegate_tDD380C1764FBD3606ECCC747A421C8F8BB31720F * __this, NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 * ___networkObject0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___networkObject0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___networkObject0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___networkObject0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___networkObject0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___networkObject0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___networkObject0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___networkObject0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 * >::Invoke(targetMethod, targetThis, ___networkObject0);
					else
						GenericVirtActionInvoker1< NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 * >::Invoke(targetMethod, targetThis, ___networkObject0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___networkObject0);
					else
						VirtActionInvoker1< NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___networkObject0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___networkObject0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___networkObject0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult MLAPI.Spawning.NetworkSpawnManager/DestroyHandlerDelegate::BeginInvoke(MLAPI.NetworkObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroyHandlerDelegate_BeginInvoke_mBC5214F77D87AAC3696A4B43FE163BEEED5C5954 (DestroyHandlerDelegate_tDD380C1764FBD3606ECCC747A421C8F8BB31720F * __this, NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 * ___networkObject0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___networkObject0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void MLAPI.Spawning.NetworkSpawnManager/DestroyHandlerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyHandlerDelegate_EndInvoke_mE2A40DDF249A201C447A3EFF45767A3A30E582CE (DestroyHandlerDelegate_tDD380C1764FBD3606ECCC747A421C8F8BB31720F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.Spawning.NetworkSpawnManager/SpawnHandlerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnHandlerDelegate__ctor_m8A8EB4F03F2F47C0F3ECACC041AB4865AF834F12 (SpawnHandlerDelegate_t9BC50B28F51B8CE7F990FCDD5C94AF5CCEE30C39 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// MLAPI.NetworkObject MLAPI.Spawning.NetworkSpawnManager/SpawnHandlerDelegate::Invoke(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 * SpawnHandlerDelegate_Invoke_mEA0C734935CD74A3FE3D46E2C333BB2311F443CC (SpawnHandlerDelegate_t9BC50B28F51B8CE7F990FCDD5C94AF5CCEE30C39 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method)
{
	NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 * (*FunctionPointerType) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___position0, ___rotation1, targetMethod);
			}
			else
			{
				// closed
				typedef NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 * (*FunctionPointerType) (void*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, ___rotation1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  >::Invoke(targetMethod, targetThis, ___position0, ___rotation1);
					else
						result = GenericVirtFuncInvoker2< NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  >::Invoke(targetMethod, targetThis, ___position0, ___rotation1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___position0, ___rotation1);
					else
						result = VirtFuncInvoker2< NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___position0, ___rotation1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 * (*FunctionPointerType) (RuntimeObject*, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___position0) - 1), ___rotation1, targetMethod);
				}
				else
				{
					typedef NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 * (*FunctionPointerType) (void*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, ___rotation1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult MLAPI.Spawning.NetworkSpawnManager/SpawnHandlerDelegate::BeginInvoke(UnityEngine.Vector3,UnityEngine.Quaternion,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnHandlerDelegate_BeginInvoke_m28536CEAADF1A86647B456AE1AF2E7ADD9CE7A2D (SpawnHandlerDelegate_t9BC50B28F51B8CE7F990FCDD5C94AF5CCEE30C39 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___position0);
	__d_args[1] = Box(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var, &___rotation1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// MLAPI.NetworkObject MLAPI.Spawning.NetworkSpawnManager/SpawnHandlerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 * SpawnHandlerDelegate_EndInvoke_m156D8E72C7997044B60472DD15AC939B3CA2CE5A (SpawnHandlerDelegate_t9BC50B28F51B8CE7F990FCDD5C94AF5CCEE30C39 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (NetworkObject_t40481B168964D0BEBEA4EFE32ACADFBF27B1BE60 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.Transports.NetworkTransport/RequestChannelsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestChannelsDelegate__ctor_m408B2C934739F6103DD75F892D0A5CDB8D93933D (RequestChannelsDelegate_tE7B26EED431984C7ABC96FB2B3DF3A497E8281C0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MLAPI.Transports.NetworkTransport/RequestChannelsDelegate::Invoke(System.Collections.Generic.List`1<MLAPI.Transports.TransportChannel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestChannelsDelegate_Invoke_m9BF02B6540C1BB7A1141E6123E8C5BA8258C45C4 (RequestChannelsDelegate_tE7B26EED431984C7ABC96FB2B3DF3A497E8281C0 * __this, List_1_t3F316C65882F05719FF89373CFAB006C671A1803 * ___channels0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (List_1_t3F316C65882F05719FF89373CFAB006C671A1803 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___channels0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, List_1_t3F316C65882F05719FF89373CFAB006C671A1803 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___channels0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___channels0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___channels0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___channels0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___channels0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (List_1_t3F316C65882F05719FF89373CFAB006C671A1803 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___channels0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< List_1_t3F316C65882F05719FF89373CFAB006C671A1803 * >::Invoke(targetMethod, targetThis, ___channels0);
					else
						GenericVirtActionInvoker1< List_1_t3F316C65882F05719FF89373CFAB006C671A1803 * >::Invoke(targetMethod, targetThis, ___channels0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< List_1_t3F316C65882F05719FF89373CFAB006C671A1803 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___channels0);
					else
						VirtActionInvoker1< List_1_t3F316C65882F05719FF89373CFAB006C671A1803 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___channels0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (List_1_t3F316C65882F05719FF89373CFAB006C671A1803 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___channels0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, List_1_t3F316C65882F05719FF89373CFAB006C671A1803 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___channels0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult MLAPI.Transports.NetworkTransport/RequestChannelsDelegate::BeginInvoke(System.Collections.Generic.List`1<MLAPI.Transports.TransportChannel>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RequestChannelsDelegate_BeginInvoke_mCDC9AA788EAB4A1B041CF1E5724B97408D2E93DA (RequestChannelsDelegate_tE7B26EED431984C7ABC96FB2B3DF3A497E8281C0 * __this, List_1_t3F316C65882F05719FF89373CFAB006C671A1803 * ___channels0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___channels0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void MLAPI.Transports.NetworkTransport/RequestChannelsDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestChannelsDelegate_EndInvoke_m0C2639F334071185615589DA1F1A1B40469B35A2 (RequestChannelsDelegate_tE7B26EED431984C7ABC96FB2B3DF3A497E8281C0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.Transports.NetworkTransport/TransportEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransportEventDelegate__ctor_m2BA7BF8A1FDA057CDBC8A7E928835997C1AE7BD3 (TransportEventDelegate_t6756296C9F115149F6A4735F14E96E74C38A17BE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MLAPI.Transports.NetworkTransport/TransportEventDelegate::Invoke(MLAPI.Transports.NetworkEvent,System.UInt64,MLAPI.Transports.NetworkChannel,System.ArraySegment`1<System.Byte>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransportEventDelegate_Invoke_m57D0E78656CD29F0601226ADF745E37992E3A475 (TransportEventDelegate_t6756296C9F115149F6A4735F14E96E74C38A17BE * __this, int32_t ___type0, uint64_t ___clientId1, uint8_t ___networkChannel2, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___payload3, float ___receiveTime4, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, uint64_t, uint8_t, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___type0, ___clientId1, ___networkChannel2, ___payload3, ___receiveTime4, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, uint64_t, uint8_t, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___type0, ___clientId1, ___networkChannel2, ___payload3, ___receiveTime4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker5< int32_t, uint64_t, uint8_t, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , float >::Invoke(targetMethod, targetThis, ___type0, ___clientId1, ___networkChannel2, ___payload3, ___receiveTime4);
					else
						GenericVirtActionInvoker5< int32_t, uint64_t, uint8_t, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , float >::Invoke(targetMethod, targetThis, ___type0, ___clientId1, ___networkChannel2, ___payload3, ___receiveTime4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< int32_t, uint64_t, uint8_t, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___type0, ___clientId1, ___networkChannel2, ___payload3, ___receiveTime4);
					else
						VirtActionInvoker5< int32_t, uint64_t, uint8_t, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___type0, ___clientId1, ___networkChannel2, ___payload3, ___receiveTime4);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, uint64_t, uint8_t, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___type0) - 1), ___clientId1, ___networkChannel2, ___payload3, ___receiveTime4, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, uint64_t, uint8_t, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___type0, ___clientId1, ___networkChannel2, ___payload3, ___receiveTime4, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult MLAPI.Transports.NetworkTransport/TransportEventDelegate::BeginInvoke(MLAPI.Transports.NetworkEvent,System.UInt64,MLAPI.Transports.NetworkChannel,System.ArraySegment`1<System.Byte>,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransportEventDelegate_BeginInvoke_m1A12BF2DF88B29FF09ECAD5C8903A6F8C5EB45C3 (TransportEventDelegate_t6756296C9F115149F6A4735F14E96E74C38A17BE * __this, int32_t ___type0, uint64_t ___clientId1, uint8_t ___networkChannel2, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___payload3, float ___receiveTime4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkChannel_t017AC97DA612B8837176E40A29A49B723FD1625F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkEvent_t73788FC751907641A05E91C8B0B6AC90B2C934DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(NetworkEvent_t73788FC751907641A05E91C8B0B6AC90B2C934DC_il2cpp_TypeInfo_var, &___type0);
	__d_args[1] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___clientId1);
	__d_args[2] = Box(NetworkChannel_t017AC97DA612B8837176E40A29A49B723FD1625F_il2cpp_TypeInfo_var, &___networkChannel2);
	__d_args[3] = Box(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE_il2cpp_TypeInfo_var, &___payload3);
	__d_args[4] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___receiveTime4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// System.Void MLAPI.Transports.NetworkTransport/TransportEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransportEventDelegate_EndInvoke_mEA053FDBC9D79F9F8397B18254CBBA31F5246051 (TransportEventDelegate_t6756296C9F115149F6A4735F14E96E74C38A17BE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.LowLevel.PlayerLoopSystem MLAPI.NetworkUpdateLoop/NetworkEarlyUpdate::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkEarlyUpdate_CreateLoopSystem_m12C9CE6C40E56F7635D235E8D106745AAD77AA37 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkEarlyUpdate_t479652BD48725B36367492FA72864FCC71E5DBFE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m8D260FCA85760FCB3A38EFBA700E9F6F3AC8C1EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B2_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B2_1 = NULL;
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B1_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B1_1 = NULL;
	{
		// return new PlayerLoopSystem
		// {
		//     type = typeof(NetworkEarlyUpdate),
		//     updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.EarlyUpdate)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C ));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (NetworkEarlyUpdate_t479652BD48725B36367492FA72864FCC71E5DBFE_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		(&V_0)->set_type_0(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_il2cpp_TypeInfo_var);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_2 = ((U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = (&V_0);
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = (&V_0);
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_il2cpp_TypeInfo_var);
		U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800 * L_4 = ((U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_5 = (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA *)il2cpp_codegen_object_new(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m8D260FCA85760FCB3A38EFBA700E9F6F3AC8C1EC_RuntimeMethod_var), /*hidden argument*/NULL);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_6 = L_5;
		((U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_003b:
	{
		G_B2_1->set_updateDelegate_2(G_B2_0);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_7 = V_0;
		V_1 = L_7;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_8 = V_1;
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.LowLevel.PlayerLoopSystem MLAPI.NetworkUpdateLoop/NetworkFixedUpdate::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkFixedUpdate_CreateLoopSystem_mEC86040F69E9DE40B761CE82E2B69CFC4460A431 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkFixedUpdate_tBB90D1862102CD5FA8603B9523DF28307372546A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m5EF61EC582F69FC74A9557438638E98C67F7F72C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B2_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B2_1 = NULL;
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B1_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B1_1 = NULL;
	{
		// return new PlayerLoopSystem
		// {
		//     type = typeof(NetworkFixedUpdate),
		//     updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.FixedUpdate)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C ));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (NetworkFixedUpdate_tBB90D1862102CD5FA8603B9523DF28307372546A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		(&V_0)->set_type_0(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_il2cpp_TypeInfo_var);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_2 = ((U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = (&V_0);
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = (&V_0);
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_il2cpp_TypeInfo_var);
		U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8 * L_4 = ((U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_5 = (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA *)il2cpp_codegen_object_new(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m5EF61EC582F69FC74A9557438638E98C67F7F72C_RuntimeMethod_var), /*hidden argument*/NULL);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_6 = L_5;
		((U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_003b:
	{
		G_B2_1->set_updateDelegate_2(G_B2_0);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_7 = V_0;
		V_1 = L_7;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_8 = V_1;
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.LowLevel.PlayerLoopSystem MLAPI.NetworkUpdateLoop/NetworkInitialization::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkInitialization_CreateLoopSystem_m93F251B6F1B2D20AA97C4DC5A4424550544F1A42 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkInitialization_t9CA79804F071F80BD1715A2475F734F08D9C7E63_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m3DA848EAB6520DE82FA6E676B740A680074AE2EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B2_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B2_1 = NULL;
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B1_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B1_1 = NULL;
	{
		// return new PlayerLoopSystem
		// {
		//     type = typeof(NetworkInitialization),
		//     updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.Initialization)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C ));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (NetworkInitialization_t9CA79804F071F80BD1715A2475F734F08D9C7E63_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		(&V_0)->set_type_0(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_il2cpp_TypeInfo_var);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_2 = ((U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = (&V_0);
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = (&V_0);
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_il2cpp_TypeInfo_var);
		U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56 * L_4 = ((U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_5 = (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA *)il2cpp_codegen_object_new(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m3DA848EAB6520DE82FA6E676B740A680074AE2EB_RuntimeMethod_var), /*hidden argument*/NULL);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_6 = L_5;
		((U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_003b:
	{
		G_B2_1->set_updateDelegate_2(G_B2_0);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_7 = V_0;
		V_1 = L_7;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_8 = V_1;
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.LowLevel.PlayerLoopSystem MLAPI.NetworkUpdateLoop/NetworkPostLateUpdate::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkPostLateUpdate_CreateLoopSystem_mFDA8CE751D45DF8BB0E45CA62D8D9417DCB35A0A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkPostLateUpdate_t7F3126BE760A3B007F1AABD4C9E201F908332B3C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m6AAF43D7F3275579BC25E687CD358B880AA4D85E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B2_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B2_1 = NULL;
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B1_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B1_1 = NULL;
	{
		// return new PlayerLoopSystem
		// {
		//     type = typeof(NetworkPostLateUpdate),
		//     updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.PostLateUpdate)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C ));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (NetworkPostLateUpdate_t7F3126BE760A3B007F1AABD4C9E201F908332B3C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		(&V_0)->set_type_0(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_il2cpp_TypeInfo_var);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_2 = ((U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = (&V_0);
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = (&V_0);
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_il2cpp_TypeInfo_var);
		U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED * L_4 = ((U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_5 = (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA *)il2cpp_codegen_object_new(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m6AAF43D7F3275579BC25E687CD358B880AA4D85E_RuntimeMethod_var), /*hidden argument*/NULL);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_6 = L_5;
		((U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_003b:
	{
		G_B2_1->set_updateDelegate_2(G_B2_0);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_7 = V_0;
		V_1 = L_7;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_8 = V_1;
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.LowLevel.PlayerLoopSystem MLAPI.NetworkUpdateLoop/NetworkPreLateUpdate::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkPreLateUpdate_CreateLoopSystem_m693CBDBD03B76D394AE814044DCDB464B50E8182 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkPreLateUpdate_t536C07C25A0F343BD11C8DCF5BA2988ED71CA0CA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_mAFE958D5B72B06F09015E416D49CB46E25420131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B2_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B2_1 = NULL;
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B1_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B1_1 = NULL;
	{
		// return new PlayerLoopSystem
		// {
		//     type = typeof(NetworkPreLateUpdate),
		//     updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.PreLateUpdate)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C ));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (NetworkPreLateUpdate_t536C07C25A0F343BD11C8DCF5BA2988ED71CA0CA_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		(&V_0)->set_type_0(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_il2cpp_TypeInfo_var);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_2 = ((U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = (&V_0);
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = (&V_0);
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_il2cpp_TypeInfo_var);
		U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16 * L_4 = ((U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_5 = (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA *)il2cpp_codegen_object_new(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_mAFE958D5B72B06F09015E416D49CB46E25420131_RuntimeMethod_var), /*hidden argument*/NULL);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_6 = L_5;
		((U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_003b:
	{
		G_B2_1->set_updateDelegate_2(G_B2_0);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_7 = V_0;
		V_1 = L_7;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_8 = V_1;
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.LowLevel.PlayerLoopSystem MLAPI.NetworkUpdateLoop/NetworkPreUpdate::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkPreUpdate_CreateLoopSystem_m7B6575CFD08C511A1914F22C7F850E8047C1537B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkPreUpdate_t9A2C5A970CE74462140F3359EDC0EFE38BBEDE77_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m19DC8E986C54FCA24DB9FF8E7D029BD982024E7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B2_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B2_1 = NULL;
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B1_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B1_1 = NULL;
	{
		// return new PlayerLoopSystem
		// {
		//     type = typeof(NetworkPreUpdate),
		//     updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.PreUpdate)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C ));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (NetworkPreUpdate_t9A2C5A970CE74462140F3359EDC0EFE38BBEDE77_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		(&V_0)->set_type_0(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_il2cpp_TypeInfo_var);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_2 = ((U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = (&V_0);
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = (&V_0);
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_il2cpp_TypeInfo_var);
		U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D * L_4 = ((U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_5 = (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA *)il2cpp_codegen_object_new(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m19DC8E986C54FCA24DB9FF8E7D029BD982024E7E_RuntimeMethod_var), /*hidden argument*/NULL);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_6 = L_5;
		((U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_003b:
	{
		G_B2_1->set_updateDelegate_2(G_B2_0);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_7 = V_0;
		V_1 = L_7;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_8 = V_1;
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.LowLevel.PlayerLoopSystem MLAPI.NetworkUpdateLoop/NetworkUpdate::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkUpdate_CreateLoopSystem_m415195C5A1631D153BC829CA0BF5D1532CB285ED (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdate_t6F4ADFC346A53105D6B78B4C4236D38CD45A8F93_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m2FBCB4EAA155F7A7C8307B4CBD3BB2E677F7657E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B2_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B2_1 = NULL;
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B1_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B1_1 = NULL;
	{
		// return new PlayerLoopSystem
		// {
		//     type = typeof(NetworkUpdate),
		//     updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.Update)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C ));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (NetworkUpdate_t6F4ADFC346A53105D6B78B4C4236D38CD45A8F93_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		(&V_0)->set_type_0(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_il2cpp_TypeInfo_var);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_2 = ((U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = (&V_0);
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = (&V_0);
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_il2cpp_TypeInfo_var);
		U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4 * L_4 = ((U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_5 = (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA *)il2cpp_codegen_object_new(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m2FBCB4EAA155F7A7C8307B4CBD3BB2E677F7657E_RuntimeMethod_var), /*hidden argument*/NULL);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_6 = L_5;
		((U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_003b:
	{
		G_B2_1->set_updateDelegate_2(G_B2_0);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_7 = V_0;
		V_1 = L_7;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_8 = V_1;
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.Messaging.RpcBatcher/ReceiveCallbackType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveCallbackType__ctor_m1C23CE4290FF9121F3C11A030C5853ACA716104A (ReceiveCallbackType_t36FD76FC1120FA943322E0875256A966B182D585 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MLAPI.Messaging.RpcBatcher/ReceiveCallbackType::Invoke(MLAPI.Serialization.NetworkBuffer,MLAPI.Messaging.RpcQueueContainer/QueueItemType,System.UInt64,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveCallbackType_Invoke_mA33A8DF4AA284803A0F2FEB5B63E0AD51EB3176E (ReceiveCallbackType_t36FD76FC1120FA943322E0875256A966B182D585 * __this, NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 * ___messageStream0, int32_t ___messageType1, uint64_t ___clientId2, float ___receiveTime3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 *, int32_t, uint64_t, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___messageStream0, ___messageType1, ___clientId2, ___receiveTime3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 *, int32_t, uint64_t, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___messageStream0, ___messageType1, ___clientId2, ___receiveTime3, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, uint64_t, float >::Invoke(targetMethod, ___messageStream0, ___messageType1, ___clientId2, ___receiveTime3);
					else
						GenericVirtActionInvoker3< int32_t, uint64_t, float >::Invoke(targetMethod, ___messageStream0, ___messageType1, ___clientId2, ___receiveTime3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, uint64_t, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___messageStream0, ___messageType1, ___clientId2, ___receiveTime3);
					else
						VirtActionInvoker3< int32_t, uint64_t, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___messageStream0, ___messageType1, ___clientId2, ___receiveTime3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 *, int32_t, uint64_t, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___messageStream0, ___messageType1, ___clientId2, ___receiveTime3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 *, int32_t, uint64_t, float >::Invoke(targetMethod, targetThis, ___messageStream0, ___messageType1, ___clientId2, ___receiveTime3);
					else
						GenericVirtActionInvoker4< NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 *, int32_t, uint64_t, float >::Invoke(targetMethod, targetThis, ___messageStream0, ___messageType1, ___clientId2, ___receiveTime3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 *, int32_t, uint64_t, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___messageStream0, ___messageType1, ___clientId2, ___receiveTime3);
					else
						VirtActionInvoker4< NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 *, int32_t, uint64_t, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___messageStream0, ___messageType1, ___clientId2, ___receiveTime3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 *, int32_t, uint64_t, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___messageStream0, ___messageType1, ___clientId2, ___receiveTime3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 *, int32_t, uint64_t, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___messageStream0, ___messageType1, ___clientId2, ___receiveTime3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult MLAPI.Messaging.RpcBatcher/ReceiveCallbackType::BeginInvoke(MLAPI.Serialization.NetworkBuffer,MLAPI.Messaging.RpcQueueContainer/QueueItemType,System.UInt64,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReceiveCallbackType_BeginInvoke_m9A1CF7178322D85B16A909563075AA7DA9C2EBE8 (ReceiveCallbackType_t36FD76FC1120FA943322E0875256A966B182D585 * __this, NetworkBuffer_tC1F24EA820EC58C8A0E8AF0D266B79CAA27A4188 * ___messageStream0, int32_t ___messageType1, uint64_t ___clientId2, float ___receiveTime3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueueItemType_t4BE0BF011110FE4F5AC261BB86778CEAA614342F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___messageStream0;
	__d_args[1] = Box(QueueItemType_t4BE0BF011110FE4F5AC261BB86778CEAA614342F_il2cpp_TypeInfo_var, &___messageType1);
	__d_args[2] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___clientId2);
	__d_args[3] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___receiveTime3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void MLAPI.Messaging.RpcBatcher/ReceiveCallbackType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveCallbackType_EndInvoke_mDA483D8CEB4ED1DB30B6C5167EDB008213D1C2AF (ReceiveCallbackType_t36FD76FC1120FA943322E0875256A966B182D585 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.Messaging.RpcBatcher/SendCallbackType::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendCallbackType__ctor_m77A73D47343E240C5C07AD58C717C514EBCC7B3D (SendCallbackType_t574B1C363DFB9AC796AD9AEBE0EA83C710FD45C8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MLAPI.Messaging.RpcBatcher/SendCallbackType::Invoke(System.UInt64,MLAPI.Messaging.RpcBatcher/SendStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendCallbackType_Invoke_mD38320FA44FB687D1DB29C49E78533DFA2D6B9CD (SendCallbackType_t574B1C363DFB9AC796AD9AEBE0EA83C710FD45C8 * __this, uint64_t ___clientId0, SendStream_tA08E935512570E03909E77420EA1A89F758CBEDB * ___messageStream1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (uint64_t, SendStream_tA08E935512570E03909E77420EA1A89F758CBEDB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___clientId0, ___messageStream1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint64_t, SendStream_tA08E935512570E03909E77420EA1A89F758CBEDB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, ___messageStream1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< uint64_t, SendStream_tA08E935512570E03909E77420EA1A89F758CBEDB * >::Invoke(targetMethod, targetThis, ___clientId0, ___messageStream1);
					else
						GenericVirtActionInvoker2< uint64_t, SendStream_tA08E935512570E03909E77420EA1A89F758CBEDB * >::Invoke(targetMethod, targetThis, ___clientId0, ___messageStream1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< uint64_t, SendStream_tA08E935512570E03909E77420EA1A89F758CBEDB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___clientId0, ___messageStream1);
					else
						VirtActionInvoker2< uint64_t, SendStream_tA08E935512570E03909E77420EA1A89F758CBEDB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___clientId0, ___messageStream1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint64_t, SendStream_tA08E935512570E03909E77420EA1A89F758CBEDB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, ___messageStream1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MLAPI.Messaging.RpcBatcher/SendCallbackType::BeginInvoke(System.UInt64,MLAPI.Messaging.RpcBatcher/SendStream,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SendCallbackType_BeginInvoke_mD0EC14F506D4233DB4A0EE5199FD0323485705A9 (SendCallbackType_t574B1C363DFB9AC796AD9AEBE0EA83C710FD45C8 * __this, uint64_t ___clientId0, SendStream_tA08E935512570E03909E77420EA1A89F758CBEDB * ___messageStream1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___clientId0);
	__d_args[1] = ___messageStream1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void MLAPI.Messaging.RpcBatcher/SendCallbackType::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendCallbackType_EndInvoke_mF2A9CD6BF553BE25DE68A79E347E1C4E9710448A (SendCallbackType_t574B1C363DFB9AC796AD9AEBE0EA83C710FD45C8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.Messaging.RpcBatcher/SendStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendStream__ctor_m47030A55DF1D5028BB507A2A9D0381DE0919CBCB (SendStream_tA08E935512570E03909E77420EA1A89F758CBEDB * __this, const RuntimeMethod* method)
{
	{
		// public bool IsEmpty = true;
		__this->set_IsEmpty_3((bool)1);
		// public SendStream()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Buffer = PooledNetworkBuffer.Get();
		PooledNetworkBuffer_tED514246F37E8636BB4EF9FD6CD9F0AA843EE941 * L_0;
		L_0 = PooledNetworkBuffer_Get_mBB34012907A69D355FFDA90D653381E31E690CDF(/*hidden argument*/NULL);
		__this->set_Buffer_1(L_0);
		// Writer = PooledNetworkWriter.Get(Buffer);
		PooledNetworkBuffer_tED514246F37E8636BB4EF9FD6CD9F0AA843EE941 * L_1 = __this->get_Buffer_1();
		PooledNetworkWriter_t4EFF6DA061F1469895F9FDC1B4FD3EAA9DCC5A7A * L_2;
		L_2 = PooledNetworkWriter_Get_m3B65761E11C9BD7A96EF57F8DA5CE2E26DF09620(L_1, /*hidden argument*/NULL);
		__this->set_Writer_2(L_2);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnClientLoadedSceneDelegate_t2E0C5BE468E9059E84CD5C733878D8F16C18E15E (OnClientLoadedSceneDelegate_t2E0C5BE468E9059E84CD5C733878D8F16C18E15E * __this, uint64_t ___clientId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___clientId0);

}
// System.Void MLAPI.SceneManagement.SceneSwitchProgress/OnClientLoadedSceneDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClientLoadedSceneDelegate__ctor_m62FB24A0021731F8F6A9DECC7227ECD02AB2F66E (OnClientLoadedSceneDelegate_t2E0C5BE468E9059E84CD5C733878D8F16C18E15E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MLAPI.SceneManagement.SceneSwitchProgress/OnClientLoadedSceneDelegate::Invoke(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClientLoadedSceneDelegate_Invoke_mC60A342CC24E9926721D8350B07B6515C16CA302 (OnClientLoadedSceneDelegate_t2E0C5BE468E9059E84CD5C733878D8F16C18E15E * __this, uint64_t ___clientId0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___clientId0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< uint64_t >::Invoke(targetMethod, targetThis, ___clientId0);
					else
						GenericVirtActionInvoker1< uint64_t >::Invoke(targetMethod, targetThis, ___clientId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___clientId0);
					else
						VirtActionInvoker1< uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___clientId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MLAPI.SceneManagement.SceneSwitchProgress/OnClientLoadedSceneDelegate::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnClientLoadedSceneDelegate_BeginInvoke_m0D3CA98FE29DE8F09C423FD20F355393634CBD79 (OnClientLoadedSceneDelegate_t2E0C5BE468E9059E84CD5C733878D8F16C18E15E * __this, uint64_t ___clientId0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___clientId0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void MLAPI.SceneManagement.SceneSwitchProgress/OnClientLoadedSceneDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClientLoadedSceneDelegate_EndInvoke_mA07C103FA957B2B861EB87CC6A198E2D1D36070D (OnClientLoadedSceneDelegate_t2E0C5BE468E9059E84CD5C733878D8F16C18E15E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCompletedDelegate_t313D7E659CAF907C911009A8FC69E9A0226431ED (OnCompletedDelegate_t313D7E659CAF907C911009A8FC69E9A0226431ED * __this, bool ___timedOut0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___timedOut0));

}
// System.Void MLAPI.SceneManagement.SceneSwitchProgress/OnCompletedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCompletedDelegate__ctor_m1378E615DB2A4A2BD1980222813965CB0AF5D87F (OnCompletedDelegate_t313D7E659CAF907C911009A8FC69E9A0226431ED * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MLAPI.SceneManagement.SceneSwitchProgress/OnCompletedDelegate::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCompletedDelegate_Invoke_mE9485896EADAC4A4AD81C5A60CBB7335B4DEF146 (OnCompletedDelegate_t313D7E659CAF907C911009A8FC69E9A0226431ED * __this, bool ___timedOut0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___timedOut0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___timedOut0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___timedOut0);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___timedOut0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___timedOut0);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___timedOut0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___timedOut0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MLAPI.SceneManagement.SceneSwitchProgress/OnCompletedDelegate::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCompletedDelegate_BeginInvoke_m4CBEC07F68ADC47D0BC4DE3D721E3D49425EBDA2 (OnCompletedDelegate_t313D7E659CAF907C911009A8FC69E9A0226431ED * __this, bool ___timedOut0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___timedOut0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void MLAPI.SceneManagement.SceneSwitchProgress/OnCompletedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCompletedDelegate_EndInvoke_m98F25E6B2D289AC69647B4795D9F83D36A6F5A68 (OnCompletedDelegate_t313D7E659CAF907C911009A8FC69E9A0226431ED * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.Serialization.SerializationManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2069C2BDA84B0CA59FD69F6C8816013748DA1994 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t78BCF87DC09FAD35C57BD88E50B83287D29BC20E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t78BCF87DC09FAD35C57BD88E50B83287D29BC20E * L_0 = (U3CU3Ec_t78BCF87DC09FAD35C57BD88E50B83287D29BC20E *)il2cpp_codegen_object_new(U3CU3Ec_t78BCF87DC09FAD35C57BD88E50B83287D29BC20E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m321D6CF87BA926309D238658302530D3C789EE8B(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t78BCF87DC09FAD35C57BD88E50B83287D29BC20E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t78BCF87DC09FAD35C57BD88E50B83287D29BC20E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MLAPI.Serialization.SerializationManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m321D6CF87BA926309D238658302530D3C789EE8B (U3CU3Ec_t78BCF87DC09FAD35C57BD88E50B83287D29BC20E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MLAPI.Serialization.SerializationManager/<>c::<GetFieldsForType>b__11_0(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetFieldsForTypeU3Eb__11_0_m9D3F8A4B80037ED8A7A3471EE5FEF528CA6DF71E (U3CU3Ec_t78BCF87DC09FAD35C57BD88E50B83287D29BC20E * __this, FieldInfo_t * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationManager_t9E9470355079E8A6C96AC6FD6508AD21F30A88E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		// .Where(x => (x.IsPublic || x.GetCustomAttributes(typeof(SerializeField), true).Length > 0) && IsTypeSupported(x.FieldType))
		FieldInfo_t * L_0 = ___x0;
		NullCheck(L_0);
		bool L_1;
		L_1 = FieldInfo_get_IsPublic_mA7FB5E40024835CA07195F3E1BFCBD41E9E013BD(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		FieldInfo_t * L_2 = ___x0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5;
		L_5 = VirtFuncInvoker2< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Type_t *, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_2, L_4, (bool)1);
		NullCheck(L_5);
		if (!(((RuntimeArray*)L_5)->max_length))
		{
			goto IL_0029;
		}
	}

IL_001c:
	{
		FieldInfo_t * L_6 = ___x0;
		NullCheck(L_6);
		Type_t * L_7;
		L_7 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(SerializationManager_t9E9470355079E8A6C96AC6FD6508AD21F30A88E2_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = SerializationManager_IsTypeSupported_m848FB4F7B09CC1010D31ADE1F70EE644B8E63801(L_7, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_8));
		goto IL_002a;
	}

IL_0029:
	{
		G_B4_0 = 0;
	}

IL_002a:
	{
		return (bool)G_B4_0;
	}
}
// System.String MLAPI.Serialization.SerializationManager/<>c::<GetFieldsForType>b__11_1(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetFieldsForTypeU3Eb__11_1_m0BA6A9502CFB13475B1B3223FB2DEACC0126523C (U3CU3Ec_t78BCF87DC09FAD35C57BD88E50B83287D29BC20E * __this, FieldInfo_t * ___x0, const RuntimeMethod* method)
{
	{
		// .OrderBy(x => x.Name, StringComparer.Ordinal).ToArray();
		FieldInfo_t * L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.Serialization.SerializationManager/BoxedDeserializationDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxedDeserializationDelegate__ctor_m90F9F9D6C18F71A99AE86CCFFAC71A1F7A4FA518 (BoxedDeserializationDelegate_tBB4F64607DE5A2C9C4043F7CDE06C620449F3E29 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object MLAPI.Serialization.SerializationManager/BoxedDeserializationDelegate::Invoke(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * BoxedDeserializationDelegate_Invoke_mB3E7FD426A57C3A36E7CE29298B3D8B158F0E307 (BoxedDeserializationDelegate_tBB4F64607DE5A2C9C4043F7CDE06C620449F3E29 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___stream0, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___stream0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___stream0);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___stream0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___stream0);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___stream0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___stream0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(targetMethod, targetThis, ___stream0);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(targetMethod, targetThis, ___stream0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___stream0);
					else
						result = VirtFuncInvoker1< RuntimeObject *, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___stream0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___stream0, targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___stream0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult MLAPI.Serialization.SerializationManager/BoxedDeserializationDelegate::BeginInvoke(System.IO.Stream,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoxedDeserializationDelegate_BeginInvoke_m848023115A71F8A707E004F1C8BC938E1425DE10 (BoxedDeserializationDelegate_tBB4F64607DE5A2C9C4043F7CDE06C620449F3E29 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___stream0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Object MLAPI.Serialization.SerializationManager/BoxedDeserializationDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * BoxedDeserializationDelegate_EndInvoke_mE58B93F7EA9907ECBCAA571502CB4618A2521C5D (BoxedDeserializationDelegate_tBB4F64607DE5A2C9C4043F7CDE06C620449F3E29 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.Serialization.SerializationManager/BoxedSerializationDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxedSerializationDelegate__ctor_mC952AAB2E7F611E36D40BACD1B3710DFEC95E077 (BoxedSerializationDelegate_t63673361FB0667EAA1243BD22C4B2EBC31A35A1B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MLAPI.Serialization.SerializationManager/BoxedSerializationDelegate::Invoke(System.IO.Stream,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxedSerializationDelegate_Invoke_m7056AB52BA5FE2021BCBE1ECD56708C314D747F6 (BoxedSerializationDelegate_t63673361FB0667EAA1243BD22C4B2EBC31A35A1B * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, RuntimeObject * ___instance1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___stream0, ___instance1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___stream0, ___instance1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___stream0, ___instance1);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___stream0, ___instance1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___stream0, ___instance1);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___stream0, ___instance1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___stream0, ___instance1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___stream0, ___instance1);
					else
						GenericVirtActionInvoker2< Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___stream0, ___instance1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___stream0, ___instance1);
					else
						VirtActionInvoker2< Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___stream0, ___instance1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___stream0, ___instance1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___stream0, ___instance1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult MLAPI.Serialization.SerializationManager/BoxedSerializationDelegate::BeginInvoke(System.IO.Stream,System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoxedSerializationDelegate_BeginInvoke_m4284341204061FE5091AC08EB329ED8071C3FBA2 (BoxedSerializationDelegate_t63673361FB0667EAA1243BD22C4B2EBC31A35A1B * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, RuntimeObject * ___instance1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___stream0;
	__d_args[1] = ___instance1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void MLAPI.Serialization.SerializationManager/BoxedSerializationDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxedSerializationDelegate_EndInvoke_m0C830C8183601C14F239F834B9DFDE12811C9289 (BoxedSerializationDelegate_t63673361FB0667EAA1243BD22C4B2EBC31A35A1B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.NetworkUpdateLoop/NetworkEarlyUpdate/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4CEB37A34F4C96630D86DF36BA44A1E24B296327 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800 * L_0 = (U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800 *)il2cpp_codegen_object_new(U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2B13C1B74F4E81103D5F4BCB9D19E5AFAD305DB5(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkEarlyUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2B13C1B74F4E81103D5F4BCB9D19E5AFAD305DB5 (U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkEarlyUpdate/<>c::<CreateLoopSystem>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m8D260FCA85760FCB3A38EFBA700E9F6F3AC8C1EC (U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.EarlyUpdate)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		NetworkUpdateLoop_RunNetworkUpdateStage_mFB91EA24D90F2BB8D821F13842B3D32E4E7F38C6(2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.NetworkUpdateLoop/NetworkFixedUpdate/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m17B131EF85682646A63DD9006D482E89ED8657A8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8 * L_0 = (U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8 *)il2cpp_codegen_object_new(U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE135C8BF42D12E4C497D880418869652E8D66BA9(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkFixedUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE135C8BF42D12E4C497D880418869652E8D66BA9 (U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkFixedUpdate/<>c::<CreateLoopSystem>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m5EF61EC582F69FC74A9557438638E98C67F7F72C (U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.FixedUpdate)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		NetworkUpdateLoop_RunNetworkUpdateStage_mFB91EA24D90F2BB8D821F13842B3D32E4E7F38C6(3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.NetworkUpdateLoop/NetworkInitialization/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m07A28E827E8EB81B68A89B430AAA1B4A83037B5C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56 * L_0 = (U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56 *)il2cpp_codegen_object_new(U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE9A245CFBAE70653A9AAEBAC0931087A5B6AA077(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkInitialization/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE9A245CFBAE70653A9AAEBAC0931087A5B6AA077 (U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkInitialization/<>c::<CreateLoopSystem>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m3DA848EAB6520DE82FA6E676B740A680074AE2EB (U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.Initialization)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		NetworkUpdateLoop_RunNetworkUpdateStage_mFB91EA24D90F2BB8D821F13842B3D32E4E7F38C6(1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.NetworkUpdateLoop/NetworkPostLateUpdate/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB4FDF9004596B94C7BFF233EB6A02ADDBF0D6060 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED * L_0 = (U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED *)il2cpp_codegen_object_new(U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4892922627A2134C6E433C5FB213845895DD6EFC(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkPostLateUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4892922627A2134C6E433C5FB213845895DD6EFC (U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkPostLateUpdate/<>c::<CreateLoopSystem>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m6AAF43D7F3275579BC25E687CD358B880AA4D85E (U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.PostLateUpdate)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		NetworkUpdateLoop_RunNetworkUpdateStage_mFB91EA24D90F2BB8D821F13842B3D32E4E7F38C6(6, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.NetworkUpdateLoop/NetworkPreLateUpdate/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m50D14DBD525BFB0C0102F1687D047CD062DB0675 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16 * L_0 = (U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16 *)il2cpp_codegen_object_new(U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5F608C89C8980413AE77A02C7FC3307601C186ED(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkPreLateUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5F608C89C8980413AE77A02C7FC3307601C186ED (U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkPreLateUpdate/<>c::<CreateLoopSystem>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_mAFE958D5B72B06F09015E416D49CB46E25420131 (U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.PreLateUpdate)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		NetworkUpdateLoop_RunNetworkUpdateStage_mFB91EA24D90F2BB8D821F13842B3D32E4E7F38C6(5, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.NetworkUpdateLoop/NetworkPreUpdate/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDE94D24EF1717850B1279FE435A9F92A18D5885F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D * L_0 = (U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D *)il2cpp_codegen_object_new(U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD6D20CD4786B764C1EE32107C65DB7B0DD57C837(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkPreUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD6D20CD4786B764C1EE32107C65DB7B0DD57C837 (U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkPreUpdate/<>c::<CreateLoopSystem>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m19DC8E986C54FCA24DB9FF8E7D029BD982024E7E (U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.PreUpdate)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		NetworkUpdateLoop_RunNetworkUpdateStage_mFB91EA24D90F2BB8D821F13842B3D32E4E7F38C6(4, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MLAPI.NetworkUpdateLoop/NetworkUpdate/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD4690B4D48B478B4A95BE7C53E0C1FCAA6E89690 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4 * L_0 = (U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4 *)il2cpp_codegen_object_new(U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3B5EFFE96354374A0E1F7AC8124E34EEA35620FA(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3B5EFFE96354374A0E1F7AC8124E34EEA35620FA (U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkUpdate/<>c::<CreateLoopSystem>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m2FBCB4EAA155F7A7C8307B4CBD3BB2E677F7657E (U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.Update)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		NetworkUpdateLoop_RunNetworkUpdateStage_mFB91EA24D90F2BB8D821F13842B3D32E4E7F38C6(0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A* SocketTasks_get_Tasks_mF087E77B35CBE627B72634D6FECBFEA8F1306AE8_inline (SocketTasks_t8810E8BAAF3EF3E4939FF3D126AF957D770D7432 * __this, const RuntimeMethod* method)
{
	{
		// public SocketTask[] Tasks { get; set; }
		SocketTaskU5BU5D_tA1A00C7A063ED41E68FE4BE7DB28CE2CD515C43A* L_0 = __this->get_U3CTasksU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SocketTask_get_IsDone_m81A9EA33FE518DF4F9EA0A9780C555662823BC47_inline (SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsDone { get; set; }
		bool L_0 = __this->get_U3CIsDoneU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SocketTask_get_Success_m3BFB888B17C75D627C70916162D91538A50D7DE7_inline (SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * __this, const RuntimeMethod* method)
{
	{
		// public bool Success { get; set; }
		bool L_0 = __this->get_U3CSuccessU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * NetworkManager_get_Singleton_m4A3EAA6822FD326519757EF5899202B2C5884B13_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NetworkManager Singleton { get; private set; }
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_il2cpp_TypeInfo_var);
		NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * L_0 = ((NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE_il2cpp_TypeInfo_var))->get_U3CSingletonU3Ek__BackingField_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsServer_m20570D2A773CF3C919CF2EFA520C9DAFB16DF51A_inline (NetworkManager_t88E232D6A06EB70FAA858A10A40E3591C6D920FE * __this, const RuntimeMethod* method)
{
	{
		// public bool IsServer { get; internal set; }
		bool L_0 = __this->get_U3CIsServerU3Ek__BackingField_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketTask_set_Message_m545A20402C966CD20271A79857B1DEAD86428A3B_inline (SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Message { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketTask_set_SocketError_mF76003AEB28E4FEED8B7C59446A981B03ED8D062_inline (SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public SocketError SocketError { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CSocketErrorU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketTask_set_State_mFF4A85A2BCEBEA6B153F0F6D578B8DC7387D5E46_inline (SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public object State { get; set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketTask_set_Success_mAC4F7C19AEC4AF1FAD8B2419E4CC7BC336B8CF99_inline (SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Success { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CSuccessU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketTask_set_TransportCode_m343E5732D03E7AA59805CF44E2222820F6881518_inline (SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int TransportCode { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CTransportCodeU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketTask_set_TransportException_m2A47250811FB888D0E797D9D49029F8F0F3AECFB_inline (SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * __this, Exception_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Exception TransportException { get; set; }
		Exception_t * L_0 = ___value0;
		__this->set_U3CTransportExceptionU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketTask_set_IsDone_m15BAB4BD42E4BD25E31C50B5CD987DA6677D502B_inline (SocketTask_t4E43F347B180BBAE9BFBEF56F8D6D52077AB6322 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsDone { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsDoneU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RelayTransport_set_Enabled_m151B14939BE0D33A3AC5EF026FFBBA69938C59E8_inline (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool Enabled { get; set; } = true;
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var);
		((RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_StaticFields*)il2cpp_codegen_static_fields_for(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var))->set_U3CEnabledU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RelayTransport_set_RelayAddress_m934751BBF6697AE0B983635E7034E23DF55316C5_inline (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string RelayAddress { get; set; } = "127.0.0.1";
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var);
		((RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_StaticFields*)il2cpp_codegen_static_fields_for(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var))->set_U3CRelayAddressU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RelayTransport_set_RelayPort_m45906FDC2C2DB42A7633C3DED68E6F1B5082AD91_inline (uint16_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ushort RelayPort { get; set; } = 8888;
		uint16_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var);
		((RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_StaticFields*)il2cpp_codegen_static_fields_for(RelayTransport_t5C0D2C8BA73D3BA1A60B1B55143F9812A1F3C886_il2cpp_TypeInfo_var))->set_U3CRelayPortU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t  SceneSwitchProgress_get_Guid_mEAE9C8740076E6C390DC413C9633B682804BF7F5_inline (SceneSwitchProgress_tAAE76AD0A7D3D42A7D0EB2EC5799E42FAFC178BD * __this, const RuntimeMethod* method)
{
	{
		// internal Guid Guid { get; } = Guid.NewGuid();
		Guid_t  L_0 = __this->get_U3CGuidU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__offset_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__count_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)__this->get__array_0();
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0;
	}
}
