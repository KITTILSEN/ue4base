﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_G3

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ABP_G3.ABP_G3_C.ExecuteUbergraph_ABP_G3
// 0x0044 (0x0044 - 0x0000)
struct ABP_G3_C_ExecuteUbergraph_ABP_G3 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_ZeroRelativeToSight;                  // 0x0004(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_SightLocationOffset;                  // 0x0010(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_Event_SightRotationOffset;                  // 0x001C(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_FrontSightPostHeightOffset;           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         K2Node_Event_FiringModeIndex;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ABP_G3_C_ExecuteUbergraph_ABP_G3) == 0x000004, "Wrong alignment on ABP_G3_C_ExecuteUbergraph_ABP_G3");
static_assert(sizeof(ABP_G3_C_ExecuteUbergraph_ABP_G3) == 0x000044, "Wrong size on ABP_G3_C_ExecuteUbergraph_ABP_G3");
static_assert(offsetof(ABP_G3_C_ExecuteUbergraph_ABP_G3, EntryPoint) == 0x000000, "Member 'ABP_G3_C_ExecuteUbergraph_ABP_G3::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_G3_C_ExecuteUbergraph_ABP_G3, K2Node_Event_ZeroRelativeToSight) == 0x000004, "Member 'ABP_G3_C_ExecuteUbergraph_ABP_G3::K2Node_Event_ZeroRelativeToSight' has a wrong offset!");
static_assert(offsetof(ABP_G3_C_ExecuteUbergraph_ABP_G3, K2Node_Event_SightLocationOffset) == 0x000010, "Member 'ABP_G3_C_ExecuteUbergraph_ABP_G3::K2Node_Event_SightLocationOffset' has a wrong offset!");
static_assert(offsetof(ABP_G3_C_ExecuteUbergraph_ABP_G3, K2Node_Event_SightRotationOffset) == 0x00001C, "Member 'ABP_G3_C_ExecuteUbergraph_ABP_G3::K2Node_Event_SightRotationOffset' has a wrong offset!");
static_assert(offsetof(ABP_G3_C_ExecuteUbergraph_ABP_G3, K2Node_Event_FrontSightPostHeightOffset) == 0x000028, "Member 'ABP_G3_C_ExecuteUbergraph_ABP_G3::K2Node_Event_FrontSightPostHeightOffset' has a wrong offset!");
static_assert(offsetof(ABP_G3_C_ExecuteUbergraph_ABP_G3, CallFunc_BreakVector_X) == 0x00002C, "Member 'ABP_G3_C_ExecuteUbergraph_ABP_G3::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(ABP_G3_C_ExecuteUbergraph_ABP_G3, CallFunc_BreakVector_Y) == 0x000030, "Member 'ABP_G3_C_ExecuteUbergraph_ABP_G3::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(ABP_G3_C_ExecuteUbergraph_ABP_G3, CallFunc_BreakVector_Z) == 0x000034, "Member 'ABP_G3_C_ExecuteUbergraph_ABP_G3::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(ABP_G3_C_ExecuteUbergraph_ABP_G3, K2Node_Event_FiringModeIndex) == 0x000038, "Member 'ABP_G3_C_ExecuteUbergraph_ABP_G3::K2Node_Event_FiringModeIndex' has a wrong offset!");
static_assert(offsetof(ABP_G3_C_ExecuteUbergraph_ABP_G3, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00003C, "Member 'ABP_G3_C_ExecuteUbergraph_ABP_G3::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_G3_C_ExecuteUbergraph_ABP_G3, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000040, "Member 'ABP_G3_C_ExecuteUbergraph_ABP_G3::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function ABP_G3.ABP_G3_C.OnFiringModeIndexChanged
// 0x0001 (0x0001 - 0x0000)
struct ABP_G3_C_OnFiringModeIndexChanged final
{
public:
	uint8                                         FiringModeIndex;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_G3_C_OnFiringModeIndexChanged) == 0x000001, "Wrong alignment on ABP_G3_C_OnFiringModeIndexChanged");
static_assert(sizeof(ABP_G3_C_OnFiringModeIndexChanged) == 0x000001, "Wrong size on ABP_G3_C_OnFiringModeIndexChanged");
static_assert(offsetof(ABP_G3_C_OnFiringModeIndexChanged, FiringModeIndex) == 0x000000, "Member 'ABP_G3_C_OnFiringModeIndexChanged::FiringModeIndex' has a wrong offset!");

// Function ABP_G3.ABP_G3_C.OnSetFrontSightPostHeightOffset
// 0x0004 (0x0004 - 0x0000)
struct ABP_G3_C_OnSetFrontSightPostHeightOffset final
{
public:
	float                                         FrontSightPostHeightOffset_0;                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_G3_C_OnSetFrontSightPostHeightOffset) == 0x000004, "Wrong alignment on ABP_G3_C_OnSetFrontSightPostHeightOffset");
static_assert(sizeof(ABP_G3_C_OnSetFrontSightPostHeightOffset) == 0x000004, "Wrong size on ABP_G3_C_OnSetFrontSightPostHeightOffset");
static_assert(offsetof(ABP_G3_C_OnSetFrontSightPostHeightOffset, FrontSightPostHeightOffset_0) == 0x000000, "Member 'ABP_G3_C_OnSetFrontSightPostHeightOffset::FrontSightPostHeightOffset_0' has a wrong offset!");

// Function ABP_G3.ABP_G3_C.OnIronSightZeroing
// 0x0024 (0x0024 - 0x0000)
struct ABP_G3_C_OnIronSightZeroing final
{
public:
	struct FVector                                ZeroRelativeToSight;                               // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SightLocationOffset;                               // 0x000C(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               SightRotationOffset;                               // 0x0018(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ABP_G3_C_OnIronSightZeroing) == 0x000004, "Wrong alignment on ABP_G3_C_OnIronSightZeroing");
static_assert(sizeof(ABP_G3_C_OnIronSightZeroing) == 0x000024, "Wrong size on ABP_G3_C_OnIronSightZeroing");
static_assert(offsetof(ABP_G3_C_OnIronSightZeroing, ZeroRelativeToSight) == 0x000000, "Member 'ABP_G3_C_OnIronSightZeroing::ZeroRelativeToSight' has a wrong offset!");
static_assert(offsetof(ABP_G3_C_OnIronSightZeroing, SightLocationOffset) == 0x00000C, "Member 'ABP_G3_C_OnIronSightZeroing::SightLocationOffset' has a wrong offset!");
static_assert(offsetof(ABP_G3_C_OnIronSightZeroing, SightRotationOffset) == 0x000018, "Member 'ABP_G3_C_OnIronSightZeroing::SightRotationOffset' has a wrong offset!");

// Function ABP_G3.ABP_G3_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_G3_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_G3_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_G3_C_AnimGraph");
static_assert(sizeof(ABP_G3_C_AnimGraph) == 0x000010, "Wrong size on ABP_G3_C_AnimGraph");
static_assert(offsetof(ABP_G3_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'ABP_G3_C_AnimGraph::AnimGraph_0' has a wrong offset!");

}

