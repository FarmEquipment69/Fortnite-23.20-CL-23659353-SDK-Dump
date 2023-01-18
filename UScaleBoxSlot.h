// Class /Script/UMG.ScaleBoxSlot
// Size: 0x50
class UScaleBoxSlot : public UPanelSlot
{
	struct TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x38 (0x1)
	struct TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x39 (0x1)
	unsigned char padding_3a[0x16]; // 0x3a (0x16)

	/* Functions */

	// Function /Script/UMG.ScaleBoxSlot.SetVerticalAlignment (Underlying native function: SetVerticalAlignment 0x9b124e4)
	void SetVerticalAlignment(struct TEnumAsByte<EVerticalAlignment>& InVerticalAlignment); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ScaleBoxSlot.SetPadding (Underlying native function: SetPadding 0x9b104b8)
	void SetPadding(struct FMargin& InPadding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ScaleBoxSlot.SetHorizontalAlignment (Underlying native function: SetHorizontalAlignment 0x9b0e830)
	void SetHorizontalAlignment(struct TEnumAsByte<EHorizontalAlignment>& InHorizontalAlignment); // (Final | Native | Public | BlueprintCallable)
};

