// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Buttons/CloseButton.CloseButton_C
// Size: 0x14b9
class UCloseButton_C : public UBacchusCloseButton
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1440 (0x8)
	class UWidgetAnimation* Unhover; // 0x1448 (0x8)
	class UWidgetAnimation* Pressed; // 0x1450 (0x8)
	class UWidgetAnimation* Hover; // 0x1458 (0x8)
	class UBorder* BorderContainer; // 0x1460 (0x8)
	class UImage* ButtonBacking; // 0x1468 (0x8)
	class UImage* CloseIcon; // 0x1470 (0x8)
	class USizeBox* SizeBoxControl; // 0x1478 (0x8)
	class UCommonTextBlock* TextButtonAction; // 0x1480 (0x8)
	struct FText ButtonDescription; // 0x1488 (0x18)
	bool FontSizeOveride; // 0x14a0 (0x1)
	unsigned char unreflected_14a1[0x3]; // 0x14a1 (0x3) 
	int FontSize; // 0x14a4 (0x4)
	struct FMargin PaddingOveride; // 0x14a8 (0x10)
	bool PaddingOveride; // 0x14b8 (0x1)

	/* Functions */

	// Function /Game/UI/Foundation/Buttons/CloseButton.CloseButton_C.SetText (Has no native function)
	void SetText(struct FText& Text); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/CloseButton.CloseButton_C.HandleSize (Has no native function)
	void HandleSize(bool& TempboolVariable, bool& TempboolVariable1, int& TempintVariable, struct FMargin& K2NodeMakeStructMargin, struct FMargin& K2NodeSelectDefault, int& K2NodeSelectDefault1, struct FSlateFontInfo& K2NodeMakeStructSlateFontInfo); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/CloseButton.CloseButton_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/CloseButton.CloseButton_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/CloseButton.CloseButton_C.ExecuteUbergraph_CloseButton (Has no native function)
	void ExecuteUbergraphCloseButton(int& EntryPoint, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue1); // (Final | 0x00008000)
};

