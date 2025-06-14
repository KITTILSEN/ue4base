﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ME_Dialogue_Script

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ME_Dialogue_Script.WBP_ME_Dialogue_Script_C
// 0x0078 (0x02D8 - 0x0260)
class UWBP_ME_Dialogue_Script_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCheckBox*                              CheckBox_146;                                      // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EditableTextBox_Name;                              // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(const class FString& FullScriptFileName)> OnCreated;               // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   FileExistsTitle;                                   // 0x0288(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   FileExistsMessage;                                 // 0x02A0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 LuaExtension;                                      // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 FullScriptFileName;                                // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void BndEvt__EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void CheckOkEnable();
	void Construct();
	void OnOkClicked_Event(class UWBP_DialogueBox_C* Dialogue);
	void OnClicked_Event_0();
	void ExecuteUbergraph_WBP_ME_Dialogue_Script(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ME_Dialogue_Script_C">();
	}
	static class UWBP_ME_Dialogue_Script_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ME_Dialogue_Script_C>();
	}
};
static_assert(alignof(UWBP_ME_Dialogue_Script_C) == 0x000008, "Wrong alignment on UWBP_ME_Dialogue_Script_C");
static_assert(sizeof(UWBP_ME_Dialogue_Script_C) == 0x0002D8, "Wrong size on UWBP_ME_Dialogue_Script_C");
static_assert(offsetof(UWBP_ME_Dialogue_Script_C, UberGraphFrame) == 0x000260, "Member 'UWBP_ME_Dialogue_Script_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ME_Dialogue_Script_C, CheckBox_146) == 0x000268, "Member 'UWBP_ME_Dialogue_Script_C::CheckBox_146' has a wrong offset!");
static_assert(offsetof(UWBP_ME_Dialogue_Script_C, EditableTextBox_Name) == 0x000270, "Member 'UWBP_ME_Dialogue_Script_C::EditableTextBox_Name' has a wrong offset!");
static_assert(offsetof(UWBP_ME_Dialogue_Script_C, OnCreated) == 0x000278, "Member 'UWBP_ME_Dialogue_Script_C::OnCreated' has a wrong offset!");
static_assert(offsetof(UWBP_ME_Dialogue_Script_C, FileExistsTitle) == 0x000288, "Member 'UWBP_ME_Dialogue_Script_C::FileExistsTitle' has a wrong offset!");
static_assert(offsetof(UWBP_ME_Dialogue_Script_C, FileExistsMessage) == 0x0002A0, "Member 'UWBP_ME_Dialogue_Script_C::FileExistsMessage' has a wrong offset!");
static_assert(offsetof(UWBP_ME_Dialogue_Script_C, LuaExtension) == 0x0002B8, "Member 'UWBP_ME_Dialogue_Script_C::LuaExtension' has a wrong offset!");
static_assert(offsetof(UWBP_ME_Dialogue_Script_C, FullScriptFileName) == 0x0002C8, "Member 'UWBP_ME_Dialogue_Script_C::FullScriptFileName' has a wrong offset!");

}

