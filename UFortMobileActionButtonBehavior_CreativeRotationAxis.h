// Class /Script/FortniteUI.FortMobileActionButtonBehavior_CreativeRotationAxis
// Size: 0x128
class UFortMobileActionButtonBehavior_CreativeRotationAxis : public UFortMobileActionButtonBehavior
{
	class UPaperSprite* RotateXAxisSprite; // 0x110 (0x8)
	class UPaperSprite* RotateYAxisSprite; // 0x118 (0x8)
	class UPaperSprite* RotateZAxisSprite; // 0x120 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortMobileActionButtonBehavior_CreativeRotationAxis.HandleWeaponEquipped (Underlying native function: HandleWeaponEquipped 0xa5d1304)
	void HandleWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PreviousWeapon); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortMobileActionButtonBehavior_CreativeRotationAxis.HandleMoveToolRotationAxisChanged (Underlying native function: HandleMoveToolRotationAxisChanged 0xa5d0f94)
	void HandleMoveToolRotationAxisChanged(unsigned char& AxisIndex); // (Final | Native | Private)
};

