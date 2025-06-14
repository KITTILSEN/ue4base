﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Handgun_Generic

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "ControlRig_structs.hpp"
#include "Engine_structs.hpp"
#include "GroundBranch_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Handgun_Generic.ABP_Handgun_Generic_C
// 0x0550 (0x0810 - 0x02C0)
class UABP_Handgun_Generic_C final : public UGBFirearmAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x02F8(0x0048)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_1;                 // 0x0340(0x0050)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator;                   // 0x0390(0x0050)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x03E0(0x00A0)()
	struct FAnimNode_ControlRig                   AnimGraphNode_ControlRig;                          // 0x0480(0x0368)()
	bool                                          __CustomProperty_bHideRMRBone_369D85C00EE948E69C440B4EFE60744F; // 0x07E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          __CustomProperty_bAnimateBarrelTilt_369D85C00EE948E69C440B4EFE60744F; // 0x07E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7EA[0x2];                                      // 0x07EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __CustomProperty_FrontSightPostHeightOffset_369D85C00EE948E69C440B4EFE60744F; // 0x07EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __CustomProperty_RearSightHeightOffset_369D85C00EE948E69C440B4EFE60744F; // 0x07F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __CustomProperty_bLocallyViewed_369D85C00EE948E69C440B4EFE60744F; // 0x07F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bHideRMRBone;                                      // 0x07F5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F6[0x2];                                      // 0x07F6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FrontSightPostHeightOffset;                        // 0x07F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RearSightHeightOffset;                             // 0x07FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAnimateBarrelTilt;                                // 0x0800(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ABP_Handgun_Generic(int32 EntryPoint);
	void SetFixedBarrel(bool bFixedBarrel);
	void OnSetFrontSightPostHeightOffset(float FrontSightPostHeightOffset_0);
	void OnIronSightZeroing(const struct FVector& ZeroRelativeToSight, const struct FVector& SightLocationOffset, const struct FRotator& SightRotationOffset);
	void BlueprintInitializeAnimation();
	void SetRMRBoneVisibility(bool bVisible);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Handgun_Generic_C">();
	}
	static class UABP_Handgun_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Handgun_Generic_C>();
	}
};
static_assert(alignof(UABP_Handgun_Generic_C) == 0x000010, "Wrong alignment on UABP_Handgun_Generic_C");
static_assert(sizeof(UABP_Handgun_Generic_C) == 0x000810, "Wrong size on UABP_Handgun_Generic_C");
static_assert(offsetof(UABP_Handgun_Generic_C, UberGraphFrame) == 0x0002C0, "Member 'UABP_Handgun_Generic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Handgun_Generic_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UABP_Handgun_Generic_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Handgun_Generic_C, AnimGraphNode_Slot) == 0x0002F8, "Member 'UABP_Handgun_Generic_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_Handgun_Generic_C, AnimGraphNode_SequenceEvaluator_1) == 0x000340, "Member 'UABP_Handgun_Generic_C::AnimGraphNode_SequenceEvaluator_1' has a wrong offset!");
static_assert(offsetof(UABP_Handgun_Generic_C, AnimGraphNode_SequenceEvaluator) == 0x000390, "Member 'UABP_Handgun_Generic_C::AnimGraphNode_SequenceEvaluator' has a wrong offset!");
static_assert(offsetof(UABP_Handgun_Generic_C, AnimGraphNode_BlendListByBool) == 0x0003E0, "Member 'UABP_Handgun_Generic_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_Handgun_Generic_C, AnimGraphNode_ControlRig) == 0x000480, "Member 'UABP_Handgun_Generic_C::AnimGraphNode_ControlRig' has a wrong offset!");
static_assert(offsetof(UABP_Handgun_Generic_C, __CustomProperty_bHideRMRBone_369D85C00EE948E69C440B4EFE60744F) == 0x0007E8, "Member 'UABP_Handgun_Generic_C::__CustomProperty_bHideRMRBone_369D85C00EE948E69C440B4EFE60744F' has a wrong offset!");
static_assert(offsetof(UABP_Handgun_Generic_C, __CustomProperty_bAnimateBarrelTilt_369D85C00EE948E69C440B4EFE60744F) == 0x0007E9, "Member 'UABP_Handgun_Generic_C::__CustomProperty_bAnimateBarrelTilt_369D85C00EE948E69C440B4EFE60744F' has a wrong offset!");
static_assert(offsetof(UABP_Handgun_Generic_C, __CustomProperty_FrontSightPostHeightOffset_369D85C00EE948E69C440B4EFE60744F) == 0x0007EC, "Member 'UABP_Handgun_Generic_C::__CustomProperty_FrontSightPostHeightOffset_369D85C00EE948E69C440B4EFE60744F' has a wrong offset!");
static_assert(offsetof(UABP_Handgun_Generic_C, __CustomProperty_RearSightHeightOffset_369D85C00EE948E69C440B4EFE60744F) == 0x0007F0, "Member 'UABP_Handgun_Generic_C::__CustomProperty_RearSightHeightOffset_369D85C00EE948E69C440B4EFE60744F' has a wrong offset!");
static_assert(offsetof(UABP_Handgun_Generic_C, __CustomProperty_bLocallyViewed_369D85C00EE948E69C440B4EFE60744F) == 0x0007F4, "Member 'UABP_Handgun_Generic_C::__CustomProperty_bLocallyViewed_369D85C00EE948E69C440B4EFE60744F' has a wrong offset!");
static_assert(offsetof(UABP_Handgun_Generic_C, bHideRMRBone) == 0x0007F5, "Member 'UABP_Handgun_Generic_C::bHideRMRBone' has a wrong offset!");
static_assert(offsetof(UABP_Handgun_Generic_C, FrontSightPostHeightOffset) == 0x0007F8, "Member 'UABP_Handgun_Generic_C::FrontSightPostHeightOffset' has a wrong offset!");
static_assert(offsetof(UABP_Handgun_Generic_C, RearSightHeightOffset) == 0x0007FC, "Member 'UABP_Handgun_Generic_C::RearSightHeightOffset' has a wrong offset!");
static_assert(offsetof(UABP_Handgun_Generic_C, bAnimateBarrelTilt) == 0x000800, "Member 'UABP_Handgun_Generic_C::bAnimateBarrelTilt' has a wrong offset!");

}

