// Class /Script/UMG.ScrollBoxSlot
// Size: 0x58
class UScrollBoxSlot : public UPanelSlot
{
	struct FMargin Padding; // 0x38 (0x10)
	struct TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x48 (0x1)
	struct TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x49 (0x1)
	unsigned char padding_4a[0xe]; // 0x4a (0xe)

	/* Functions */

	// Function /Script/UMG.ScrollBoxSlot.SetVerticalAlignment (Underlying native function: SetVerticalAlignment 0x9b12564)
	void SetVerticalAlignment(struct TEnumAsByte<EVerticalAlignment>& InVerticalAlignment); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ScrollBoxSlot.SetPadding (Underlying native function: SetPadding 0x9b10520)
	void SetPadding(struct FMargin& InPadding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.ScrollBoxSlot.SetHorizontalAlignment (Underlying native function: SetHorizontalAlignment 0x9b0e8b0)
	void SetHorizontalAlignment(struct TEnumAsByte<EHorizontalAlignment>& InHorizontalAlignment); // (Final | Native | Public | BlueprintCallable)
};

