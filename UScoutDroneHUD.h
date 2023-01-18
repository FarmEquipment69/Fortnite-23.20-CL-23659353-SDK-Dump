// Class /Script/ScoutDroneUI.ScoutDroneHUD
// Size: 0x388
class UScoutDroneHUD : public UUserWidget
{
	float TimeToConfirmTargetCache; // 0x268 (0x4)
	float InitialHealth; // 0x26c (0x4)
	struct FScalableFloat WarningRange; // 0x270 (0x28)
	struct FScalableFloat SignalLossRange; // 0x298 (0x28)
	struct FScalableFloat UpdateSignalInterval; // 0x2c0 (0x28)
	struct FGameplayTag MarkAbilityTag; // 0x2e8 (0x4)
	struct FGameplayTag DismissAbilityTag; // 0x2ec (0x4)
	struct FGameplayTag InteractAbilityTag; // 0x2f0 (0x4)
	struct FGameplayTag PickUpAbilityTag; // 0x2f4 (0x4)
	struct FGameplayTag PickUpTargetsChangedTag; // 0x2f8 (0x4)
	struct FGameplayTag SpeedBoostAbilityTag; // 0x2fc (0x4)
	class UOverlay* OverlayHealth; // 0x300 (0x8)
	class UOverlay* OverlayEnergyLevel; // 0x308 (0x8)
	class UOverlay* OverlayReticle; // 0x310 (0x8)
	class UOverlay* OverlayTetheringIndicator; // 0x318 (0x8)
	float MaxHealthCache; // 0x320 (0x4)
	float MaxEnergyCache; // 0x324 (0x4)
	unsigned char unreflected_328[0x48]; // 0x328 (0x48) 
	struct FTimerHandle* SignalDataTimerHandle; // 0x370 (0x8)
	struct TArray<struct FScoutDroneWidgetIdentifier> HUDIdentifiers; // 0x378 (0x10)

	/* Functions */

	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnTargetingStatusChanged (Has no native function)
	void OnTargetingStatusChanged(struct FScoutDroneStatusData*& StatusData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnReticleChangeAbilityActivated (Has no native function)
	void OnReticleChangeAbilityActivated(struct FGameplayTag& UpdatedTag); // (Event | Protected | BlueprintEvent)

	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnOwningPlayerDamaged (Has no native function)
	void OnOwningPlayerDamaged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneSpeedBoostAbilityUsed (Has no native function)
	void OnDroneSpeedBoostAbilityUsed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneSpeedBoostAbilityEnd (Has no native function)
	void OnDroneSpeedBoostAbilityEnd(); // (Event | Protected | BlueprintEvent)

	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneSignalDataUpdated (Has no native function)
	void OnDroneSignalDataUpdated(float& DistanceFromPlayer, float& SignalPercentage); // (Event | Protected | BlueprintEvent)

	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDronePickUpTargetsEmpty (Has no native function)
	void OnDronePickUpTargetsEmpty(); // (Event | Protected | BlueprintEvent)

	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDronePickUpTargetsAvailable (Has no native function)
	void OnDronePickUpTargetsAvailable(); // (Event | Protected | BlueprintEvent)

	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDronePickUpAbilityUsed (Has no native function)
	void OnDronePickUpAbilityUsed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDronePickUpAbilityEnd (Has no native function)
	void OnDronePickUpAbilityEnd(); // (Event | Protected | BlueprintEvent)

	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneMarkAbilityUsed (Has no native function)
	void OnDroneMarkAbilityUsed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneMarkAbilityEnd (Has no native function)
	void OnDroneMarkAbilityEnd(); // (Event | Protected | BlueprintEvent)

	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneInteractAbilityUsed (Has no native function)
	void OnDroneInteractAbilityUsed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneInteractAbilityEnd (Has no native function)
	void OnDroneInteractAbilityEnd(); // (Event | Protected | BlueprintEvent)

	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneHealthUpdated (Has no native function)
	void OnDroneHealthUpdated(float& HealthPercentage, float& CurrentHealth); // (Event | Protected | BlueprintEvent)

	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneEnergyChanged (Has no native function)
	void OnDroneEnergyChanged(float& EnergyPercentage); // (Event | Protected | BlueprintEvent)

	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneDismissAbilityUsed (Has no native function)
	void OnDroneDismissAbilityUsed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/ScoutDroneUI.ScoutDroneHUD.GetTargetConfirmationTime (Underlying native function: GetTargetConfirmationTime 0x5362700)
	float GetTargetConfirmationTime(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/ScoutDroneUI.ScoutDroneHUD.GetControlledDrone (Underlying native function: GetControlledDrone 0x53626d0)
	class AFortScoutDrone* GetControlledDrone(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

