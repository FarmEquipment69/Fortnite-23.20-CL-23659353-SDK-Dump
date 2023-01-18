// Class /Script/FortniteGame.FortAthenaTutorial_Shoot
// Size: 0x350
class AFortAthenaTutorial_Shoot : public AFortAthenaTutorialBase
{
	struct TArray<struct FFortAthenaTutorial_TargetInfo> FirstShootTargets; // 0x2f0 (0x10)
	class AActor* ShootCameraPoint; // 0x300 (0x8)
	class UClass* TargetCounterScreen; // 0x308 (0x8)
	int AmmoCountToTriggerReload; // 0x310 (0x4)
	float ShootMarkerAppearDelay; // 0x314 (0x4)
	unsigned char unreflected_318[0x20]; // 0x318 (0x20) 
	float CameraInSpeed; // 0x338 (0x4)
	float CameraInDuration; // 0x33c (0x4)
	float CameraWaitTime; // 0x340 (0x4)
	float CameraOutSpeed; // 0x344 (0x4)
	float CameraOutDuration; // 0x348 (0x4)
	unsigned char padding_34c[0x4]; // 0x34c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaTutorial_Shoot.OnTargetDestroyed (Underlying native function: OnTargetDestroyed 0x856e8dc)
	void OnTargetDestroyed(int& TargetIndex); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaTutorial_Shoot.OnShootingTargetsActivated (Has no native function)
	void OnShootingTargetsActivated(); // (Event | Protected | BlueprintEvent)
};

