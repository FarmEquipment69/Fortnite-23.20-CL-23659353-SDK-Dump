// ScriptStruct /Script/SlateCore.WindowStyle
// Size: 0x17a0
struct FWindowStyle : FSlateWidgetStyle
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FButtonStyle MinimizeButtonStyle; // 0x10 (0x3b0)
	struct FButtonStyle MaximizeButtonStyle; // 0x3c0 (0x3b0)
	struct FButtonStyle RestoreButtonStyle; // 0x770 (0x3b0)
	struct FButtonStyle CloseButtonStyle; // 0xb20 (0x3b0)
	struct FTextBlockStyle TitleTextStyle; // 0xed0 (0x310)
	struct FSlateBrush ActiveTitleBrush; // 0x11e0 (0xc0)
	struct FSlateBrush InactiveTitleBrush; // 0x12a0 (0xc0)
	struct FSlateBrush FlashTitleBrush; // 0x1360 (0xc0)
	struct FSlateColor BackgroundColor; // 0x1420 (0x14)
	unsigned char unreflected_1434[0xc]; // 0x1434 (0xc) 
	struct FSlateBrush OutlineBrush; // 0x1440 (0xc0)
	struct FSlateColor OutlineColor; // 0x1500 (0x14)
	unsigned char unreflected_1514[0xc]; // 0x1514 (0xc) 
	struct FSlateBrush BorderBrush; // 0x1520 (0xc0)
	struct FSlateColor BorderColor; // 0x15e0 (0x14)
	unsigned char unreflected_15f4[0xc]; // 0x15f4 (0xc) 
	struct FSlateBrush BackgroundBrush; // 0x1600 (0xc0)
	struct FSlateBrush ChildBackgroundBrush; // 0x16c0 (0xc0)
	int WindowCornerRadius; // 0x1780 (0x4)
	struct FMargin BorderPadding; // 0x1784 (0x10)
	unsigned char padding_1794[0xc]; // 0x1794 (0xc)
};

