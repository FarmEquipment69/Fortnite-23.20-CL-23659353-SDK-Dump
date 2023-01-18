// Class /Script/UMG.EditableText
// Size: 0x4b0
class UEditableText : public UWidget
{
	struct FText Text; // 0x148 (0x18)
	struct FDelegate TextDelegate; // 0x160 (0xc)
	unsigned char unreflected_16c[0x4]; // 0x16c (0x4) 
	struct FText HintText; // 0x170 (0x18)
	struct FDelegate HintTextDelegate; // 0x188 (0xc)
	unsigned char unreflected_194[0xc]; // 0x194 (0xc) 
	struct FEditableTextStyle WidgetStyle; // 0x1a0 (0x2c0)
	bool IsReadOnly; // 0x460 (0x1)
	bool IsPassword; // 0x461 (0x1)
	unsigned char unreflected_462[0x2]; // 0x462 (0x2) 
	float MinimumDesiredWidth; // 0x464 (0x4)
	bool IsCaretMovedWhenGainFocus; // 0x468 (0x1)
	bool SelectAllTextWhenFocused; // 0x469 (0x1)
	bool RevertTextOnEscape; // 0x46a (0x1)
	bool ClearKeyboardFocusOnCommit; // 0x46b (0x1)
	bool SelectAllTextOnCommit; // 0x46c (0x1)
	bool AllowContextMenu; // 0x46d (0x1)
	struct TEnumAsByte<EVirtualKeyboardType> KeyboardType; // 0x46e (0x1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x46f (0x1)
	enum EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x470 (0x1)
	enum EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x471 (0x1)
	struct TEnumAsByte<ETextJustify> Justification; // 0x472 (0x1)
	enum ETextOverflowPolicy OverflowPolicy; // 0x473 (0x1)
	struct FShapedTextOptions ShapedTextOptions; // 0x474 (0x3)
	unsigned char unreflected_477[0x1]; // 0x477 (0x1) 
	struct FMulticastInlineDelegate OnTextChanged; // 0x478 (0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x488 (0x10)
	unsigned char padding_498[0x18]; // 0x498 (0x18)

	/* Functions */

	// Function /Script/UMG.EditableText.SetTextOverflowPolicy (Underlying native function: SetTextOverflowPolicy 0x9aef924)
	void SetTextOverflowPolicy(enum ETextOverflowPolicy& InOverflowPolicy); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.EditableText.SetText (Underlying native function: SetText 0x9aef7ec)
	void SetText(struct FText& InText); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.EditableText.SetMinimumDesiredWidth (Underlying native function: SetMinimumDesiredWidth 0x9aeed38)
	void SetMinimumDesiredWidth(float& InMinDesiredWidth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.EditableText.SetJustification (Underlying native function: SetJustification 0x222c82c)
	void SetJustification(struct TEnumAsByte<ETextJustify>& InJustification); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.EditableText.SetIsReadOnly (Underlying native function: SetIsReadOnly 0x9aee960)
	void SetIsReadOnly(bool& InbIsReadyOnly); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.EditableText.SetIsPassword (Underlying native function: SetIsPassword 0x9aee860)
	void SetIsPassword(bool& InbIsPassword); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.EditableText.SetHintText (Underlying native function: SetHintText 0x2660128)
	void SetHintText(struct FText& InHintText); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.EditableText.SetFontOutlineMaterial (Underlying native function: SetFontOutlineMaterial 0x9aee400)
	void SetFontOutlineMaterial(class UMaterialInterface*& InMaterial); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.EditableText.SetFontMaterial (Underlying native function: SetFontMaterial 0x9aee370)
	void SetFontMaterial(class UMaterialInterface*& InMaterial); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.EditableText.SetFont (Underlying native function: SetFont 0x27ceffc)
	void SetFont(struct FSlateFontInfo& InFontInfo); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature (Has no native function)
	void OnEditableTextCommittedEventDelegateSignature(struct FText& Text, struct TEnumAsByte<ETextCommit>& CommitMethod); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// DelegateFunction /Script/UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature (Has no native function)
	void OnEditableTextChangedEventDelegateSignature(struct FText& Text); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// Function /Script/UMG.EditableText.GetText (Underlying native function: GetText 0x9aecb08)
	struct FText GetText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.EditableText.GetJustification (Underlying native function: GetJustification 0x9aec604)
	struct TEnumAsByte<ETextJustify> GetJustification(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.EditableText.GetHintText (Underlying native function: GetHintText 0x9aec588)
	struct FText GetHintText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.EditableText.GetFont (Underlying native function: GetFont 0x2ab3a10)
	struct FSlateFontInfo GetFont(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

