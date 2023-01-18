// ScriptStruct /Script/SlateCore.TextBlockStyle
// Size: 0x310
struct FTextBlockStyle : FSlateWidgetStyle
{
	struct FSlateFontInfo Font; // 0x8 (0x58)
	struct FSlateColor ColorAndOpacity; // 0x60 (0x14)
	unsigned char unreflected_74[0x4]; // 0x74 (0x4) 
	struct FVector2D ShadowOffset; // 0x78 (0x10)
	struct FLinearColor ShadowColorAndOpacity; // 0x88 (0x10)
	struct FSlateColor SelectedBackgroundColor; // 0x98 (0x14)
	struct FSlateColor HighlightColor; // 0xac (0x14)
	struct FSlateBrush HighlightShape; // 0xc0 (0xc0)
	struct FSlateBrush StrikeBrush; // 0x180 (0xc0)
	struct FSlateBrush UnderlineBrush; // 0x240 (0xc0)
	enum ETextTransformPolicy TransformPolicy; // 0x300 (0x1)
	enum ETextOverflowPolicy OverflowPolicy; // 0x301 (0x1)
	unsigned char padding_302[0xe]; // 0x302 (0xe)
};

