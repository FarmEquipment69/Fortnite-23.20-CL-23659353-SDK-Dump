// ScriptStruct /Script/FortniteGame.SettingsHUDVisibilityAndText
// Size: 0x40
struct FSettingsHUDVisibilityAndText
{
	struct FGameplayTag HUDVisibilityGameplayTag; // 0x0 (0x4)
	enum ESlateVisibility DefaultHUDVisibility; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct FText DisplayText; // 0x8 (0x18)
	struct FText ToolTipText; // 0x20 (0x18)
	bool bPlatformConstraintPC; // 0x38 (0x1)
	unsigned char padding_39[0x7]; // 0x39 (0x7)
};

