// Class /Script/FortniteUI.AthenaItemIcon
// Size: 0x2d8
class UAthenaItemIcon : public UAthenaItemElementWidgetBase
{
	unsigned char unreflected_298[0x10]; // 0x298 (0x10) 
	class UImage* ImageItemIcon; // 0x2a8 (0x8)
	class UCommonTextBlock* TextStackCount; // 0x2b0 (0x8)
	class UImage* ImageAmmoIcon; // 0x2b8 (0x8)
	class UAthenaItemTierWidget* ItemTierWidget; // 0x2c0 (0x8)
	bool bUseLargePreviewImage; // 0x2c8 (0x1)
	unsigned char unreflected_2c9[0x3]; // 0x2c9 (0x3) 
	struct FName ItemIconTextureParamName; // 0x2cc (0x4)
	struct FName AmmoIconTextureParamName; // 0x2d0 (0x4)
	bool bDisplayInitialAmmoCount; // 0x2d4 (0x1)
	unsigned char padding_2d5[0x3]; // 0x2d5 (0x3)

	/* Functions */

	// Function /Script/FortniteUI.AthenaItemIcon.OnStackCountTextUpdated (Has no native function)
	void OnStackCountTextUpdated(bool& bIsInfinite); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemIcon.OnItemIconUpdated (Has no native function)
	void OnItemIconUpdated(bool& bHasItemIcon); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemIcon.OnAmmoIconUpdated (Has no native function)
	void OnAmmoIconUpdated(bool& bHasAmmoIcon); // (Event | Protected | BlueprintEvent)
};

