// Class /Script/FortniteGame.FortPlayerAugmentItemDefinition
// Size: 0x9c0
class UFortPlayerAugmentItemDefinition : public UFortWorldItemDefinition
{
	struct FGameplayTag ItemTag; // 0x8f0 (0x4)
	struct FGameplayTag CollectionEntryTag; // 0x8f4 (0x4)
	struct TWeakObjectPtr<class UFortAbilitySet> AbilitySet; // 0x8f8 (0x28)
	struct TWeakObjectPtr<class UClass> GameplayEffect; // 0x920 (0x28)
	struct TArray<class UFortItemDefinition*> RequiredItemsToLoad; // 0x948 (0x10)
	bool bStackGameplayEffects; // 0x958 (0x1)
	unsigned char unreflected_959[0x7]; // 0x959 (0x7) 
	struct FGameplayTagContainer GrantedPlayerTags; // 0x960 (0x20)
	struct FFortCreativeTagsHelper CreativeTagsHelper; // 0x980 (0x10)
	struct TWeakObjectPtr<class UTexture2D> HUDEffectTexture; // 0x990 (0x28)
	unsigned char padding_9b8[0x8]; // 0x9b8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerAugmentItemDefinition.GetHUDEffectImage (Underlying native function: GetHUDEffectImage 0x8a78294)
	struct TWeakObjectPtr<class UTexture2D> GetHUDEffectImage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

