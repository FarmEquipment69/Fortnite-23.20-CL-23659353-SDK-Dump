// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent
// Size: 0x58
class UAbilityAsync_WaitGameplayEvent : public UAbilityAsync
{
	struct FMulticastInlineDelegate EventReceived; // 0x38 (0x10)
	unsigned char padding_48[0x10]; // 0x48 (0x10)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent.WaitGameplayEventToActor (Underlying native function: WaitGameplayEventToActor 0x21fa0a4)
	static class UAbilityAsync_WaitGameplayEvent* WaitGameplayEventToActor(class AActor*& TargetActor, struct FGameplayTag& EventTag, bool& OnlyTriggerOnce, bool& OnlyMatchExact); // (Final | Native | Static | Public | BlueprintCallable)

	// DelegateFunction /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent.EventReceivedDelegate__DelegateSignature (Has no native function)
	void EventReceivedDelegateDelegateSignature(struct FGameplayEventData& Payload); // (MulticastDelegate | Public | Delegate)
};

