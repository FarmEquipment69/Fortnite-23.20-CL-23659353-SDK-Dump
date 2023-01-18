// Class /Script/GameplayAbilities.AbilityTask_WaitTargetData
// Size: 0xb8
class UAbilityTask_WaitTargetData : public UAbilityTask
{
	struct FMulticastInlineDelegate ValidData; // 0x78 (0x10)
	struct FMulticastInlineDelegate Cancelled; // 0x88 (0x10)
	class UClass* TargetClass; // 0x98 (0x8)
	class AGameplayAbilityTargetActor* TargetActor; // 0xa0 (0x8)
	unsigned char padding_a8[0x10]; // 0xa8 (0x10)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor (Underlying native function: WaitTargetDataUsingActor 0x6aeec0c)
	static class UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, struct TEnumAsByte<EGameplayTargetingConfirmation>& ConfirmationType, class AGameplayAbilityTargetActor*& TargetActor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData (Underlying native function: WaitTargetData 0x6aeeab8)
	static class UAbilityTask_WaitTargetData* WaitTargetData(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, struct TEnumAsByte<EGameplayTargetingConfirmation>& ConfirmationType, class UClass*& Class); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback (Underlying native function: OnTargetDataReplicatedCancelledCallback 0x6ae8030)
	void OnTargetDataReplicatedCancelledCallback(); // (Final | Native | Public)

	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback (Underlying native function: OnTargetDataReplicatedCallback 0x6ae7f28)
	void OnTargetDataReplicatedCallback(struct FGameplayAbilityTargetDataHandle& Data, struct FGameplayTag& ActivationTag); // (Final | Native | Public | HasOutParms)

	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback (Underlying native function: OnTargetDataReadyCallback 0x6ae7e64)
	void OnTargetDataReadyCallback(struct FGameplayAbilityTargetDataHandle& Data); // (Final | Native | Public | HasOutParms)

	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback (Underlying native function: OnTargetDataCancelledCallback 0x6ae7da0)
	void OnTargetDataCancelledCallback(struct FGameplayAbilityTargetDataHandle& Data); // (Final | Native | Public | HasOutParms)

	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor (Underlying native function: FinishSpawningActor 0x6ae0ef8)
	void FinishSpawningActor(class UGameplayAbility*& OwningAbility, class AGameplayAbilityTargetActor*& SpawnedActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor (Underlying native function: BeginSpawningActor 0x6add794)
	bool BeginSpawningActor(class UGameplayAbility*& OwningAbility, class UClass*& Class, class AGameplayAbilityTargetActor*& SpawnedActor); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

