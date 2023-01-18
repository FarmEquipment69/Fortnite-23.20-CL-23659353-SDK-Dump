// ScriptStruct /Script/FortniteGame.FortTierCollectionLayoutOutput
// Size: 0x40
struct FFortTierCollectionLayoutOutput
{
	struct FName SpawnCollectionName; // 0x0 (0x4)
	struct FName DifficultyRowName; // 0x4 (0x4)
	struct FName ModifierProgressionName; // 0x8 (0x4)
	float AdditiveDifficultyMod; // 0xc (0x4)
	struct TArray<class UFortBadgeItemDefinition*> RewardBadges; // 0x10 (0x10)
	struct TArray<struct FName> StartTierLootTierGroups; // 0x20 (0x10)
	struct TArray<struct FName> WaveCompleteLootTierGroups; // 0x30 (0x10)
};

