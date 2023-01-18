// Class /Script/FortniteUI.FortWeaponReticleExtensionWidgetBase
// Size: 0x2e0
class UFortWeaponReticleExtensionWidgetBase : public UFortHUDElementWidget
{
	class AFortWeapon* CachedAssociatedWeapon; // 0x2d0 (0x8)
	unsigned char padding_2d8[0x8]; // 0x2d8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortWeaponReticleExtensionWidgetBase.OnWeaponSingleFire (Has no native function)
	void OnWeaponSingleFire(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortWeaponReticleExtensionWidgetBase.OnWeaponReloadStarted (Has no native function)
	void OnWeaponReloadStarted(float& ReloadTime, enum EFortWeaponReloadType& ReloadType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortWeaponReticleExtensionWidgetBase.OnWeaponReloadCancelled (Has no native function)
	void OnWeaponReloadCancelled(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortWeaponReticleExtensionWidgetBase.OnTargetingChanged (Has no native function)
	void OnTargetingChanged(bool& bIsADS); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortWeaponReticleExtensionWidgetBase.OnFullyExitVehicle (Has no native function)
	void OnFullyExitVehicle(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortWeaponReticleExtensionWidgetBase.HandleTargetingChanged (Underlying native function: HandleTargetingChanged 0xa5ba584)
	void HandleTargetingChanged(bool& bNewIsADS); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortWeaponReticleExtensionWidgetBase.HandleFullyExitVehicle (Underlying native function: HandleFullyExitVehicle 0xa5b9c94)
	void HandleFullyExitVehicle(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortWeaponReticleExtensionWidgetBase.HandleEnterVehiclePassenger (Underlying native function: HandleEnterVehiclePassenger 0xa5b9bf4)
	void HandleEnterVehiclePassenger(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortWeaponReticleExtensionWidgetBase.HandleEnterVehicleDriver (Underlying native function: HandleEnterVehicleDriver 0xa5b9bd8)
	void HandleEnterVehicleDriver(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortWeaponReticleExtensionWidgetBase.GetIsADS (Underlying native function: GetIsADS 0xa5b8f58)
	bool GetIsADS(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortWeaponReticleExtensionWidgetBase.GetEquippedWeapon (Underlying native function: GetEquippedWeapon 0xa5b8c98)
	class AFortWeapon* GetEquippedWeapon(); // (Final | 0x00000002 | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

