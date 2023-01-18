// Class /Script/FortniteGame.FortAbilityTask_PlayMontageWaitTarget
// Size: 0x130
class UFortAbilityTask_PlayMontageWaitTarget : public UAbilityTask
{
	struct FMulticastInlineDelegate Triggered; // 0x78 (0x10)
	struct FMulticastInlineDelegate Cancelled; // 0x88 (0x10)
	struct FMulticastInlineDelegate Completed; // 0x98 (0x10)
	struct FFortGameplayAbilityMontageInfo MontageInfo; // 0xa8 (0x58)
	unsigned char padding_100[0x30]; // 0x100 (0x30)

	/* Functions */

	// Function /Script/FortniteGame.FortAbilityTask_PlayMontageWaitTarget.PlayMontageWithCharPartsWait (Underlying native function: PlayMontageWithCharPartsWait 0x814266c)
	static class UFortAbilityTask_PlayMontageWaitTarget* PlayMontageWithCharPartsWait(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, class UAnimMontage*& MontageToPlay, struct TArray<struct FFortCharacterPartMontageInfo>& CharacterPartMontages, float& AnimPlayRate, enum EFortGameplayAbilityMontageSectionToPlay& SectionToPlay, struct FName& OverrideSection, float& AnimRootMotionTranslationScale, enum EFortAbilityTargetDataPolicy& TargetDataPolicy); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilityTask_PlayMontageWaitTarget.PlayMontageWaitTarget (Underlying native function: PlayMontageWaitTarget 0x8142424)
	static class UFortAbilityTask_PlayMontageWaitTarget* PlayMontageWaitTarget(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, class UAnimMontage*& MontageToPlay, float& AnimPlayRate, enum EFortGameplayAbilityMontageSectionToPlay& SectionToPlay, struct FName& OverrideSection, float& AnimRootMotionTranslationScale, enum EFortAbilityTargetDataPolicy& TargetDataPolicy); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilityTask_PlayMontageWaitTarget.PlayMontageInfoAndWaitForTrigger (Underlying native function: PlayMontageInfoAndWaitForTrigger 0x814229c)
	static class UFortAbilityTask_PlayMontageWaitTarget* PlayMontageInfoAndWaitForTrigger(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, struct FFortGameplayAbilityMontageInfo& MontageInfo, enum EFortAbilityTargetDataPolicy& TargetDataPolicy); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilityTask_PlayMontageWaitTarget.OnTargetDataReadyCallback (Underlying native function: OnTargetDataReadyCallback 0x8141a0c)
	void OnTargetDataReadyCallback(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortAbilityTask_PlayMontageWaitTarget.OnTargetDataCancelledCallback (Underlying native function: OnTargetDataCancelledCallback 0x81418f0)
	void OnTargetDataCancelledCallback(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAbilityTask_PlayMontageWaitTarget.EnableScalingWithRateOfFire (Underlying native function: EnableScalingWithRateOfFire 0x8140760)
	void EnableScalingWithRateOfFire(); // (Final | Native | Public | BlueprintCallable)
};

