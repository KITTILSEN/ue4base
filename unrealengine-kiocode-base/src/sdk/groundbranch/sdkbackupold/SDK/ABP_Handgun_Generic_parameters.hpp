﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Handgun_Generic

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ABP_Handgun_Generic.ABP_Handgun_Generic_C.ExecuteUbergraph_ABP_Handgun_Generic
// 0x0070 (0x0070 - 0x0000)
struct ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetOwningComponent_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Handgun_Master_C*                   K2Node_DynamicCast_AsBP_Handgun_Master;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bVisible;                       // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_23[0x5];                                       // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AGBInvItem*                             CallFunc_GetFirstChildInvItemAttachedTo_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocal_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33[0x1];                                       // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_ZeroRelativeToSight;                  // 0x0034(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_SightLocationOffset;                  // 0x0040(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_Event_SightRotationOffset;                  // 0x004C(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_FrontSightPostHeightOffset;           // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bFixedBarrel;                   // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic) == 0x000008, "Wrong alignment on ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic");
static_assert(sizeof(ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic) == 0x000070, "Wrong size on ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic");
static_assert(offsetof(ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic, EntryPoint) == 0x000000, "Member 'ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic, CallFunc_GetOwningActor_ReturnValue) == 0x000008, "Member 'ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic, CallFunc_GetOwningComponent_ReturnValue) == 0x000010, "Member 'ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic::CallFunc_GetOwningComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic, K2Node_DynamicCast_AsBP_Handgun_Master) == 0x000018, "Member 'ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic::K2Node_DynamicCast_AsBP_Handgun_Master' has a wrong offset!");
static_assert(offsetof(ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic, K2Node_CustomEvent_bVisible) == 0x000021, "Member 'ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic::K2Node_CustomEvent_bVisible' has a wrong offset!");
static_assert(offsetof(ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic, CallFunc_Not_PreBool_ReturnValue) == 0x000022, "Member 'ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic, CallFunc_GetFirstChildInvItemAttachedTo_ReturnValue) == 0x000028, "Member 'ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic::CallFunc_GetFirstChildInvItemAttachedTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic, CallFunc_IsLocal_ReturnValue) == 0x000031, "Member 'ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic::CallFunc_IsLocal_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic, CallFunc_Not_PreBool_ReturnValue_1) == 0x000032, "Member 'ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic, K2Node_Event_ZeroRelativeToSight) == 0x000034, "Member 'ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic::K2Node_Event_ZeroRelativeToSight' has a wrong offset!");
static_assert(offsetof(ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic, K2Node_Event_SightLocationOffset) == 0x000040, "Member 'ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic::K2Node_Event_SightLocationOffset' has a wrong offset!");
static_assert(offsetof(ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic, K2Node_Event_SightRotationOffset) == 0x00004C, "Member 'ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic::K2Node_Event_SightRotationOffset' has a wrong offset!");
static_assert(offsetof(ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic, K2Node_Event_FrontSightPostHeightOffset) == 0x000058, "Member 'ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic::K2Node_Event_FrontSightPostHeightOffset' has a wrong offset!");
static_assert(offsetof(ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic, CallFunc_BreakVector_X) == 0x00005C, "Member 'ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic, CallFunc_BreakVector_Y) == 0x000060, "Member 'ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic, CallFunc_BreakVector_Z) == 0x000064, "Member 'ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic, K2Node_CustomEvent_bFixedBarrel) == 0x000068, "Member 'ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic::K2Node_CustomEvent_bFixedBarrel' has a wrong offset!");
static_assert(offsetof(ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic, CallFunc_Not_PreBool_ReturnValue_2) == 0x000069, "Member 'ABP_Handgun_Generic_C_ExecuteUbergraph_ABP_Handgun_Generic::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");

// Function ABP_Handgun_Generic.ABP_Handgun_Generic_C.SetFixedBarrel
// 0x0001 (0x0001 - 0x0000)
struct ABP_Handgun_Generic_C_SetFixedBarrel final
{
public:
	bool                                          bFixedBarrel;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ABP_Handgun_Generic_C_SetFixedBarrel) == 0x000001, "Wrong alignment on ABP_Handgun_Generic_C_SetFixedBarrel");
static_assert(sizeof(ABP_Handgun_Generic_C_SetFixedBarrel) == 0x000001, "Wrong size on ABP_Handgun_Generic_C_SetFixedBarrel");
static_assert(offsetof(ABP_Handgun_Generic_C_SetFixedBarrel, bFixedBarrel) == 0x000000, "Member 'ABP_Handgun_Generic_C_SetFixedBarrel::bFixedBarrel' has a wrong offset!");

// Function ABP_Handgun_Generic.ABP_Handgun_Generic_C.OnSetFrontSightPostHeightOffset
// 0x0004 (0x0004 - 0x0000)
struct ABP_Handgun_Generic_C_OnSetFrontSightPostHeightOffset final
{
public:
	float                                         FrontSightPostHeightOffset_0;                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Handgun_Generic_C_OnSetFrontSightPostHeightOffset) == 0x000004, "Wrong alignment on ABP_Handgun_Generic_C_OnSetFrontSightPostHeightOffset");
static_assert(sizeof(ABP_Handgun_Generic_C_OnSetFrontSightPostHeightOffset) == 0x000004, "Wrong size on ABP_Handgun_Generic_C_OnSetFrontSightPostHeightOffset");
static_assert(offsetof(ABP_Handgun_Generic_C_OnSetFrontSightPostHeightOffset, FrontSightPostHeightOffset_0) == 0x000000, "Member 'ABP_Handgun_Generic_C_OnSetFrontSightPostHeightOffset::FrontSightPostHeightOffset_0' has a wrong offset!");

// Function ABP_Handgun_Generic.ABP_Handgun_Generic_C.OnIronSightZeroing
// 0x0024 (0x0024 - 0x0000)
struct ABP_Handgun_Generic_C_OnIronSightZeroing final
{
public:
	struct FVector                                ZeroRelativeToSight;                               // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SightLocationOffset;                               // 0x000C(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               SightRotationOffset;                               // 0x0018(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ABP_Handgun_Generic_C_OnIronSightZeroing) == 0x000004, "Wrong alignment on ABP_Handgun_Generic_C_OnIronSightZeroing");
static_assert(sizeof(ABP_Handgun_Generic_C_OnIronSightZeroing) == 0x000024, "Wrong size on ABP_Handgun_Generic_C_OnIronSightZeroing");
static_assert(offsetof(ABP_Handgun_Generic_C_OnIronSightZeroing, ZeroRelativeToSight) == 0x000000, "Member 'ABP_Handgun_Generic_C_OnIronSightZeroing::ZeroRelativeToSight' has a wrong offset!");
static_assert(offsetof(ABP_Handgun_Generic_C_OnIronSightZeroing, SightLocationOffset) == 0x00000C, "Member 'ABP_Handgun_Generic_C_OnIronSightZeroing::SightLocationOffset' has a wrong offset!");
static_assert(offsetof(ABP_Handgun_Generic_C_OnIronSightZeroing, SightRotationOffset) == 0x000018, "Member 'ABP_Handgun_Generic_C_OnIronSightZeroing::SightRotationOffset' has a wrong offset!");

// Function ABP_Handgun_Generic.ABP_Handgun_Generic_C.SetRMRBoneVisibility
// 0x0001 (0x0001 - 0x0000)
struct ABP_Handgun_Generic_C_SetRMRBoneVisibility final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ABP_Handgun_Generic_C_SetRMRBoneVisibility) == 0x000001, "Wrong alignment on ABP_Handgun_Generic_C_SetRMRBoneVisibility");
static_assert(sizeof(ABP_Handgun_Generic_C_SetRMRBoneVisibility) == 0x000001, "Wrong size on ABP_Handgun_Generic_C_SetRMRBoneVisibility");
static_assert(offsetof(ABP_Handgun_Generic_C_SetRMRBoneVisibility, bVisible) == 0x000000, "Member 'ABP_Handgun_Generic_C_SetRMRBoneVisibility::bVisible' has a wrong offset!");

// Function ABP_Handgun_Generic.ABP_Handgun_Generic_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_Handgun_Generic_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_Handgun_Generic_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_Handgun_Generic_C_AnimGraph");
static_assert(sizeof(ABP_Handgun_Generic_C_AnimGraph) == 0x000010, "Wrong size on ABP_Handgun_Generic_C_AnimGraph");
static_assert(offsetof(ABP_Handgun_Generic_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'ABP_Handgun_Generic_C_AnimGraph::AnimGraph_0' has a wrong offset!");

}

