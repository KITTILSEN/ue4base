﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_QuitDropDown_Content

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_QuitDropDown_Content.WBP_QuitDropDown_Content_C
// 0x0010 (0x0270 - 0x0260)
class UWBP_QuitDropDown_Content_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                             ScrollBox_DropDown;                                // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_QuitDropDown_Content(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_QuitDropDown_Content_C">();
	}
	static class UWBP_QuitDropDown_Content_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_QuitDropDown_Content_C>();
	}
};
static_assert(alignof(UWBP_QuitDropDown_Content_C) == 0x000008, "Wrong alignment on UWBP_QuitDropDown_Content_C");
static_assert(sizeof(UWBP_QuitDropDown_Content_C) == 0x000270, "Wrong size on UWBP_QuitDropDown_Content_C");
static_assert(offsetof(UWBP_QuitDropDown_Content_C, UberGraphFrame) == 0x000260, "Member 'UWBP_QuitDropDown_Content_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_QuitDropDown_Content_C, ScrollBox_DropDown) == 0x000268, "Member 'UWBP_QuitDropDown_Content_C::ScrollBox_DropDown' has a wrong offset!");

}

