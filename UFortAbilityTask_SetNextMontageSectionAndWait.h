// Class /Script/FortniteGame.FortAbilityTask_SetNextMontageSectionAndWait
// Size: 0xa8
class UFortAbilityTask_SetNextMontageSectionAndWait : public UAbilityTask
{
	struct FMulticastInlineDelegate OnComplete; // 0x78 (0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0x88 (0x10)
	unsigned char padding_98[0x10]; // 0x98 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAbilityTask_SetNextMontageSectionAndWait.SetNextMontageSectionAndWait (Underlying native function: SetNextMontageSectionAndWait 0x81e8fd0)
	static class UFortAbilityTask_SetNextMontageSectionAndWait* SetNextMontageSectionAndWait(class UGameplayAbility*& OwningAbility, class UAnimMontage*& PlayingMontage, struct FName& NextMontageSection); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilityTask_SetNextMontageSectionAndWait.OnMontageBlendingOut (Underlying native function: OnMontageBlendingOut 0x81e8c3c)
	void OnMontageBlendingOut(class UAnimMontage*& Montage, bool& bInterrupted); // (Final | Native | Public)
};

