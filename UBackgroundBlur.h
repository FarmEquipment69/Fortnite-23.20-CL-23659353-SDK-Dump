// Class /Script/UMG.BackgroundBlur
// Size: 0x270
class UBackgroundBlur : public UContentWidget
{
	struct FMargin Padding; // 0x160 (0x10)
	struct TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x170 (0x1)
	struct TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x171 (0x1)
	bool bApplyAlphaToBlur; // 0x172 (0x1)
	unsigned char unreflected_173[0x1]; // 0x173 (0x1) 
	float BlurStrength; // 0x174 (0x4)
	bool bOverrideAutoRadiusCalculation; // 0x178 (0x1)
	unsigned char unreflected_179[0x3]; // 0x179 (0x3) 
	int BlurRadius; // 0x17c (0x4)
	struct FVector4 CornerRadius; // 0x180 (0x20)
	struct FSlateBrush LowQualityFallbackBrush; // 0x1a0 (0xc0)
	unsigned char padding_260[0x10]; // 0x260 (0x10)

	/* Functions */

	// Function /Script/UMG.BackgroundBlur.SetVerticalAlignment (Underlying native function: SetVerticalAlignment 0x9aefba0)
	void SetVerticalAlignment(struct TEnumAsByte<EVerticalAlignment>& InVerticalAlignment); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.BackgroundBlur.SetPadding (Underlying native function: SetPadding 0x9aeeec8)
	void SetPadding(struct FMargin& InPadding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.BackgroundBlur.SetLowQualityFallbackBrush (Underlying native function: SetLowQualityFallbackBrush 0x9aeeb84)
	void SetLowQualityFallbackBrush(struct FSlateBrush& InBrush); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UMG.BackgroundBlur.SetHorizontalAlignment (Underlying native function: SetHorizontalAlignment 0x9aee5dc)
	void SetHorizontalAlignment(struct TEnumAsByte<EHorizontalAlignment>& InHorizontalAlignment); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.BackgroundBlur.SetCornerRadius (Underlying native function: SetCornerRadius 0x9aee0e0)
	void SetCornerRadius(struct FVector4& InCornerRadius); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.BackgroundBlur.SetBlurStrength (Underlying native function: SetBlurStrength 0x9aedc98)
	void SetBlurStrength(float& InStrength); // (Native | Public | BlueprintCallable)

	// Function /Script/UMG.BackgroundBlur.SetBlurRadius (Underlying native function: SetBlurRadius 0x9aedc18)
	void SetBlurRadius(int& InBlurRadius); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.BackgroundBlur.SetApplyAlphaToBlur (Underlying native function: SetApplyAlphaToBlur 0x9aeda74)
	void SetApplyAlphaToBlur(bool& bInApplyAlphaToBlur); // (Final | Native | Public | BlueprintCallable)
};

