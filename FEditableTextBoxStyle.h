// ScriptStruct /Script/SlateCore.EditableTextBoxStyle
// Size: 0xd80
struct FEditableTextBoxStyle : FSlateWidgetStyle
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FSlateBrush BackgroundImageNormal; // 0x10 (0xc0)
	struct FSlateBrush BackgroundImageHovered; // 0xd0 (0xc0)
	struct FSlateBrush BackgroundImageFocused; // 0x190 (0xc0)
	struct FSlateBrush BackgroundImageReadOnly; // 0x250 (0xc0)
	struct FMargin Padding; // 0x310 (0x10)
	struct FTextBlockStyle TextStyle; // 0x320 (0x310)
	struct FSlateColor ForegroundColor; // 0x630 (0x14)
	struct FSlateColor BackgroundColor; // 0x644 (0x14)
	struct FSlateColor ReadOnlyForegroundColor; // 0x658 (0x14)
	struct FSlateColor FocusedForegroundColor; // 0x66c (0x14)
	struct FMargin HScrollBarPadding; // 0x680 (0x10)
	struct FMargin VScrollBarPadding; // 0x690 (0x10)
	struct FScrollBarStyle ScrollBarStyle; // 0x6a0 (0x6e0)
};

