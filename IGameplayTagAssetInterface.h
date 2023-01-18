// Class /Script/GameplayTags.GameplayTagAssetInterface
// Size: 0x28
class IGameplayTagAssetInterface : public IInterface
{

	/* Functions */

	// Function /Script/GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag (Underlying native function: HasMatchingGameplayTag 0x27f7d30)
	bool HasMatchingGameplayTag(struct FGameplayTag& TagToCheck); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags (Underlying native function: HasAnyMatchingGameplayTags 0x245f3c8)
	bool HasAnyMatchingGameplayTags(struct FGameplayTagContainer& TagContainer); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags (Underlying native function: HasAllMatchingGameplayTags 0x9b9e008)
	bool HasAllMatchingGameplayTags(struct FGameplayTagContainer& TagContainer); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags (Underlying native function: GetOwnedGameplayTags 0x2567910)
	void GetOwnedGameplayTags(struct FGameplayTagContainer& TagContainer); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

