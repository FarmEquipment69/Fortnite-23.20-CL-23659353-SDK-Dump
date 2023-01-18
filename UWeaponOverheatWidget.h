// Class /Script/FortniteUI.WeaponOverheatWidget
// Size: 0x2e0
class UWeaponOverheatWidget : public UFortHUDElementWidget
{
	class UImage* OverheatProgressImage; // 0x2d0 (0x8)
	unsigned char padding_2d8[0x8]; // 0x2d8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.WeaponOverheatWidget.OnWeaponUnequipped (Underlying native function: OnWeaponUnequipped 0xa954a18)
	void OnWeaponUnequipped(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.WeaponOverheatWidget.OnWeaponEquipped (Underlying native function: OnWeaponEquipped 0xa95495c)
	void OnWeaponEquipped(class AFortWeapon*& CurrentWeapon, class AFortWeapon*& PrevWeapon); // (Final | Native | Protected)

	// Function /Script/FortniteUI.WeaponOverheatWidget.OnPawnChanged (Underlying native function: OnPawnChanged 0xa9548f0)
	void OnPawnChanged(); // (Final | Native | Protected)
};

