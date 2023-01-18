// ScriptStruct /Script/FortniteAI.GameDifficultyInfo
// Size: 0x98
struct FGameDifficultyInfo : FTableRowBase
{
	bool bIsOnboarding; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	float Difficulty; // 0xc (0x4)
	float DifficultyMatchmakingMinOverride; // 0x10 (0x4)
	float DifficultyMatchmakingMaxOverride; // 0x14 (0x4)
	int LootLevel; // 0x18 (0x4)
	enum ERatingsEnforcementType RatingsEnforcement; // 0x1c (0x1)
	unsigned char unreflected_1d[0x3]; // 0x1d (0x3) 
	int RequiredRating; // 0x20 (0x4)
	int MaximumRating; // 0x24 (0x4)
	int PvPRating; // 0x28 (0x4)
	int RecommendedRating; // 0x2c (0x4)
	float ScoreBonus; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct FString LootTierGroup; // 0x38 (0x10)
	struct FString BonusLootTierGroup; // 0x48 (0x10)
	struct FString DifficultyIncreaseLootTierGroup; // 0x58 (0x10)
	int NumDifficultyIncreases; // 0x68 (0x4)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	struct FText ThreatDisplayName; // 0x70 (0x18)
	struct FName ColorParamName; // 0x88 (0x4)
	int DefaultPlayerLives; // 0x8c (0x4)
	struct FName PlayerStatClampRowName; // 0x90 (0x4)
	unsigned char padding_94[0x4]; // 0x94 (0x4)
};

