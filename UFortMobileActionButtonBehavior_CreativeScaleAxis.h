// Class /Script/FortniteUI.FortMobileActionButtonBehavior_CreativeScaleAxis
// Size: 0x130
class UFortMobileActionButtonBehavior_CreativeScaleAxis : public UFortMobileActionButtonBehavior
{
	class UPaperSprite* GrowSprite; // 0x110 (0x8)
	class UPaperSprite* WidthResizeSprite; // 0x118 (0x8)
	class UPaperSprite* HeightResizeSprite; // 0x120 (0x8)
	class UPaperSprite* DepthResizeSprite; // 0x128 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortMobileActionButtonBehavior_CreativeScaleAxis.HandleWeaponEquipped (Underlying native function: HandleWeaponEquipped 0xa5d148c)
	void HandleWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PreviousWeapon); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortMobileActionButtonBehavior_CreativeScaleAxis.HandleMoveToolScaleAxisChanged (Underlying native function: HandleMoveToolScaleAxisChanged 0xa5d10a8)
	void HandleMoveToolScaleAxisChanged(enum EScaleAxis& Axis); // (Final | Native | Private)
};

