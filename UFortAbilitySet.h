// Class /Script/FortniteGame.FortAbilitySet
// Size: 0xb8
class UFortAbilitySet : public UPrimaryDataAsset
{
	unsigned char unreflected_30[0x8]; // 0x30 (0x8) 
	struct TArray<class UClass*> GameplayAbilities; // 0x38 (0x10)
	struct TArray<struct FGameplayEffectApplicationInfoHard> GrantedGameplayEffects; // 0x48 (0x10)
	unsigned char bUsePrimaryInputComponent; // 0x58 (0x1)
	bool bShouldHotbarKeysForceExitBuildMode; // 0x59 (0x1)
	unsigned char unreflected_5a[0x2]; // 0x5a (0x2) 
	struct FGameplayTag AbilityActivatedByInputKeyTag; // 0x5c (0x4)
	struct FGameplayTag AbilityActivatedByInputTag; // 0x60 (0x4)
	struct FGameplayTag AbilityActivatedByInputCooldownTag; // 0x64 (0x4)
	struct TArray<struct FAbilityActivatedByInputData> AbilitiesActivatedByInput; // 0x68 (0x10)
	struct TArray<class UFortItemDefinition*> AdditionalItemsToAdd; // 0x78 (0x10)
	struct TArray<struct FGameplayEffectApplicationInfo> PassiveGameplayEffects; // 0x88 (0x10)
	struct FGameplayTagContainer AnalyticsTags; // 0x98 (0x20)
};

