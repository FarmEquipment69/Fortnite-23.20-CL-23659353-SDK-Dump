// Class /Script/FortniteGame.FortHeroGameplayDefinition
// Size: 0x1b8
class UFortHeroGameplayDefinition : public UDataAsset
{
	class UFortHeroClassGameplayDefinition* HeroClassGameplayDefinition; // 0x30 (0x8)
	struct FGameplayTagContainer HeroBaseStatlineTags; // 0x38 (0x20)
	struct FGameplayTagContainer HeroTags; // 0x58 (0x20)
	struct TArray<struct FFortHeroTierAbilityKit> TierAbilityKits; // 0x78 (0x10)
	struct FFortHeroGameplayPiece HeroPerk; // 0x88 (0x98)
	struct FFortHeroGameplayPiece CommanderPerk; // 0x120 (0x98)

	/* Functions */

	// Function /Script/FortniteGame.FortHeroGameplayDefinition.IsTeamPerkValidForCommander (Underlying native function: IsTeamPerkValidForCommander 0x8ed2848)
	static bool IsTeamPerkValidForCommander(class UFortTeamPerkItem*& TeamPerk, class UFortCampaignHeroLoadoutItem*& HeroLoadout, struct FText& OutReason); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortHeroGameplayDefinition.IsSlottedHeroAbilityDuplicated (Underlying native function: IsSlottedHeroAbilityDuplicated 0x8ed259c)
	static bool IsSlottedHeroAbilityDuplicated(class UFortHero*& PotentiallySlottedHero, class UFortCampaignHeroLoadoutItem*& HeroLoadout, struct FName& SupportHeroSlotName, bool& bIsSlotting); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortHeroGameplayDefinition.IsHeroPerkValidForCommander (Underlying native function: IsHeroPerkValidForCommander 0x8ed2368)
	static bool IsHeroPerkValidForCommander(class UFortHero*& SlottedHero, class UFortCampaignHeroLoadoutItem*& HeroLoadout, struct FName& SupportHeroSlotName, bool& bIsSlotting, struct FText& OutReason); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortHeroGameplayDefinition.IsHeroPerkUnlockedForHero (Underlying native function: IsHeroPerkUnlockedForHero 0x8ed2278)
	static bool IsHeroPerkUnlockedForHero(class UFortHero*& FortHero); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortHeroGameplayDefinition.IsCommanderPerkUnlockedForHero (Underlying native function: IsCommanderPerkUnlockedForHero 0x8ed21f8)
	static bool IsCommanderPerkUnlockedForHero(class UFortHero*& FortHero); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortHeroGameplayDefinition.IsAbilityKitUnlockedForHero (Underlying native function: IsAbilityKitUnlockedForHero 0x8ed205c)
	static bool IsAbilityKitUnlockedForHero(class UFortHero*& FortHero, class UFortAbilityKit*& AbilityKit); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortHeroGameplayDefinition.GetKeywordDisplayNames (Underlying native function: GetKeywordDisplayNames 0x8ecfc88)
	static struct TArray<struct FText> GetKeywordDisplayNames(class UFortHeroType*& HeroType); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortHeroGameplayDefinition.GetCommanderTierRequiredForTeamPerkToApplyToCommander (Underlying native function: GetCommanderTierRequiredForTeamPerkToApplyToCommander 0x8ecf4c4)
	static enum EFortItemTier GetCommanderTierRequiredForTeamPerkToApplyToCommander(class UFortTeamPerkItem*& TeamPerk, class UFortHero*& CommanderHero); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortHeroGameplayDefinition.GetCommanderTierRequiredForHeroPerkToApplyToCommander (Underlying native function: GetCommanderTierRequiredForHeroPerkToApplyToCommander 0x8ecf400)
	static enum EFortItemTier GetCommanderTierRequiredForHeroPerkToApplyToCommander(class UFortHero*& FortHero, class UFortHero*& CommanderHero); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortHeroGameplayDefinition.GetAbilityKitUnlockTierForHero (Underlying native function: GetAbilityKitUnlockTierForHero 0x8eceb7c)
	static enum EFortItemTier GetAbilityKitUnlockTierForHero(class UFortHero*& FortHero, class UFortAbilityKit*& AbilityKit); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortHeroGameplayDefinition.GetAbilityKitsForActiveAbilityPerks (Underlying native function: GetAbilityKitsForActiveAbilityPerks 0x8ececd4)
	static struct TArray<class UFortAbilityKit*> GetAbilityKitsForActiveAbilityPerks(class UFortHeroType*& HeroDefinition); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortHeroGameplayDefinition.GetAbilityKitForHeroPerk (Underlying native function: GetAbilityKitForHeroPerk 0x8ecead8)
	static class UFortAbilityKit* GetAbilityKitForHeroPerk(class UFortHeroType*& HeroDefinition); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortHeroGameplayDefinition.GetAbilityKitForCommanderPerk (Underlying native function: GetAbilityKitForCommanderPerk 0x8ecea34)
	static class UFortAbilityKit* GetAbilityKitForCommanderPerk(class UFortHeroType*& HeroDefinition); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortHeroGameplayDefinition.DoesTeamPerkApplyToCommander (Underlying native function: DoesTeamPerkApplyToCommander 0x8ece7f4)
	static bool DoesTeamPerkApplyToCommander(class UFortTeamPerkItem*& TeamPerk, class UFortHero*& CommanderHero); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortHeroGameplayDefinition.DoesHeroSatisfyTeamPerkCondition (Underlying native function: DoesHeroSatisfyTeamPerkCondition 0x8ece394)
	static bool DoesHeroSatisfyTeamPerkCondition(class UFortTeamPerkItemDefinition*& TeamPerk, class UFortHero*& SupportHero); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortHeroGameplayDefinition.DoesHeroPerkApplyToCommander (Underlying native function: DoesHeroPerkApplyToCommander 0x8ece2d0)
	static bool DoesHeroPerkApplyToCommander(class UFortHero*& FortHero, class UFortHero*& CommanderHero); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

