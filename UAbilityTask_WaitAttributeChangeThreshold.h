// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// Size: 0xe8
class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
{
	struct FMulticastInlineDelegate OnChange; // 0x78 (0x10)
	unsigned char unreflected_88[0x58]; // 0x88 (0x58) 
	class UAbilitySystemComponent* ExternalOwner; // 0xe0 (0x8)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold (Underlying native function: WaitForAttributeChangeThreshold 0x6aec2d8)
	static class UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(class UGameplayAbility*& OwningAbility, struct FGameplayAttribute& Attribute, struct TEnumAsByte<EWaitAttributeChangeComparison>& ComparisonType, float& ComparisonValue, bool& bTriggerOnce, class AActor*& OptionalExternalOwner); // (Final | Native | Static | Public | BlueprintCallable)
};

