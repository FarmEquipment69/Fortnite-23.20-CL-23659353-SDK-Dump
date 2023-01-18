// Class /Script/UMG.WrapBoxSlot
// Size: 0x58
class UWrapBoxSlot : public UPanelSlot
{
	struct FMargin Padding; // 0x38 (0x10)
	float FillSpanWhenLessThan; // 0x48 (0x4)
	struct TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x4c (0x1)
	struct TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x4d (0x1)
	bool bFillEmptySpace; // 0x4e (0x1)
	bool bForceNewLine; // 0x4f (0x1)
	unsigned char padding_50[0x8]; // 0x50 (0x8)

	/* Functions */

	// Function /Script/UMG.WrapBoxSlot.SetVerticalAlignment (Underlying native function: SetVerticalAlignment 0x9b24edc)
	void SetVerticalAlignment(struct TEnumAsByte<EVerticalAlignment>& InVerticalAlignment); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WrapBoxSlot.SetPadding (Underlying native function: SetPadding 0x9b24c8c)
	void SetPadding(struct FMargin& InPadding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WrapBoxSlot.SetNewLine (Underlying native function: SetNewLine 0x9b24a58)
	void SetNewLine(bool& InForceNewLine); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WrapBoxSlot.SetHorizontalAlignment (Underlying native function: SetHorizontalAlignment 0x9b24268)
	void SetHorizontalAlignment(struct TEnumAsByte<EHorizontalAlignment>& InHorizontalAlignment); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WrapBoxSlot.SetFillSpanWhenLessThan (Underlying native function: SetFillSpanWhenLessThan 0x9b23fac)
	void SetFillSpanWhenLessThan(float& InFillSpanWhenLessThan); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.WrapBoxSlot.SetFillEmptySpace (Underlying native function: SetFillEmptySpace 0x9b23f14)
	void SetFillEmptySpace(bool& InbFillEmptySpace); // (Final | Native | Public | BlueprintCallable)
};

