// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Buttons/SoloButton.SoloButton_C
// Size: 0x149a
class USoloButton_C : public UCommonButtonLegacy
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1430 (0x8)
	class UWidgetAnimation* Pressed; // 0x1438 (0x8)
	class UWidgetAnimation* Hover; // 0x1440 (0x8)
	class UBorder* BorderContainer; // 0x1448 (0x8)
	class UImage* ButtonBacking; // 0x1450 (0x8)
	class USizeBox* SizeBoxControl; // 0x1458 (0x8)
	class UCommonTextBlock* TextButtonAction; // 0x1460 (0x8)
	struct FText ButtonDescription; // 0x1468 (0x18)
	bool FontSizeOveride; // 0x1480 (0x1)
	unsigned char unreflected_1481[0x3]; // 0x1481 (0x3) 
	int FontSize; // 0x1484 (0x4)
	struct FMargin PaddingOveride; // 0x1488 (0x10)
	bool PaddingOveride; // 0x1498 (0x1)
	bool IsDisabled; // 0x1499 (0x1)

	/* Functions */

	// Function /Game/UI/Foundation/Buttons/SoloButton.SoloButton_C.SetText (Has no native function)
	void SetText(struct FText& Text); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/SoloButton.SoloButton_C.HandleSize (Has no native function)
	void HandleSize(bool& TempboolVariable, bool& TempboolVariable1, int& TempintVariable, struct FMargin& K2NodeMakeStructMargin, struct FMargin& K2NodeSelectDefault, int& K2NodeSelectDefault1, struct FSlateFontInfo& K2NodeMakeStructSlateFontInfo); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/SoloButton.SoloButton_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/SoloButton.SoloButton_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/SoloButton.SoloButton_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/SoloButton.SoloButton_C.BP_OnUnhovered (Has no native function)
	void BPOnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/SoloButton.SoloButton_C.BP_OnClicked (Has no native function)
	void BPOnClicked(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/SoloButton.SoloButton_C.BP_OnDisabled (Has no native function)
	void BPOnDisabled(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/SoloButton.SoloButton_C.BP_OnEnabled (Has no native function)
	void BPOnEnabled(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/Buttons/SoloButton.SoloButton_C.ExecuteUbergraph_SoloButton (Has no native function)
	void ExecuteUbergraphSoloButton(int& EntryPoint, bool& K2NodeEventIsDesignTime, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReverseReturnValue); // (Final | 0x00008000)
};

