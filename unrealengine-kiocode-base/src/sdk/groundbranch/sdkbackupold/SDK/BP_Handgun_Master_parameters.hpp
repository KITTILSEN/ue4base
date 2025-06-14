﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Handgun_Master

#include "Basic.hpp"

#include "GroundBranch_structs.hpp"


namespace SDK::Params
{

// Function BP_Handgun_Master.BP_Handgun_Master_C.ExecuteUbergraph_BP_Handgun_Master
// 0x00C8 (0x00C8 - 0x0000)
struct BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGBCharacter*                           CallFunc_GetGBInstigator_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetEngagedAlpha_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetOffTargetAlpha_ReturnValue;            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue_1;     // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_23[0x5];                                       // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBInvItem*                             K2Node_Event_AddedChild;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBPlayerController*                    K2Node_DynamicCast_AsGBPlayer_Controller;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetAttachParentSocketName_ReturnValue;    // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGBHUD*                                 CallFunc_GetGBHUD_ReturnValue;                     // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBInvItem*                             K2Node_Event_RemovedChild;                         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetAttachParentSocketName_ReturnValue_1;  // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bVisible;                       // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E[0x2];                                       // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UGBFirearmAnimInstance*                 CallFunc_GetFirearmAnimInstance_ReturnValue;       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UABP_Handgun_Generic_C*                 K2Node_DynamicCast_AsABP_Handgun_Generic;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBCharacter*                           CallFunc_GetGBInstigator_ReturnValue_1;            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGBPlayerController*                    K2Node_DynamicCast_AsGBPlayer_Controller_1;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A2[0x6];                                       // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AGBHUD*                                 CallFunc_GetGBHUD_ReturnValue_1;                   // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HintValid_ReturnValue;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocalPlayerController_ReturnValue;      // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master) == 0x000008, "Wrong alignment on BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master");
static_assert(sizeof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master) == 0x0000C8, "Wrong size on BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, EntryPoint) == 0x000000, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, CallFunc_GetGBInstigator_ReturnValue) == 0x000008, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::CallFunc_GetGBInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, CallFunc_IsDedicatedServer_ReturnValue) == 0x000010, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, CallFunc_GetEngagedAlpha_ReturnValue) == 0x000014, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::CallFunc_GetEngagedAlpha_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000018, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, CallFunc_GetOffTargetAlpha_ReturnValue) == 0x00001C, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::CallFunc_GetOffTargetAlpha_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000020, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, CallFunc_NearlyEqual_FloatFloat_ReturnValue_1) == 0x000021, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::CallFunc_NearlyEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, CallFunc_BooleanAND_ReturnValue) == 0x000022, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, CallFunc_GetPlayerController_ReturnValue) == 0x000028, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, K2Node_Event_AddedChild) == 0x000030, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::K2Node_Event_AddedChild' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, K2Node_DynamicCast_AsGBPlayer_Controller) == 0x000038, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::K2Node_DynamicCast_AsGBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, CallFunc_GetAttachParentSocketName_ReturnValue) == 0x000044, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::CallFunc_GetAttachParentSocketName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, CallFunc_GetGBHUD_ReturnValue) == 0x000050, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::CallFunc_GetGBHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, K2Node_Event_RemovedChild) == 0x000058, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::K2Node_Event_RemovedChild' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000060, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, CallFunc_GetAttachParentSocketName_ReturnValue_1) == 0x000064, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::CallFunc_GetAttachParentSocketName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, K2Node_CustomEvent_bVisible) == 0x00006C, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::K2Node_CustomEvent_bVisible' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x00006D, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, CallFunc_GetFirearmAnimInstance_ReturnValue) == 0x000070, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::CallFunc_GetFirearmAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, K2Node_DynamicCast_AsABP_Handgun_Generic) == 0x000078, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::K2Node_DynamicCast_AsABP_Handgun_Generic' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, CallFunc_GetPlayerController_ReturnValue_1) == 0x000088, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, CallFunc_GetGBInstigator_ReturnValue_1) == 0x000090, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::CallFunc_GetGBInstigator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, K2Node_DynamicCast_AsGBPlayer_Controller_1) == 0x000098, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::K2Node_DynamicCast_AsGBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, K2Node_DynamicCast_bSuccess_2) == 0x0000A0, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, CallFunc_IsValid_ReturnValue) == 0x0000A1, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, CallFunc_GetGBHUD_ReturnValue_1) == 0x0000A8, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::CallFunc_GetGBHUD_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, CallFunc_HintValid_ReturnValue) == 0x0000B0, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::CallFunc_HintValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, CallFunc_GetController_ReturnValue) == 0x0000B8, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, CallFunc_IsValid_ReturnValue_1) == 0x0000C0, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master, CallFunc_IsLocalPlayerController_ReturnValue) == 0x0000C1, "Member 'BP_Handgun_Master_C_ExecuteUbergraph_BP_Handgun_Master::CallFunc_IsLocalPlayerController_ReturnValue' has a wrong offset!");

// Function BP_Handgun_Master.BP_Handgun_Master_C.SetRMRBoneVisibility
// 0x0001 (0x0001 - 0x0000)
struct BP_Handgun_Master_C_SetRMRBoneVisibility final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Handgun_Master_C_SetRMRBoneVisibility) == 0x000001, "Wrong alignment on BP_Handgun_Master_C_SetRMRBoneVisibility");
static_assert(sizeof(BP_Handgun_Master_C_SetRMRBoneVisibility) == 0x000001, "Wrong size on BP_Handgun_Master_C_SetRMRBoneVisibility");
static_assert(offsetof(BP_Handgun_Master_C_SetRMRBoneVisibility, bVisible) == 0x000000, "Member 'BP_Handgun_Master_C_SetRMRBoneVisibility::bVisible' has a wrong offset!");

// Function BP_Handgun_Master.BP_Handgun_Master_C.OnRemovingChild
// 0x0008 (0x0008 - 0x0000)
struct BP_Handgun_Master_C_OnRemovingChild final
{
public:
	class AGBInvItem*                             RemovedChild;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Handgun_Master_C_OnRemovingChild) == 0x000008, "Wrong alignment on BP_Handgun_Master_C_OnRemovingChild");
static_assert(sizeof(BP_Handgun_Master_C_OnRemovingChild) == 0x000008, "Wrong size on BP_Handgun_Master_C_OnRemovingChild");
static_assert(offsetof(BP_Handgun_Master_C_OnRemovingChild, RemovedChild) == 0x000000, "Member 'BP_Handgun_Master_C_OnRemovingChild::RemovedChild' has a wrong offset!");

// Function BP_Handgun_Master.BP_Handgun_Master_C.OnAddingChild
// 0x0008 (0x0008 - 0x0000)
struct BP_Handgun_Master_C_OnAddingChild final
{
public:
	class AGBInvItem*                             AddedChild;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Handgun_Master_C_OnAddingChild) == 0x000008, "Wrong alignment on BP_Handgun_Master_C_OnAddingChild");
static_assert(sizeof(BP_Handgun_Master_C_OnAddingChild) == 0x000008, "Wrong size on BP_Handgun_Master_C_OnAddingChild");
static_assert(offsetof(BP_Handgun_Master_C_OnAddingChild, AddedChild) == 0x000000, "Member 'BP_Handgun_Master_C_OnAddingChild::AddedChild' has a wrong offset!");

// Function BP_Handgun_Master.BP_Handgun_Master_C.GetWeaponsPositionTransitionTime
// 0x0014 (0x0014 - 0x0000)
struct BP_Handgun_Master_C_GetWeaponsPositionTransitionTime final
{
public:
	EGBWeaponPosition                             FromPosition;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGBWeaponPosition                             ToPosition;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalTime;                                         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_3;                    // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_4;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Handgun_Master_C_GetWeaponsPositionTransitionTime) == 0x000004, "Wrong alignment on BP_Handgun_Master_C_GetWeaponsPositionTransitionTime");
static_assert(sizeof(BP_Handgun_Master_C_GetWeaponsPositionTransitionTime) == 0x000014, "Wrong size on BP_Handgun_Master_C_GetWeaponsPositionTransitionTime");
static_assert(offsetof(BP_Handgun_Master_C_GetWeaponsPositionTransitionTime, FromPosition) == 0x000000, "Member 'BP_Handgun_Master_C_GetWeaponsPositionTransitionTime::FromPosition' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_GetWeaponsPositionTransitionTime, ToPosition) == 0x000001, "Member 'BP_Handgun_Master_C_GetWeaponsPositionTransitionTime::ToPosition' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_GetWeaponsPositionTransitionTime, ReturnValue) == 0x000004, "Member 'BP_Handgun_Master_C_GetWeaponsPositionTransitionTime::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_GetWeaponsPositionTransitionTime, LocalTime) == 0x000008, "Member 'BP_Handgun_Master_C_GetWeaponsPositionTransitionTime::LocalTime' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_GetWeaponsPositionTransitionTime, K2Node_SwitchEnum_CmpSuccess) == 0x00000C, "Member 'BP_Handgun_Master_C_GetWeaponsPositionTransitionTime::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_GetWeaponsPositionTransitionTime, K2Node_SwitchEnum_CmpSuccess_1) == 0x00000D, "Member 'BP_Handgun_Master_C_GetWeaponsPositionTransitionTime::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_GetWeaponsPositionTransitionTime, K2Node_SwitchEnum_CmpSuccess_2) == 0x00000E, "Member 'BP_Handgun_Master_C_GetWeaponsPositionTransitionTime::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_GetWeaponsPositionTransitionTime, K2Node_SwitchEnum_CmpSuccess_3) == 0x00000F, "Member 'BP_Handgun_Master_C_GetWeaponsPositionTransitionTime::K2Node_SwitchEnum_CmpSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_Handgun_Master_C_GetWeaponsPositionTransitionTime, K2Node_SwitchEnum_CmpSuccess_4) == 0x000010, "Member 'BP_Handgun_Master_C_GetWeaponsPositionTransitionTime::K2Node_SwitchEnum_CmpSuccess_4' has a wrong offset!");

}

