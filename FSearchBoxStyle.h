// ScriptStruct /Script/SlateCore.SearchBoxStyle
// Size: 0x1110
struct FSearchBoxStyle : FSlateWidgetStyle
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FEditableTextBoxStyle TextBoxStyle; // 0x10 (0xd80)
	struct FSlateFontInfo ActiveFontInfo; // 0xd90 (0x58)
	unsigned char unreflected_de8[0x8]; // 0xde8 (0x8) 
	struct FSlateBrush UpArrowImage; // 0xdf0 (0xc0)
	struct FSlateBrush DownArrowImage; // 0xeb0 (0xc0)
	struct FSlateBrush GlassImage; // 0xf70 (0xc0)
	struct FSlateBrush ClearImage; // 0x1030 (0xc0)
	struct FMargin ImagePadding; // 0x10f0 (0x10)
	bool bLeftAlignButtons; // 0x1100 (0x1)
	bool bLeftAlignSearchResultButtons; // 0x1101 (0x1)
	bool bLeftAlignGlassImageAndClearButton; // 0x1102 (0x1)
	unsigned char padding_1103[0xd]; // 0x1103 (0xd)
};

