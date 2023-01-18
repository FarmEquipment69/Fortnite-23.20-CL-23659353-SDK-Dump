// ScriptStruct /Script/FortniteUI.FortHealthyGamingData
// Size: 0x90
struct FFortHealthyGamingData : FTableRowBase
{
	float HealthWarningToastInterval; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FText HealthWarningToastDescriptionFormat; // 0x10 (0x18)
	struct FText HealthWarningScreenText; // 0x28 (0x18)
	struct FText GameplayRestrictionText; // 0x40 (0x18)
	float GameplayRestrictionWarningTimeOffset; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct FText AntiAddictionTotalDescriptionFormat; // 0x60 (0x18)
	bool bUsePlayerTimeLimitSystem; // 0x78 (0x1)
	unsigned char unreflected_79[0x7]; // 0x79 (0x7) 
	struct TArray<struct TWeakObjectPtr<class UTexture2D>> RatingIcons; // 0x80 (0x10)
};

