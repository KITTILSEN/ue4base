﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Trigger_ReadyRoom_Master

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Trigger_ReadyRoom_Master.BP_Trigger_ReadyRoom_Master_C
// 0x0010 (0x0238 - 0x0228)
class ABP_Trigger_ReadyRoom_Master_C : public ATriggerBox
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          bTriggerOnServer;                                  // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bTriggerOnLocal;                                   // 0x0231(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bCheckForPositiveExit;                             // 0x0232(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_Trigger_ReadyRoom_Master(int32 EntryPoint);
	void BindServerAndClient();
	void OnComponentEndOverlap_ServerAndClient(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnComponentBeginOverlap_ServerAndClient(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BindClientOnly();
	void OnComponentEndOverlap_Local(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnComponentBeginOverlap_Local(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BindServerOnly();
	void OnComponentEndOverlap_Server(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnComponentBeginOverlap_Server(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveBeginPlay();
	void ExitedOnLocal(class AGBPlayerController* GBPlayerController, bool bPositiveExit);
	void EnteredOnLocal(class AGBPlayerController* GBPlayerController);
	void ExitedOnServer(class AGBPlayerController* GBPlayerController, bool bPositiveExit);
	void EnteredOnServer(class AGBPlayerController* GBPlayerController);
	void TraceToPlayer(const struct FVector& Origin, bool* Invalid);
	void CloseToPlayer(bool* Result);
	void GetPositiveExit(class AActor* InActor, bool* OutPositiveExit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Trigger_ReadyRoom_Master_C">();
	}
	static class ABP_Trigger_ReadyRoom_Master_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Trigger_ReadyRoom_Master_C>();
	}
};
static_assert(alignof(ABP_Trigger_ReadyRoom_Master_C) == 0x000008, "Wrong alignment on ABP_Trigger_ReadyRoom_Master_C");
static_assert(sizeof(ABP_Trigger_ReadyRoom_Master_C) == 0x000238, "Wrong size on ABP_Trigger_ReadyRoom_Master_C");
static_assert(offsetof(ABP_Trigger_ReadyRoom_Master_C, UberGraphFrame) == 0x000228, "Member 'ABP_Trigger_ReadyRoom_Master_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Trigger_ReadyRoom_Master_C, bTriggerOnServer) == 0x000230, "Member 'ABP_Trigger_ReadyRoom_Master_C::bTriggerOnServer' has a wrong offset!");
static_assert(offsetof(ABP_Trigger_ReadyRoom_Master_C, bTriggerOnLocal) == 0x000231, "Member 'ABP_Trigger_ReadyRoom_Master_C::bTriggerOnLocal' has a wrong offset!");
static_assert(offsetof(ABP_Trigger_ReadyRoom_Master_C, bCheckForPositiveExit) == 0x000232, "Member 'ABP_Trigger_ReadyRoom_Master_C::bCheckForPositiveExit' has a wrong offset!");

}

