// Class /Script/GameplayAbilities.AbilityTask_VisualizeTargeting
// Size: 0xa0
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{
	struct FMulticastInlineDelegate TimeElapsed; // 0x78 (0x10)
	unsigned char padding_88[0x18]; // 0x88 (0x18)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor (Underlying native function: VisualizeTargetingUsingActor 0x6aeb0c0)
	static class UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(class UGameplayAbility*& OwningAbility, class AGameplayAbilityTargetActor*& TargetActor, struct FName& TaskInstanceName, float& Duration); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting (Underlying native function: VisualizeTargeting 0x6aeaf84)
	static class UAbilityTask_VisualizeTargeting* VisualizeTargeting(class UGameplayAbility*& OwningAbility, class UClass*& Class, struct FName& TaskInstanceName, float& Duration); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor (Underlying native function: FinishSpawningActor 0x6ae0e38)
	void FinishSpawningActor(class UGameplayAbility*& OwningAbility, class AGameplayAbilityTargetActor*& SpawnedActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor (Underlying native function: BeginSpawningActor 0x6add68c)
	bool BeginSpawningActor(class UGameplayAbility*& OwningAbility, class UClass*& Class, class AGameplayAbilityTargetActor*& SpawnedActor); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

