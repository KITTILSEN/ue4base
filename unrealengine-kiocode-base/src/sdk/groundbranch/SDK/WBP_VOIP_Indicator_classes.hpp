﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_VOIP_Indicator

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_VOIP_Indicator.WBP_VOIP_Indicator_C
// 0x0080 (0x02E0 - 0x0260)
class UWBP_VOIP_Indicator_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       PulseRadio;                                        // 0x0260(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       PulseVoice;                                        // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_HearingNote;                                // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_Radio;                                      // 0x0278(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_Voice;                                      // 0x0280(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Radio;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Voice;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_1;                                         // 0x0298(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_DeadChatNote;                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   AllowUnrestrictedVoiceNotEnabled;                  // 0x02A8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   AllowUnrestrictedVoiceEnabled;                     // 0x02C0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsTalking;                                        // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsUsingRadio;                                     // 0x02D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	ESlateVisibility GetTalkVis();
	ESlateVisibility GetRadioVis();
	ESlateVisibility GetHearingNoteVis();
	class FText GetDeadChatNote();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_VOIP_Indicator_C">();
	}
	static class UWBP_VOIP_Indicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_VOIP_Indicator_C>();
	}
};
static_assert(alignof(UWBP_VOIP_Indicator_C) == 0x000008, "Wrong alignment on UWBP_VOIP_Indicator_C");
static_assert(sizeof(UWBP_VOIP_Indicator_C) == 0x0002E0, "Wrong size on UWBP_VOIP_Indicator_C");
static_assert(offsetof(UWBP_VOIP_Indicator_C, PulseRadio) == 0x000260, "Member 'UWBP_VOIP_Indicator_C::PulseRadio' has a wrong offset!");
static_assert(offsetof(UWBP_VOIP_Indicator_C, PulseVoice) == 0x000268, "Member 'UWBP_VOIP_Indicator_C::PulseVoice' has a wrong offset!");
static_assert(offsetof(UWBP_VOIP_Indicator_C, Border_HearingNote) == 0x000270, "Member 'UWBP_VOIP_Indicator_C::Border_HearingNote' has a wrong offset!");
static_assert(offsetof(UWBP_VOIP_Indicator_C, Border_Radio) == 0x000278, "Member 'UWBP_VOIP_Indicator_C::Border_Radio' has a wrong offset!");
static_assert(offsetof(UWBP_VOIP_Indicator_C, Border_Voice) == 0x000280, "Member 'UWBP_VOIP_Indicator_C::Border_Voice' has a wrong offset!");
static_assert(offsetof(UWBP_VOIP_Indicator_C, Image_Radio) == 0x000288, "Member 'UWBP_VOIP_Indicator_C::Image_Radio' has a wrong offset!");
static_assert(offsetof(UWBP_VOIP_Indicator_C, Image_Voice) == 0x000290, "Member 'UWBP_VOIP_Indicator_C::Image_Voice' has a wrong offset!");
static_assert(offsetof(UWBP_VOIP_Indicator_C, SizeBox_1) == 0x000298, "Member 'UWBP_VOIP_Indicator_C::SizeBox_1' has a wrong offset!");
static_assert(offsetof(UWBP_VOIP_Indicator_C, TextBlock_DeadChatNote) == 0x0002A0, "Member 'UWBP_VOIP_Indicator_C::TextBlock_DeadChatNote' has a wrong offset!");
static_assert(offsetof(UWBP_VOIP_Indicator_C, AllowUnrestrictedVoiceNotEnabled) == 0x0002A8, "Member 'UWBP_VOIP_Indicator_C::AllowUnrestrictedVoiceNotEnabled' has a wrong offset!");
static_assert(offsetof(UWBP_VOIP_Indicator_C, AllowUnrestrictedVoiceEnabled) == 0x0002C0, "Member 'UWBP_VOIP_Indicator_C::AllowUnrestrictedVoiceEnabled' has a wrong offset!");
static_assert(offsetof(UWBP_VOIP_Indicator_C, bIsTalking) == 0x0002D8, "Member 'UWBP_VOIP_Indicator_C::bIsTalking' has a wrong offset!");
static_assert(offsetof(UWBP_VOIP_Indicator_C, bIsUsingRadio) == 0x0002D9, "Member 'UWBP_VOIP_Indicator_C::bIsUsingRadio' has a wrong offset!");

}

