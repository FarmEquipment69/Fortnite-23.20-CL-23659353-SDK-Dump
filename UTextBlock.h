// Class /Script/UMG.TextBlock
// Size: 0x320
class UTextBlock : public UTextLayoutWidget
{
	struct FText Text; // 0x168 (0x18)
	struct FDelegate TextDelegate; // 0x180 (0xc)
	struct FSlateColor ColorAndOpacity; // 0x18c (0x14)
	struct FDelegate ColorAndOpacityDelegate; // 0x1a0 (0xc)
	unsigned char unreflected_1ac[0x4]; // 0x1ac (0x4) 
	struct FSlateFontInfo Font; // 0x1b0 (0x58)
	unsigned char unreflected_208[0x8]; // 0x208 (0x8) 
	struct FSlateBrush StrikeBrush; // 0x210 (0xc0)
	struct FVector2D ShadowOffset; // 0x2d0 (0x10)
	struct FLinearColor ShadowColorAndOpacity; // 0x2e0 (0x10)
	struct FDelegate ShadowColorAndOpacityDelegate; // 0x2f0 (0xc)
	float MinDesiredWidth; // 0x2fc (0x4)
	bool bWrapWithInvalidationPanel; // 0x300 (0x1)
	enum ETextTransformPolicy TextTransformPolicy; // 0x301 (0x1)
	enum ETextOverflowPolicy TextOverflowPolicy; // 0x302 (0x1)
	bool bSimpleTextMode; // 0x303 (0x1)
	unsigned char padding_304[0x1c]; // 0x304 (0x1c)

	/* Functions */

	// Function /Script/UMG.TextBlock.SetTextTransformPolicy (Underlying native function: SetTextTransformPolicy 0x9b11d84)
	void SetTextTransformPolicy(enum ETextTransformPolicy& InTransformPolicy); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.TextBlock.SetTextOverflowPolicy (Underlying native function: SetTextOverflowPolicy 0x2cf5324)
	void SetTextOverflowPolicy(enum ETextOverflowPolicy& InOverflowPolicy); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.TextBlock.SetText (Underlying native function: SetText 0x1356ef4)
	void SetText(struct FText& InText); // (Native | Public | BlueprintCallable)

	// Function /Script/UMG.TextBlock.SetStrikeBrush (Underlying native function: SetStrikeBrush 0x9b11894)
	void SetStrikeBrush(struct FSlateBrush& InStrikeBrush); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.TextBlock.SetShadowOffset (Underlying native function: SetShadowOffset 0x9b111e0)
	void SetShadowOffset(struct FVector2D& InShadowOffset); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.TextBlock.SetShadowColorAndOpacity (Underlying native function: SetShadowColorAndOpacity 0x9b11158)
	void SetShadowColorAndOpacity(struct FLinearColor& InShadowColorAndOpacity); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.TextBlock.SetOpacity (Underlying native function: SetOpacity 0x9b102a0)
	void SetOpacity(float& InOpacity); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.TextBlock.SetMinDesiredWidth (Underlying native function: SetMinDesiredWidth 0x9b0f954)
	void SetMinDesiredWidth(float& InMinDesiredWidth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.TextBlock.SetFontOutlineMaterial (Underlying native function: SetFontOutlineMaterial 0x9b0e400)
	void SetFontOutlineMaterial(class UMaterialInterface*& InMaterial); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.TextBlock.SetFontMaterial (Underlying native function: SetFontMaterial 0x9b0e2c4)
	void SetFontMaterial(class UMaterialInterface*& InMaterial); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.TextBlock.SetFont (Underlying native function: SetFont 0x22d4d90)
	void SetFont(struct FSlateFontInfo& InFontInfo); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.TextBlock.SetColorAndOpacity (Underlying native function: SetColorAndOpacity 0x2236f7c)
	void SetColorAndOpacity(struct FSlateColor& InColorAndOpacity); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.TextBlock.SetAutoWrapText (Underlying native function: SetAutoWrapText 0x9b0d010)
	void SetAutoWrapText(bool& InAutoTextWrap); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.TextBlock.GetText (Underlying native function: GetText 0x2042f1c)
	struct FText GetText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.TextBlock.GetDynamicOutlineMaterial (Underlying native function: GetDynamicOutlineMaterial 0x9b0a920)
	class UMaterialInstanceDynamic* GetDynamicOutlineMaterial(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.TextBlock.GetDynamicFontMaterial (Underlying native function: GetDynamicFontMaterial 0x25c9f90)
	class UMaterialInstanceDynamic* GetDynamicFontMaterial(); // (Final | Native | Public | BlueprintCallable)
};

