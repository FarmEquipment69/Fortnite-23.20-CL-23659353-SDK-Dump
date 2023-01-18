// ScriptStruct /Script/FortniteUI.ContextPosition
// Size: 0x20
struct FContextPosition
{
	enum EContextPositionPlatform Platform; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FVector2D Position; // 0x8 (0x10)
	struct TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x18 (0x1)
	struct TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x19 (0x1)
	unsigned char padding_1a[0x6]; // 0x1a (0x6)
};

