// Class /Script/FortniteGame.FortAbilityTask_PlayMontageWithRotCurveWaitNotify
// Size: 0x1a8
class UFortAbilityTask_PlayMontageWithRotCurveWaitNotify : public UFortAbilityTask_PlayMontageWaitNotify
{
	unsigned char unreflected_1a8[0x1a8]; 

	/* Functions */

	// Function /Script/FortniteGame.FortAbilityTask_PlayMontageWithRotCurveWaitNotify.PlayMontageWithRotCurveAndWaitNotify (Underlying native function: PlayMontageWithRotCurveAndWaitNotify 0x8142954)
	static class UFortAbilityTask_PlayMontageWithRotCurveWaitNotify* PlayMontageWithRotCurveAndWaitNotify(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, struct FPickedTurnTransitionData& InData, bool& bCanUseDesiredRotationAsFallback); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilityTask_PlayMontageWithRotCurveWaitNotify.OnNotifyBegin (Underlying native function: OnNotifyBegin 0x8141818)
	void OnNotifyBegin(class UAnimSequenceBase*& Animation, struct FGameplayTag& NotifyTag); // (Final | Native | Protected)
};

