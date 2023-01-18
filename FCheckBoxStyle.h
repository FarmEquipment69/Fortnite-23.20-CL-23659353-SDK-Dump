// ScriptStruct /Script/SlateCore.CheckBoxStyle
// Size: 0xa10
struct FCheckBoxStyle : FSlateWidgetStyle
{
	struct TEnumAsByte<ESlateCheckBoxType> CheckBoxType; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct FSlateBrush UncheckedImage; // 0x10 (0xc0)
	struct FSlateBrush UncheckedHoveredImage; // 0xd0 (0xc0)
	struct FSlateBrush UncheckedPressedImage; // 0x190 (0xc0)
	struct FSlateBrush CheckedImage; // 0x250 (0xc0)
	struct FSlateBrush CheckedHoveredImage; // 0x310 (0xc0)
	struct FSlateBrush CheckedPressedImage; // 0x3d0 (0xc0)
	struct FSlateBrush UndeterminedImage; // 0x490 (0xc0)
	struct FSlateBrush UndeterminedHoveredImage; // 0x550 (0xc0)
	struct FSlateBrush UndeterminedPressedImage; // 0x610 (0xc0)
	struct FMargin Padding; // 0x6d0 (0x10)
	struct FSlateBrush BackgroundImage; // 0x6e0 (0xc0)
	struct FSlateBrush BackgroundHoveredImage; // 0x7a0 (0xc0)
	struct FSlateBrush BackgroundPressedImage; // 0x860 (0xc0)
	struct FSlateColor ForegroundColor; // 0x920 (0x14)
	struct FSlateColor HoveredForeground; // 0x934 (0x14)
	struct FSlateColor PressedForeground; // 0x948 (0x14)
	struct FSlateColor CheckedForeground; // 0x95c (0x14)
	struct FSlateColor CheckedHoveredForeground; // 0x970 (0x14)
	struct FSlateColor CheckedPressedForeground; // 0x984 (0x14)
	struct FSlateColor UndeterminedForeground; // 0x998 (0x14)
	struct FSlateColor BorderBackgroundColor; // 0x9ac (0x14)
	struct FSlateSound CheckedSlateSound; // 0x9c0 (0x18)
	struct FSlateSound UncheckedSlateSound; // 0x9d8 (0x18)
	struct FSlateSound HoveredSlateSound; // 0x9f0 (0x18)
	unsigned char padding_a08[0x8]; // 0xa08 (0x8)
};

