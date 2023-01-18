// ScriptStruct /Script/SlateCore.ButtonStyle
// Size: 0x3b0
struct FButtonStyle : FSlateWidgetStyle
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FSlateBrush Normal; // 0x10 (0xc0)
	struct FSlateBrush Hovered; // 0xd0 (0xc0)
	struct FSlateBrush Pressed; // 0x190 (0xc0)
	struct FSlateBrush Disabled; // 0x250 (0xc0)
	struct FSlateColor NormalForeground; // 0x310 (0x14)
	struct FSlateColor HoveredForeground; // 0x324 (0x14)
	struct FSlateColor PressedForeground; // 0x338 (0x14)
	struct FSlateColor DisabledForeground; // 0x34c (0x14)
	struct FMargin NormalPadding; // 0x360 (0x10)
	struct FMargin PressedPadding; // 0x370 (0x10)
	struct FSlateSound PressedSlateSound; // 0x380 (0x18)
	struct FSlateSound HoveredSlateSound; // 0x398 (0x18)
};

