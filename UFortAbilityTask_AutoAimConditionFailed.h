// Class /Script/FortniteGame.FortAbilityTask_AutoAimConditionFailed
// Size: 0xa8
class UFortAbilityTask_AutoAimConditionFailed : public UAbilityTask
{
	struct FMulticastInlineDelegate OnAutoAimConditionFailed; // 0x78 (0x10)
	class AFortPawn* CachedPawn; // 0x88 (0x8)
	unsigned char padding_90[0x18]; // 0x90 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortAbilityTask_AutoAimConditionFailed.CreateAutoAimConditionFailed (Underlying native function: CreateAutoAimConditionFailed 0x813f7e8)
	static class UFortAbilityTask_AutoAimConditionFailed* CreateAutoAimConditionFailed(class UGameplayAbility*& OwningAbility); // (Final | Native | Static | Public | BlueprintCallable)
};

