// Class /Script/UMG.StackBoxSlot
// Size: 0x60
class UStackBoxSlot : public UPanelSlot
{
	struct FMargin Padding; // 0x38 (0x10)
	struct FSlateChildSize* Size; // 0x48 (0x8)
	struct TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x50 (0x1)
	struct TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x51 (0x1)
	unsigned char padding_52[0xe]; // 0x52 (0xe)
};

