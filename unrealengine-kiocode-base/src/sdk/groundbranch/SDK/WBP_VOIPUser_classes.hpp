﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_VOIPUser

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_VOIPUser.WBP_VOIPUser_C
// 0x0030 (0x0290 - 0x0260)
class UWBP_VOIPUser_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_0;                                           // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_PlayerName;                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AGBPlayerState*                         PlayerState;                                       // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bIsRadio;                                          // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_WBP_VOIPUser(int32 EntryPoint);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	ESlateVisibility GetVisibility_0();
	ESlateVisibility GetVisibility_1();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_VOIPUser_C">();
	}
	static class UWBP_VOIPUser_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_VOIPUser_C>();
	}
};
static_assert(alignof(UWBP_VOIPUser_C) == 0x000008, "Wrong alignment on UWBP_VOIPUser_C");
static_assert(sizeof(UWBP_VOIPUser_C) == 0x000290, "Wrong size on UWBP_VOIPUser_C");
static_assert(offsetof(UWBP_VOIPUser_C, UberGraphFrame) == 0x000260, "Member 'UWBP_VOIPUser_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_VOIPUser_C, Image_0) == 0x000268, "Member 'UWBP_VOIPUser_C::Image_0' has a wrong offset!");
static_assert(offsetof(UWBP_VOIPUser_C, Image_2) == 0x000270, "Member 'UWBP_VOIPUser_C::Image_2' has a wrong offset!");
static_assert(offsetof(UWBP_VOIPUser_C, TextBlock_PlayerName) == 0x000278, "Member 'UWBP_VOIPUser_C::TextBlock_PlayerName' has a wrong offset!");
static_assert(offsetof(UWBP_VOIPUser_C, PlayerState) == 0x000280, "Member 'UWBP_VOIPUser_C::PlayerState' has a wrong offset!");
static_assert(offsetof(UWBP_VOIPUser_C, bIsRadio) == 0x000288, "Member 'UWBP_VOIPUser_C::bIsRadio' has a wrong offset!");

}

