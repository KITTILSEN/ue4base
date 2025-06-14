﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HF_DetailsNameClass

#include "Basic.hpp"

#include "RBHotFoot_structs.hpp"


namespace SDK::Params
{

// Function WBP_HF_DetailsNameClass.WBP_HF_DetailsNameClass_C.SetupProperty
// 0x0068 (0x0068 - 0x0000)
struct WBP_HF_DetailsNameClass_C_SetupProperty final
{
public:
	class AHFManager*                             HFManager;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHFSharedProperty                      HFSharedProperty;                                  // 0x0008(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HF_DetailsNameClass_C_SetupProperty) == 0x000008, "Wrong alignment on WBP_HF_DetailsNameClass_C_SetupProperty");
static_assert(sizeof(WBP_HF_DetailsNameClass_C_SetupProperty) == 0x000068, "Wrong size on WBP_HF_DetailsNameClass_C_SetupProperty");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_SetupProperty, HFManager) == 0x000000, "Member 'WBP_HF_DetailsNameClass_C_SetupProperty::HFManager' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_SetupProperty, HFSharedProperty) == 0x000008, "Member 'WBP_HF_DetailsNameClass_C_SetupProperty::HFSharedProperty' has a wrong offset!");

// Function WBP_HF_DetailsNameClass.WBP_HF_DetailsNameClass_C.Update
// 0x0008 (0x0008 - 0x0000)
struct WBP_HF_DetailsNameClass_C_Update final
{
public:
	class AHFManager*                             HotFootManagerRef;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HF_DetailsNameClass_C_Update) == 0x000008, "Wrong alignment on WBP_HF_DetailsNameClass_C_Update");
static_assert(sizeof(WBP_HF_DetailsNameClass_C_Update) == 0x000008, "Wrong size on WBP_HF_DetailsNameClass_C_Update");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_Update, HotFootManagerRef) == 0x000000, "Member 'WBP_HF_DetailsNameClass_C_Update::HotFootManagerRef' has a wrong offset!");

// Function WBP_HF_DetailsNameClass.WBP_HF_DetailsNameClass_C.ExecuteUbergraph_WBP_HF_DetailsNameClass
// 0x0188 (0x0188 - 0x0000)
struct WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHFManager*                             K2Node_Event_HFManager;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHFSharedProperty                      K2Node_Event_HFSharedProperty;                     // 0x0020(0x0060)(HasGetValueTypeHash)
	class AHFManager*                             K2Node_Event_HotFootManagerRef;                    // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetSelectedActors_ReturnValue;            // 0x0088(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetObjectName_ReturnValue;                // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_1;             // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C8(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_EB[0x1];                                       // 0x00EB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable;                                // 0x00F0(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10B[0x5];                                      // 0x010B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetClassDisplayName_ReturnValue;          // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0120(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_1;                              // 0x0140(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0158(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x0170(0x0018)()
};
static_assert(alignof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass) == 0x000008, "Wrong alignment on WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass");
static_assert(sizeof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass) == 0x000188, "Wrong size on WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, EntryPoint) == 0x000000, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, Temp_bool_Variable) == 0x000004, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, Temp_bool_True_if_break_was_hit_Variable) == 0x000005, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, K2Node_Event_HFManager) == 0x000018, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::K2Node_Event_HFManager' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, K2Node_Event_HFSharedProperty) == 0x000020, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::K2Node_Event_HFSharedProperty' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, K2Node_Event_HotFootManagerRef) == 0x000080, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::K2Node_Event_HotFootManagerRef' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, CallFunc_GetSelectedActors_ReturnValue) == 0x000088, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::CallFunc_GetSelectedActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, CallFunc_Array_Get_Item) == 0x000098, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, CallFunc_Array_Get_Item_1) == 0x0000A0, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, CallFunc_GetObjectClass_ReturnValue) == 0x0000A8, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, CallFunc_GetObjectName_ReturnValue) == 0x0000B0, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, CallFunc_GetObjectClass_ReturnValue_1) == 0x0000C0, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::CallFunc_GetObjectClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, CallFunc_Conv_StringToText_ReturnValue) == 0x0000C8, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, CallFunc_Array_Length_ReturnValue) == 0x0000E0, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, CallFunc_Array_Length_ReturnValue_1) == 0x0000E4, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, CallFunc_Less_IntInt_ReturnValue) == 0x0000E8, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000E9, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, CallFunc_BooleanAND_ReturnValue) == 0x0000EA, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, CallFunc_Array_Length_ReturnValue_2) == 0x0000EC, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, Temp_text_Variable) == 0x0000F0, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, CallFunc_Greater_IntInt_ReturnValue) == 0x000108, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000109, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, CallFunc_Not_PreBool_ReturnValue_1) == 0x00010A, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, CallFunc_GetClassDisplayName_ReturnValue) == 0x000110, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::CallFunc_GetClassDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000120, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, Temp_bool_Variable_1) == 0x000138, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, Temp_text_Variable_1) == 0x000140, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, K2Node_Select_Default) == 0x000158, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass, K2Node_Select_Default_1) == 0x000170, "Member 'WBP_HF_DetailsNameClass_C_ExecuteUbergraph_WBP_HF_DetailsNameClass::K2Node_Select_Default_1' has a wrong offset!");

}

