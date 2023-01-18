// Class /Script/GameplayAbilities.AbilityTask_WaitVelocityChange
// Size: 0xb0
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{
	struct FMulticastInlineDelegate OnVelocityChage; // 0x78 (0x10)
	class UMovementComponent* CachedMovementComponent; // 0x88 (0x8)
	unsigned char padding_90[0x20]; // 0x90 (0x20)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange (Underlying native function: CreateWaitVelocityChange 0x6ade730)
	static class UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(class UGameplayAbility*& OwningAbility, struct FVector& Direction, float& MinimumMagnitude); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

