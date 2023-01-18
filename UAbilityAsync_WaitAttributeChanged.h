// Class /Script/GameplayAbilities.AbilityAsync_WaitAttributeChanged
// Size: 0x90
class UAbilityAsync_WaitAttributeChanged : public UAbilityAsync
{
	struct FMulticastInlineDelegate Changed; // 0x38 (0x10)
	unsigned char padding_48[0x48]; // 0x48 (0x48)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityAsync_WaitAttributeChanged.WaitForAttributeChanged (Underlying native function: WaitForAttributeChanged 0x6aec7f0)
	static class UAbilityAsync_WaitAttributeChanged* WaitForAttributeChanged(class AActor*& TargetActor, struct FGameplayAttribute& Attribute, bool& OnlyTriggerOnce); // (Final | Native | Static | Public | BlueprintCallable)

	// DelegateFunction /Script/GameplayAbilities.AbilityAsync_WaitAttributeChanged.AsyncWaitAttributeChangedDelegate__DelegateSignature (Has no native function)
	void AsyncWaitAttributeChangedDelegateDelegateSignature(struct FGameplayAttribute& Attribute, float& NewValue, float& OldValue); // (MulticastDelegate | Public | Delegate)
};

