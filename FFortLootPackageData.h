// ScriptStruct /Script/FortniteGame.FortLootPackageData
// Size: 0xc0
struct FFortLootPackageData : FTableRowBase
{
	struct FName LootPackageID; // 0x8 (0x4)
	float Weight; // 0xc (0x4)
	struct FName NamedWeightMult; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct TArray<struct FName> PotentialNamedWeights; // 0x18 (0x10)
	int Count; // 0x28 (0x4)
	int LootPackageCategory; // 0x2c (0x4)
	struct FGameplayTagContainer GameplayTags; // 0x30 (0x20)
	struct FName RequiredTag; // 0x50 (0x4)
	unsigned char unreflected_54[0x4]; // 0x54 (0x4) 
	struct FString LootPackageCall; // 0x58 (0x10)
	struct TWeakObjectPtr<class UFortItemDefinition> ItemDefinition; // 0x68 (0x28)
	struct FString PersistentLevel; // 0x90 (0x10)
	int MinWorldLevel; // 0xa0 (0x4)
	int MaxWorldLevel; // 0xa4 (0x4)
	bool bAllowBonusDrops; // 0xa8 (0x1)
	unsigned char unreflected_a9[0x7]; // 0xa9 (0x7) 
	struct FString Annotation; // 0xb0 (0x10)
};

