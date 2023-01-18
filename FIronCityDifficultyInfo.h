// ScriptStruct /Script/FortniteGame.IronCityDifficultyInfo
// Size: 0x28
struct FIronCityDifficultyInfo
{
	int AccountLevel; // 0x0 (0x4)
	int Difficulty; // 0x4 (0x4)
	int LootLevel; // 0x8 (0x4)
	struct FName StatClamp; // 0xc (0x4)
	struct FString MissionRewards; // 0x10 (0x10)
	struct FGameplayTag RewardBadgeTag; // 0x20 (0x4)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};

