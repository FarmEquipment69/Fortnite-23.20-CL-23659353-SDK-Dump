// ScriptStruct /Script/SlateCore.ToolBarStyle
// Size: 0x3a40
struct FToolBarStyle : FSlateWidgetStyle
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FSlateBrush BackgroundBrush; // 0x10 (0xc0)
	struct FSlateBrush ExpandBrush; // 0xd0 (0xc0)
	struct FSlateBrush SeparatorBrush; // 0x190 (0xc0)
	struct FTextBlockStyle LabelStyle; // 0x250 (0x310)
	struct FEditableTextBoxStyle EditableTextStyle; // 0x560 (0xd80)
	struct FCheckBoxStyle ToggleButton; // 0x12e0 (0xa10)
	struct FComboButtonStyle ComboButtonStyle; // 0x1cf0 (0x5a0)
	struct FButtonStyle SettingsButtonStyle; // 0x2290 (0x3b0)
	struct FComboButtonStyle SettingsComboButton; // 0x2640 (0x5a0)
	struct FCheckBoxStyle SettingsToggleButton; // 0x2be0 (0xa10)
	struct FButtonStyle ButtonStyle; // 0x35f0 (0x3b0)
	struct FMargin LabelPadding; // 0x39a0 (0x10)
	struct FMargin SeparatorPadding; // 0x39b0 (0x10)
	struct FMargin ComboButtonPadding; // 0x39c0 (0x10)
	struct FMargin ButtonPadding; // 0x39d0 (0x10)
	struct FMargin CheckBoxPadding; // 0x39e0 (0x10)
	struct FMargin BlockPadding; // 0x39f0 (0x10)
	struct FMargin IndentedBlockPadding; // 0x3a00 (0x10)
	struct FMargin BackgroundPadding; // 0x3a10 (0x10)
	struct FVector2D IconSize; // 0x3a20 (0x10)
	bool bShowLabels; // 0x3a30 (0x1)
	unsigned char padding_3a31[0xf]; // 0x3a31 (0xf)
};

