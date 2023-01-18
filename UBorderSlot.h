// Class /Script/UMG.BorderSlot
// Size: 0x60
class UBorderSlot : public UPanelSlot
{
	struct FMargin Padding; // 0x38 (0x10)
	struct TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x48 (0x1)
	struct TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x49 (0x1)
	unsigned char padding_4a[0x16]; // 0x4a (0x16)

	/* Functions */

	// Function /Script/UMG.BorderSlot.SetVerticalAlignment (Underlying native function: SetVerticalAlignment 0x9aefca4)
	void SetVerticalAlignment(struct TEnumAsByte<EVerticalAlignment>& InVerticalAlignment); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.BorderSlot.SetPadding (Underlying native function: SetPadding 0x15127e4)
	void SetPadding(struct FMargin& InPadding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.BorderSlot.SetHorizontalAlignment (Underlying native function: SetHorizontalAlignment 0x22bfcc0)
	void SetHorizontalAlignment(struct TEnumAsByte<EHorizontalAlignment>& InHorizontalAlignment); // (Final | Native | Public | BlueprintCallable)
};

