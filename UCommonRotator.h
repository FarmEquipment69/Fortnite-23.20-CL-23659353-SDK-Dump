// Class /Script/CommonUI.CommonRotator
// Size: 0x1440
class UCommonRotator : public UCommonButtonBase
{
	unsigned char unreflected_13e0[0x10]; // 0x13e0 (0x10) 
	struct FMulticastInlineDelegate OnRotated; // 0x13f0 (0x10)
	unsigned char unreflected_1400[0x18]; // 0x1400 (0x18) 
	class UCommonTextBlock* MyText; // 0x1418 (0x8)
	unsigned char padding_1420[0x20]; // 0x1420 (0x20)

	/* Functions */

	// Function /Script/CommonUI.CommonRotator.ShiftTextRight (Underlying native function: ShiftTextRight 0x6a4edb0)
	void ShiftTextRight(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonRotator.ShiftTextLeft (Underlying native function: ShiftTextLeft 0x6a4ed9c)
	void ShiftTextLeft(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonRotator.SetSelectedItem (Underlying native function: SetSelectedItem 0x19cf218)
	void SetSelectedItem(int& InValue); // (Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonRotator.PopulateTextLabels (Underlying native function: PopulateTextLabels 0x19d24f8)
	void PopulateTextLabels(struct TArray<struct FText>& Labels); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonRotator.GetSelectedText (Underlying native function: GetSelectedText 0x6a4ba0c)
	struct FText GetSelectedText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonRotator.GetSelectedIndex (Underlying native function: GetSelectedIndex 0x6a4b920)
	int GetSelectedIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonRotator.BP_OnOptionsPopulated (Has no native function)
	void BPOnOptionsPopulated(int& Count); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonRotator.BP_OnOptionSelected (Has no native function)
	void BPOnOptionSelected(int& Index); // (Event | Protected | BlueprintEvent)
};

