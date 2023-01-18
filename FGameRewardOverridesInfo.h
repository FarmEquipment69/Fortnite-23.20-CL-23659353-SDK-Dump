// ScriptStruct /Script/FortniteAI.GameRewardOverridesInfo
// Size: 0x40
struct FGameRewardOverridesInfo : FTableRowBase
{
	struct FString MissionName; // 0x8 (0x10)
	struct FString OverrideRewardsTag; // 0x18 (0x10)
	int LootLevel; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct FString LootTierGroup; // 0x30 (0x10)
};

