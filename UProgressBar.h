// Class /Script/UMG.ProgressBar
// Size: 0x400
class UProgressBar : public UWidget
{
	unsigned char unreflected_148[0x8]; // 0x148 (0x8) 
	struct FProgressBarStyle WidgetStyle; // 0x150 (0x260)
	float Percent; // 0x3b0 (0x4)
	struct TEnumAsByte<EProgressBarFillType> BarFillType; // 0x3b4 (0x1)
	struct TEnumAsByte<EProgressBarFillStyle> BarFillStyle; // 0x3b5 (0x1)
	bool bIsMarquee; // 0x3b6 (0x1)
	unsigned char unreflected_3b7[0x1]; // 0x3b7 (0x1) 
	struct FVector2D BorderPadding; // 0x3b8 (0x10)
	struct FDelegate PercentDelegate; // 0x3c8 (0xc)
	struct FLinearColor FillColorAndOpacity; // 0x3d4 (0x10)
	struct FDelegate FillColorAndOpacityDelegate; // 0x3e4 (0xc)
	unsigned char padding_3f0[0x10]; // 0x3f0 (0x10)

	/* Functions */

	// Function /Script/UMG.ProgressBar.SetPercent (Underlying native function: SetPercent 0x290e030)
	void SetPercent(float& InPercent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ProgressBar.SetIsMarquee (Underlying native function: SetIsMarquee 0x9b0ef34)
	void SetIsMarquee(bool& InbIsMarquee); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ProgressBar.SetFillColorAndOpacity (Underlying native function: SetFillColorAndOpacity 0x9b0dfd0)
	void SetFillColorAndOpacity(struct FLinearColor& InColor); // (Final | Native | Public | HasDefaults | BlueprintCallable)
};

