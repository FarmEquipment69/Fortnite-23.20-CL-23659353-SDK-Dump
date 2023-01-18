// Class /Script/Engine.TextRenderComponent
// Size: 0x590
class UTextRenderComponent : public UPrimitiveComponent
{
	struct FText Text; // 0x540 (0x18)
	class UMaterialInterface* TextMaterial; // 0x558 (0x8)
	class UFont* Font; // 0x560 (0x8)
	struct TEnumAsByte<EHorizTextAligment> HorizontalAlignment; // 0x568 (0x1)
	struct TEnumAsByte<EVerticalTextAligment> VerticalAlignment; // 0x569 (0x1)
	unsigned char unreflected_56a[0x2]; // 0x56a (0x2) 
	struct FColor TextRenderColor; // 0x56c (0x4)
	float XScale; // 0x570 (0x4)
	float YScale; // 0x574 (0x4)
	float WorldSize; // 0x578 (0x4)
	float InvDefaultSize; // 0x57c (0x4)
	float HorizSpacingAdjust; // 0x580 (0x4)
	float VertSpacingAdjust; // 0x584 (0x4)
	unsigned char bAlwaysRenderAsText; // 0x588 (0x1)
	unsigned char padding_589[0x7]; // 0x589 (0x7)

	/* Functions */

	// Function /Script/Engine.TextRenderComponent.SetYScale (Underlying native function: SetYScale 0x9c20918)
	void SetYScale(float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.TextRenderComponent.SetXScale (Underlying native function: SetXScale 0x9c2088c)
	void SetXScale(float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.TextRenderComponent.SetWorldSize (Underlying native function: SetWorldSize 0x9c20800)
	void SetWorldSize(float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.TextRenderComponent.SetVertSpacingAdjust (Underlying native function: SetVertSpacingAdjust 0x9c2065c)
	void SetVertSpacingAdjust(float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.TextRenderComponent.SetVerticalAlignment (Underlying native function: SetVerticalAlignment 0x9c206e8)
	void SetVerticalAlignment(struct TEnumAsByte<EVerticalTextAligment>& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.TextRenderComponent.SetTextRenderColor (Underlying native function: SetTextRenderColor 0x9c20498)
	void SetTextRenderColor(struct FColor& Value); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.TextRenderComponent.SetTextMaterial (Underlying native function: SetTextMaterial 0x9c20410)
	void SetTextMaterial(class UMaterialInterface*& Material); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.TextRenderComponent.SetHorizSpacingAdjust (Underlying native function: SetHorizSpacingAdjust 0x9c1fc58)
	void SetHorizSpacingAdjust(float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.TextRenderComponent.SetHorizontalAlignment (Underlying native function: SetHorizontalAlignment 0x9c1fce4)
	void SetHorizontalAlignment(struct TEnumAsByte<EHorizTextAligment>& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.TextRenderComponent.SetFont (Underlying native function: SetFont 0x9c1fbb0)
	void SetFont(class UFont*& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.TextRenderComponent.K2_SetText (Underlying native function: K2_SetText 0x9c1fa2c)
	void K2SetText(struct FText& Value); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TextRenderComponent.GetTextWorldSize (Underlying native function: GetTextWorldSize 0x9c1f964)
	struct FVector GetTextWorldSize(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.TextRenderComponent.GetTextLocalSize (Underlying native function: GetTextLocalSize 0x9c1f8d8)
	struct FVector GetTextLocalSize(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

