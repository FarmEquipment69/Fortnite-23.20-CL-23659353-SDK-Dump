// ScriptStruct /Script/UIFramework.UIFrameworkStackBoxSlot
// Size: 0x48
struct FUIFrameworkStackBoxSlot : FUIFrameworkSlotBase
{
	struct TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x28 (0x1)
	struct TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x29 (0x1)
	unsigned char unreflected_2a[0x2]; // 0x2a (0x2) 
	struct FMargin Padding; // 0x2c (0x10)
	struct FSlateChildSize* Size; // 0x3c (0x8)
	int Index; // 0x44 (0x4)
};

