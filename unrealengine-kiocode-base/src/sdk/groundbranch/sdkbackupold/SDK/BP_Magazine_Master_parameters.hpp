﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Magazine_Master

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Magazine_Master.BP_Magazine_Master_C.ExecuteUbergraph_BP_Magazine_Master
// 0x0098 (0x0098 - 0x0000)
struct BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const class AGBMagazine* Magazine)> K2Node_CreateDelegate_OutputDelegate;         // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USceneComponent*>                CallFunc_GetChildrenComponents_Children;           // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
	class USceneComponent*                        CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	const class AGBMagazine*                      K2Node_CustomEvent_Magazine;                       // 0x0050(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USceneComponent*>                CallFunc_GetChildrenComponents_Children_1;         // 0x0058(0x0010)(ReferenceParm, ContainsInstancedReference)
	class AGBInvItem*                             CallFunc_GetParentItem_ReturnValue;                // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGBFirearm*                             K2Node_DynamicCast_AsGBFirearm;                    // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82[0x6];                                       // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           CallFunc_GetGunshotComp_ReturnValue;               // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master) == 0x000008, "Wrong alignment on BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master");
static_assert(sizeof(BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master) == 0x000098, "Wrong size on BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master");
static_assert(offsetof(BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master, EntryPoint) == 0x000000, "Member 'BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master, CallFunc_IsDedicatedServer_ReturnValue) == 0x000014, "Member 'BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000028, "Member 'BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000029, "Member 'BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master, CallFunc_GetChildrenComponents_Children) == 0x000030, "Member 'BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master::CallFunc_GetChildrenComponents_Children' has a wrong offset!");
static_assert(offsetof(BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master, K2Node_CustomEvent_Magazine) == 0x000050, "Member 'BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master::K2Node_CustomEvent_Magazine' has a wrong offset!");
static_assert(offsetof(BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master, CallFunc_GetChildrenComponents_Children_1) == 0x000058, "Member 'BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master::CallFunc_GetChildrenComponents_Children_1' has a wrong offset!");
static_assert(offsetof(BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master, CallFunc_GetParentItem_ReturnValue) == 0x000068, "Member 'BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master::CallFunc_GetParentItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master, CallFunc_Array_Length_ReturnValue_1) == 0x000070, "Member 'BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master, K2Node_DynamicCast_AsGBFirearm) == 0x000078, "Member 'BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master::K2Node_DynamicCast_AsGBFirearm' has a wrong offset!");
static_assert(offsetof(BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master, CallFunc_Greater_IntInt_ReturnValue) == 0x000081, "Member 'BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master, CallFunc_GetGunshotComp_ReturnValue) == 0x000088, "Member 'BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master::CallFunc_GetGunshotComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'BP_Magazine_Master_C_ExecuteUbergraph_BP_Magazine_Master::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_Magazine_Master.BP_Magazine_Master_C.OnCountUpdated_Event_0
// 0x0008 (0x0008 - 0x0000)
struct BP_Magazine_Master_C_OnCountUpdated_Event_0 final
{
public:
	const class AGBMagazine*                      Magazine;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Magazine_Master_C_OnCountUpdated_Event_0) == 0x000008, "Wrong alignment on BP_Magazine_Master_C_OnCountUpdated_Event_0");
static_assert(sizeof(BP_Magazine_Master_C_OnCountUpdated_Event_0) == 0x000008, "Wrong size on BP_Magazine_Master_C_OnCountUpdated_Event_0");
static_assert(offsetof(BP_Magazine_Master_C_OnCountUpdated_Event_0, Magazine) == 0x000000, "Member 'BP_Magazine_Master_C_OnCountUpdated_Event_0::Magazine' has a wrong offset!");

}

