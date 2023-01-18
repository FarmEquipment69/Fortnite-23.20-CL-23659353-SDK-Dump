// Class /Script/UMG.MultiLineEditableTextBox
// Size: 0xf70
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
	struct FText Text; // 0x168 (0x18)
	struct FText HintText; // 0x180 (0x18)
	struct FDelegate HintTextDelegate; // 0x198 (0xc)
	unsigned char unreflected_1a4[0xc]; // 0x1a4 (0xc) 
	struct FEditableTextBoxStyle WidgetStyle; // 0x1b0 (0xd80)
	bool bIsReadOnly; // 0xf30 (0x1)
	bool AllowContextMenu; // 0xf31 (0x1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xf32 (0x1)
	enum EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xf33 (0x1)
	unsigned char unreflected_f34[0x4]; // 0xf34 (0x4) 
	struct FMulticastInlineDelegate OnTextChanged; // 0xf38 (0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xf48 (0x10)
	unsigned char padding_f58[0x18]; // 0xf58 (0x18)

	/* Functions */

	// Function /Script/UMG.MultiLineEditableTextBox.SetTextStyle (Underlying native function: SetTextStyle 0x9b11bb8)
	void SetTextStyle(struct FTextBlockStyle& InTextStyle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UMG.MultiLineEditableTextBox.SetText (Underlying native function: SetText 0x9b119d8)
	void SetText(struct FText& InText); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.MultiLineEditableTextBox.SetIsReadOnly (Underlying native function: SetIsReadOnly 0x9b0f034)
	void SetIsReadOnly(bool& bReadOnly); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.MultiLineEditableTextBox.SetHintText (Underlying native function: SetHintText 0x9b0e6fc)
	void SetHintText(struct FText& InHintText); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.MultiLineEditableTextBox.SetForegroundColor (Underlying native function: SetForegroundColor 0x9b0e4ac)
	void SetForegroundColor(struct FLinearColor& Color); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.MultiLineEditableTextBox.SetError (Underlying native function: SetError 0x9b0ddfc)
	void SetError(struct FText& InError); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature (Has no native function)
	void OnMultiLineEditableTextBoxCommittedEventDelegateSignature(struct FText& Text, struct TEnumAsByte<ETextCommit>& CommitMethod); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature (Has no native function)
	void OnMultiLineEditableTextBoxChangedEventDelegateSignature(struct FText& Text); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// Function /Script/UMG.MultiLineEditableTextBox.GetText (Underlying native function: GetText 0x9b0b144)
	struct FText GetText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.MultiLineEditableTextBox.GetHintText (Underlying native function: GetHintText 0x9b0aadc)
	struct FText GetHintText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

