// BlueprintGeneratedClass /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack_JumpHover.GA_BoostJumpPack_JumpHover_C
// Size: 0xb60
class UGA_BoostJumpPack_JumpHover_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	struct FGameplayTagContainer RequiredTags; // 0xb28 (0x20)
	struct FActiveGameplayEffectHandle* GEHoverInstance; // 0xb48 (0x8)
	double RequiredFuelToActivate; // 0xb50 (0x8)
	class UClass* GEHover; // 0xb58 (0x8)

	/* Functions */

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack_JumpHover.GA_BoostJumpPack_JumpHover_C.K2_CommitExecute (Has no native function)
	void K2CommitExecute(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack_JumpHover.GA_BoostJumpPack_JumpHover_C.K2_CanActivateAbility (Has no native function)
	bool K2CanActivateAbility(struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer& RelevantTags); // (Event | Protected | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack_JumpHover.GA_BoostJumpPack_JumpHover_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack_JumpHover.GA_BoostJumpPack_JumpHover_C.OnAbilityInputReleased (Has no native function)
	void OnAbilityInputReleased(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack_JumpHover.GA_BoostJumpPack_JumpHover_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack_JumpHover.GA_BoostJumpPack_JumpHover_C.ExecuteUbergraph_GA_BoostJumpPack_JumpHover (Has no native function)
	void ExecuteUbergraphGABoostJumpPackJumpHover(int& EntryPoint, bool& K2NodeEventbWasCancelled, bool& CallFuncK2CommitAbilityReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue); // (Final | 0x00008000 | HasDefaults)
};

