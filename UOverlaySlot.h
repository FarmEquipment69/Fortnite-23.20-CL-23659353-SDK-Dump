// Class /Script/UMG.OverlaySlot
// Size: 0x58
class UOverlaySlot : public UPanelSlot
{
	unsigned char unreflected_38[0x8]; // 0x38 (0x8) 
	struct FMargin Padding; // 0x40 (0x10)
	struct TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x50 (0x1)
	struct TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x51 (0x1)
	unsigned char padding_52[0x6]; // 0x52 (0x6)

	/* Functions */

	// Function /Script/UMG.OverlaySlot.SetVerticalAlignment (Underlying native function: SetVerticalAlignment 0x257bdb4)
	void SetVerticalAlignment(struct TEnumAsByte<EVerticalAlignment>& InVerticalAlignment); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.OverlaySlot.SetPadding (Underlying native function: SetPadding 0x16779ec)
	void SetPadding(struct FMargin& InPadding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.OverlaySlot.SetHorizontalAlignment (Underlying native function: SetHorizontalAlignment 0x2576398)
	void SetHorizontalAlignment(struct TEnumAsByte<EHorizontalAlignment>& InHorizontalAlignment); // (Final | Native | Public | BlueprintCallable)
};

