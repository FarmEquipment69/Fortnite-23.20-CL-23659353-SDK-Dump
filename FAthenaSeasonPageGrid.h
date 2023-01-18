// ScriptStruct /Script/FortniteGame.AthenaSeasonPageGrid
// Size: 0x148
struct FAthenaSeasonPageGrid
{
	struct FText CustomGridName; // 0x0 (0x18)
	int LevelsNeededForUnlock; // 0x18 (0x4)
	int RewardsNeededForUnlock; // 0x1c (0x4)
	bool bForceTimeLock; // 0x20 (0x1)
	unsigned char unreflected_21[0x3]; // 0x21 (0x3) 
	int DelayDaysSinceSeasonStart; // 0x24 (0x4)
	struct FIntPoint* GridSize; // 0x28 (0x8)
	bool bOverrideZoomLevel; // 0x30 (0x1)
	bool bIsPrmTracked; // 0x31 (0x1)
	unsigned char unreflected_32[0x2]; // 0x32 (0x2) 
	float ZoomLevel; // 0x34 (0x4)
	bool bHasCoverPage; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	struct FText CoverPageTitle; // 0x40 (0x18)
	struct FText CoverPageDescription; // 0x58 (0x18)
	struct TMap<struct FName, struct FLinearColor> RewardTileColors; // 0x70 (0x50)
	struct FLinearColor RewardTileOverlayDimColor; // 0xc0 (0x10)
	struct TArray<class UAthenaSeasonItemEntryBase*> RewardEntryList; // 0xd0 (0x10)
	int DefaultFocusWidgetIndex; // 0xe0 (0x4)
	unsigned char unreflected_e4[0x4]; // 0xe4 (0x4) 
	struct FVaultWorldBackgroundData PageBackgroundData; // 0xe8 (0x60)
};

