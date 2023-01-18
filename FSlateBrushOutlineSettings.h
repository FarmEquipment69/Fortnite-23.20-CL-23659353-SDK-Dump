// ScriptStruct /Script/SlateCore.SlateBrushOutlineSettings
// Size: 0x40
struct FSlateBrushOutlineSettings
{
	struct FVector4 CornerRadii; // 0x0 (0x20)
	struct FSlateColor Color; // 0x20 (0x14)
	float Width; // 0x34 (0x4)
	struct TEnumAsByte<ESlateBrushRoundingType> RoundingType; // 0x38 (0x1)
	bool bUseBrushTransparency; // 0x39 (0x1)
	unsigned char padding_3a[0x6]; // 0x3a (0x6)
};

