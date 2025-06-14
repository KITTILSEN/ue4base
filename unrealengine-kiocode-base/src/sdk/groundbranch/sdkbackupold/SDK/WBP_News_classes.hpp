﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_News

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_News.WBP_News_C
// 0x0018 (0x0278 - 0x0260)
class UWBP_News_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           VerticalBox_0;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SteamAppId;                                        // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_News(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_News_C">();
	}
	static class UWBP_News_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_News_C>();
	}
};
static_assert(alignof(UWBP_News_C) == 0x000008, "Wrong alignment on UWBP_News_C");
static_assert(sizeof(UWBP_News_C) == 0x000278, "Wrong size on UWBP_News_C");
static_assert(offsetof(UWBP_News_C, UberGraphFrame) == 0x000260, "Member 'UWBP_News_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_News_C, VerticalBox_0) == 0x000268, "Member 'UWBP_News_C::VerticalBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_News_C, SteamAppId) == 0x000270, "Member 'UWBP_News_C::SteamAppId' has a wrong offset!");

}

