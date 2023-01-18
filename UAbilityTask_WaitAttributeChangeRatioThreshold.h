// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// Size: 0x138
class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
{
	struct FMulticastInlineDelegate OnChange; // 0x78 (0x10)
	unsigned char unreflected_88[0xa8]; // 0x88 (0xa8) 
	class UAbilitySystemComponent* ExternalOwner; // 0x130 (0x8)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold (Underlying native function: WaitForAttributeChangeRatioThreshold 0x6aebfc8)
	static class UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(class UGameplayAbility*& OwningAbility, struct FGameplayAttribute& AttributeNumerator, struct FGameplayAttribute& AttributeDenominator, struct TEnumAsByte<EWaitAttributeChangeComparison>& ComparisonType, float& ComparisonValue, bool& bTriggerOnce, class AActor*& OptionalExternalOwner); // (Final | Native | Static | Public | BlueprintCallable)
};

