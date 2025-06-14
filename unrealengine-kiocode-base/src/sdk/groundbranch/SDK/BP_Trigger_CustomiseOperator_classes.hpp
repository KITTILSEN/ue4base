﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Trigger_CustomiseOperator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Trigger_ReadyRoom_Master_classes.hpp"
#include "GroundBranch_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Trigger_CustomiseOperator.BP_Trigger_CustomiseOperator_C
// 0x0040 (0x0278 - 0x0238)
class ABP_Trigger_CustomiseOperator_C final : public ABP_Trigger_ReadyRoom_Master_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Trigger_CustomiseOperator_C;     // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Arrow;                                             // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          AddUsagePrompt;                                    // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_249[0x7];                                      // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           TimerHandle_Reapply;                               // 0x0250(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                   ReapplyMessage;                                    // 0x0258(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_CustomiseOperator_C*               CustomiseOperatorWidgetRef;                        // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Trigger_CustomiseOperator(int32 EntryPoint);
	void OnPlayerReadyRoomStatusChanged_Event_1(class AGBPlayerState* PlayerState);
	void OnPlayerReadyRoomStatusChanged_Event_0(class AGBPlayerState* PlayerState);
	void ReapplyCharacterLoadout();
	void OnDone_Event_0();
	void RRSkyLightCheck(bool bVisible);
	void ReceiveBeginPlay();
	void ExitedOnLocal(class AGBPlayerController* GBPlayerController, bool bPositiveExit);
	void EnteredOnLocal(class AGBPlayerController* GBPlayerController);
	void InpActEvt_Interact_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpActEvt_Interact_K2Node_InputActionEvent_1(const struct FKey& Key);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Trigger_CustomiseOperator_C">();
	}
	static class ABP_Trigger_CustomiseOperator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Trigger_CustomiseOperator_C>();
	}
};
static_assert(alignof(ABP_Trigger_CustomiseOperator_C) == 0x000008, "Wrong alignment on ABP_Trigger_CustomiseOperator_C");
static_assert(sizeof(ABP_Trigger_CustomiseOperator_C) == 0x000278, "Wrong size on ABP_Trigger_CustomiseOperator_C");
static_assert(offsetof(ABP_Trigger_CustomiseOperator_C, UberGraphFrame_BP_Trigger_CustomiseOperator_C) == 0x000238, "Member 'ABP_Trigger_CustomiseOperator_C::UberGraphFrame_BP_Trigger_CustomiseOperator_C' has a wrong offset!");
static_assert(offsetof(ABP_Trigger_CustomiseOperator_C, Arrow) == 0x000240, "Member 'ABP_Trigger_CustomiseOperator_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_Trigger_CustomiseOperator_C, AddUsagePrompt) == 0x000248, "Member 'ABP_Trigger_CustomiseOperator_C::AddUsagePrompt' has a wrong offset!");
static_assert(offsetof(ABP_Trigger_CustomiseOperator_C, TimerHandle_Reapply) == 0x000250, "Member 'ABP_Trigger_CustomiseOperator_C::TimerHandle_Reapply' has a wrong offset!");
static_assert(offsetof(ABP_Trigger_CustomiseOperator_C, ReapplyMessage) == 0x000258, "Member 'ABP_Trigger_CustomiseOperator_C::ReapplyMessage' has a wrong offset!");
static_assert(offsetof(ABP_Trigger_CustomiseOperator_C, CustomiseOperatorWidgetRef) == 0x000270, "Member 'ABP_Trigger_CustomiseOperator_C::CustomiseOperatorWidgetRef' has a wrong offset!");

}

