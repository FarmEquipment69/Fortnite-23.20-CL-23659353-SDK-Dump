// Class /Script/FortniteGame.FortAbilityTask_PlayMontageWaitNotify
// Size: 0xf0
class UFortAbilityTask_PlayMontageWaitNotify : public UAbilityTask
{
	struct FMulticastInlineDelegate OnCompleted; // 0x78 (0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x88 (0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0x98 (0x10)
	struct FMulticastInlineDelegate OnCancelled; // 0xa8 (0x10)
	struct FMulticastInlineDelegate OnNotifyBegin; // 0xb8 (0x10)
	struct FMulticastInlineDelegate OnNotifyEnd; // 0xc8 (0x10)
	class UAnimMontage* MontageToPlay; // 0xd8 (0x8)
	unsigned char padding_e0[0x10]; // 0xe0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAbilityTask_PlayMontageWaitNotify.PlayMontageAndWaitNotify (Underlying native function: PlayMontageAndWaitNotify 0x8142070)
	static class UFortAbilityTask_PlayMontageWaitNotify* PlayMontageAndWaitNotify(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, class UAnimMontage*& MontageToPlay, float& PlayRate, struct FName& StartSection, bool& bStopWhenAbilityEnds, float& RootMotionTranslationScale); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilityTask_PlayMontageWaitNotify.OnMontageNotifyEnd (Underlying native function: OnMontageNotifyEnd 0x8141754)
	void OnMontageNotifyEnd(class UAnimSequenceBase*& Animation, struct FGameplayTag& NotifyTag); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAbilityTask_PlayMontageWaitNotify.OnMontageNotifyBegin (Underlying native function: OnMontageNotifyBegin 0x8141690)
	void OnMontageNotifyBegin(class UAnimSequenceBase*& Animation, struct FGameplayTag& NotifyTag); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAbilityTask_PlayMontageWaitNotify.OnMontageEnded (Underlying native function: OnMontageEnded 0x81415c4)
	void OnMontageEnded(class UAnimMontage*& Montage, bool& bInterrupted); // (Native | Protected)

	// Function /Script/FortniteGame.FortAbilityTask_PlayMontageWaitNotify.OnMontageBlendingOut (Underlying native function: OnMontageBlendingOut 0x81414f8)
	void OnMontageBlendingOut(class UAnimMontage*& Montage, bool& bInterrupted); // (Native | Protected)

	// Function /Script/FortniteGame.FortAbilityTask_PlayMontageWaitNotify.OnAbilityCancelled (Underlying native function: OnAbilityCancelled 0x814132c)
	void OnAbilityCancelled(); // (Native | Protected)
};

