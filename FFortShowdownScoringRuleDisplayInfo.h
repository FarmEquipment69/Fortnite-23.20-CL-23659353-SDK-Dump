// ScriptStruct /Script/FortniteUI.FortShowdownScoringRuleDisplayInfo
// Size: 0x80
struct FFortShowdownScoringRuleDisplayInfo
{
	struct FName Name; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FText Description; // 0x8 (0x18)
	struct FText PosterDescription; // 0x20 (0x18)
	struct FText PosterIntervalDescription; // 0x38 (0x18)
	struct TWeakObjectPtr<class UTexture2D> Icon; // 0x50 (0x28)
	bool bShowScoreToastNotifications; // 0x78 (0x1)
	unsigned char padding_79[0x7]; // 0x79 (0x7)
};

