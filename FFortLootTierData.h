// ScriptStruct /Script/FortniteGame.FortLootTierData
// Size: 0xd0
struct FFortLootTierData : FTableRowBase
{
	struct FName TierGroup; // 0x8 (0x4)
	float Weight; // 0xc (0x4)
	struct TEnumAsByte<ELootQuotaLevel> QuotaLevel; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	int LootTier; // 0x14 (0x4)
	int MinWorldLevel; // 0x18 (0x4)
	int MaxWorldLevel; // 0x1c (0x4)
	struct FString StreakBreakerCurrency; // 0x20 (0x10)
	int StreakBreakerPointsMin; // 0x30 (0x4)
	int StreakBreakerPointsMax; // 0x34 (0x4)
	int StreakBreakerPointsSpend; // 0x38 (0x4)
	struct FName LootPackage; // 0x3c (0x4)
	struct FName LootPreviewPackage; // 0x40 (0x4)
	float NumLootPackageDrops; // 0x44 (0x4)
	struct TArray<int> LootPackageCategoryWeightArray; // 0x48 (0x10)
	struct TArray<int> LootPackageCategoryMinArray; // 0x58 (0x10)
	struct TArray<int> LootPackageCategoryMaxArray; // 0x68 (0x10)
	struct FGameplayTagContainer GameplayTags; // 0x78 (0x20)
	struct FGameplayTagContainer RequiredGameplayTags; // 0x98 (0x20)
	bool bAllowBonusLootDrops; // 0xb8 (0x1)
	unsigned char unreflected_b9[0x7]; // 0xb9 (0x7) 
	struct FString Annotation; // 0xc0 (0x10)
};

