// Class /Script/FortniteUI.FortVariantSelector
// Size: 0x340
class UFortVariantSelector : public UFortVariantEditorWidgetBase
{
	class UDynamicEntryBox* EntryBoxVariantOptions; // 0x318 (0x8)
	class UCommonTextBlock* TextVariantName; // 0x320 (0x8)
	class UVariantObject* CurrentSelectedVariant; // 0x328 (0x8)
	class UCommonButtonGroupLegacy* TileButtonGroup; // 0x330 (0x8)
	unsigned char padding_338[0x8]; // 0x338 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortVariantSelector.HandleItemSelected (Underlying native function: HandleItemSelected 0xa953db0)
	void HandleItemSelected(class UCommonButtonLegacy*& AssociatedButton, int& ButtonIndex); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortVariantSelector.HandleItemHovered (Underlying native function: HandleItemHovered 0xa953cc8)
	void HandleItemHovered(class UCommonButtonLegacy*& AssociatedButton, int& ButtonIndex); // (Final | Native | Protected)
};

