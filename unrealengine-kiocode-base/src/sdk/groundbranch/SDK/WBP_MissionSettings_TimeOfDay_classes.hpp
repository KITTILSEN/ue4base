﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MissionSettings_TimeOfDay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "GroundBranch_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MissionSettings_TimeOfDay.WBP_MissionSettings_TimeOfDay_C
// 0x00A8 (0x0308 - 0x0260)
class UWBP_MissionSettings_TimeOfDay_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                ConfigTimeOfDay;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_42;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_DisplayName;                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TimeOfDayText;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 Value;                                             // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 GameModeName;                                      // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bUseConfigValue;                                   // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 NewValue;                                          // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(const class FString& Option)> OnSettingChanged;                    // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FString>                         PossibleDefaultTimeOfDays;                         // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 InitialValue;                                      // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bTrainingMode;                                     // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_2F1[0x7];                                      // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_MissionSettings_TimeOfDayPopUp_C*  PopUpWidgetReference;                              // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHideLabel;                                        // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void GetTimeText(const class FString& TimeOfDayString, class FText* TimeText);
	void GetWeatherSettingWidget(class UWBP_MissionSettings_Weather_C** WeatherWidget);
	void Get_Validated_Military_Time(const class FString& InputTimeString, class FString* ValidatedInputTime);
	class UWidget* Get_EditableTextBox_String_HintText_0();
	void Construct();
	void RevertMissionTimeOfDay();
	void SyncMissionTimeOfDay();
	void BndEvt__WBP_MissionSettings_TimeOfDay_ConfigTimeOfDay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PopUpSetNewValue(const class FString& NewValue_0);
	void BindToPopUp(class UWBP_MissionSettings_TimeOfDayPopUp_C* SettingsWidget);
	void ReceiveSettingsFromPopUp(const class FString& TimeOfDaySetting, const class FString& WeatherSetting);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_MissionSettings_TimeOfDay(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MissionSettings_TimeOfDay_C">();
	}
	static class UWBP_MissionSettings_TimeOfDay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MissionSettings_TimeOfDay_C>();
	}
};
static_assert(alignof(UWBP_MissionSettings_TimeOfDay_C) == 0x000008, "Wrong alignment on UWBP_MissionSettings_TimeOfDay_C");
static_assert(sizeof(UWBP_MissionSettings_TimeOfDay_C) == 0x000308, "Wrong size on UWBP_MissionSettings_TimeOfDay_C");
static_assert(offsetof(UWBP_MissionSettings_TimeOfDay_C, UberGraphFrame) == 0x000260, "Member 'UWBP_MissionSettings_TimeOfDay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_TimeOfDay_C, ConfigTimeOfDay) == 0x000268, "Member 'UWBP_MissionSettings_TimeOfDay_C::ConfigTimeOfDay' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_TimeOfDay_C, Image_42) == 0x000270, "Member 'UWBP_MissionSettings_TimeOfDay_C::Image_42' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_TimeOfDay_C, TextBlock_DisplayName) == 0x000278, "Member 'UWBP_MissionSettings_TimeOfDay_C::TextBlock_DisplayName' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_TimeOfDay_C, TimeOfDayText) == 0x000280, "Member 'UWBP_MissionSettings_TimeOfDay_C::TimeOfDayText' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_TimeOfDay_C, Value) == 0x000288, "Member 'UWBP_MissionSettings_TimeOfDay_C::Value' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_TimeOfDay_C, GameModeName) == 0x000298, "Member 'UWBP_MissionSettings_TimeOfDay_C::GameModeName' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_TimeOfDay_C, bUseConfigValue) == 0x0002A8, "Member 'UWBP_MissionSettings_TimeOfDay_C::bUseConfigValue' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_TimeOfDay_C, NewValue) == 0x0002B0, "Member 'UWBP_MissionSettings_TimeOfDay_C::NewValue' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_TimeOfDay_C, OnSettingChanged) == 0x0002C0, "Member 'UWBP_MissionSettings_TimeOfDay_C::OnSettingChanged' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_TimeOfDay_C, PossibleDefaultTimeOfDays) == 0x0002D0, "Member 'UWBP_MissionSettings_TimeOfDay_C::PossibleDefaultTimeOfDays' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_TimeOfDay_C, InitialValue) == 0x0002E0, "Member 'UWBP_MissionSettings_TimeOfDay_C::InitialValue' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_TimeOfDay_C, bTrainingMode) == 0x0002F0, "Member 'UWBP_MissionSettings_TimeOfDay_C::bTrainingMode' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_TimeOfDay_C, PopUpWidgetReference) == 0x0002F8, "Member 'UWBP_MissionSettings_TimeOfDay_C::PopUpWidgetReference' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_TimeOfDay_C, bHideLabel) == 0x000300, "Member 'UWBP_MissionSettings_TimeOfDay_C::bHideLabel' has a wrong offset!");

}

