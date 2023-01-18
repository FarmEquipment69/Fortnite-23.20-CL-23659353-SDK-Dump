// Class /Script/UMG.InputKeySelector
// Size: 0x8c0
class UInputKeySelector : public UWidget
{
	unsigned char unreflected_148[0x8]; // 0x148 (0x8) 
	struct FButtonStyle WidgetStyle; // 0x150 (0x3b0)
	struct FTextBlockStyle TextStyle; // 0x500 (0x310)
	struct FInputChord SelectedKey; // 0x810 (0x20)
	struct FMargin Margin; // 0x830 (0x10)
	struct FText KeySelectionText; // 0x840 (0x18)
	struct FText NoKeySpecifiedText; // 0x858 (0x18)
	bool bAllowModifierKeys; // 0x870 (0x1)
	bool bAllowGamepadKeys; // 0x871 (0x1)
	unsigned char unreflected_872[0x6]; // 0x872 (0x6) 
	struct TArray<struct FKey> EscapeKeys; // 0x878 (0x10)
	struct FMulticastInlineDelegate OnKeySelected; // 0x888 (0x10)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x898 (0x10)
	unsigned char padding_8a8[0x18]; // 0x8a8 (0x18)

	/* Functions */

	// Function /Script/UMG.InputKeySelector.SetTextBlockVisibility (Underlying native function: SetTextBlockVisibility 0x9b11a74)
	void SetTextBlockVisibility(enum ESlateVisibility& InVisibility); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.InputKeySelector.SetSelectedKey (Underlying native function: SetSelectedKey 0x9b10fc0)
	void SetSelectedKey(struct FInputChord& InSelectedKey); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UMG.InputKeySelector.SetNoKeySpecifiedText (Underlying native function: SetNoKeySpecifiedText 0x9b100c8)
	void SetNoKeySpecifiedText(struct FText& InNoKeySpecifiedText); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.InputKeySelector.SetKeySelectionText (Underlying native function: SetKeySelectionText 0x9b0f184)
	void SetKeySelectionText(struct FText& InKeySelectionText); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.InputKeySelector.SetEscapeKeys (Underlying native function: SetEscapeKeys 0x9b0dee8)
	void SetEscapeKeys(struct TArray<struct FKey>& InKeys); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UMG.InputKeySelector.SetAllowModifierKeys (Underlying native function: SetAllowModifierKeys 0x9b0cb74)
	void SetAllowModifierKeys(bool& bInAllowModifierKeys); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.InputKeySelector.SetAllowGamepadKeys (Underlying native function: SetAllowGamepadKeys 0x9b0caec)
	void SetAllowGamepadKeys(bool& bInAllowGamepadKeys); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/UMG.InputKeySelector.OnKeySelected__DelegateSignature (Has no native function)
	void OnKeySelectedDelegateSignature(struct FInputChord& SelectedKey); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature (Has no native function)
	void OnIsSelectingKeyChangedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/UMG.InputKeySelector.GetIsSelectingKey (Underlying native function: GetIsSelectingKey 0x9b0ac54)
	bool GetIsSelectingKey(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

