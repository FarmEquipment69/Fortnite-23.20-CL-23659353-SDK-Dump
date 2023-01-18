// ScriptStruct /Script/SlateCore.DockTabStyle
// Size: 0xca0
struct FDockTabStyle : FSlateWidgetStyle
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FButtonStyle CloseButtonStyle; // 0x10 (0x3b0)
	struct FSlateBrush NormalBrush; // 0x3c0 (0xc0)
	struct FSlateBrush ColorOverlayTabBrush; // 0x480 (0xc0)
	struct FSlateBrush ColorOverlayIconBrush; // 0x540 (0xc0)
	struct FSlateBrush ForegroundBrush; // 0x600 (0xc0)
	struct FSlateBrush HoveredBrush; // 0x6c0 (0xc0)
	struct FSlateBrush ContentAreaBrush; // 0x780 (0xc0)
	struct FSlateBrush TabWellBrush; // 0x840 (0xc0)
	struct FTextBlockStyle TabTextStyle; // 0x900 (0x310)
	struct FMargin TabPadding; // 0xc10 (0x10)
	struct FVector2D IconSize; // 0xc20 (0x10)
	float OverlapWidth; // 0xc30 (0x4)
	struct FSlateColor FlashColor; // 0xc34 (0x14)
	struct FSlateColor NormalForegroundColor; // 0xc48 (0x14)
	struct FSlateColor HoveredForegroundColor; // 0xc5c (0x14)
	struct FSlateColor ActiveForegroundColor; // 0xc70 (0x14)
	struct FSlateColor ForegroundForegroundColor; // 0xc84 (0x14)
	float IconBorderPadding; // 0xc98 (0x4)
	unsigned char padding_c9c[0x4]; // 0xc9c (0x4)
};

