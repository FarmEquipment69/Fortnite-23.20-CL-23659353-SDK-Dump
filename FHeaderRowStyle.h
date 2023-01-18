// ScriptStruct /Script/SlateCore.HeaderRowStyle
// Size: 0x1100
struct FHeaderRowStyle : FSlateWidgetStyle
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FTableColumnHeaderStyle ColumnStyle; // 0x10 (0x6d0)
	struct FTableColumnHeaderStyle LastColumnStyle; // 0x6e0 (0x6d0)
	struct FSplitterStyle ColumnSplitterStyle; // 0xdb0 (0x190)
	float SplitterHandleSize; // 0xf40 (0x4)
	unsigned char unreflected_f44[0xc]; // 0xf44 (0xc) 
	struct FSlateBrush BackgroundBrush; // 0xf50 (0xc0)
	struct FSlateColor ForegroundColor; // 0x1010 (0x14)
	unsigned char unreflected_1024[0xc]; // 0x1024 (0xc) 
	struct FSlateBrush HorizontalSeparatorBrush; // 0x1030 (0xc0)
	float HorizontalSeparatorThickness; // 0x10f0 (0x4)
	unsigned char padding_10f4[0xc]; // 0x10f4 (0xc)
};

