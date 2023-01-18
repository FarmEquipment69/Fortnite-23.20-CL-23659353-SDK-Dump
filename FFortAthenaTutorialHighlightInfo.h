// ScriptStruct /Script/FortniteUI.FortAthenaTutorialHighlightInfo
// Size: 0x48
struct FFortAthenaTutorialHighlightInfo
{
	struct FGameplayTag WidgetToHighlight; // 0x0 (0x4)
	struct FGameplayTag ItemHighlightTag; // 0x4 (0x4)
	struct FMargin HighlightMargin; // 0x8 (0x10)
	struct TWeakObjectPtr<class UClass> HighlightWidgetOverride; // 0x18 (0x28)
	bool bIsLegacyHighlight; // 0x40 (0x1)
	unsigned char padding_41[0x7]; // 0x41 (0x7)
};

