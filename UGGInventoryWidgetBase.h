// Class /Script/FortniteUI.GGInventoryWidgetBase
// Size: 0x368
class UGGInventoryWidgetBase : public UGGWidgetBase
{
	class UFortWeaponItemDefinition* NextItemToDisplay; // 0x338 (0x8)
	unsigned char padding_340[0x28]; // 0x340 (0x28)

	/* Functions */

	// Function /Script/FortniteUI.GGInventoryWidgetBase.UpdateWidgetForNewWeapon (Has no native function)
	void UpdateWidgetForNewWeapon(class UTexture2D*& Texture, enum EFortRarity& Rarity); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.GGInventoryWidgetBase.OnLocalPlayerNewWeapon (Underlying native function: OnLocalPlayerNewWeapon 0xa57f2c8)
	void OnLocalPlayerNewWeapon(class UFortWeaponItemDefinition*& NewWeapon); // (Final | Native | Private)

	// Function /Script/FortniteUI.GGInventoryWidgetBase.LastWeaponReached (Has no native function)
	void LastWeaponReached(); // (Event | Protected | BlueprintEvent)
};

