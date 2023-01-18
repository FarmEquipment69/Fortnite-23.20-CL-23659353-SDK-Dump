// ScriptStruct /Script/GameplayAbilities.GameplayEffectSpecForRPC
// Size: 0x78
struct FGameplayEffectSpecForRPC
{
	class UGameplayEffect* Def; // 0x0 (0x8)
	struct TArray<struct FGameplayEffectModifiedAttribute> ModifiedAttributes; // 0x8 (0x10)
	struct FGameplayEffectContextHandle EffectContext; // 0x18 (0x18)
	struct FGameplayTagContainer AggregatedSourceTags; // 0x30 (0x20)
	struct FGameplayTagContainer AggregatedTargetTags; // 0x50 (0x20)
	float Level; // 0x70 (0x4)
	float AbilityLevel; // 0x74 (0x4)
};

