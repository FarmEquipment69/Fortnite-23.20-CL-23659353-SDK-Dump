// ScriptStruct /Script/SlateCore.ComboButtonStyle
// Size: 0x5a0
struct FComboButtonStyle : FSlateWidgetStyle
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FButtonStyle ButtonStyle; // 0x10 (0x3b0)
	struct FSlateBrush DownArrowImage; // 0x3c0 (0xc0)
	struct FVector2D ShadowOffset; // 0x480 (0x10)
	struct FLinearColor ShadowColorAndOpacity; // 0x490 (0x10)
	struct FSlateBrush MenuBorderBrush; // 0x4a0 (0xc0)
	struct FMargin MenuBorderPadding; // 0x560 (0x10)
	struct FMargin ContentPadding; // 0x570 (0x10)
	struct FMargin DownArrowPadding; // 0x580 (0x10)
	struct TEnumAsByte<EVerticalAlignment> DownArrowAlign; // 0x590 (0x1)
	unsigned char padding_591[0xf]; // 0x591 (0xf)
};

