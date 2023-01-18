// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEvent
// Size: 0xa8
class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{
	struct FMulticastInlineDelegate EventReceived; // 0x78 (0x10)
	unsigned char unreflected_88[0x8]; // 0x88 (0x8) 
	class UAbilitySystemComponent* OptionalExternalTarget; // 0x90 (0x8)
	unsigned char padding_98[0x10]; // 0x98 (0x10)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent (Underlying native function: WaitGameplayEvent 0x6aeddfc)
	static class UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(class UGameplayAbility*& OwningAbility, struct FGameplayTag& EventTag, class AActor*& OptionalExternalTarget, bool& OnlyTriggerOnce, bool& OnlyMatchExact); // (Final | Native | Static | Public | BlueprintCallable)
};

