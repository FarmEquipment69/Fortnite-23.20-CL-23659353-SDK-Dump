// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTag
// Size: 0x98
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{
	unsigned char unreflected_78[0x8]; // 0x78 (0x8) 
	class UAbilitySystemComponent* OptionalExternalTarget; // 0x80 (0x8)
	unsigned char padding_88[0x10]; // 0x88 (0x10)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback (Underlying native function: GameplayTagCallback 0x6ae10fc)
	void GameplayTagCallback(struct FGameplayTag& tag, int& NewCount); // (Native | Public)
};

