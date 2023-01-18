// Class /Script/FortniteUI.FortStWEquippedItemReticle
// Size: 0x2d8
class UFortStWEquippedItemReticle : public UFortHUDElementWidget
{
	struct TWeakObjectPtr<class AFortWeapon> BoundWeapon; // 0x2d0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortStWEquippedItemReticle.OnWeaponTargetingChanged (Has no native function)
	void OnWeaponTargetingChanged(bool& bIsTargeting); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStWEquippedItemReticle.OnWeaponReloadStarted (Has no native function)
	void OnWeaponReloadStarted(float& ReloadTime, enum EFortWeaponReloadType& ReloadType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStWEquippedItemReticle.OnWeaponReloadCancelled (Has no native function)
	void OnWeaponReloadCancelled(class AFortWeapon*& Weapon); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStWEquippedItemReticle.OnWeaponOverheatValueChanged (Has no native function)
	void OnWeaponOverheatValueChanged(float& CurrentValue, float& MaxValue, enum EFortWeaponOverheatState& State, bool& bIsInCooldown); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStWEquippedItemReticle.OnWeaponChanged (Has no native function)
	void OnWeaponChanged(class AFortWeapon*& NewWeapon); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStWEquippedItemReticle.OnAmmoChanged (Has no native function)
	void OnAmmoChanged(int& MagazineAmmoCount, int& TotalRemaining); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStWEquippedItemReticle.HandleWeaponTargetingChanged (Underlying native function: HandleWeaponTargetingChanged 0xa88ef24)
	void HandleWeaponTargetingChanged(bool& bIsTargeting); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortStWEquippedItemReticle.HandleWeaponReloadStarted (Underlying native function: HandleWeaponReloadStarted 0xa88ee5c)
	void HandleWeaponReloadStarted(float& ReloadTime, enum EFortWeaponReloadType& ReloadType); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortStWEquippedItemReticle.HandleWeaponReloadCancelled (Underlying native function: HandleWeaponReloadCancelled 0xa88ee48)
	void HandleWeaponReloadCancelled(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortStWEquippedItemReticle.HandleWeaponOverheatValueChanged (Underlying native function: HandleWeaponOverheatValueChanged 0xa88ed08)
	void HandleWeaponOverheatValueChanged(float& CurrentValue, float& MaxValue, enum EFortWeaponOverheatState& State, bool& bIsInCooldown); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortStWEquippedItemReticle.HandleWeaponChanged (Underlying native function: HandleWeaponChanged 0xa88ec44)
	void HandleWeaponChanged(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortStWEquippedItemReticle.HandleAmmoChanged (Underlying native function: HandleAmmoChanged 0xa88d58c)
	void HandleAmmoChanged(int& MagazineAmmoCount, int& TotalRemaining); // (Final | Native | Protected)
};

