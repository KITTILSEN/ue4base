﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MissionSettings_Entry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MissionSettings_Entry.WBP_MissionSettings_Entry_C
// 0x00E0 (0x0340 - 0x0260)
class UWBP_MissionSettings_Entry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_ComboBox_C*                        ComboBox_Value;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SpinBox_C*                         SpinBox_Value;                                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_DisplayName;                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   TableId;                                           // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 Name_0;                                            // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 GameModeName;                                      // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         MinValue;                                          // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         MaxValue;                                          // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Value;                                             // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2B4[0x4];                                      // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(const class FString& Option)> OnSettingChanged;                    // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bUseConfigValue;                                   // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_2C9[0x3];                                      // 0x02C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NewValue;                                          // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 ComboValues;                                       // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         InitialValue;                                      // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAdvancedSetting;                                  // 0x02E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_2E5[0x3];                                      // 0x02E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   OnSetHighOpforCountTitle;                          // 0x02E8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   OnSetHighOpforCountMessage;                        // 0x0300(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   GameMessageForHighOpforCount;                      // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanWarnOfHighOpforCount;                          // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_321[0x3];                                      // 0x0321(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   HighOpforCountWarrningDialogName;                  // 0x0324(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32C[0x4];                                      // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SettingLocalisationLookupKey;                      // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_MissionSettings_Entry(int32 EntryPoint);
	void ResetSpinBox();
	void SyncMissionSetting();
	void RevertMissionSetting();
	void OnValueChanged_Event_0(float Value_0);
	void ChangeValue(int32 Value_0);
	void OnIndexChanged_Event_0(int32 Index_0);
	void Construct();
	void GetValueFromTable(int32 InValue, class FText* OutText);
	void GenerateComboEntries();
	void FindEntryForDefaultValue(int32 DefaultValue, int32* EntryIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MissionSettings_Entry_C">();
	}
	static class UWBP_MissionSettings_Entry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MissionSettings_Entry_C>();
	}
};
static_assert(alignof(UWBP_MissionSettings_Entry_C) == 0x000008, "Wrong alignment on UWBP_MissionSettings_Entry_C");
static_assert(sizeof(UWBP_MissionSettings_Entry_C) == 0x000340, "Wrong size on UWBP_MissionSettings_Entry_C");
static_assert(offsetof(UWBP_MissionSettings_Entry_C, UberGraphFrame) == 0x000260, "Member 'UWBP_MissionSettings_Entry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_Entry_C, ComboBox_Value) == 0x000268, "Member 'UWBP_MissionSettings_Entry_C::ComboBox_Value' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_Entry_C, SpinBox_Value) == 0x000270, "Member 'UWBP_MissionSettings_Entry_C::SpinBox_Value' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_Entry_C, TextBlock_DisplayName) == 0x000278, "Member 'UWBP_MissionSettings_Entry_C::TextBlock_DisplayName' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_Entry_C, TableId) == 0x000280, "Member 'UWBP_MissionSettings_Entry_C::TableId' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_Entry_C, Name_0) == 0x000288, "Member 'UWBP_MissionSettings_Entry_C::Name_0' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_Entry_C, GameModeName) == 0x000298, "Member 'UWBP_MissionSettings_Entry_C::GameModeName' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_Entry_C, MinValue) == 0x0002A8, "Member 'UWBP_MissionSettings_Entry_C::MinValue' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_Entry_C, MaxValue) == 0x0002AC, "Member 'UWBP_MissionSettings_Entry_C::MaxValue' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_Entry_C, Value) == 0x0002B0, "Member 'UWBP_MissionSettings_Entry_C::Value' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_Entry_C, OnSettingChanged) == 0x0002B8, "Member 'UWBP_MissionSettings_Entry_C::OnSettingChanged' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_Entry_C, bUseConfigValue) == 0x0002C8, "Member 'UWBP_MissionSettings_Entry_C::bUseConfigValue' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_Entry_C, NewValue) == 0x0002CC, "Member 'UWBP_MissionSettings_Entry_C::NewValue' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_Entry_C, ComboValues) == 0x0002D0, "Member 'UWBP_MissionSettings_Entry_C::ComboValues' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_Entry_C, InitialValue) == 0x0002E0, "Member 'UWBP_MissionSettings_Entry_C::InitialValue' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_Entry_C, bAdvancedSetting) == 0x0002E4, "Member 'UWBP_MissionSettings_Entry_C::bAdvancedSetting' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_Entry_C, OnSetHighOpforCountTitle) == 0x0002E8, "Member 'UWBP_MissionSettings_Entry_C::OnSetHighOpforCountTitle' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_Entry_C, OnSetHighOpforCountMessage) == 0x000300, "Member 'UWBP_MissionSettings_Entry_C::OnSetHighOpforCountMessage' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_Entry_C, GameMessageForHighOpforCount) == 0x000318, "Member 'UWBP_MissionSettings_Entry_C::GameMessageForHighOpforCount' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_Entry_C, bCanWarnOfHighOpforCount) == 0x000320, "Member 'UWBP_MissionSettings_Entry_C::bCanWarnOfHighOpforCount' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_Entry_C, HighOpforCountWarrningDialogName) == 0x000324, "Member 'UWBP_MissionSettings_Entry_C::HighOpforCountWarrningDialogName' has a wrong offset!");
static_assert(offsetof(UWBP_MissionSettings_Entry_C, SettingLocalisationLookupKey) == 0x000330, "Member 'UWBP_MissionSettings_Entry_C::SettingLocalisationLookupKey' has a wrong offset!");

}

