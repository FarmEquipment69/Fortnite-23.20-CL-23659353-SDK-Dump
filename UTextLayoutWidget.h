// Class /Script/UMG.TextLayoutWidget
// Size: 0x168
class UTextLayoutWidget : public UWidget
{
	struct FShapedTextOptions ShapedTextOptions; // 0x148 (0x3)
	struct TEnumAsByte<ETextJustify> Justification; // 0x14b (0x1)
	enum ETextWrappingPolicy WrappingPolicy; // 0x14c (0x1)
	unsigned char AutoWrapText; // 0x14d (0x1)
	unsigned char unreflected_14e[0x2]; // 0x14e (0x2) 
	float WrapTextAt; // 0x150 (0x4)
	struct FMargin Margin; // 0x154 (0x10)
	float LineHeightPercentage; // 0x164 (0x4)

	/* Functions */

	// Function /Script/UMG.TextLayoutWidget.SetJustification (Underlying native function: SetJustification 0x222c924)
	void SetJustification(struct TEnumAsByte<ETextJustify>& InJustification); // (Native | Public | BlueprintCallable)
};

