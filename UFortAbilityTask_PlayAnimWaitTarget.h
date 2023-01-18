// Class /Script/FortniteGame.FortAbilityTask_PlayAnimWaitTarget
// Size: 0x130
class UFortAbilityTask_PlayAnimWaitTarget : public UAbilityTask
{
	struct FMulticastInlineDelegate Triggered; // 0x78 (0x10)
	struct FMulticastInlineDelegate Cancelled; // 0x88 (0x10)
	struct FMulticastInlineDelegate Completed; // 0x98 (0x10)
	struct FFortGameplayAbilityMontageInfo MontageInfo; // 0xa8 (0x58)
	unsigned char padding_100[0x30]; // 0x100 (0x30)

	/* Functions */

	// Function /Script/FortniteGame.FortAbilityTask_PlayAnimWaitTarget.PlayAnimWithMontageInfoAndWaitForTrigger (Underlying native function: PlayAnimWithMontageInfoAndWaitForTrigger 0x8141cd0)
	static class UFortAbilityTask_PlayAnimWaitTarget* PlayAnimWithMontageInfoAndWaitForTrigger(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, struct FFortGameplayAbilityMontageInfo& MontageInfo, enum EFortSharedAnimationState& AnimState); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilityTask_PlayAnimWaitTarget.PlayAnimWaitTarget (Underlying native function: PlayAnimWaitTarget 0x8141b14)
	static class UFortAbilityTask_PlayAnimWaitTarget* PlayAnimWaitTarget(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, class UAnimMontage*& MontageToPlay, enum EFortSharedAnimationState& AnimState, enum EFortGameplayAbilityMontageSectionToPlay& SectionToPlay, struct FName& OverrideSection); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilityTask_PlayAnimWaitTarget.OnTargetDataReadyCallback (Underlying native function: OnTargetDataReadyCallback 0x8141904)
	void OnTargetDataReadyCallback(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortAbilityTask_PlayAnimWaitTarget.OnTargetDataCancelledCallback (Underlying native function: OnTargetDataCancelledCallback 0x81418dc)
	void OnTargetDataCancelledCallback(); // (Final | Native | Public)
};

