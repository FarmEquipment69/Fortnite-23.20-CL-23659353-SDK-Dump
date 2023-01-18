// ScriptStruct /Script/FortniteGame.FortIronCityDifficultyData
// Size: 0x30
struct FFortIronCityDifficultyData : FTableRowBase
{
	int DifficultyLevel; // 0x8 (0x4)
	int LootLevel; // 0xc (0x4)
	struct FName SuggestedStatClamp; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FString MissionRewards; // 0x18 (0x10)
	struct FGameplayTag RewardBadgeTag; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

