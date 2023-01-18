// Class /Script/UMG.HorizontalBoxSlot
// Size: 0x60
class UHorizontalBoxSlot : public UPanelSlot
{
	unsigned char unreflected_38[0x8]; // 0x38 (0x8) 
	struct FSlateChildSize* Size; // 0x40 (0x8)
	struct FMargin Padding; // 0x48 (0x10)
	struct TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x58 (0x1)
	struct TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x59 (0x1)
	unsigned char padding_5a[0x6]; // 0x5a (0x6)

	/* Functions */

	// Function /Script/UMG.HorizontalBoxSlot.SetVerticalAlignment (Underlying native function: SetVerticalAlignment 0x286f834)
	void SetVerticalAlignment(struct TEnumAsByte<EVerticalAlignment>& InVerticalAlignment); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.HorizontalBoxSlot.SetSize (Underlying native function: SetSize 0x9b11400)
	void SetSize(struct FSlateChildSize*& InSize); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.HorizontalBoxSlot.SetPadding (Underlying native function: SetPadding 0x1512918)
	void SetPadding(struct FMargin& InPadding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.HorizontalBoxSlot.SetHorizontalAlignment (Underlying native function: SetHorizontalAlignment 0x286f7b0)
	void SetHorizontalAlignment(struct TEnumAsByte<EHorizontalAlignment>& InHorizontalAlignment); // (Final | Native | Public | BlueprintCallable)
};

