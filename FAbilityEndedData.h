// ScriptStruct /Script/GameplayAbilities.AbilityEndedData
// Size: 0x10
struct FAbilityEndedData
{
	class UGameplayAbility* AbilityThatEnded; // 0x0 (0x8)
	struct FGameplayAbilitySpecHandle AbilitySpecHandle; // 0x8 (0x4)
	bool bReplicateEndAbility; // 0xc (0x1)
	bool bWasCancelled; // 0xd (0x1)
	unsigned char padding_e[0x2]; // 0xe (0x2)
};

