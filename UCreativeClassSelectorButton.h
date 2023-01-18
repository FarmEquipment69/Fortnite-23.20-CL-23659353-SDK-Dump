// Class /Script/CRD_ClassSelectorUI.CreativeClassSelectorButton
// Size: 0x1420
class UCreativeClassSelectorButton : public UCommonButtonBase
{
	class UCommonTextBlock* ButtonTextBlock; // 0x13e0 (0x8)
	class UCommonActionWidget* ActionWidget; // 0x13e8 (0x8)
	struct FText ButtonText; // 0x13f0 (0x18)
	struct FDataTableRowHandle ButtonInputAction; // 0x1408 (0x10)
	bool bAutoCapitalize; // 0x1418 (0x1)
	unsigned char padding_1419[0x7]; // 0x1419 (0x7)

	/* Functions */

	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelectorButton.SetButtonText (Underlying native function: SetButtonText 0x7362e24)
	void SetButtonText(struct FText& InText); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

