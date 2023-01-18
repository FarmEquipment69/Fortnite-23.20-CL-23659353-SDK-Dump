// Class /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait
// Size: 0x100
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{
	struct FMulticastInlineDelegate OnCompleted; // 0x78 (0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x88 (0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0x98 (0x10)
	struct FMulticastInlineDelegate OnCancelled; // 0xa8 (0x10)
	unsigned char unreflected_b8[0x28]; // 0xb8 (0x28) 
	class UAnimMontage* MontageToPlay; // 0xe0 (0x8)
	float Rate; // 0xe8 (0x4)
	struct FName StartSection; // 0xec (0x4)
	float AnimRootMotionTranslationScale; // 0xf0 (0x4)
	float StartTimeSeconds; // 0xf4 (0x4)
	bool bStopWhenAbilityEnds; // 0xf8 (0x1)
	unsigned char padding_f9[0x7]; // 0xf9 (0x7)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted (Underlying native function: OnMontageInterrupted 0x6ae7a34)
	void OnMontageInterrupted(); // (Final | Native | Public)

	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded (Underlying native function: OnMontageEnded 0x6ae796c)
	void OnMontageEnded(class UAnimMontage*& Montage, bool& bInterrupted); // (Final | Native | Public)

	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut (Underlying native function: OnMontageBlendingOut 0x6ae78a4)
	void OnMontageBlendingOut(class UAnimMontage*& Montage, bool& bInterrupted); // (Final | Native | Public)

	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy (Underlying native function: CreatePlayMontageAndWaitProxy 0x6ade3e4)
	static class UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, class UAnimMontage*& MontageToPlay, float& Rate, struct FName& StartSection, bool& bStopWhenAbilityEnds, float& AnimRootMotionTranslationScale, float& StartTimeSeconds); // (Final | Native | Static | Public | BlueprintCallable)
};

