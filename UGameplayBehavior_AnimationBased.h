// Class /Script/GameplayBehaviorsModule.GameplayBehavior_AnimationBased
// Size: 0x98
class UGameplayBehavior_AnimationBased : public UGameplayBehavior
{
	struct TArray<struct FMontagePlaybackData> ActivePlayback; // 0x88 (0x10)

	/* Functions */

	// Function /Script/GameplayBehaviorsModule.GameplayBehavior_AnimationBased.OnMontageFinished (Underlying native function: OnMontageFinished 0x7f71308)
	void OnMontageFinished(class UAnimMontage*& Montage, bool& bInterrupted, class AActor*& InAvatar); // (Final | Native | Protected)
};

