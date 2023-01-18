// Class /Script/UMG.RichTextBlock
// Size: 0x800
class URichTextBlock : public UTextLayoutWidget
{
	struct FText Text; // 0x168 (0x18)
	class UDataTable* TextStyleSet; // 0x180 (0x8)
	struct TArray<class UClass*> DecoratorClasses; // 0x188 (0x10)
	bool bOverrideDefaultStyle; // 0x198 (0x1)
	unsigned char unreflected_199[0x7]; // 0x199 (0x7) 
	struct FTextBlockStyle DefaultTextStyleOverride; // 0x1a0 (0x310)
	float MinDesiredWidth; // 0x4b0 (0x4)
	enum ETextTransformPolicy TextTransformPolicy; // 0x4b4 (0x1)
	enum ETextOverflowPolicy TextOverflowPolicy; // 0x4b5 (0x1)
	unsigned char unreflected_4b6[0xa]; // 0x4b6 (0xa) 
	struct FTextBlockStyle DefaultTextStyle; // 0x4c0 (0x310)
	struct TArray<class URichTextBlockDecorator*> InstanceDecorators; // 0x7d0 (0x10)
	unsigned char padding_7e0[0x20]; // 0x7e0 (0x20)

	/* Functions */

	// Function /Script/UMG.RichTextBlock.SetTextTransformPolicy (Underlying native function: SetTextTransformPolicy 0x9b11d04)
	void SetTextTransformPolicy(enum ETextTransformPolicy& InTransformPolicy); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.RichTextBlock.SetTextStyleSet (Underlying native function: SetTextStyleSet 0x9b11c84)
	void SetTextStyleSet(class UDataTable*& NewTextStyleSet); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.RichTextBlock.SetTextOverflowPolicy (Underlying native function: SetTextOverflowPolicy 0x9b11b24)
	void SetTextOverflowPolicy(enum ETextOverflowPolicy& InOverflowPolicy); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.RichTextBlock.SetText (Underlying native function: SetText 0x14e29e4)
	void SetText(struct FText& InText); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UMG.RichTextBlock.SetMinDesiredWidth (Underlying native function: SetMinDesiredWidth 0x9b0f8d0)
	void SetMinDesiredWidth(float& InMinDesiredWidth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.RichTextBlock.SetDefaultTextStyle (Underlying native function: SetDefaultTextStyle 0x261b0e4)
	void SetDefaultTextStyle(struct FTextBlockStyle& InDefaultTextStyle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UMG.RichTextBlock.SetDefaultStrikeBrush (Underlying native function: SetDefaultStrikeBrush 0x9b0da80)
	void SetDefaultStrikeBrush(struct FSlateBrush& InStrikeBrush); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UMG.RichTextBlock.SetDefaultShadowOffset (Underlying native function: SetDefaultShadowOffset 0x9b0d9e8)
	void SetDefaultShadowOffset(struct FVector2D& InShadowOffset); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.RichTextBlock.SetDefaultShadowColorAndOpacity (Underlying native function: SetDefaultShadowColorAndOpacity 0x9b0d950)
	void SetDefaultShadowColorAndOpacity(struct FLinearColor& InShadowColorAndOpacity); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.RichTextBlock.SetDefaultMaterial (Underlying native function: SetDefaultMaterial 0x9b0d8bc)
	void SetDefaultMaterial(class UMaterialInterface*& InMaterial); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.RichTextBlock.SetDefaultFont (Underlying native function: SetDefaultFont 0x261afd8)
	void SetDefaultFont(struct FSlateFontInfo& InFontInfo); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.RichTextBlock.SetDefaultColorAndOpacity (Underlying native function: SetDefaultColorAndOpacity 0x261b1b4)
	void SetDefaultColorAndOpacity(struct FSlateColor& InColorAndOpacity); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.RichTextBlock.SetDecorators (Underlying native function: SetDecorators 0x9b0d820)
	void SetDecorators(struct TArray<class UClass*>& InDecoratorClasses); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UMG.RichTextBlock.SetAutoWrapText (Underlying native function: SetAutoWrapText 0x27339fc)
	void SetAutoWrapText(bool& InAutoTextWrap); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.RichTextBlock.RefreshTextLayout (Underlying native function: RefreshTextLayout 0x9b0c14c)
	void RefreshTextLayout(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.RichTextBlock.GetTextStyleSet (Underlying native function: GetTextStyleSet 0x9b0b23c)
	class UDataTable* GetTextStyleSet(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.RichTextBlock.GetText (Underlying native function: GetText 0x9b0b1c0)
	struct FText GetText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.RichTextBlock.GetDefaultDynamicMaterial (Underlying native function: GetDefaultDynamicMaterial 0x9b0a868)
	class UMaterialInstanceDynamic* GetDefaultDynamicMaterial(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.RichTextBlock.GetDecoratorByClass (Underlying native function: GetDecoratorByClass 0x9b0a794)
	class URichTextBlockDecorator* GetDecoratorByClass(class UClass*& DecoratorClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.RichTextBlock.ClearAllDefaultStyleOverrides (Underlying native function: ClearAllDefaultStyleOverrides 0x9b0a1bc)
	void ClearAllDefaultStyleOverrides(); // (Final | Native | Public)
};

