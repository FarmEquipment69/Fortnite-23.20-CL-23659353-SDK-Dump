// ScriptStruct /Script/GameplayAbilities.GameplayEffectExecutionDefinition
// Size: 0x58
struct FGameplayEffectExecutionDefinition
{
	class UClass* CalculationClass; // 0x0 (0x8)
	struct FGameplayTagContainer PassedInTags; // 0x8 (0x20)
	struct TArray<struct FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers; // 0x28 (0x10)
	struct TArray<class UClass*> ConditionalGameplayEffectClasses; // 0x38 (0x10)
	struct TArray<struct FConditionalGameplayEffect> ConditionalGameplayEffects; // 0x48 (0x10)
};

