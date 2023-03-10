// ScriptStruct /Script/FortniteUI.FortMissionDetails
// Size: 0x170
struct FFortMissionDetails
{
	enum EFortTheaterMapTileType TileType; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FText TheaterDisplayName; // 0x8 (0x18)
	struct FText MissionName; // 0x20 (0x18)
	struct FText MissionDescription; // 0x38 (0x18)
	bool bIsGroupContent; // 0x50 (0x1)
	unsigned char unreflected_51[0x7]; // 0x51 (0x7) 
	class UFortMissionGenerator* MissionDefinition; // 0x58 (0x8)
	struct FText ZoneName; // 0x60 (0x18)
	struct FText ZoneDescription; // 0x78 (0x18)
	struct FText RegionThemeName; // 0x90 (0x18)
	struct TWeakObjectPtr<class USlateBrushAsset> RegionThemeIcon; // 0xa8 (0x28)
	struct FText DifficultyName; // 0xd0 (0x18)
	struct TArray<struct FFortMissionRewardInfo> MissionRewards; // 0xe8 (0x10)
	struct FTimespan* AvailableTime; // 0xf8 (0x8)
	enum ERatingsEnforcementType RatingsEnforcement; // 0x100 (0x1)
	unsigned char unreflected_101[0x3]; // 0x101 (0x3) 
	int RequiredBaseRating; // 0x104 (0x4)
	int RecommendedBaseRating; // 0x108 (0x4)
	int MaxBaseRating; // 0x10c (0x4)
	int ContentDifficultyLevel; // 0x110 (0x4)
	bool bIsOnboarding; // 0x114 (0x1)
	unsigned char unreflected_115[0x3]; // 0x115 (0x3) 
	int LootLevel; // 0x118 (0x4)
	bool bOverrideConningText; // 0x11c (0x1)
	unsigned char unreflected_11d[0x3]; // 0x11d (0x3) 
	struct FText ConningOverrideText; // 0x120 (0x18)
	struct FString TheaterUniqueId; // 0x138 (0x10)
	class UFortCloudSaveItemDefinition* AssociatedCloudSaveItemDefinition; // 0x148 (0x8)
	struct TArray<class UFortGameplayModifierItemDefinition*> GameplayModifiers; // 0x150 (0x10)
	struct TArray<struct FText> Objectives; // 0x160 (0x10)
};

