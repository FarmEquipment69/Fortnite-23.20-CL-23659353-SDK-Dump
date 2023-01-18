// Class /Script/FortniteAI.FortAISpawnGroupUpgrade
// Size: 0x120
class UFortAISpawnGroupUpgrade : public UObject
{
	struct FGameplayTagContainer UpgradeTags; // 0x28 (0x20)
	struct FGameplayTagQuery GroupRequiredTagQuery; // 0x48 (0x48)
	struct TArray<struct FFortAIPawnUpgrade> BasePawnUpgrades; // 0x90 (0x10)
	struct FName AdditionalModifiersLootTierGroup; // 0xa0 (0x4)
	bool bInvalidForEnemySpawners; // 0xa4 (0x1)
	unsigned char unreflected_a5[0x3]; // 0xa5 (0x3) 
	float SpawnGroupDiscountPercentage; // 0xa8 (0x4)
	unsigned char unreflected_ac[0x4]; // 0xac (0x4) 
	struct FFortAISpawnGroupUpgradeUIData UIData; // 0xb0 (0x70)
};

