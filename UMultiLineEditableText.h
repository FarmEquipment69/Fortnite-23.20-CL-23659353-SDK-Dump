// Class /Script/UMG.MultiLineEditableText
// Size: 0x500
class UMultiLineEditableText : public UTextLayoutWidget
{
	struct FText Text; // 0x168 (0x18)
	struct FText HintText; // 0x180 (0x18)
	struct FDelegate HintTextDelegate; // 0x198 (0xc)
	unsigned char unreflected_1a4[0xc]; // 0x1a4 (0xc) 
	struct FTextBlockStyle WidgetStyle; // 0x1b0 (0x310)
	bool bIsReadOnly; // 0x4c0 (0x1)
	bool SelectAllTextWhenFocused; // 0x4c1 (0x1)
	bool ClearTextSelectionOnFocusLoss; // 0x4c2 (0x1)
	bool RevertTextOnEscape; // 0x4c3 (0x1)
	bool ClearKeyboardFocusOnCommit; // 0x4c4 (0x1)
	bool AllowContextMenu; // 0x4c5 (0x1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x4c6 (0x1)
	enum EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x4c7 (0x1)
	struct FMulticastInlineDelegate OnTextChanged; // 0x4c8 (0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x4d8 (0x10)
	unsigned char padding_4e8[0x18]; // 0x4e8 (0x18)

	/* Functions */

	// Function /Script/UMG.MultiLineEditableText.SetWidgetStyle (Underlying native function: SetWidgetStyle 0x9b12be4)
	void SetWidgetStyle(struct FTextBlockStyle& InWidgetStyle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UMG.MultiLineEditableText.SetText (Underlying native function: SetText 0x9b1193c)
	void SetText(struct FText& InText); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.MultiLineEditableText.SetIsReadOnly (Underlying native function: SetIsReadOnly 0x9b0efb4)
	void SetIsReadOnly(bool& bReadOnly); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.MultiLineEditableText.SetHintText (Underlying native function: SetHintText 0x9b0e660)
	void SetHintText(struct FText& InHintText); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.MultiLineEditableText.SetFontOutlineMaterial (Underlying native function: SetFontOutlineMaterial 0x9b0e370)
	void SetFontOutlineMaterial(class UMaterialInterface*& InMaterial); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.MultiLineEditableText.SetFontMaterial (Underlying native function: SetFontMaterial 0x9b0e234)
	void SetFontMaterial(class UMaterialInterface*& InMaterial); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.MultiLineEditableText.SetFont (Underlying native function: SetFont 0x9b0e12c)
	void SetFont(struct FSlateFontInfo& InFontInfo); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature (Has no native function)
	void OnMultiLineEditableTextCommittedEventDelegateSignature(struct FText& Text, struct TEnumAsByte<ETextCommit>& CommitMethod); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature (Has no native function)
	void OnMultiLineEditableTextChangedEventDelegateSignature(struct FText& Text); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// Function /Script/UMG.MultiLineEditableText.GetText (Underlying native function: GetText 0x9b0b0c8)
	struct FText GetText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.MultiLineEditableText.GetHintText (Underlying native function: GetHintText 0x9b0aa60)
	struct FText GetHintText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.MultiLineEditableText.GetFont (Underlying native function: GetFont 0x9b0aa04)
	struct FSlateFontInfo GetFont(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

