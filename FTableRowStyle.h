// ScriptStruct /Script/SlateCore.TableRowStyle
// Size: 0xc50
struct FTableRowStyle : FSlateWidgetStyle
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FSlateBrush SelectorFocusedBrush; // 0x10 (0xc0)
	struct FSlateBrush ActiveHoveredBrush; // 0xd0 (0xc0)
	struct FSlateBrush ActiveBrush; // 0x190 (0xc0)
	struct FSlateBrush InactiveHoveredBrush; // 0x250 (0xc0)
	struct FSlateBrush InactiveBrush; // 0x310 (0xc0)
	bool bUseParentRowBrush; // 0x3d0 (0x1)
	unsigned char unreflected_3d1[0xf]; // 0x3d1 (0xf) 
	struct FSlateBrush ParentRowBackgroundBrush; // 0x3e0 (0xc0)
	struct FSlateBrush ParentRowBackgroundHoveredBrush; // 0x4a0 (0xc0)
	struct FSlateBrush EvenRowBackgroundHoveredBrush; // 0x560 (0xc0)
	struct FSlateBrush EvenRowBackgroundBrush; // 0x620 (0xc0)
	struct FSlateBrush OddRowBackgroundHoveredBrush; // 0x6e0 (0xc0)
	struct FSlateBrush OddRowBackgroundBrush; // 0x7a0 (0xc0)
	struct FSlateColor TextColor; // 0x860 (0x14)
	struct FSlateColor SelectedTextColor; // 0x874 (0x14)
	unsigned char unreflected_888[0x8]; // 0x888 (0x8) 
	struct FSlateBrush DropIndicatorAbove; // 0x890 (0xc0)
	struct FSlateBrush DropIndicatorOnto; // 0x950 (0xc0)
	struct FSlateBrush DropIndicatorBelow; // 0xa10 (0xc0)
	struct FSlateBrush ActiveHighlightedBrush; // 0xad0 (0xc0)
	struct FSlateBrush InactiveHighlightedBrush; // 0xb90 (0xc0)
};

