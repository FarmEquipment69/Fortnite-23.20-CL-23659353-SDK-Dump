// Class /Script/FortniteGame.FortAsyncAction_ApplyEffect
// Size: 0x80
class UFortAsyncAction_ApplyEffect : public UAbilityAsync
{
	struct FGameplayAbilityTargetDataHandle TargetData; // 0x38 (0x28)
	struct FGameplayEffectSpecHandle CachedEffectSpecToApply; // 0x60 (0x10)
	unsigned char padding_70[0x10]; // 0x70 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAsyncAction_ApplyEffect.ApplyGameplayEffectToTargetAsync (Underlying native function: ApplyGameplayEffectToTargetAsync 0x5c7af20)
	static class UFortAsyncAction_ApplyEffect* ApplyGameplayEffectToTargetAsync(class UGameplayAbility*& OwningAbility, struct FGameplayAbilityTargetDataHandle& Target, class UClass*& GameplayEffectClass, int& GameplayEffectLevel, int& Stacks); // (Final | Native | Static | Private | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAsyncAction_ApplyEffect.AddTargetData (Underlying native function: AddTargetData 0x5c7adf0)
	void AddTargetData(class UGameplayAbility*& OwningAbility, struct FGameplayAbilityTargetDataHandle& Target); // (Final | Native | Private | HasOutParms | BlueprintCallable)
};

