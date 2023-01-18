// Class /Script/UMG.GridSlot
// Size: 0x78
class UGridSlot : public UPanelSlot
{
	struct FMargin Padding; // 0x38 (0x10)
	struct TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x48 (0x1)
	struct TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x49 (0x1)
	unsigned char unreflected_4a[0x2]; // 0x4a (0x2) 
	int Row; // 0x4c (0x4)
	int RowSpan; // 0x50 (0x4)
	int Column; // 0x54 (0x4)
	int ColumnSpan; // 0x58 (0x4)
	int Layer; // 0x5c (0x4)
	struct FVector2D Nudge; // 0x60 (0x10)
	unsigned char padding_70[0x8]; // 0x70 (0x8)

	/* Functions */

	// Function /Script/UMG.GridSlot.SetVerticalAlignment (Underlying native function: SetVerticalAlignment 0x9b12464)
	void SetVerticalAlignment(struct TEnumAsByte<EVerticalAlignment>& InVerticalAlignment); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.GridSlot.SetRowSpan (Underlying native function: SetRowSpan 0x9b10bd0)
	void SetRowSpan(int& InRowSpan); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.GridSlot.SetRow (Underlying native function: SetRow 0x9b10a88)
	void SetRow(int& InRow); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.GridSlot.SetPadding (Underlying native function: SetPadding 0x9b1042c)
	void SetPadding(struct FMargin& InPadding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.GridSlot.SetNudge (Underlying native function: SetNudge 0x9b10198)
	void SetNudge(struct FVector2D& InNudge); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.GridSlot.SetLayer (Underlying native function: SetLayer 0x9b0f234)
	void SetLayer(int& InLayer); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.GridSlot.SetHorizontalAlignment (Underlying native function: SetHorizontalAlignment 0x9b0e798)
	void SetHorizontalAlignment(struct TEnumAsByte<EHorizontalAlignment>& InHorizontalAlignment); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.GridSlot.SetColumnSpan (Underlying native function: SetColumnSpan 0x9b0d58c)
	void SetColumnSpan(int& InColumnSpan); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.GridSlot.SetColumn (Underlying native function: SetColumn 0x9b0d444)
	void SetColumn(int& InColumn); // (Final | Native | Public | BlueprintCallable)
};

