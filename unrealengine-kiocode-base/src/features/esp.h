#pragma once

#include "../includes.h"

class ESP
{
public:
	static ESP& GetInstance() {
		static ESP instance;
		return instance;
	}

	void RenderSkeleton(SDK::ACharacter* pawn, ImColor color);
	void RenderSnapline(SDK::ACharacter* pawn, ImColor color);
	//void RenderBox(SDK::ABP_KytBadGuy_C* pawn, ImColor color);
	//void Render3DBox(SDK::ABP_KytBadGuy_C* pawn, ImColor color);

private:
	SDK::UActorComponent* GetWeaponSight(SDK::AActor* weapon);
	bool IsAiming();
	bool HasScopeAttached();
	bool ProjectWorldToScreenScoped(const SDK::FVector& WorldPosition, SDK::FVector2D* out, bool isRelative);
	SDK::AActor* GetCurrentWeapon();
	float GetSightMagnification(SDK::UActorComponent* sight);
	float GetSightFOV(SDK::UActorComponent* sight);
	SDK::FVector GetWeaponForwardVector(SDK::AActor* weapon);
	SDK::FVector GetSightOffset(SDK::UActorComponent* sight);
	bool CustomProjection(const SDK::FVector& worldPos, SDK::FVector2D* out,
		const SDK::FVector& viewLocation, float fov, bool isRelative);
	bool ProjectWithScopeAwareness(const SDK::FVector& WorldPosition, SDK::FVector2D* out, bool isRelative);

	ESP() = default;
	~ESP() = default;

	ESP(const ESP&) = delete;
	ESP& operator=(const ESP&) = delete;
};