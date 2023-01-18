// Class /Script/GameplayAbilities.AbilityTask_SpawnActor
// Size: 0xc0
class UAbilityTask_SpawnActor : public UAbilityTask
{
	struct FMulticastInlineDelegate Success; // 0x78 (0x10)
	struct FMulticastInlineDelegate DidNotSpawn; // 0x88 (0x10)
	unsigned char padding_98[0x28]; // 0x98 (0x28)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.SpawnActor (Underlying native function: SpawnActor 0x6aea298)
	static class UAbilityTask_SpawnActor* SpawnActor(class UGameplayAbility*& OwningAbility, struct FGameplayAbilityTargetDataHandle& TargetData, class UClass*& Class); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor (Underlying native function: FinishSpawningActor 0x6ae0b38)
	void FinishSpawningActor(class UGameplayAbility*& OwningAbility, struct FGameplayAbilityTargetDataHandle& TargetData, class AActor*& SpawnedActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor (Underlying native function: BeginSpawningActor 0x6add4e8)
	bool BeginSpawningActor(class UGameplayAbility*& OwningAbility, struct FGameplayAbilityTargetDataHandle& TargetData, class UClass*& Class, class AActor*& SpawnedActor); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

