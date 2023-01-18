// Class /Script/FortniteGame.FortAthenaTutorial_Scoping
// Size: 0x330
class AFortAthenaTutorial_Scoping : public AFortAthenaTutorialBase
{
	struct TArray<struct FFortAthenaTutorial_TargetInfo> ShootTargets; // 0x2f0 (0x10)
	class UFortItemDefinition* GunToEquipItemDef; // 0x300 (0x8)
	class AActor* ScopingCameraPoint; // 0x308 (0x8)
	unsigned char unreflected_310[0x18]; // 0x310 (0x18) 
	float ScopingCameraInSpeed; // 0x328 (0x4)
	float ScopingCameraOutSpeed; // 0x32c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaTutorial_Scoping.OnTargetDestroyed (Underlying native function: OnTargetDestroyed 0x856e85c)
	void OnTargetDestroyed(int& TargetIndex); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaTutorial_Scoping.OnScopingTargetsActivated (Has no native function)
	void OnScopingTargetsActivated(); // (Event | Protected | BlueprintEvent)
};

