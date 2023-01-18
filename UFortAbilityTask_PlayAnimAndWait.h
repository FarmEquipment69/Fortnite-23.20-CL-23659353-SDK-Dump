// Class /Script/FortniteGame.FortAbilityTask_PlayAnimAndWait
// Size: 0x140
class UFortAbilityTask_PlayAnimAndWait : public UAbilityTask
{
	struct FMulticastInlineDelegate OnCompleted; // 0x78 (0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x88 (0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0x98 (0x10)
	struct FMulticastInlineDelegate OnCancelled; // 0xa8 (0x10)
	unsigned char unreflected_b8[0x28]; // 0xb8 (0x28) 
	struct FFortGameplayAbilityMontageInfo MontageInfo; // 0xe0 (0x58)
	enum EFortSharedAnimationState AnimState; // 0x138 (0x1)
	bool bStopWhenAbilityEnds; // 0x139 (0x1)
	unsigned char padding_13a[0x6]; // 0x13a (0x6)

	/* Functions */

	// Function /Script/FortniteGame.FortAbilityTask_PlayAnimAndWait.OnAnimInterrupted (Underlying native function: OnAnimInterrupted 0x814142c)
	void OnAnimInterrupted(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAbilityTask_PlayAnimAndWait.OnAnimBlendingOut (Underlying native function: OnAnimBlendingOut 0x8141344)
	void OnAnimBlendingOut(class UAnimMontage*& Montage, bool& bInterrupted); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAbilityTask_PlayAnimAndWait.CreatePlayAnimAndWaitProxy (Underlying native function: CreatePlayAnimAndWaitProxy 0x813fcfc)
	static class UFortAbilityTask_PlayAnimAndWait* CreatePlayAnimAndWaitProxy(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, struct FFortGameplayAbilityMontageInfo& PlayMontageInfo, enum EFortSharedAnimationState& AnimState, bool& bStopWhenAbilityEnds); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

