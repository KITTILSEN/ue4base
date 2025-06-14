﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALI_ItemAnimLayers

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ALI_ItemAnimLayers.ALI_ItemAnimLayers_C.HandPose_OverrideState
// 0x0020 (0x0020 - 0x0000)
struct ALI_ItemAnimLayers_C_HandPose_OverrideState final
{
public:
	struct FPoseLink                              InLocomotion;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              HandPose_OverrideState_0;                          // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ALI_ItemAnimLayers_C_HandPose_OverrideState) == 0x000008, "Wrong alignment on ALI_ItemAnimLayers_C_HandPose_OverrideState");
static_assert(sizeof(ALI_ItemAnimLayers_C_HandPose_OverrideState) == 0x000020, "Wrong size on ALI_ItemAnimLayers_C_HandPose_OverrideState");
static_assert(offsetof(ALI_ItemAnimLayers_C_HandPose_OverrideState, InLocomotion) == 0x000000, "Member 'ALI_ItemAnimLayers_C_HandPose_OverrideState::InLocomotion' has a wrong offset!");
static_assert(offsetof(ALI_ItemAnimLayers_C_HandPose_OverrideState, HandPose_OverrideState_0) == 0x000010, "Member 'ALI_ItemAnimLayers_C_HandPose_OverrideState::HandPose_OverrideState_0' has a wrong offset!");

// Function ALI_ItemAnimLayers.ALI_ItemAnimLayers_C.FullBody_PreAim
// 0x0020 (0x0020 - 0x0000)
struct ALI_ItemAnimLayers_C_FullBody_PreAim final
{
public:
	struct FPoseLink                              InPreAim;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              FullBody_PreAim_0;                                 // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ALI_ItemAnimLayers_C_FullBody_PreAim) == 0x000008, "Wrong alignment on ALI_ItemAnimLayers_C_FullBody_PreAim");
static_assert(sizeof(ALI_ItemAnimLayers_C_FullBody_PreAim) == 0x000020, "Wrong size on ALI_ItemAnimLayers_C_FullBody_PreAim");
static_assert(offsetof(ALI_ItemAnimLayers_C_FullBody_PreAim, InPreAim) == 0x000000, "Member 'ALI_ItemAnimLayers_C_FullBody_PreAim::InPreAim' has a wrong offset!");
static_assert(offsetof(ALI_ItemAnimLayers_C_FullBody_PreAim, FullBody_PreAim_0) == 0x000010, "Member 'ALI_ItemAnimLayers_C_FullBody_PreAim::FullBody_PreAim_0' has a wrong offset!");

// Function ALI_ItemAnimLayers.ALI_ItemAnimLayers_C.FullBody_SkeletalControls
// 0x0020 (0x0020 - 0x0000)
struct ALI_ItemAnimLayers_C_FullBody_SkeletalControls final
{
public:
	struct FPoseLink                              InNearFinal;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              FullBody_SkeletalControls_0;                       // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ALI_ItemAnimLayers_C_FullBody_SkeletalControls) == 0x000008, "Wrong alignment on ALI_ItemAnimLayers_C_FullBody_SkeletalControls");
static_assert(sizeof(ALI_ItemAnimLayers_C_FullBody_SkeletalControls) == 0x000020, "Wrong size on ALI_ItemAnimLayers_C_FullBody_SkeletalControls");
static_assert(offsetof(ALI_ItemAnimLayers_C_FullBody_SkeletalControls, InNearFinal) == 0x000000, "Member 'ALI_ItemAnimLayers_C_FullBody_SkeletalControls::InNearFinal' has a wrong offset!");
static_assert(offsetof(ALI_ItemAnimLayers_C_FullBody_SkeletalControls, FullBody_SkeletalControls_0) == 0x000010, "Member 'ALI_ItemAnimLayers_C_FullBody_SkeletalControls::FullBody_SkeletalControls_0' has a wrong offset!");

// Function ALI_ItemAnimLayers.ALI_ItemAnimLayers_C.FullBody_Additives
// 0x0010 (0x0010 - 0x0000)
struct ALI_ItemAnimLayers_C_FullBody_Additives final
{
public:
	struct FPoseLink                              FullBody_Additives_0;                              // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ALI_ItemAnimLayers_C_FullBody_Additives) == 0x000008, "Wrong alignment on ALI_ItemAnimLayers_C_FullBody_Additives");
static_assert(sizeof(ALI_ItemAnimLayers_C_FullBody_Additives) == 0x000010, "Wrong size on ALI_ItemAnimLayers_C_FullBody_Additives");
static_assert(offsetof(ALI_ItemAnimLayers_C_FullBody_Additives, FullBody_Additives_0) == 0x000000, "Member 'ALI_ItemAnimLayers_C_FullBody_Additives::FullBody_Additives_0' has a wrong offset!");

// Function ALI_ItemAnimLayers.ALI_ItemAnimLayers_C.FullBody_Aiming
// 0x0020 (0x0020 - 0x0000)
struct ALI_ItemAnimLayers_C_FullBody_Aiming final
{
public:
	struct FPoseLink                              InUpperbodyLowerbodySplit;                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              FullBody_Aiming_0;                                 // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ALI_ItemAnimLayers_C_FullBody_Aiming) == 0x000008, "Wrong alignment on ALI_ItemAnimLayers_C_FullBody_Aiming");
static_assert(sizeof(ALI_ItemAnimLayers_C_FullBody_Aiming) == 0x000020, "Wrong size on ALI_ItemAnimLayers_C_FullBody_Aiming");
static_assert(offsetof(ALI_ItemAnimLayers_C_FullBody_Aiming, InUpperbodyLowerbodySplit) == 0x000000, "Member 'ALI_ItemAnimLayers_C_FullBody_Aiming::InUpperbodyLowerbodySplit' has a wrong offset!");
static_assert(offsetof(ALI_ItemAnimLayers_C_FullBody_Aiming, FullBody_Aiming_0) == 0x000010, "Member 'ALI_ItemAnimLayers_C_FullBody_Aiming::FullBody_Aiming_0' has a wrong offset!");

// Function ALI_ItemAnimLayers.ALI_ItemAnimLayers_C.FullBody_IdleState
// 0x0010 (0x0010 - 0x0000)
struct ALI_ItemAnimLayers_C_FullBody_IdleState final
{
public:
	struct FPoseLink                              FullBody_IdleState_0;                              // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ALI_ItemAnimLayers_C_FullBody_IdleState) == 0x000008, "Wrong alignment on ALI_ItemAnimLayers_C_FullBody_IdleState");
static_assert(sizeof(ALI_ItemAnimLayers_C_FullBody_IdleState) == 0x000010, "Wrong size on ALI_ItemAnimLayers_C_FullBody_IdleState");
static_assert(offsetof(ALI_ItemAnimLayers_C_FullBody_IdleState, FullBody_IdleState_0) == 0x000000, "Member 'ALI_ItemAnimLayers_C_FullBody_IdleState::FullBody_IdleState_0' has a wrong offset!");

// Function ALI_ItemAnimLayers.ALI_ItemAnimLayers_C.FullBody_ProneIdleState
// 0x0010 (0x0010 - 0x0000)
struct ALI_ItemAnimLayers_C_FullBody_ProneIdleState final
{
public:
	struct FPoseLink                              FullBody_ProneIdleState_0;                         // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ALI_ItemAnimLayers_C_FullBody_ProneIdleState) == 0x000008, "Wrong alignment on ALI_ItemAnimLayers_C_FullBody_ProneIdleState");
static_assert(sizeof(ALI_ItemAnimLayers_C_FullBody_ProneIdleState) == 0x000010, "Wrong size on ALI_ItemAnimLayers_C_FullBody_ProneIdleState");
static_assert(offsetof(ALI_ItemAnimLayers_C_FullBody_ProneIdleState, FullBody_ProneIdleState_0) == 0x000000, "Member 'ALI_ItemAnimLayers_C_FullBody_ProneIdleState::FullBody_ProneIdleState_0' has a wrong offset!");

// Function ALI_ItemAnimLayers.ALI_ItemAnimLayers_C.FullBody_CycleState
// 0x0010 (0x0010 - 0x0000)
struct ALI_ItemAnimLayers_C_FullBody_CycleState final
{
public:
	struct FPoseLink                              FullBody_CycleState_0;                             // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ALI_ItemAnimLayers_C_FullBody_CycleState) == 0x000008, "Wrong alignment on ALI_ItemAnimLayers_C_FullBody_CycleState");
static_assert(sizeof(ALI_ItemAnimLayers_C_FullBody_CycleState) == 0x000010, "Wrong size on ALI_ItemAnimLayers_C_FullBody_CycleState");
static_assert(offsetof(ALI_ItemAnimLayers_C_FullBody_CycleState, FullBody_CycleState_0) == 0x000000, "Member 'ALI_ItemAnimLayers_C_FullBody_CycleState::FullBody_CycleState_0' has a wrong offset!");

// Function ALI_ItemAnimLayers.ALI_ItemAnimLayers_C.FullBody_ProneCycleState
// 0x0010 (0x0010 - 0x0000)
struct ALI_ItemAnimLayers_C_FullBody_ProneCycleState final
{
public:
	struct FPoseLink                              FullBody_ProneCycleState_0;                        // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ALI_ItemAnimLayers_C_FullBody_ProneCycleState) == 0x000008, "Wrong alignment on ALI_ItemAnimLayers_C_FullBody_ProneCycleState");
static_assert(sizeof(ALI_ItemAnimLayers_C_FullBody_ProneCycleState) == 0x000010, "Wrong size on ALI_ItemAnimLayers_C_FullBody_ProneCycleState");
static_assert(offsetof(ALI_ItemAnimLayers_C_FullBody_ProneCycleState, FullBody_ProneCycleState_0) == 0x000000, "Member 'ALI_ItemAnimLayers_C_FullBody_ProneCycleState::FullBody_ProneCycleState_0' has a wrong offset!");

// Function ALI_ItemAnimLayers.ALI_ItemAnimLayers_C.FullBody_SprintCycleState
// 0x0010 (0x0010 - 0x0000)
struct ALI_ItemAnimLayers_C_FullBody_SprintCycleState final
{
public:
	struct FPoseLink                              FullBody_SprintCycleState_0;                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ALI_ItemAnimLayers_C_FullBody_SprintCycleState) == 0x000008, "Wrong alignment on ALI_ItemAnimLayers_C_FullBody_SprintCycleState");
static_assert(sizeof(ALI_ItemAnimLayers_C_FullBody_SprintCycleState) == 0x000010, "Wrong size on ALI_ItemAnimLayers_C_FullBody_SprintCycleState");
static_assert(offsetof(ALI_ItemAnimLayers_C_FullBody_SprintCycleState, FullBody_SprintCycleState_0) == 0x000000, "Member 'ALI_ItemAnimLayers_C_FullBody_SprintCycleState::FullBody_SprintCycleState_0' has a wrong offset!");

}

