﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RoundStage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_RoundStage.WBP_RoundStage_C
// 0x0090 (0x02F0 - 0x0260)
class UWBP_RoundStage_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeAway;                                          // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Stage;                                   // 0x0270(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   RoundStageText;                                    // 0x0278(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	float                                         TimeToFormMessage;                                 // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         AutoHideTime;                                      // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class FText>                           StageDisplayNames;                                 // 0x0298(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         StageIndex;                                        // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AC[0x4];                                      // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   UnknownTime;                                       // 0x02B0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         TextLength;                                        // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CC[0x4];                                      // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Blip;                                              // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Timer_DisplayText;                                 // 0x02D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         RoundTime;                                         // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFading;                                           // 0x02E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E5[0x3];                                      // 0x02E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           AkComponent;                                       // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_RoundStage(int32 EntryPoint);
	void Construct();
	void OnInitialized();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnAnimationFinished_Event_0();
	void Hide();
	void DisplayText();
	class FText GetTimeText();
	void GetText(class FText* OurText);
	class FText GetFinalText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RoundStage_C">();
	}
	static class UWBP_RoundStage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RoundStage_C>();
	}
};
static_assert(alignof(UWBP_RoundStage_C) == 0x000008, "Wrong alignment on UWBP_RoundStage_C");
static_assert(sizeof(UWBP_RoundStage_C) == 0x0002F0, "Wrong size on UWBP_RoundStage_C");
static_assert(offsetof(UWBP_RoundStage_C, UberGraphFrame) == 0x000260, "Member 'UWBP_RoundStage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_RoundStage_C, FadeAway) == 0x000268, "Member 'UWBP_RoundStage_C::FadeAway' has a wrong offset!");
static_assert(offsetof(UWBP_RoundStage_C, TextBlock_Stage) == 0x000270, "Member 'UWBP_RoundStage_C::TextBlock_Stage' has a wrong offset!");
static_assert(offsetof(UWBP_RoundStage_C, RoundStageText) == 0x000278, "Member 'UWBP_RoundStage_C::RoundStageText' has a wrong offset!");
static_assert(offsetof(UWBP_RoundStage_C, TimeToFormMessage) == 0x000290, "Member 'UWBP_RoundStage_C::TimeToFormMessage' has a wrong offset!");
static_assert(offsetof(UWBP_RoundStage_C, AutoHideTime) == 0x000294, "Member 'UWBP_RoundStage_C::AutoHideTime' has a wrong offset!");
static_assert(offsetof(UWBP_RoundStage_C, StageDisplayNames) == 0x000298, "Member 'UWBP_RoundStage_C::StageDisplayNames' has a wrong offset!");
static_assert(offsetof(UWBP_RoundStage_C, StageIndex) == 0x0002A8, "Member 'UWBP_RoundStage_C::StageIndex' has a wrong offset!");
static_assert(offsetof(UWBP_RoundStage_C, UnknownTime) == 0x0002B0, "Member 'UWBP_RoundStage_C::UnknownTime' has a wrong offset!");
static_assert(offsetof(UWBP_RoundStage_C, TextLength) == 0x0002C8, "Member 'UWBP_RoundStage_C::TextLength' has a wrong offset!");
static_assert(offsetof(UWBP_RoundStage_C, Blip) == 0x0002D0, "Member 'UWBP_RoundStage_C::Blip' has a wrong offset!");
static_assert(offsetof(UWBP_RoundStage_C, Timer_DisplayText) == 0x0002D8, "Member 'UWBP_RoundStage_C::Timer_DisplayText' has a wrong offset!");
static_assert(offsetof(UWBP_RoundStage_C, RoundTime) == 0x0002E0, "Member 'UWBP_RoundStage_C::RoundTime' has a wrong offset!");
static_assert(offsetof(UWBP_RoundStage_C, bFading) == 0x0002E4, "Member 'UWBP_RoundStage_C::bFading' has a wrong offset!");
static_assert(offsetof(UWBP_RoundStage_C, AkComponent) == 0x0002E8, "Member 'UWBP_RoundStage_C::AkComponent' has a wrong offset!");

}

