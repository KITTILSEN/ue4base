﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_AR15

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "ControlRig_structs.hpp"
#include "Engine_structs.hpp"
#include "GroundBranch_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_AR15.ABP_AR15_C
// 0x0560 (0x0820 - 0x02C0)
class UABP_AR15_C final : public UGBFirearmAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x02F8(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0340(0x00A0)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_1;                 // 0x03E0(0x0050)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator;                   // 0x0430(0x0050)()
	struct FAnimNode_ControlRig                   AnimGraphNode_ControlRig;                          // 0x0480(0x0368)()
	bool                                          __CustomProperty_bDustCoverOpen_923E7B4D5A5C47C1B5778B2936063680; // 0x07E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E9[0x3];                                      // 0x07E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __CustomProperty_SafetyAngle_923E7B4D5A5C47C1B5778B2936063680; // 0x07EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __CustomProperty_FrontSightPostHeightOffset_923E7B4D5A5C47C1B5778B2936063680; // 0x07F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __CustomProperty_RearSightHeightOffset_923E7B4D5A5C47C1B5778B2936063680; // 0x07F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __CustomProperty_bLocallyViewed_923E7B4D5A5C47C1B5778B2936063680; // 0x07F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F9[0x3];                                      // 0x07F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RearSightHeightOffset;                             // 0x07FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FrontSightPostHeightOffset;                        // 0x0800(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SafetyAngle;                                       // 0x0804(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDustCoverOpen;                                    // 0x0808(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_809[0x7];                                      // 0x0809(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 FiringModeSafetyAngles;                            // 0x0810(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_ABP_AR15(int32 EntryPoint);
	void OnFiringModeIndexChanged(uint8 FiringModeIndex);
	void OnSetFrontSightPostHeightOffset(float FrontSightPostHeightOffset_0);
	void OnIronSightZeroing(const struct FVector& ZeroRelativeToSight, const struct FVector& SightLocationOffset, const struct FRotator& SightRotationOffset);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_AR15_C">();
	}
	static class UABP_AR15_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_AR15_C>();
	}
};
static_assert(alignof(UABP_AR15_C) == 0x000010, "Wrong alignment on UABP_AR15_C");
static_assert(sizeof(UABP_AR15_C) == 0x000820, "Wrong size on UABP_AR15_C");
static_assert(offsetof(UABP_AR15_C, UberGraphFrame) == 0x0002C0, "Member 'UABP_AR15_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_AR15_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UABP_AR15_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_AR15_C, AnimGraphNode_Slot) == 0x0002F8, "Member 'UABP_AR15_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_AR15_C, AnimGraphNode_BlendListByBool) == 0x000340, "Member 'UABP_AR15_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_AR15_C, AnimGraphNode_SequenceEvaluator_1) == 0x0003E0, "Member 'UABP_AR15_C::AnimGraphNode_SequenceEvaluator_1' has a wrong offset!");
static_assert(offsetof(UABP_AR15_C, AnimGraphNode_SequenceEvaluator) == 0x000430, "Member 'UABP_AR15_C::AnimGraphNode_SequenceEvaluator' has a wrong offset!");
static_assert(offsetof(UABP_AR15_C, AnimGraphNode_ControlRig) == 0x000480, "Member 'UABP_AR15_C::AnimGraphNode_ControlRig' has a wrong offset!");
static_assert(offsetof(UABP_AR15_C, __CustomProperty_bDustCoverOpen_923E7B4D5A5C47C1B5778B2936063680) == 0x0007E8, "Member 'UABP_AR15_C::__CustomProperty_bDustCoverOpen_923E7B4D5A5C47C1B5778B2936063680' has a wrong offset!");
static_assert(offsetof(UABP_AR15_C, __CustomProperty_SafetyAngle_923E7B4D5A5C47C1B5778B2936063680) == 0x0007EC, "Member 'UABP_AR15_C::__CustomProperty_SafetyAngle_923E7B4D5A5C47C1B5778B2936063680' has a wrong offset!");
static_assert(offsetof(UABP_AR15_C, __CustomProperty_FrontSightPostHeightOffset_923E7B4D5A5C47C1B5778B2936063680) == 0x0007F0, "Member 'UABP_AR15_C::__CustomProperty_FrontSightPostHeightOffset_923E7B4D5A5C47C1B5778B2936063680' has a wrong offset!");
static_assert(offsetof(UABP_AR15_C, __CustomProperty_RearSightHeightOffset_923E7B4D5A5C47C1B5778B2936063680) == 0x0007F4, "Member 'UABP_AR15_C::__CustomProperty_RearSightHeightOffset_923E7B4D5A5C47C1B5778B2936063680' has a wrong offset!");
static_assert(offsetof(UABP_AR15_C, __CustomProperty_bLocallyViewed_923E7B4D5A5C47C1B5778B2936063680) == 0x0007F8, "Member 'UABP_AR15_C::__CustomProperty_bLocallyViewed_923E7B4D5A5C47C1B5778B2936063680' has a wrong offset!");
static_assert(offsetof(UABP_AR15_C, RearSightHeightOffset) == 0x0007FC, "Member 'UABP_AR15_C::RearSightHeightOffset' has a wrong offset!");
static_assert(offsetof(UABP_AR15_C, FrontSightPostHeightOffset) == 0x000800, "Member 'UABP_AR15_C::FrontSightPostHeightOffset' has a wrong offset!");
static_assert(offsetof(UABP_AR15_C, SafetyAngle) == 0x000804, "Member 'UABP_AR15_C::SafetyAngle' has a wrong offset!");
static_assert(offsetof(UABP_AR15_C, bDustCoverOpen) == 0x000808, "Member 'UABP_AR15_C::bDustCoverOpen' has a wrong offset!");
static_assert(offsetof(UABP_AR15_C, FiringModeSafetyAngles) == 0x000810, "Member 'UABP_AR15_C::FiringModeSafetyAngles' has a wrong offset!");

}

