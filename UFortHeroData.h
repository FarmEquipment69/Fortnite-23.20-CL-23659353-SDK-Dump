// Class /Script/FortniteGame.FortHeroData
// Size: 0xe0
class UFortHeroData : public UPrimaryDataAsset
{
	struct FText DefaultHeroName; // 0x30 (0x18)
	struct TWeakObjectPtr<class UFortHeroType> DefaultHero; // 0x48 (0x28)
	struct FHeroPerkDefaultRequirements CommanderPerkDefaultRequirements; // 0x70 (0xc)
	bool bTeamPerkDependsOnSupportTierUnlocks; // 0x7c (0x1)
	unsigned char unreflected_7d[0x3]; // 0x7d (0x3) 
	struct TArray<struct FGameplayEffectApplicationInfo> CombinedStatGEs; // 0x80 (0x10)
	struct TArray<struct FHeroSubclassAttributeData> HeroAttributeDataForSubclasses; // 0x90 (0x10)
	struct TArray<struct FHeroKeywordDisplayData> HeroKeywordDisplayData; // 0xa0 (0x10)
	struct FText HeroPerkDuplicatedText; // 0xb0 (0x18)
	struct FText HeroTierTooLowForPerkText; // 0xc8 (0x18)
};

