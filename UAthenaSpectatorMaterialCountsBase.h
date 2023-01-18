// Class /Script/FortniteUI.AthenaSpectatorMaterialCountsBase
// Size: 0x2d8
class UAthenaSpectatorMaterialCountsBase : public UFortHUDElementWidget
{
	bool bIsInBuildMode; // 0x2d0 (0x1)
	unsigned char padding_2d1[0x7]; // 0x2d1 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpectatorMaterialCountsBase.TimeToDisplay (Underlying native function: TimeToDisplay 0xa5bdf44)
	float TimeToDisplay(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaSpectatorMaterialCountsBase.OnReplayScrubComplete (Has no native function)
	void OnReplayScrubComplete(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorMaterialCountsBase.OnFollowedPlayerChanged (Has no native function)
	void OnFollowedPlayerChanged(class AFortPlayerControllerSpectating*& SpectatingPC, class AFortPlayerState*& FollowedPS); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorMaterialCountsBase.OnBuildModeChanged (Has no native function)
	void OnBuildModeChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorMaterialCountsBase.OnBuildingMaterialChanged (Has no native function)
	void OnBuildingMaterialChanged(struct TEnumAsByte<EFortResourceType>& BuildingMaterial); // (Event | Protected | BlueprintCallable | BlueprintEvent)
};

