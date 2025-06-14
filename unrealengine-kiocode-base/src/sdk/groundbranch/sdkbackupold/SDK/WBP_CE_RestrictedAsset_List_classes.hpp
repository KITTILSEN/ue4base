﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CE_RestrictedAsset_List

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CE_RestrictedAsset_List.WBP_CE_RestrictedAsset_List_C
// 0x0028 (0x0288 - 0x0260)
class UWBP_CE_RestrictedAsset_List_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URichTextBlock*                         TextBlock_Message;                                 // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_20;                                    // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                                AssetEntryPadding;                                 // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_CE_RestrictedAsset_List(int32 EntryPoint);
	void AddRestrictedAsset(const class FText& Asset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CE_RestrictedAsset_List_C">();
	}
	static class UWBP_CE_RestrictedAsset_List_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CE_RestrictedAsset_List_C>();
	}
};
static_assert(alignof(UWBP_CE_RestrictedAsset_List_C) == 0x000008, "Wrong alignment on UWBP_CE_RestrictedAsset_List_C");
static_assert(sizeof(UWBP_CE_RestrictedAsset_List_C) == 0x000288, "Wrong size on UWBP_CE_RestrictedAsset_List_C");
static_assert(offsetof(UWBP_CE_RestrictedAsset_List_C, UberGraphFrame) == 0x000260, "Member 'UWBP_CE_RestrictedAsset_List_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CE_RestrictedAsset_List_C, TextBlock_Message) == 0x000268, "Member 'UWBP_CE_RestrictedAsset_List_C::TextBlock_Message' has a wrong offset!");
static_assert(offsetof(UWBP_CE_RestrictedAsset_List_C, VerticalBox_20) == 0x000270, "Member 'UWBP_CE_RestrictedAsset_List_C::VerticalBox_20' has a wrong offset!");
static_assert(offsetof(UWBP_CE_RestrictedAsset_List_C, AssetEntryPadding) == 0x000278, "Member 'UWBP_CE_RestrictedAsset_List_C::AssetEntryPadding' has a wrong offset!");

}

