// ScriptStruct /Script/GameplayAbilities.GameplayAbilitySpecContainer
// Size: 0x120
struct FGameplayAbilitySpecContainer : FFastArraySerializer
{
	struct TArray<struct FGameplayAbilitySpec> Items; // 0x108 (0x10)
	class UAbilitySystemComponent* Owner; // 0x118 (0x8)
};

