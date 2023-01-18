// Class /Script/FortniteUI.AthenaGenericKeyBindsFeedback
// Size: 0x308
class UAthenaGenericKeyBindsFeedback : public UAthenaHUDSituationalFeedback
{
	struct TArray<struct FGenericAction> GenericActions; // 0x2e0 (0x10)
	unsigned char padding_2f0[0x18]; // 0x2f0 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.AthenaGenericKeyBindsFeedback.HandleWeaponHUDKeyActionUpdated (Underlying native function: HandleWeaponHUDKeyActionUpdated 0xa531f98)
	void HandleWeaponHUDKeyActionUpdated(class AFortWeapon*& Weapon); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaGenericKeyBindsFeedback.HandleWeaponEquipped (Underlying native function: HandleWeaponEquipped 0xa531edc)
	void HandleWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PreviousWeapon); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaGenericKeyBindsFeedback.HandleTetherChanged (Underlying native function: HandleTetherChanged 0xa531b40)
	void HandleTetherChanged(bool& bIsTethered); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaGenericKeyBindsFeedback.HandleSavedTabChanged (Underlying native function: HandleSavedTabChanged 0xa531928)
	void HandleSavedTabChanged(bool& IsTabSaved); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaGenericKeyBindsFeedback.HandleKeybindsChanged (Underlying native function: HandleKeybindsChanged 0xa530fcc)
	void HandleKeybindsChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaGenericKeyBindsFeedback.HandleInputStackChanged (Underlying native function: HandleInputStackChanged 0xa530fcc)
	void HandleInputStackChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaGenericKeyBindsFeedback.HandleInputComponentDisplayTextChanged (Underlying native function: HandleInputComponentDisplayTextChanged 0xa530f50)
	void HandleInputComponentDisplayTextChanged(class UFortInputComponent*& UpdatedInputComponent); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaGenericKeyBindsFeedback.HandleGenericActionRemoved (Underlying native function: HandleGenericActionRemoved 0xa530da8)
	void HandleGenericActionRemoved(struct FName& ActionName); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaGenericKeyBindsFeedback.HandleGenericActionAdded (Underlying native function: HandleGenericActionAdded 0xa530cc8)
	void HandleGenericActionAdded(struct FName& ActionName, struct FText& DescriptionText); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaGenericKeyBindsFeedback.HandleEnterExitVehicle (Underlying native function: HandleEnterExitVehicle 0xa530cb4)
	void HandleEnterExitVehicle(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaGenericKeyBindsFeedback.HandleDBNOCarryPlayerChanged (Underlying native function: HandleDBNOCarryPlayerChanged 0xa530b20)
	void HandleDBNOCarryPlayerChanged(bool& bIsCarrying); // (Final | Native | Private)
};

