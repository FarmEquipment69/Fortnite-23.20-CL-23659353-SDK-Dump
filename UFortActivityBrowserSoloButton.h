// Class /Script/FortniteUI.FortActivityBrowserSoloButton
// Size: 0x1520
class UFortActivityBrowserSoloButton : public UFortTextButton
{
	struct FText SecondaryText; // 0x14c8 (0x18)
	class UClass* SecondaryTextStyle; // 0x14e0 (0x8)
	class UCommonTextBlock* TextSecondary; // 0x14e8 (0x8)
	bool bEnableMobileOverrides; // 0x14f0 (0x1)
	unsigned char unreflected_14f1[0x3]; // 0x14f1 (0x3) 
	int MinWidthOverride; // 0x14f4 (0x4)
	int MinHeightOverride; // 0x14f8 (0x4)
	struct FMargin TextPaddingOverride; // 0x14fc (0x10)
	int FontSizeOverride; // 0x150c (0x4)
	class UMaterialInterface* MaterialOverride; // 0x1510 (0x8)
	unsigned char padding_1518[0x8]; // 0x1518 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortActivityBrowserSoloButton.SetSecondaryText (Underlying native function: SetSecondaryText 0xa69389c)
	void SetSecondaryText(struct FText& InSecondaryText); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

