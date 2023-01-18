// Class /Script/UMG.VerticalBoxSlot
// Size: 0x60
class UVerticalBoxSlot : public UPanelSlot
{
	struct FSlateChildSize* Size; // 0x38 (0x8)
	struct FMargin Padding; // 0x40 (0x10)
	struct TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x50 (0x1)
	struct TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x51 (0x1)
	unsigned char padding_52[0xe]; // 0x52 (0xe)

	/* Functions */

	// Function /Script/UMG.VerticalBoxSlot.SetVerticalAlignment (Underlying native function: SetVerticalAlignment 0x9b12664)
	void SetVerticalAlignment(struct TEnumAsByte<EVerticalAlignment>& InVerticalAlignment); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.VerticalBoxSlot.SetSize (Underlying native function: SetSize 0x9b1148c)
	void SetSize(struct FSlateChildSize*& InSize); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.VerticalBoxSlot.SetPadding (Underlying native function: SetPadding 0x21f7e14)
	void SetPadding(struct FMargin& InPadding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.VerticalBoxSlot.SetHorizontalAlignment (Underlying native function: SetHorizontalAlignment 0x9b0e9c8)
	void SetHorizontalAlignment(struct TEnumAsByte<EHorizontalAlignment>& InHorizontalAlignment); // (Final | Native | Public | BlueprintCallable)
};

