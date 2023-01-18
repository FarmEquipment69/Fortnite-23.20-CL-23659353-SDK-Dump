// Class /Script/UMG.SizeBoxSlot
// Size: 0x60
class USizeBoxSlot : public UPanelSlot
{
	struct FMargin Padding; // 0x38 (0x10)
	unsigned char unreflected_48[0x10]; // 0x48 (0x10) 
	struct TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x58 (0x1)
	struct TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x59 (0x1)
	unsigned char padding_5a[0x6]; // 0x5a (0x6)

	/* Functions */

	// Function /Script/UMG.SizeBoxSlot.SetVerticalAlignment (Underlying native function: SetVerticalAlignment 0x9b125e4)
	void SetVerticalAlignment(struct TEnumAsByte<EVerticalAlignment>& InVerticalAlignment); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.SizeBoxSlot.SetPadding (Underlying native function: SetPadding 0x27883ac)
	void SetPadding(struct FMargin& InPadding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.SizeBoxSlot.SetHorizontalAlignment (Underlying native function: SetHorizontalAlignment 0x9b0e948)
	void SetHorizontalAlignment(struct TEnumAsByte<EHorizontalAlignment>& InHorizontalAlignment); // (Final | Native | Public | BlueprintCallable)
};

