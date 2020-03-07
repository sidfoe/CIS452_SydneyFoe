#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Client
struct Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E;
// Command
struct Command_t2A94F845B2B38F2D558929C92F6DA295E0847E31;
// Command[]
struct CommandU5BU5D_t6F70FD80C38DB21A09E6C1EBE204DBC17A206497;
// Invoker
struct Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87;
// PlaceOCommand
struct PlaceOCommand_tBF0C61AB754C86BD84B285887317AB5DEFDCE219;
// PlaceOReciever
struct PlaceOReciever_t909E2DA3D90D8017020AD29F17132CE34802DE70;
// PlaceXCommand
struct PlaceXCommand_t3CE680677A83483C6BEC0744B47FF7E5A85F61A0;
// PlaceXReciever
struct PlaceXReciever_tF774BC4B3B0A04EACA1CF1F1BC219C005319224D;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Command>[]
struct EntryU5BU5D_t76817337E599A04684DBD372E7A10837FF33E61B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Command>
struct KeyCollection_tA0AA8547D7DA45DC50F1A59DD290D943B9262753;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Command>
struct ValueCollection_t28C97C8EE04EE415E907AB0C9DD661D81914173F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,Command>
struct Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t98E943F59530FD83B2F4B730F9C62B6A2F204176;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_t3C875794A24E26E7DE2FDFBC9CE1D5CF6813519B;
// System.Collections.Generic.Stack`1<Command>
struct Stack_1_tE397AD00373A26A804700671E4995212675AD2D8;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t4A8378BFCCA917C44CD055D0B4DB470EB7FEC275;
// System.Collections.Generic.Stack`1<UnityEngine.GameObject>
struct Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t80059259E2DC99461F7DF9B43BA93054613AE703;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;

IL2CPP_EXTERN_C RuntimeClass* Command_t2A94F845B2B38F2D558929C92F6DA295E0847E31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaceOCommand_tBF0C61AB754C86BD84B285887317AB5DEFDCE219_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaceXCommand_t3CE680677A83483C6BEC0744B47FF7E5A85F61A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tE397AD00373A26A804700671E4995212675AD2D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralA063BB6461D00487F6FCE086797D56B0AF080CC1;
IL2CPP_EXTERN_C String_t* _stringLiteralEBEEF1CC0D5D301FB3E1752DB879F01703FFED23;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m02570D2215371A6F5A4DA35A540AB50B0EA8D0F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m5CEC28C7CF2C9AC55FECA993BAB154C2E0EF1308_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8126BCE0EBFCFA8925DC80080D6E0073E8534CDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m085021C5F07D9907053205AF95134AAEB29CD5A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mFCD2DB448EE154EDFE8F3C19A33C1DDA67022D5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m23E36317E92FA9C7364B576A5E5972CC912667C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mA2FC8CA27BD67B8D05B1B9C471A9664FE515DBF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_mA0059D9135673A0ED06C327BD994D35A8E5B9DC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_mD6B958FDDC765351DE03BFC7923048EA19D82C32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m1F927D32B2F90B3A1530B1936CA6FEBF6410BFF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t Client_PlaceO_mD1971B398234FFB67E7BAD0F060328C5AC9A024A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client_PlaceX_m929BC217404C0DABE2ADFB177B56E24735EC9210_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client_Start_mE6BA86C48F3D3C40438044A472C3565A1A6A85D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client__ctor_m3ECF301B53E250235D807DA842698ADC0B7AAE4E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Invoker_AddCommand_m783A1B98FE7A3539EAA06FBAEB7867004B069051_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Invoker_CallCommand_mE8550ACC7214BD24FE99AA25C44AAE6804FA0BD9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Invoker_UndoIt_mA9110D0AAF52AF42383F96C4F9C138B3F953928E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Invoker__ctor_m5D0F4099A750EFFE8F21C184C039FEACF70952F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlaceOCommand_Execute_m75BC8E4478C6F889C7E42CB3364C55BD57E3F88B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlaceOCommand_Undo_mCD5B0873982EBF6D5FFA5D3373AE42EFCA9E784D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlaceOCommand__ctor_mECEE9C5875C82699C3F0194780383483D5F95901_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlaceOReciever_Action_mB9A8F8ED42477DB09E71AD846889A9BD6B912D8F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlaceOReciever_UndoAction_m6736AE8B370C406FB662853E6EDE7C38B775C3C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlaceXCommand_Execute_mE511F7E1978105F31C0E05C4D9E874A1045B47F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlaceXCommand_Undo_m9982F5EE48E15E4756721FF012EC6979B85B2B1D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlaceXCommand__ctor_mE8CB6137CA4C6876D792FBBA3F64BD4472247C51_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlaceXReciever_Action_mA8ACD17BD5EBC3D651CFCAA772FDE5D49ECC21DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlaceXReciever_UndoAction_m5418D690411FB86B2C6FE8787284B71498665F83_MetadataUsageId;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object


// Invoker
struct  Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Command> Invoker::commands
	Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74 * ___commands_0;
	// System.Collections.Generic.Stack`1<Command> Invoker::commandHistory
	Stack_1_tE397AD00373A26A804700671E4995212675AD2D8 * ___commandHistory_1;

public:
	inline static int32_t get_offset_of_commands_0() { return static_cast<int32_t>(offsetof(Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87, ___commands_0)); }
	inline Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74 * get_commands_0() const { return ___commands_0; }
	inline Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74 ** get_address_of_commands_0() { return &___commands_0; }
	inline void set_commands_0(Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74 * value)
	{
		___commands_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___commands_0), (void*)value);
	}

	inline static int32_t get_offset_of_commandHistory_1() { return static_cast<int32_t>(offsetof(Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87, ___commandHistory_1)); }
	inline Stack_1_tE397AD00373A26A804700671E4995212675AD2D8 * get_commandHistory_1() const { return ___commandHistory_1; }
	inline Stack_1_tE397AD00373A26A804700671E4995212675AD2D8 ** get_address_of_commandHistory_1() { return &___commandHistory_1; }
	inline void set_commandHistory_1(Stack_1_tE397AD00373A26A804700671E4995212675AD2D8 * value)
	{
		___commandHistory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___commandHistory_1), (void*)value);
	}
};


// PlaceOCommand
struct  PlaceOCommand_tBF0C61AB754C86BD84B285887317AB5DEFDCE219  : public RuntimeObject
{
public:
	// PlaceOReciever PlaceOCommand::r
	PlaceOReciever_t909E2DA3D90D8017020AD29F17132CE34802DE70 * ___r_0;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> PlaceOCommand::items
	Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * ___items_1;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> PlaceOCommand::buttons
	Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * ___buttons_2;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(PlaceOCommand_tBF0C61AB754C86BD84B285887317AB5DEFDCE219, ___r_0)); }
	inline PlaceOReciever_t909E2DA3D90D8017020AD29F17132CE34802DE70 * get_r_0() const { return ___r_0; }
	inline PlaceOReciever_t909E2DA3D90D8017020AD29F17132CE34802DE70 ** get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(PlaceOReciever_t909E2DA3D90D8017020AD29F17132CE34802DE70 * value)
	{
		___r_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___r_0), (void*)value);
	}

	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(PlaceOCommand_tBF0C61AB754C86BD84B285887317AB5DEFDCE219, ___items_1)); }
	inline Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * get_items_1() const { return ___items_1; }
	inline Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 ** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_1), (void*)value);
	}

	inline static int32_t get_offset_of_buttons_2() { return static_cast<int32_t>(offsetof(PlaceOCommand_tBF0C61AB754C86BD84B285887317AB5DEFDCE219, ___buttons_2)); }
	inline Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * get_buttons_2() const { return ___buttons_2; }
	inline Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 ** get_address_of_buttons_2() { return &___buttons_2; }
	inline void set_buttons_2(Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * value)
	{
		___buttons_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttons_2), (void*)value);
	}
};


// PlaceXCommand
struct  PlaceXCommand_t3CE680677A83483C6BEC0744B47FF7E5A85F61A0  : public RuntimeObject
{
public:
	// PlaceXReciever PlaceXCommand::r
	PlaceXReciever_tF774BC4B3B0A04EACA1CF1F1BC219C005319224D * ___r_0;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> PlaceXCommand::items
	Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * ___items_1;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> PlaceXCommand::buttons
	Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * ___buttons_2;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(PlaceXCommand_t3CE680677A83483C6BEC0744B47FF7E5A85F61A0, ___r_0)); }
	inline PlaceXReciever_tF774BC4B3B0A04EACA1CF1F1BC219C005319224D * get_r_0() const { return ___r_0; }
	inline PlaceXReciever_tF774BC4B3B0A04EACA1CF1F1BC219C005319224D ** get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(PlaceXReciever_tF774BC4B3B0A04EACA1CF1F1BC219C005319224D * value)
	{
		___r_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___r_0), (void*)value);
	}

	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(PlaceXCommand_t3CE680677A83483C6BEC0744B47FF7E5A85F61A0, ___items_1)); }
	inline Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * get_items_1() const { return ___items_1; }
	inline Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 ** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_1), (void*)value);
	}

	inline static int32_t get_offset_of_buttons_2() { return static_cast<int32_t>(offsetof(PlaceXCommand_t3CE680677A83483C6BEC0744B47FF7E5A85F61A0, ___buttons_2)); }
	inline Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * get_buttons_2() const { return ___buttons_2; }
	inline Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 ** get_address_of_buttons_2() { return &___buttons_2; }
	inline void set_buttons_2(Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * value)
	{
		___buttons_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttons_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.String,Command>
struct  Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t76817337E599A04684DBD372E7A10837FF33E61B* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tA0AA8547D7DA45DC50F1A59DD290D943B9262753 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t28C97C8EE04EE415E907AB0C9DD661D81914173F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74, ___entries_1)); }
	inline EntryU5BU5D_t76817337E599A04684DBD372E7A10837FF33E61B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t76817337E599A04684DBD372E7A10837FF33E61B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t76817337E599A04684DBD372E7A10837FF33E61B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74, ___keys_7)); }
	inline KeyCollection_tA0AA8547D7DA45DC50F1A59DD290D943B9262753 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA0AA8547D7DA45DC50F1A59DD290D943B9262753 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA0AA8547D7DA45DC50F1A59DD290D943B9262753 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74, ___values_8)); }
	inline ValueCollection_t28C97C8EE04EE415E907AB0C9DD661D81914173F * get_values_8() const { return ___values_8; }
	inline ValueCollection_t28C97C8EE04EE415E907AB0C9DD661D81914173F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t28C97C8EE04EE415E907AB0C9DD661D81914173F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<Command>
struct  Stack_1_tE397AD00373A26A804700671E4995212675AD2D8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	CommandU5BU5D_t6F70FD80C38DB21A09E6C1EBE204DBC17A206497* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_tE397AD00373A26A804700671E4995212675AD2D8, ____array_0)); }
	inline CommandU5BU5D_t6F70FD80C38DB21A09E6C1EBE204DBC17A206497* get__array_0() const { return ____array_0; }
	inline CommandU5BU5D_t6F70FD80C38DB21A09E6C1EBE204DBC17A206497** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(CommandU5BU5D_t6F70FD80C38DB21A09E6C1EBE204DBC17A206497* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_tE397AD00373A26A804700671E4995212675AD2D8, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_tE397AD00373A26A804700671E4995212675AD2D8, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_tE397AD00373A26A804700671E4995212675AD2D8, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Object>
struct  Stack_1_t4A8378BFCCA917C44CD055D0B4DB470EB7FEC275  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t4A8378BFCCA917C44CD055D0B4DB470EB7FEC275, ____array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t4A8378BFCCA917C44CD055D0B4DB470EB7FEC275, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t4A8378BFCCA917C44CD055D0B4DB470EB7FEC275, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t4A8378BFCCA917C44CD055D0B4DB470EB7FEC275, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<UnityEngine.GameObject>
struct  Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563, ____array_0)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get__array_0() const { return ____array_0; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
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


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Client
struct  Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Invoker Client::voker
	Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * ___voker_4;
	// System.Boolean Client::isXPlacing
	bool ___isXPlacing_5;
	// UnityEngine.GameObject Client::xButtons
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___xButtons_6;
	// UnityEngine.GameObject Client::oButtons
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___oButtons_7;
	// PlaceOReciever Client::oReciever
	PlaceOReciever_t909E2DA3D90D8017020AD29F17132CE34802DE70 * ___oReciever_8;
	// PlaceXReciever Client::xReciever
	PlaceXReciever_tF774BC4B3B0A04EACA1CF1F1BC219C005319224D * ___xReciever_9;

public:
	inline static int32_t get_offset_of_voker_4() { return static_cast<int32_t>(offsetof(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E, ___voker_4)); }
	inline Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * get_voker_4() const { return ___voker_4; }
	inline Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 ** get_address_of_voker_4() { return &___voker_4; }
	inline void set_voker_4(Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * value)
	{
		___voker_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voker_4), (void*)value);
	}

	inline static int32_t get_offset_of_isXPlacing_5() { return static_cast<int32_t>(offsetof(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E, ___isXPlacing_5)); }
	inline bool get_isXPlacing_5() const { return ___isXPlacing_5; }
	inline bool* get_address_of_isXPlacing_5() { return &___isXPlacing_5; }
	inline void set_isXPlacing_5(bool value)
	{
		___isXPlacing_5 = value;
	}

	inline static int32_t get_offset_of_xButtons_6() { return static_cast<int32_t>(offsetof(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E, ___xButtons_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_xButtons_6() const { return ___xButtons_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_xButtons_6() { return &___xButtons_6; }
	inline void set_xButtons_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___xButtons_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xButtons_6), (void*)value);
	}

	inline static int32_t get_offset_of_oButtons_7() { return static_cast<int32_t>(offsetof(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E, ___oButtons_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_oButtons_7() const { return ___oButtons_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_oButtons_7() { return &___oButtons_7; }
	inline void set_oButtons_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___oButtons_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___oButtons_7), (void*)value);
	}

	inline static int32_t get_offset_of_oReciever_8() { return static_cast<int32_t>(offsetof(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E, ___oReciever_8)); }
	inline PlaceOReciever_t909E2DA3D90D8017020AD29F17132CE34802DE70 * get_oReciever_8() const { return ___oReciever_8; }
	inline PlaceOReciever_t909E2DA3D90D8017020AD29F17132CE34802DE70 ** get_address_of_oReciever_8() { return &___oReciever_8; }
	inline void set_oReciever_8(PlaceOReciever_t909E2DA3D90D8017020AD29F17132CE34802DE70 * value)
	{
		___oReciever_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___oReciever_8), (void*)value);
	}

	inline static int32_t get_offset_of_xReciever_9() { return static_cast<int32_t>(offsetof(Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E, ___xReciever_9)); }
	inline PlaceXReciever_tF774BC4B3B0A04EACA1CF1F1BC219C005319224D * get_xReciever_9() const { return ___xReciever_9; }
	inline PlaceXReciever_tF774BC4B3B0A04EACA1CF1F1BC219C005319224D ** get_address_of_xReciever_9() { return &___xReciever_9; }
	inline void set_xReciever_9(PlaceXReciever_tF774BC4B3B0A04EACA1CF1F1BC219C005319224D * value)
	{
		___xReciever_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xReciever_9), (void*)value);
	}
};


// PlaceOReciever
struct  PlaceOReciever_t909E2DA3D90D8017020AD29F17132CE34802DE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject PlaceOReciever::fab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___fab_4;

public:
	inline static int32_t get_offset_of_fab_4() { return static_cast<int32_t>(offsetof(PlaceOReciever_t909E2DA3D90D8017020AD29F17132CE34802DE70, ___fab_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_fab_4() const { return ___fab_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_fab_4() { return &___fab_4; }
	inline void set_fab_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___fab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fab_4), (void*)value);
	}
};


// PlaceXReciever
struct  PlaceXReciever_tF774BC4B3B0A04EACA1CF1F1BC219C005319224D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject PlaceXReciever::fab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___fab_4;

public:
	inline static int32_t get_offset_of_fab_4() { return static_cast<int32_t>(offsetof(PlaceXReciever_tF774BC4B3B0A04EACA1CF1F1BC219C005319224D, ___fab_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_fab_4() const { return ___fab_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_fab_4() { return &___fab_4; }
	inline void set_fab_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___fab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fab_4), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t98E943F59530FD83B2F4B730F9C62B6A2F204176 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SystemInputModules_4)); }
	inline List_1_t98E943F59530FD83B2F4B730F9C62B6A2F204176 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t98E943F59530FD83B2F4B730F9C62B6A2F204176 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t98E943F59530FD83B2F4B730F9C62B6A2F204176 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_FirstSelected_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentSelected_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DummyData_13)); }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_t3C875794A24E26E7DE2FDFBC9CE1D5CF6813519B * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t80059259E2DC99461F7DF9B43BA93054613AE703 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___m_EventSystems_6)); }
	inline List_1_t3C875794A24E26E7DE2FDFBC9CE1D5CF6813519B * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_t3C875794A24E26E7DE2FDFBC9CE1D5CF6813519B ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_t3C875794A24E26E7DE2FDFBC9CE1D5CF6813519B * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t80059259E2DC99461F7DF9B43BA93054613AE703 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t80059259E2DC99461F7DF9B43BA93054613AE703 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t80059259E2DC99461F7DF9B43BA93054613AE703 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m07A8AE55BA78A57D5BDC0271ED6AA646D69AA785_gshared (Stack_1_t4A8378BFCCA917C44CD055D0B4DB470EB7FEC275 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m29021EF3A9D21E7656CB8FA54AE535CBAF99E904_gshared (Stack_1_t4A8378BFCCA917C44CD055D0B4DB470EB7FEC275 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m692E28BB74B2613597E407DDCCBA926306D8086A_gshared_inline (Stack_1_t4A8378BFCCA917C44CD055D0B4DB470EB7FEC275 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_m490CECEA5A2911DA732CD4D7612D04BD18E1DF12_gshared (Stack_1_t4A8378BFCCA917C44CD055D0B4DB470EB7FEC275 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m352D452C728667C9C76C942525CDE26444568ECD_gshared (RuntimeObject * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method);

// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void PlaceOCommand::.ctor(PlaceOReciever)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOCommand__ctor_mECEE9C5875C82699C3F0194780383483D5F95901 (PlaceOCommand_tBF0C61AB754C86BD84B285887317AB5DEFDCE219 * __this, PlaceOReciever_t909E2DA3D90D8017020AD29F17132CE34802DE70 * ___r0, const RuntimeMethod* method);
// System.Void PlaceXCommand::.ctor(PlaceXReciever)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceXCommand__ctor_mE8CB6137CA4C6876D792FBBA3F64BD4472247C51 (PlaceXCommand_t3CE680677A83483C6BEC0744B47FF7E5A85F61A0 * __this, PlaceXReciever_tF774BC4B3B0A04EACA1CF1F1BC219C005319224D * ___r0, const RuntimeMethod* method);
// System.Void Invoker::AddCommand(System.String,Command)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Invoker_AddCommand_m783A1B98FE7A3539EAA06FBAEB7867004B069051 (Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * __this, String_t* ___name0, RuntimeObject* ___command1, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * EventSystem_get_currentSelectedGameObject_mE28E78D268403602DE1FB6F059EE3E9CDB7325A4_inline (EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void Invoker::CallCommand(System.String,UnityEngine.Vector3,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Invoker_CallCommand_mE8550ACC7214BD24FE99AA25C44AAE6804FA0BD9 (Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * __this, String_t* ___name0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___t1, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___g2, const RuntimeMethod* method);
// System.Void Invoker::UndoIt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Invoker_UndoIt_mA9110D0AAF52AF42383F96C4F9C138B3F953928E (Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * __this, const RuntimeMethod* method);
// System.Void Invoker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Invoker__ctor_m5D0F4099A750EFFE8F21C184C039FEACF70952F3 (Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Command>::.ctor()
inline void Dictionary_2__ctor_m8126BCE0EBFCFA8925DC80080D6E0073E8534CDE (Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<Command>::.ctor()
inline void Stack_1__ctor_mA0059D9135673A0ED06C327BD994D35A8E5B9DC9 (Stack_1_tE397AD00373A26A804700671E4995212675AD2D8 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tE397AD00373A26A804700671E4995212675AD2D8 *, const RuntimeMethod*))Stack_1__ctor_m07A8AE55BA78A57D5BDC0271ED6AA646D69AA785_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Command>::Add(!0,!1)
inline void Dictionary_2_Add_m02570D2215371A6F5A4DA35A540AB50B0EA8D0F4 (Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74 * __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74 *, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Command>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m5CEC28C7CF2C9AC55FECA993BAB154C2E0EF1308 (Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74 * __this, String_t* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74 *, String_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Stack`1<Command>::Push(!0)
inline void Stack_1_Push_m23E36317E92FA9C7364B576A5E5972CC912667C5 (Stack_1_tE397AD00373A26A804700671E4995212675AD2D8 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tE397AD00373A26A804700671E4995212675AD2D8 *, RuntimeObject*, const RuntimeMethod*))Stack_1_Push_m29021EF3A9D21E7656CB8FA54AE535CBAF99E904_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.Stack`1<Command>::get_Count()
inline int32_t Stack_1_get_Count_m1F927D32B2F90B3A1530B1936CA6FEBF6410BFF1_inline (Stack_1_tE397AD00373A26A804700671E4995212675AD2D8 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tE397AD00373A26A804700671E4995212675AD2D8 *, const RuntimeMethod*))Stack_1_get_Count_m692E28BB74B2613597E407DDCCBA926306D8086A_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Stack`1<Command>::Pop()
inline RuntimeObject* Stack_1_Pop_mFCD2DB448EE154EDFE8F3C19A33C1DDA67022D5B (Stack_1_tE397AD00373A26A804700671E4995212675AD2D8 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Stack_1_tE397AD00373A26A804700671E4995212675AD2D8 *, const RuntimeMethod*))Stack_1_Pop_m490CECEA5A2911DA732CD4D7612D04BD18E1DF12_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<UnityEngine.GameObject>::.ctor()
inline void Stack_1__ctor_mD6B958FDDC765351DE03BFC7923048EA19D82C32 (Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 *, const RuntimeMethod*))Stack_1__ctor_m07A8AE55BA78A57D5BDC0271ED6AA646D69AA785_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<UnityEngine.GameObject>::Push(!0)
inline void Stack_1_Push_mA2FC8CA27BD67B8D05B1B9C471A9664FE515DBF7 (Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 *, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))Stack_1_Push_m29021EF3A9D21E7656CB8FA54AE535CBAF99E904_gshared)(__this, ___item0, method);
}
// UnityEngine.GameObject PlaceOReciever::Action(UnityEngine.Vector3,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PlaceOReciever_Action_mB9A8F8ED42477DB09E71AD846889A9BD6B912D8F (PlaceOReciever_t909E2DA3D90D8017020AD29F17132CE34802DE70 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___t0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___g1, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<UnityEngine.GameObject>::Pop()
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Stack_1_Pop_m085021C5F07D9907053205AF95134AAEB29CD5A7 (Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 *, const RuntimeMethod*))Stack_1_Pop_m490CECEA5A2911DA732CD4D7612D04BD18E1DF12_gshared)(__this, method);
}
// System.Void PlaceOReciever::UndoAction(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOReciever_UndoAction_m6736AE8B370C406FB662853E6EDE7C38B775C3C8 (PlaceOReciever_t909E2DA3D90D8017020AD29F17132CE34802DE70 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___g0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m352D452C728667C9C76C942525CDE26444568ECD_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// UnityEngine.GameObject PlaceXReciever::Action(UnityEngine.Vector3,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PlaceXReciever_Action_mA8ACD17BD5EBC3D651CFCAA772FDE5D49ECC21DB (PlaceXReciever_tF774BC4B3B0A04EACA1CF1F1BC219C005319224D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___t0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___g1, const RuntimeMethod* method);
// System.Void PlaceXReciever::UndoAction(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceXReciever_UndoAction_m5418D690411FB86B2C6FE8787284B71498665F83 (PlaceXReciever_tF774BC4B3B0A04EACA1CF1F1BC219C005319224D * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___g0, const RuntimeMethod* method);
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
// System.Void Client::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Start_mE6BA86C48F3D3C40438044A472C3565A1A6A85D5 (Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_Start_mE6BA86C48F3D3C40438044A472C3565A1A6A85D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlaceOCommand_tBF0C61AB754C86BD84B285887317AB5DEFDCE219 * V_0 = NULL;
	PlaceXCommand_t3CE680677A83483C6BEC0744B47FF7E5A85F61A0 * V_1 = NULL;
	{
		// oButtons.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_oButtons_7();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)0, /*hidden argument*/NULL);
		// PlaceOCommand placeO = new PlaceOCommand(oReciever);
		PlaceOReciever_t909E2DA3D90D8017020AD29F17132CE34802DE70 * L_1 = __this->get_oReciever_8();
		PlaceOCommand_tBF0C61AB754C86BD84B285887317AB5DEFDCE219 * L_2 = (PlaceOCommand_tBF0C61AB754C86BD84B285887317AB5DEFDCE219 *)il2cpp_codegen_object_new(PlaceOCommand_tBF0C61AB754C86BD84B285887317AB5DEFDCE219_il2cpp_TypeInfo_var);
		PlaceOCommand__ctor_mECEE9C5875C82699C3F0194780383483D5F95901(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// PlaceXCommand placeX = new PlaceXCommand(xReciever);
		PlaceXReciever_tF774BC4B3B0A04EACA1CF1F1BC219C005319224D * L_3 = __this->get_xReciever_9();
		PlaceXCommand_t3CE680677A83483C6BEC0744B47FF7E5A85F61A0 * L_4 = (PlaceXCommand_t3CE680677A83483C6BEC0744B47FF7E5A85F61A0 *)il2cpp_codegen_object_new(PlaceXCommand_t3CE680677A83483C6BEC0744B47FF7E5A85F61A0_il2cpp_TypeInfo_var);
		PlaceXCommand__ctor_mE8CB6137CA4C6876D792FBBA3F64BD4472247C51(L_4, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// voker.AddCommand("placeO", placeO);
		Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * L_5 = __this->get_voker_4();
		PlaceOCommand_tBF0C61AB754C86BD84B285887317AB5DEFDCE219 * L_6 = V_0;
		Invoker_AddCommand_m783A1B98FE7A3539EAA06FBAEB7867004B069051(L_5, _stringLiteralA063BB6461D00487F6FCE086797D56B0AF080CC1, L_6, /*hidden argument*/NULL);
		// voker.AddCommand("placeX", placeX);
		Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * L_7 = __this->get_voker_4();
		PlaceXCommand_t3CE680677A83483C6BEC0744B47FF7E5A85F61A0 * L_8 = V_1;
		Invoker_AddCommand_m783A1B98FE7A3539EAA06FBAEB7867004B069051(L_7, _stringLiteralEBEEF1CC0D5D301FB3E1752DB879F01703FFED23, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Client::PlaceX(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_PlaceX_m929BC217404C0DABE2ADFB177B56E24735EC9210 (Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E * __this, int32_t ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_PlaceX_m929BC217404C0DABE2ADFB177B56E24735EC9210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		// GameObject g = EventSystem.current.currentSelectedGameObject;
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var);
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_0 = EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD(/*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = EventSystem_get_currentSelectedGameObject_mE28E78D268403602DE1FB6F059EE3E9CDB7325A4_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// switch (x)
		int32_t L_2 = ___x0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_0066;
			}
			case 2:
			{
				goto IL_0090;
			}
			case 3:
			{
				goto IL_00ba;
			}
			case 4:
			{
				goto IL_00e4;
			}
			case 5:
			{
				goto IL_010e;
			}
			case 6:
			{
				goto IL_0135;
			}
			case 7:
			{
				goto IL_015c;
			}
			case 8:
			{
				goto IL_0183;
			}
		}
	}
	{
		goto IL_01a8;
	}

IL_003c:
	{
		// voker.CallCommand("placeX", new Vector3(-3.5f, 0, 3.6f), g);
		Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * L_3 = __this->get_voker_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_4), (-3.5f), (0.0f), (3.6f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = V_0;
		Invoker_CallCommand_mE8550ACC7214BD24FE99AA25C44AAE6804FA0BD9(L_3, _stringLiteralEBEEF1CC0D5D301FB3E1752DB879F01703FFED23, L_4, L_5, /*hidden argument*/NULL);
		// break;
		goto IL_01a8;
	}

IL_0066:
	{
		// voker.CallCommand("placeX", new Vector3(.06f,0 , 3.6f), g);
		Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * L_6 = __this->get_voker_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_7), (0.06f), (0.0f), (3.6f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = V_0;
		Invoker_CallCommand_mE8550ACC7214BD24FE99AA25C44AAE6804FA0BD9(L_6, _stringLiteralEBEEF1CC0D5D301FB3E1752DB879F01703FFED23, L_7, L_8, /*hidden argument*/NULL);
		// break;
		goto IL_01a8;
	}

IL_0090:
	{
		// voker.CallCommand("placeX", new Vector3(3.59f, 0, 3.6f), g);
		Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * L_9 = __this->get_voker_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_10), (3.59f), (0.0f), (3.6f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = V_0;
		Invoker_CallCommand_mE8550ACC7214BD24FE99AA25C44AAE6804FA0BD9(L_9, _stringLiteralEBEEF1CC0D5D301FB3E1752DB879F01703FFED23, L_10, L_11, /*hidden argument*/NULL);
		// break;
		goto IL_01a8;
	}

IL_00ba:
	{
		// voker.CallCommand("placeX", new Vector3(-3.5f, 0, .08f), g);
		Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * L_12 = __this->get_voker_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_13), (-3.5f), (0.0f), (0.08f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = V_0;
		Invoker_CallCommand_mE8550ACC7214BD24FE99AA25C44AAE6804FA0BD9(L_12, _stringLiteralEBEEF1CC0D5D301FB3E1752DB879F01703FFED23, L_13, L_14, /*hidden argument*/NULL);
		// break;
		goto IL_01a8;
	}

IL_00e4:
	{
		// voker.CallCommand("placeX", new Vector3(.06f, 0, .08f), g);
		Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * L_15 = __this->get_voker_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_16), (0.06f), (0.0f), (0.08f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = V_0;
		Invoker_CallCommand_mE8550ACC7214BD24FE99AA25C44AAE6804FA0BD9(L_15, _stringLiteralEBEEF1CC0D5D301FB3E1752DB879F01703FFED23, L_16, L_17, /*hidden argument*/NULL);
		// break;
		goto IL_01a8;
	}

IL_010e:
	{
		// voker.CallCommand("placeX", new Vector3(3.59f, 0, .08f), g);
		Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * L_18 = __this->get_voker_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_19), (3.59f), (0.0f), (0.08f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = V_0;
		Invoker_CallCommand_mE8550ACC7214BD24FE99AA25C44AAE6804FA0BD9(L_18, _stringLiteralEBEEF1CC0D5D301FB3E1752DB879F01703FFED23, L_19, L_20, /*hidden argument*/NULL);
		// break;
		goto IL_01a8;
	}

IL_0135:
	{
		// voker.CallCommand("placeX", new Vector3(-3.5f, 0, -3.64f), g);
		Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * L_21 = __this->get_voker_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_22), (-3.5f), (0.0f), (-3.64f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = V_0;
		Invoker_CallCommand_mE8550ACC7214BD24FE99AA25C44AAE6804FA0BD9(L_21, _stringLiteralEBEEF1CC0D5D301FB3E1752DB879F01703FFED23, L_22, L_23, /*hidden argument*/NULL);
		// break;
		goto IL_01a8;
	}

IL_015c:
	{
		// voker.CallCommand("placeX", new Vector3(.06f, 0, -3.64f), g);
		Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * L_24 = __this->get_voker_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_25), (0.06f), (0.0f), (-3.64f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_26 = V_0;
		Invoker_CallCommand_mE8550ACC7214BD24FE99AA25C44AAE6804FA0BD9(L_24, _stringLiteralEBEEF1CC0D5D301FB3E1752DB879F01703FFED23, L_25, L_26, /*hidden argument*/NULL);
		// break;
		goto IL_01a8;
	}

IL_0183:
	{
		// voker.CallCommand("placeX", new Vector3(3.59f, 0, -3.64f), g);
		Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * L_27 = __this->get_voker_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_28), (3.59f), (0.0f), (-3.64f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = V_0;
		Invoker_CallCommand_mE8550ACC7214BD24FE99AA25C44AAE6804FA0BD9(L_27, _stringLiteralEBEEF1CC0D5D301FB3E1752DB879F01703FFED23, L_28, L_29, /*hidden argument*/NULL);
	}

IL_01a8:
	{
		// xButtons.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_30 = __this->get_xButtons_6();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_30, (bool)0, /*hidden argument*/NULL);
		// oButtons.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_31 = __this->get_oButtons_7();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_31, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Client::PlaceO(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_PlaceO_mD1971B398234FFB67E7BAD0F060328C5AC9A024A (Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E * __this, int32_t ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_PlaceO_mD1971B398234FFB67E7BAD0F060328C5AC9A024A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		// GameObject g = EventSystem.current.currentSelectedGameObject;
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var);
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_0 = EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD(/*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = EventSystem_get_currentSelectedGameObject_mE28E78D268403602DE1FB6F059EE3E9CDB7325A4_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// switch (x)
		int32_t L_2 = ___x0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_0066;
			}
			case 2:
			{
				goto IL_0090;
			}
			case 3:
			{
				goto IL_00ba;
			}
			case 4:
			{
				goto IL_00e4;
			}
			case 5:
			{
				goto IL_010e;
			}
			case 6:
			{
				goto IL_0135;
			}
			case 7:
			{
				goto IL_015c;
			}
			case 8:
			{
				goto IL_0183;
			}
		}
	}
	{
		goto IL_01a8;
	}

IL_003c:
	{
		// voker.CallCommand("placeO", new Vector3(-3.5f, 0, 3.6f), g);
		Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * L_3 = __this->get_voker_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_4), (-3.5f), (0.0f), (3.6f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = V_0;
		Invoker_CallCommand_mE8550ACC7214BD24FE99AA25C44AAE6804FA0BD9(L_3, _stringLiteralA063BB6461D00487F6FCE086797D56B0AF080CC1, L_4, L_5, /*hidden argument*/NULL);
		// break;
		goto IL_01a8;
	}

IL_0066:
	{
		// voker.CallCommand("placeO", new Vector3(.06f, 0, 3.6f), g);
		Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * L_6 = __this->get_voker_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_7), (0.06f), (0.0f), (3.6f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = V_0;
		Invoker_CallCommand_mE8550ACC7214BD24FE99AA25C44AAE6804FA0BD9(L_6, _stringLiteralA063BB6461D00487F6FCE086797D56B0AF080CC1, L_7, L_8, /*hidden argument*/NULL);
		// break;
		goto IL_01a8;
	}

IL_0090:
	{
		// voker.CallCommand("placeO", new Vector3(3.59f, 0, 3.6f), g);
		Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * L_9 = __this->get_voker_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_10), (3.59f), (0.0f), (3.6f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = V_0;
		Invoker_CallCommand_mE8550ACC7214BD24FE99AA25C44AAE6804FA0BD9(L_9, _stringLiteralA063BB6461D00487F6FCE086797D56B0AF080CC1, L_10, L_11, /*hidden argument*/NULL);
		// break;
		goto IL_01a8;
	}

IL_00ba:
	{
		// voker.CallCommand("placeO", new Vector3(-3.5f, 0, .08f), g);
		Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * L_12 = __this->get_voker_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_13), (-3.5f), (0.0f), (0.08f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = V_0;
		Invoker_CallCommand_mE8550ACC7214BD24FE99AA25C44AAE6804FA0BD9(L_12, _stringLiteralA063BB6461D00487F6FCE086797D56B0AF080CC1, L_13, L_14, /*hidden argument*/NULL);
		// break;
		goto IL_01a8;
	}

IL_00e4:
	{
		// voker.CallCommand("placeO", new Vector3(.06f, 0, .08f), g);
		Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * L_15 = __this->get_voker_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_16), (0.06f), (0.0f), (0.08f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = V_0;
		Invoker_CallCommand_mE8550ACC7214BD24FE99AA25C44AAE6804FA0BD9(L_15, _stringLiteralA063BB6461D00487F6FCE086797D56B0AF080CC1, L_16, L_17, /*hidden argument*/NULL);
		// break;
		goto IL_01a8;
	}

IL_010e:
	{
		// voker.CallCommand("placeO", new Vector3(3.59f, 0, .08f), g);
		Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * L_18 = __this->get_voker_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_19), (3.59f), (0.0f), (0.08f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = V_0;
		Invoker_CallCommand_mE8550ACC7214BD24FE99AA25C44AAE6804FA0BD9(L_18, _stringLiteralA063BB6461D00487F6FCE086797D56B0AF080CC1, L_19, L_20, /*hidden argument*/NULL);
		// break;
		goto IL_01a8;
	}

IL_0135:
	{
		// voker.CallCommand("placeO", new Vector3(-3.5f, 0, -3.64f), g);
		Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * L_21 = __this->get_voker_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_22), (-3.5f), (0.0f), (-3.64f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = V_0;
		Invoker_CallCommand_mE8550ACC7214BD24FE99AA25C44AAE6804FA0BD9(L_21, _stringLiteralA063BB6461D00487F6FCE086797D56B0AF080CC1, L_22, L_23, /*hidden argument*/NULL);
		// break;
		goto IL_01a8;
	}

IL_015c:
	{
		// voker.CallCommand("placeO", new Vector3(.06f, 0, -3.64f), g);
		Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * L_24 = __this->get_voker_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_25), (0.06f), (0.0f), (-3.64f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_26 = V_0;
		Invoker_CallCommand_mE8550ACC7214BD24FE99AA25C44AAE6804FA0BD9(L_24, _stringLiteralA063BB6461D00487F6FCE086797D56B0AF080CC1, L_25, L_26, /*hidden argument*/NULL);
		// break;
		goto IL_01a8;
	}

IL_0183:
	{
		// voker.CallCommand("placeO", new Vector3(3.59f, 0, -3.64f), g);
		Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * L_27 = __this->get_voker_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_28), (3.59f), (0.0f), (-3.64f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = V_0;
		Invoker_CallCommand_mE8550ACC7214BD24FE99AA25C44AAE6804FA0BD9(L_27, _stringLiteralA063BB6461D00487F6FCE086797D56B0AF080CC1, L_28, L_29, /*hidden argument*/NULL);
	}

IL_01a8:
	{
		// xButtons.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_30 = __this->get_xButtons_6();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_30, (bool)1, /*hidden argument*/NULL);
		// oButtons.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_31 = __this->get_oButtons_7();
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_31, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Client::PressUndo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_PressUndo_m138844F42DA0362C3008C4A1863B17F65AFB6A28 (Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E * __this, const RuntimeMethod* method)
{
	{
		// voker.UndoIt();
		Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * L_0 = __this->get_voker_4();
		Invoker_UndoIt_mA9110D0AAF52AF42383F96C4F9C138B3F953928E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Client::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_m3ECF301B53E250235D807DA842698ADC0B7AAE4E (Client_t389DCCED9C151BDE955CFE61AC8ECD0A3B3AD92E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client__ctor_m3ECF301B53E250235D807DA842698ADC0B7AAE4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoker voker = new Invoker();
		Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * L_0 = (Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 *)il2cpp_codegen_object_new(Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87_il2cpp_TypeInfo_var);
		Invoker__ctor_m5D0F4099A750EFFE8F21C184C039FEACF70952F3(L_0, /*hidden argument*/NULL);
		__this->set_voker_4(L_0);
		// private bool isXPlacing = true; //x will start first
		__this->set_isXPlacing_5((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Invoker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Invoker__ctor_m5D0F4099A750EFFE8F21C184C039FEACF70952F3 (Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Invoker__ctor_m5D0F4099A750EFFE8F21C184C039FEACF70952F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Invoker()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// commands = new Dictionary<string, Command>();
		Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74 * L_0 = (Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74 *)il2cpp_codegen_object_new(Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8126BCE0EBFCFA8925DC80080D6E0073E8534CDE(L_0, /*hidden argument*/Dictionary_2__ctor_m8126BCE0EBFCFA8925DC80080D6E0073E8534CDE_RuntimeMethod_var);
		__this->set_commands_0(L_0);
		// commandHistory = new Stack<Command>();
		Stack_1_tE397AD00373A26A804700671E4995212675AD2D8 * L_1 = (Stack_1_tE397AD00373A26A804700671E4995212675AD2D8 *)il2cpp_codegen_object_new(Stack_1_tE397AD00373A26A804700671E4995212675AD2D8_il2cpp_TypeInfo_var);
		Stack_1__ctor_mA0059D9135673A0ED06C327BD994D35A8E5B9DC9(L_1, /*hidden argument*/Stack_1__ctor_mA0059D9135673A0ED06C327BD994D35A8E5B9DC9_RuntimeMethod_var);
		__this->set_commandHistory_1(L_1);
		// }
		return;
	}
}
// System.Void Invoker::AddCommand(System.String,Command)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Invoker_AddCommand_m783A1B98FE7A3539EAA06FBAEB7867004B069051 (Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * __this, String_t* ___name0, RuntimeObject* ___command1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Invoker_AddCommand_m783A1B98FE7A3539EAA06FBAEB7867004B069051_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// commands.Add(name, command);
		Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74 * L_0 = __this->get_commands_0();
		String_t* L_1 = ___name0;
		RuntimeObject* L_2 = ___command1;
		Dictionary_2_Add_m02570D2215371A6F5A4DA35A540AB50B0EA8D0F4(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_Add_m02570D2215371A6F5A4DA35A540AB50B0EA8D0F4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Invoker::CallCommand(System.String,UnityEngine.Vector3,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Invoker_CallCommand_mE8550ACC7214BD24FE99AA25C44AAE6804FA0BD9 (Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * __this, String_t* ___name0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___t1, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___g2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Invoker_CallCommand_mE8550ACC7214BD24FE99AA25C44AAE6804FA0BD9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// commands.TryGetValue(name, out Command command);
		Dictionary_2_t35EA8DBD09A8E34285F130E6CAA9E3E07CDE8B74 * L_0 = __this->get_commands_0();
		String_t* L_1 = ___name0;
		Dictionary_2_TryGetValue_m5CEC28C7CF2C9AC55FECA993BAB154C2E0EF1308(L_0, L_1, (RuntimeObject**)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m5CEC28C7CF2C9AC55FECA993BAB154C2E0EF1308_RuntimeMethod_var);
		// if(command != null)
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// command.Execute(t, g);
		RuntimeObject* L_3 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___t1;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = ___g2;
		InterfaceActionInvoker2< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(0 /* System.Void Command::Execute(UnityEngine.Vector3,UnityEngine.GameObject) */, Command_t2A94F845B2B38F2D558929C92F6DA295E0847E31_il2cpp_TypeInfo_var, L_3, L_4, L_5);
	}

IL_001a:
	{
		// commandHistory.Push(command);
		Stack_1_tE397AD00373A26A804700671E4995212675AD2D8 * L_6 = __this->get_commandHistory_1();
		RuntimeObject* L_7 = V_0;
		Stack_1_Push_m23E36317E92FA9C7364B576A5E5972CC912667C5(L_6, L_7, /*hidden argument*/Stack_1_Push_m23E36317E92FA9C7364B576A5E5972CC912667C5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Invoker::UndoIt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Invoker_UndoIt_mA9110D0AAF52AF42383F96C4F9C138B3F953928E (Invoker_t3D4292B6E10B83F6AD2D8E641F5E8CCD8F91EB87 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Invoker_UndoIt_mA9110D0AAF52AF42383F96C4F9C138B3F953928E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(commandHistory.Count != 0)
		Stack_1_tE397AD00373A26A804700671E4995212675AD2D8 * L_0 = __this->get_commandHistory_1();
		int32_t L_1 = Stack_1_get_Count_m1F927D32B2F90B3A1530B1936CA6FEBF6410BFF1_inline(L_0, /*hidden argument*/Stack_1_get_Count_m1F927D32B2F90B3A1530B1936CA6FEBF6410BFF1_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// Command command = commandHistory.Pop();
		Stack_1_tE397AD00373A26A804700671E4995212675AD2D8 * L_2 = __this->get_commandHistory_1();
		RuntimeObject* L_3 = Stack_1_Pop_mFCD2DB448EE154EDFE8F3C19A33C1DDA67022D5B(L_2, /*hidden argument*/Stack_1_Pop_mFCD2DB448EE154EDFE8F3C19A33C1DDA67022D5B_RuntimeMethod_var);
		// command.Undo();
		InterfaceActionInvoker0::Invoke(1 /* System.Void Command::Undo() */, Command_t2A94F845B2B38F2D558929C92F6DA295E0847E31_il2cpp_TypeInfo_var, L_3);
	}

IL_001d:
	{
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
// System.Void PlaceOCommand::.ctor(PlaceOReciever)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOCommand__ctor_mECEE9C5875C82699C3F0194780383483D5F95901 (PlaceOCommand_tBF0C61AB754C86BD84B285887317AB5DEFDCE219 * __this, PlaceOReciever_t909E2DA3D90D8017020AD29F17132CE34802DE70 * ___r0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlaceOCommand__ctor_mECEE9C5875C82699C3F0194780383483D5F95901_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PlaceOCommand(PlaceOReciever r)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.r = r;
		PlaceOReciever_t909E2DA3D90D8017020AD29F17132CE34802DE70 * L_0 = ___r0;
		__this->set_r_0(L_0);
		// items = new Stack<GameObject>();
		Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * L_1 = (Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 *)il2cpp_codegen_object_new(Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563_il2cpp_TypeInfo_var);
		Stack_1__ctor_mD6B958FDDC765351DE03BFC7923048EA19D82C32(L_1, /*hidden argument*/Stack_1__ctor_mD6B958FDDC765351DE03BFC7923048EA19D82C32_RuntimeMethod_var);
		__this->set_items_1(L_1);
		// buttons = new Stack<GameObject>();
		Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * L_2 = (Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 *)il2cpp_codegen_object_new(Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563_il2cpp_TypeInfo_var);
		Stack_1__ctor_mD6B958FDDC765351DE03BFC7923048EA19D82C32(L_2, /*hidden argument*/Stack_1__ctor_mD6B958FDDC765351DE03BFC7923048EA19D82C32_RuntimeMethod_var);
		__this->set_buttons_2(L_2);
		// }
		return;
	}
}
// System.Void PlaceOCommand::Execute(UnityEngine.Vector3,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOCommand_Execute_m75BC8E4478C6F889C7E42CB3364C55BD57E3F88B (PlaceOCommand_tBF0C61AB754C86BD84B285887317AB5DEFDCE219 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___t0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___g1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlaceOCommand_Execute_m75BC8E4478C6F889C7E42CB3364C55BD57E3F88B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		// buttons.Push(g);
		Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * L_0 = __this->get_buttons_2();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = ___g1;
		Stack_1_Push_mA2FC8CA27BD67B8D05B1B9C471A9664FE515DBF7(L_0, L_1, /*hidden argument*/Stack_1_Push_mA2FC8CA27BD67B8D05B1B9C471A9664FE515DBF7_RuntimeMethod_var);
		// GameObject l = r.Action(t, g);
		PlaceOReciever_t909E2DA3D90D8017020AD29F17132CE34802DE70 * L_2 = __this->get_r_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___t0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = ___g1;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = PlaceOReciever_Action_mB9A8F8ED42477DB09E71AD846889A9BD6B912D8F(L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// items.Push(l);
		Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * L_6 = __this->get_items_1();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = V_0;
		Stack_1_Push_mA2FC8CA27BD67B8D05B1B9C471A9664FE515DBF7(L_6, L_7, /*hidden argument*/Stack_1_Push_mA2FC8CA27BD67B8D05B1B9C471A9664FE515DBF7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PlaceOCommand::Undo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOCommand_Undo_mCD5B0873982EBF6D5FFA5D3373AE42EFCA9E784D (PlaceOCommand_tBF0C61AB754C86BD84B285887317AB5DEFDCE219 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlaceOCommand_Undo_mCD5B0873982EBF6D5FFA5D3373AE42EFCA9E784D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(buttons != null)
		Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * L_0 = __this->get_buttons_2();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// buttons.Pop().SetActive(true);
		Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * L_1 = __this->get_buttons_2();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Stack_1_Pop_m085021C5F07D9907053205AF95134AAEB29CD5A7(L_1, /*hidden argument*/Stack_1_Pop_m085021C5F07D9907053205AF95134AAEB29CD5A7_RuntimeMethod_var);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_2, (bool)1, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// if(items != null)
		Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * L_3 = __this->get_items_1();
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// r.UndoAction(items.Pop());
		PlaceOReciever_t909E2DA3D90D8017020AD29F17132CE34802DE70 * L_4 = __this->get_r_0();
		Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * L_5 = __this->get_items_1();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Stack_1_Pop_m085021C5F07D9907053205AF95134AAEB29CD5A7(L_5, /*hidden argument*/Stack_1_Pop_m085021C5F07D9907053205AF95134AAEB29CD5A7_RuntimeMethod_var);
		PlaceOReciever_UndoAction_m6736AE8B370C406FB662853E6EDE7C38B775C3C8(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
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
// UnityEngine.GameObject PlaceOReciever::Action(UnityEngine.Vector3,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PlaceOReciever_Action_mB9A8F8ED42477DB09E71AD846889A9BD6B912D8F (PlaceOReciever_t909E2DA3D90D8017020AD29F17132CE34802DE70 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___t0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___g1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlaceOReciever_Action_mB9A8F8ED42477DB09E71AD846889A9BD6B912D8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject r = Instantiate(fab, t, Quaternion.identity);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_fab_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_0, L_1, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		// g.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = ___g1;
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_4, (bool)0, /*hidden argument*/NULL);
		// return r;
		return L_3;
	}
}
// System.Void PlaceOReciever::UndoAction(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOReciever_UndoAction_m6736AE8B370C406FB662853E6EDE7C38B775C3C8 (PlaceOReciever_t909E2DA3D90D8017020AD29F17132CE34802DE70 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___g0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlaceOReciever_UndoAction_m6736AE8B370C406FB662853E6EDE7C38B775C3C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(g);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___g0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlaceOReciever::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOReciever__ctor_m6CB377053A2BB100C58A39DBE734F011FBFE6BC0 (PlaceOReciever_t909E2DA3D90D8017020AD29F17132CE34802DE70 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void PlaceXCommand::.ctor(PlaceXReciever)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceXCommand__ctor_mE8CB6137CA4C6876D792FBBA3F64BD4472247C51 (PlaceXCommand_t3CE680677A83483C6BEC0744B47FF7E5A85F61A0 * __this, PlaceXReciever_tF774BC4B3B0A04EACA1CF1F1BC219C005319224D * ___r0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlaceXCommand__ctor_mE8CB6137CA4C6876D792FBBA3F64BD4472247C51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PlaceXCommand(PlaceXReciever r)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.r = r;
		PlaceXReciever_tF774BC4B3B0A04EACA1CF1F1BC219C005319224D * L_0 = ___r0;
		__this->set_r_0(L_0);
		// items = new Stack<GameObject>();
		Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * L_1 = (Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 *)il2cpp_codegen_object_new(Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563_il2cpp_TypeInfo_var);
		Stack_1__ctor_mD6B958FDDC765351DE03BFC7923048EA19D82C32(L_1, /*hidden argument*/Stack_1__ctor_mD6B958FDDC765351DE03BFC7923048EA19D82C32_RuntimeMethod_var);
		__this->set_items_1(L_1);
		// buttons = new Stack<GameObject>();
		Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * L_2 = (Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 *)il2cpp_codegen_object_new(Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563_il2cpp_TypeInfo_var);
		Stack_1__ctor_mD6B958FDDC765351DE03BFC7923048EA19D82C32(L_2, /*hidden argument*/Stack_1__ctor_mD6B958FDDC765351DE03BFC7923048EA19D82C32_RuntimeMethod_var);
		__this->set_buttons_2(L_2);
		// }
		return;
	}
}
// System.Void PlaceXCommand::Execute(UnityEngine.Vector3,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceXCommand_Execute_mE511F7E1978105F31C0E05C4D9E874A1045B47F3 (PlaceXCommand_t3CE680677A83483C6BEC0744B47FF7E5A85F61A0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___t0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___g1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlaceXCommand_Execute_mE511F7E1978105F31C0E05C4D9E874A1045B47F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		// buttons.Push(g);
		Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * L_0 = __this->get_buttons_2();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = ___g1;
		Stack_1_Push_mA2FC8CA27BD67B8D05B1B9C471A9664FE515DBF7(L_0, L_1, /*hidden argument*/Stack_1_Push_mA2FC8CA27BD67B8D05B1B9C471A9664FE515DBF7_RuntimeMethod_var);
		// GameObject l = r.Action(t, g);
		PlaceXReciever_tF774BC4B3B0A04EACA1CF1F1BC219C005319224D * L_2 = __this->get_r_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___t0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = ___g1;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = PlaceXReciever_Action_mA8ACD17BD5EBC3D651CFCAA772FDE5D49ECC21DB(L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// items.Push(l);
		Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * L_6 = __this->get_items_1();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = V_0;
		Stack_1_Push_mA2FC8CA27BD67B8D05B1B9C471A9664FE515DBF7(L_6, L_7, /*hidden argument*/Stack_1_Push_mA2FC8CA27BD67B8D05B1B9C471A9664FE515DBF7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PlaceXCommand::Undo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceXCommand_Undo_m9982F5EE48E15E4756721FF012EC6979B85B2B1D (PlaceXCommand_t3CE680677A83483C6BEC0744B47FF7E5A85F61A0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlaceXCommand_Undo_m9982F5EE48E15E4756721FF012EC6979B85B2B1D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (buttons != null)
		Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * L_0 = __this->get_buttons_2();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// buttons.Pop().SetActive(true);
		Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * L_1 = __this->get_buttons_2();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Stack_1_Pop_m085021C5F07D9907053205AF95134AAEB29CD5A7(L_1, /*hidden argument*/Stack_1_Pop_m085021C5F07D9907053205AF95134AAEB29CD5A7_RuntimeMethod_var);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_2, (bool)1, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// if (items != null)
		Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * L_3 = __this->get_items_1();
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// r.UndoAction(items.Pop());
		PlaceXReciever_tF774BC4B3B0A04EACA1CF1F1BC219C005319224D * L_4 = __this->get_r_0();
		Stack_1_t4DE78EEF92B4B81F045CED02BDB5FC458862E563 * L_5 = __this->get_items_1();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Stack_1_Pop_m085021C5F07D9907053205AF95134AAEB29CD5A7(L_5, /*hidden argument*/Stack_1_Pop_m085021C5F07D9907053205AF95134AAEB29CD5A7_RuntimeMethod_var);
		PlaceXReciever_UndoAction_m5418D690411FB86B2C6FE8787284B71498665F83(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
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
// UnityEngine.GameObject PlaceXReciever::Action(UnityEngine.Vector3,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PlaceXReciever_Action_mA8ACD17BD5EBC3D651CFCAA772FDE5D49ECC21DB (PlaceXReciever_tF774BC4B3B0A04EACA1CF1F1BC219C005319224D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___t0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___g1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlaceXReciever_Action_mA8ACD17BD5EBC3D651CFCAA772FDE5D49ECC21DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject r = Instantiate(fab, t, Quaternion.identity);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_fab_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_0, L_1, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		// g.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = ___g1;
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_4, (bool)0, /*hidden argument*/NULL);
		// return r;
		return L_3;
	}
}
// System.Void PlaceXReciever::UndoAction(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceXReciever_UndoAction_m5418D690411FB86B2C6FE8787284B71498665F83 (PlaceXReciever_tF774BC4B3B0A04EACA1CF1F1BC219C005319224D * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___g0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlaceXReciever_UndoAction_m5418D690411FB86B2C6FE8787284B71498665F83_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(g);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___g0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlaceXReciever::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceXReciever__ctor_mDBC56C2F3FF0E9B2E7213C1F4CAE6C2B198474A3 (PlaceXReciever_tF774BC4B3B0A04EACA1CF1F1BC219C005319224D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * EventSystem_get_currentSelectedGameObject_mE28E78D268403602DE1FB6F059EE3E9CDB7325A4_inline (EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_CurrentSelected; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_m_CurrentSelected_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m692E28BB74B2613597E407DDCCBA926306D8086A_gshared_inline (Stack_1_t4A8378BFCCA917C44CD055D0B4DB470EB7FEC275 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_1();
		return L_0;
	}
}
