// BlueprintGeneratedClass /Game/Abilities/NPC/Generic/GAB_DropPlayer.GAB_DropPlayer_C
// Size: 0xb60
class UGAB_DropPlayer_C : public UFortGameplayAbility_CarryPlayer
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb50 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0xb58 (0x8)

	/* Functions */

	// Function /Game/Abilities/NPC/Generic/GAB_DropPlayer.GAB_DropPlayer_C.Completed_89F288114D44792D5568298354B7216C (Has no native function)
	void Completed89F288114D44792D5568298354B7216C(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_DropPlayer.GAB_DropPlayer_C.Cancelled_89F288114D44792D5568298354B7216C (Has no native function)
	void Cancelled89F288114D44792D5568298354B7216C(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_DropPlayer.GAB_DropPlayer_C.Triggered_89F288114D44792D5568298354B7216C (Has no native function)
	void Triggered89F288114D44792D5568298354B7216C(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_DropPlayer.GAB_DropPlayer_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_DropPlayer.GAB_DropPlayer_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_DropPlayer.GAB_DropPlayer_C.ExecuteUbergraph_GAB_DropPlayer (Has no native function)
	void ExecuteUbergraphGABDropPlayer(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData1, struct FGameplayTag& K2NodeCustomEventApplicationTag1, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData, struct FGameplayTag& K2NodeCustomEventApplicationTag, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FGameplayTag& TempstructVariable, struct FGameplayAbilityTargetDataHandle& TempstructVariable1, struct FGameplayAbilityActorInfo& CallFuncGetActorInfoReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncK2CommitAbilityReturnValue, struct FGameplayAbilityTargetDataHandle& CallFuncAbilityTargetDataFromActorReturnValue, struct TArray<struct FActiveGameplayEffectHandle*>& CallFuncBPApplyGameplayEffectToTargetReturnValue, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData2, struct FGameplayTag& K2NodeCustomEventApplicationTag2, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, bool& K2NodeEventbWasCancelled, class UFortAbilityTask_PlayMontageWaitTarget*& CallFuncPlayMontageInfoAndWaitForTriggerReturnValue, bool& CallFuncIsValidReturnValue); // (Final | 0x00008000 | HasDefaults)
};

