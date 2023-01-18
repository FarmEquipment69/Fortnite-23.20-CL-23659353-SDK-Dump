// Class /Script/FortniteUI.FortMainMenuButton
// Size: 0x1560
class UFortMainMenuButton : public UCommonButtonLegacy
{
	struct FText DefaultText; // 0x1430 (0x18)
	unsigned char unreflected_1448[0x8]; // 0x1448 (0x8) 
	struct FSlateBrush DefaultBrush; // 0x1450 (0xc0)
	int NormalButtonHeight; // 0x1510 (0x4)
	int MobileButtonHeight; // 0x1514 (0x4)
	struct FMargin TextPadding; // 0x1518 (0x10)
	struct FMargin ContentPadding; // 0x1528 (0x10)
	class UClass* MobileStyle; // 0x1538 (0x8)
	class UCommonTextBlock* TextContent; // 0x1540 (0x8)
	class UImage* ImageIcon; // 0x1548 (0x8)
	class UBorder* ContentBorder; // 0x1550 (0x8)
	unsigned char padding_1558[0x8]; // 0x1558 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortMainMenuButton.SetText (Underlying native function: SetText 0xa7c3f50)
	void SetText(struct FText& InText); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

