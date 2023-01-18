// Class /Script/FortniteUI.FortColorPickerSwatchTile
// Size: 0x1460
class UFortColorPickerSwatchTile : public UCommonButtonLegacy
{
	class UImage* ImageColor; // 0x1430 (0x8)
	class UImage* ImageLocked; // 0x1438 (0x8)
	class UImage* ImageSelected; // 0x1440 (0x8)
	struct FName ImageColorParam; // 0x1448 (0x4)
	struct FLinearColor SwatchColor; // 0x144c (0x10)
	unsigned char padding_145c[0x4]; // 0x145c (0x4)

	/* Functions */

	// Function /Script/FortniteUI.FortColorPickerSwatchTile.OnSwatchLockedStateChanged (Has no native function)
	void OnSwatchLockedStateChanged(bool& bSwatchLocked); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortColorPickerSwatchTile.OnSwatchColorSet (Has no native function)
	void OnSwatchColorSet(bool& bInNullColor); // (Event | Protected | BlueprintEvent)
};

