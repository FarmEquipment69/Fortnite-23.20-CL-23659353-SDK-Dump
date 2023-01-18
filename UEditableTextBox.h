// Class /Script/UMG.EditableTextBox
// Size: 0xf60
class UEditableTextBox : public UWidget
{
	struct FText Text; // 0x148 (0x18)
	struct FDelegate TextDelegate; // 0x160 (0xc)
	unsigned char unreflected_16c[0x4]; // 0x16c (0x4) 
	struct FEditableTextBoxStyle WidgetStyle; // 0x170 (0xd80)
	struct FText HintText; // 0xef0 (0x18)
	struct FDelegate HintTextDelegate; // 0xf08 (0xc)
	bool IsReadOnly; // 0xf14 (0x1)
	bool IsPassword; // 0xf15 (0x1)
	unsigned char unreflected_f16[0x2]; // 0xf16 (0x2) 
	float MinimumDesiredWidth; // 0xf18 (0x4)
	bool IsCaretMovedWhenGainFocus; // 0xf1c (0x1)
	bool SelectAllTextWhenFocused; // 0xf1d (0x1)
	bool RevertTextOnEscape; // 0xf1e (0x1)
	bool ClearKeyboardFocusOnCommit; // 0xf1f (0x1)
	bool SelectAllTextOnCommit; // 0xf20 (0x1)
	bool AllowContextMenu; // 0xf21 (0x1)
	struct TEnumAsByte<EVirtualKeyboardType> KeyboardType; // 0xf22 (0x1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xf23 (0x1)
	enum EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0xf24 (0x1)
	enum EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xf25 (0x1)
	struct TEnumAsByte<ETextJustify> Justification; // 0xf26 (0x1)
	enum ETextOverflowPolicy OverflowPolicy; // 0xf27 (0x1)
	struct FShapedTextOptions ShapedTextOptions; // 0xf28 (0x3)
	unsigned char unreflected_f2b[0x5]; // 0xf2b (0x5) 
	struct FMulticastInlineDelegate OnTextChanged; // 0xf30 (0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xf40 (0x10)
	unsigned char padding_f50[0x10]; // 0xf50 (0x10)

	/* Functions */

	// Function /Script/UMG.EditableTextBox.SetTextOverflowPolicy (Underlying native function: SetTextOverflowPolicy 0x9aef9a4)
	void SetTextOverflowPolicy(enum ETextOverflowPolicy& InOverflowPolicy); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.EditableTextBox.SetText (Underlying native function: SetText 0x9aef888)
	void SetText(struct FText& InText); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.EditableTextBox.SetJustification (Underlying native function: SetJustification 0x9aeea60)
	void SetJustification(struct TEnumAsByte<ETextJustify>& InJustification); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.EditableTextBox.SetIsReadOnly (Underlying native function: SetIsReadOnly 0x9aee9e0)
	void SetIsReadOnly(bool& bReadOnly); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.EditableTextBox.SetIsPassword (Underlying native function: SetIsPassword 0x9aee8e0)
	void SetIsPassword(bool& bIsPassword); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.EditableTextBox.SetHintText (Underlying native function: SetHintText 0x9aee540)
	void SetHintText(struct FText& InText); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.EditableTextBox.SetForegroundColor (Underlying native function: SetForegroundColor 0x9aee490)
	void SetForegroundColor(struct FLinearColor& Color); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.EditableTextBox.SetError (Underlying native function: SetError 0x9aee298)
	void SetError(struct FText& InError); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature (Has no native function)
	void OnEditableTextBoxCommittedEventDelegateSignature(struct FText& Text, struct TEnumAsByte<ETextCommit>& CommitMethod); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature (Has no native function)
	void OnEditableTextBoxChangedEventDelegateSignature(struct FText& Text); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// Function /Script/UMG.EditableTextBox.HasError (Underlying native function: HasError 0x9aecebc)
	bool HasError(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.EditableTextBox.GetText (Underlying native function: GetText 0x9aecb84)
	struct FText GetText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.EditableTextBox.ClearError (Underlying native function: ClearError 0x9aebc70)
	void ClearError(); // (Final | Native | Public | BlueprintCallable)
};

