// Class /Script/FortniteGame.FortNavigationActor_OpenablePresent
// Size: 0x5d8
class AFortNavigationActor_OpenablePresent : public AFortNavigationActor_EventGraphItem
{
	float TurnSpeed; // 0x5b0 (0x4)
	float OpenDelay; // 0x5b4 (0x4)
	struct FVector StartingOrigin; // 0x5b8 (0x18)
	bool bCanInspect; // 0x5d0 (0x1)
	unsigned char padding_5d1[0x7]; // 0x5d1 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortNavigationActor_OpenablePresent.UpdatePackageRotation (Has no native function)
	void UpdatePackageRotation(float& XRotationValue, float& YRotationValue); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortNavigationActor_OpenablePresent.OnShakePresent (Has no native function)
	void OnShakePresent(class UFortItemDefinition*& ItemDef); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortNavigationActor_OpenablePresent.OnResetPresent (Has no native function)
	void OnResetPresent(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortNavigationActor_OpenablePresent.OnOpenPresent (Has no native function)
	void OnOpenPresent(bool& bActionCancelled); // (Event | Protected | BlueprintEvent)
};

