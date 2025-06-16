// Add this to the top of your esp.cpp (in the anonymous namespace with your other helper functions)

namespace {
    // Your existing helper functions are already here...

    // Add these new scope-aware functions:
    bool ProjectWithScopeAwareness(const SDK::FVector& WorldPosition, SDK::FVector2D* out, bool isRelative = false)
    {
        // Check if we're aiming through a scope
        if (IsAiming() && HasScopeAttached())
        {
            // Apply scope transformation
            return ProjectWorldToScreenScoped(WorldPosition, out, isRelative);
        }
        else
        {
            // Use your normal projection
            return Config::System::m_pMyController->ProjectWorldLocationToScreen(WorldPosition, out, isRelative);
        }
    }

    bool ProjectWorldToScreenScoped(const SDK::FVector& WorldPosition, SDK::FVector2D* out, bool isRelative)
    {
        if (!Config::System::m_pMyController || !Config::System::m_pMyPawn)
            return false;

        // Get weapon and sight info
        SDK::AActor* weapon = GetCurrentWeapon();
        if (!weapon) return false;

        auto sight = GetWeaponSight(weapon);
        if (!sight) return false;

        float magnification = GetSightMagnification(sight);
        float sightFOV = GetSightFOV(sight);

        if (magnification <= 1.0f || sightFOV <= 0.0f)
            return Config::System::m_pMyController->ProjectWorldLocationToScreen(WorldPosition, out, isRelative);

        // Calculate scoped view position
        SDK::FVector weaponLocation = weapon->K2_GetActorLocation();
        SDK::FVector weaponForward = GetWeaponForwardVector(weapon);

        // Transform based on scope
        weaponForward = weaponForward * magnification;
        SDK::FVector scopedViewLocation = weaponLocation + GetSightOffset(sight) + weaponForward;

        // Calculate adjusted FOV
        float adjustedFOV = (sightFOV * magnification) / magnification;

        // Use custom projection with scoped parameters
        return CustomProjection(WorldPosition, out, scopedViewLocation, adjustedFOV, isRelative);
    }

    bool CustomProjection(const SDK::FVector& worldPos, SDK::FVector2D* out,
        const SDK::FVector& viewLocation, float fov, bool isRelative)
    {
        auto cameraManager = Config::System::m_pMyController->PlayerCameraManager;
        if (!cameraManager) return false;

        SDK::FRotator viewRotation = cameraManager->GetCameraRotation();

        // Convert rotation to direction vectors
        float pitch = viewRotation.Pitch * (3.14159f / 180.0f);
        float yaw = viewRotation.Yaw * (3.14159f / 180.0f);

        SDK::FVector forward = {
            cos(pitch) * cos(yaw),
            cos(pitch) * sin(yaw),
            sin(pitch)
        };

        SDK::FVector right = {
            cos(yaw + 3.14159f / 2.0f),
            sin(yaw + 3.14159f / 2.0f),
            0.0f
        };

        SDK::FVector up = {
            -sin(pitch) * cos(yaw),
            -sin(pitch) * sin(yaw),
            cos(pitch)
        };

        // Transform to view space
        SDK::FVector delta = worldPos - viewLocation;
        float deltaForward = delta.X * forward.X + delta.Y * forward.Y + delta.Z * forward.Z;

        if (deltaForward <= 0.1f) return false; // Behind camera

        float deltaRight = delta.X * right.X + delta.Y * right.Y + delta.Z * right.Z;
        float deltaUp = delta.X * up.X + delta.Y * up.Y + delta.Z * up.Z;

        // Project to screen
        float fovRad = fov * (3.14159f / 180.0f);
        float aspectRatio = Config::System::m_ScreenSize.X / Config::System::m_ScreenSize.Y;

        float screenX = (deltaRight / deltaForward) / tan(fovRad / 2.0f);
        float screenY = (deltaUp / deltaForward) / tan(fovRad / 2.0f) * aspectRatio;

        // Convert to screen coordinates
        if (isRelative) {
            out->X = (screenX + 1.0f) * 0.5f;
            out->Y = (1.0f - screenY) * 0.5f;
            return (out->X >= 0.0f && out->X <= 1.0f && out->Y >= 0.0f && out->Y <= 1.0f);
        }
        else {
            out->X = (screenX + 1.0f) * 0.5f * Config::System::m_ScreenSize.X;
            out->Y = (1.0f - screenY) * 0.5f * Config::System::m_ScreenSize.Y;
            return (out->X >= 0.0f && out->X <= Config::System::m_ScreenSize.X &&
                out->Y >= 0.0f && out->Y <= Config::System::m_ScreenSize.Y);
        }
    }

    // Placeholder functions - implement based on your weapon system
    bool IsAiming() {
        // TODO: Check if player is in ADS state
        return false;
    }

    bool HasScopeAttached() {
        // TODO: Check if current weapon has scope
        return false;
    }

    SDK::AActor* GetCurrentWeapon() {
        // TODO: Get current weapon from player
        return nullptr;
    }

    auto GetWeaponSight(SDK::AActor* weapon) {
        // TODO: Get sight component from weapon
        return nullptr;
    }

    float GetSightMagnification(auto sight) {
        return 1.0f;
    }

    float GetSightFOV(auto sight) {
        return 90.0f;
    }

    SDK::FVector GetSightOffset(auto sight) {
        return { 0,0,0 };
    }

    SDK::FVector GetWeaponForwardVector(SDK::AActor* weapon) {
        return { 1,0,0 };
    }
}

// Then in your existing ESP functions, just change this one line:

void ESP::RenderSnapline(SDK::ACharacter* pawn, ImColor color) {
    // ... your existing validation code stays the same ...

    SDK::FVector2D pawnScreen;

    // CHANGE THIS LINE:
    // if (!Config::m_pMyController->ProjectWorldLocationToScreen(pawnLoc, &pawnScreen, false))

    // TO THIS:
    if (!ProjectWithScopeAwareness(pawnLoc, &pawnScreen, false))
    {
        std::cerr << "pawn projection failed: " << pawn << std::endl;
        return;
    }

    // ... rest of your existing code stays exactly the same ...
}

// Do the same for RenderSkeleton - change the projection calls:
void ESP::RenderSkeleton(SDK::ACharacter* pawn, ImColor color) {
    // ... your existing code until the projection part ...

    // CHANGE THESE LINES:
    // if (!Config::m_pMyController->ProjectWorldLocationToScreen(boneLoc1, &boneScreen, false) ||
    //     !Config::m_pMyController->ProjectWorldLocationToScreen(boneLoc2, &prevBoneScreen, false)) {

    // TO THESE:
    if (!ProjectWithScopeAwareness(boneLoc1, &boneScreen, false) ||
        !ProjectWithScopeAwareness(boneLoc2, &prevBoneScreen, false)) {
        continue;
    }

    // ... rest stays the same ...
}