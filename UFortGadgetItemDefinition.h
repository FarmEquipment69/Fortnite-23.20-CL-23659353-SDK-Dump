// Class /Script/FortniteGame.FortGadgetItemDefinition
// Size: 0xb40
class UFortGadgetItemDefinition : public UFortWorldItemDefinition
{
	unsigned char unreflected_8f0[0x8]; // 0x8f0 (0x8) 
	int GadgetPriority; // 0x8f8 (0x4)
	unsigned char bDestroyGadgetWhenTrackedAttributesIsZero; // 0x8fc (0x1)
	unsigned char bHasChargeUp; // 0x8fc (0x1)
	unsigned char bDropAllOnEquip; // 0x8fc (0x1)
	unsigned char bCanChangePreviewImageDuringGame; // 0x8fc (0x1)
	unsigned char unreflected_8fd[0x3]; // 0x8fd (0x3) 
	struct TArray<class UCustomCharacterPart*> CharacterParts; // 0x900 (0x10)
	struct FGameplayTagContainer SkinMetaTagsToSkip; // 0x910 (0x20)
	struct FGameplayTag PartSwapTag; // 0x930 (0x4)
	unsigned char unreflected_934[0x4]; // 0x934 (0x4) 
	struct TArray<struct FCharacterPartsExtraSpecial> CharacterPartsExtraSpecial; // 0x938 (0x10)
	struct TWeakObjectPtr<class UClass> AnimBPOverride; // 0x948 (0x28)
	struct TWeakObjectPtr<class UFortFootstepAudioBank> FootstepBankOverride; // 0x970 (0x28)
	struct TWeakObjectPtr<class UFortAbilitySet> AbilitySet; // 0x998 (0x28)
	struct TWeakObjectPtr<class UClass> AttributeSet; // 0x9c0 (0x28)
	struct FFortAttributeInitializationKey* AttributeInitKey; // 0x9e8 (0x8)
	struct TArray<struct FGameplayAttribute> TrackedAttributes; // 0x9f0 (0x10)
	struct TWeakObjectPtr<class UParticleSystem> OnDestroyParticleSystem; // 0xa00 (0x28)
	struct TWeakObjectPtr<class USoundBase> OnDestroySound; // 0xa28 (0x28)
	struct FName OnDestroyAttachToSocketName; // 0xa50 (0x4)
	unsigned char unreflected_a54[0x4]; // 0xa54 (0x4) 
	struct TWeakObjectPtr<class UClass> GameplayAbility; // 0xa58 (0x28)
	struct FGameplayTagContainer HUDVisibilityTags; // 0xa80 (0x20)
	struct TWeakObjectPtr<class UFortWeaponItemDefinition> WeaponItemDefinition; // 0xaa0 (0x28)
	struct TArray<struct TWeakObjectPtr<class UFortItemDefinition>> AdditionalItemsToLoadWhenEquipped; // 0xac8 (0x10)
	bool bValidForLastEquipped; // 0xad8 (0x1)
	unsigned char unreflected_ad9[0x7]; // 0xad9 (0x7) 
	struct FGameplayAttribute LevelAttribute; // 0xae0 (0x38)
	struct FDataTableRowHandle DamageStatHandle; // 0xb18 (0x10)
	bool bDoNotAutomaticallyApplyGadget; // 0xb28 (0x1)
	unsigned char unreflected_b29[0x7]; // 0xb29 (0x7) 
	struct FString NodeId; // 0xb30 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortGadgetItemDefinition.HasTrackedAttributes (Underlying native function: HasTrackedAttributes 0x8a64edc)
	bool HasTrackedAttributes(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGadgetItemDefinition.HasChargeUp (Underlying native function: HasChargeUp 0x8a64cc8)
	bool HasChargeUp(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGadgetItemDefinition.GetWeaponItemDefinition (Underlying native function: GetWeaponItemDefinition 0x8a64b34)
	class UFortWeaponItemDefinition* GetWeaponItemDefinition(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGadgetItemDefinition.GetLevelAttribute (Underlying native function: GetLevelAttribute 0x8a63388)
	struct FGameplayAttribute GetLevelAttribute(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGadgetItemDefinition.GetGameplayAbility (Underlying native function: GetGameplayAbility 0x8a62b20)
	class UClass* GetGameplayAbility(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

