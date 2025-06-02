#pragma once

#include "../includes.h"

class ESP
{
public:
	static ESP& GetInstance() {
		static ESP instance;
		return instance;
	}

	//void RenderSkeleton(SDK::ABP_KytBadGuy_C* pawn, ImColor color);
	void RenderSnapline(SDK::ACharacter* pawn, ImColor color);
//	void RenderBox(SDK::ABP_KytBadGuy_C* pawn, ImColor color);
//	void Render3DBox(SDK::ABP_KytBadGuy_C* pawn, ImColor color);

private:

	ESP() = default;
	~ESP() = default;

	ESP(const ESP&) = delete;
	ESP& operator=(const ESP&) = delete;
};