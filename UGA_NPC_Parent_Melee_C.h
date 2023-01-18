// BlueprintGeneratedClass /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C
// Size: 0xe70
class UGA_NPC_Parent_Melee_C : public UGA_NPC_Parent_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xe58 (0x8)
	bool MoveDirectlyTowardsTarget; // 0xe60 (0x1)
	struct TEnumAsByte<EFortMovementUrgency> NPCMovementUrgencyWhileDoingMelee; // 0xe61 (0x1)
	unsigned char unreflected_e62[0x6]; // 0xe62 (0x6) 
	class UFortAbilityTask_MoveAI* MoveTask; // 0xe68 (0x8)

	/* Functions */

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.Completed_0C0CF9C14BFCBE77EA7D2CBD89151BA0 (Has no native function)
	void Completed0C0CF9C14BFCBE77EA7D2CBD89151BA0(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.Cancelled_0C0CF9C14BFCBE77EA7D2CBD89151BA0 (Has no native function)
	void Cancelled0C0CF9C14BFCBE77EA7D2CBD89151BA0(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.Triggered_0C0CF9C14BFCBE77EA7D2CBD89151BA0 (Has no native function)
	void Triggered0C0CF9C14BFCBE77EA7D2CBD89151BA0(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.OnMoveFinished_F65CF1EE473B6A2F8069108CC24B1704 (Has no native function)
	void OnMoveFinishedF65CF1EE473B6A2F8069108CC24B1704(struct TEnumAsByte<EPathFollowingResult>& Result, class AAIController*& AIController); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.OnRequestFailed_F65CF1EE473B6A2F8069108CC24B1704 (Has no native function)
	void OnRequestFailedF65CF1EE473B6A2F8069108CC24B1704(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.OnCancelled_F65CF1EE473B6A2F8069108CC24B1704 (Has no native function)
	void OnCancelledF65CF1EE473B6A2F8069108CC24B1704(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.OnInterrupted_F65CF1EE473B6A2F8069108CC24B1704 (Has no native function)
	void OnInterruptedF65CF1EE473B6A2F8069108CC24B1704(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.OnComplete_F65CF1EE473B6A2F8069108CC24B1704 (Has no native function)
	void OnCompleteF65CF1EE473B6A2F8069108CC24B1704(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.StartMoveDirectlyTowardsTarget (Has no native function)
	void StartMoveDirectlyTowardsTarget(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.MontageAbilityTriggered (Has no native function)
	void MontageAbilityTriggered(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.OnGenericNotifyFromAnimation (Has no native function)
	void OnGenericNotifyFromAnimation(struct FGameplayTag& NotifyTag); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent_Melee.GA_NPC_Parent_Melee_C.ExecuteUbergraph_GA_NPC_Parent_Melee (Has no native function)
	void ExecuteUbergraphGANPCParentMelee(int& EntryPoint, struct FGameplayTag& K2NodeEventNotifyTag, bool& CallFuncMatchesTagReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData3, struct FGameplayTag& K2NodeCustomEventApplicationTag3, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData2, struct FGameplayTag& K2NodeCustomEventApplicationTag2, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData1, struct FGameplayTag& K2NodeCustomEventApplicationTag1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FGameplayTag& TempstructVariable, struct FGameplayAbilityTargetDataHandle& TempstructVariable1, struct TEnumAsByte<EPathFollowingResult>& K2NodeCustomEventResult, class AAIController*& K2NodeCustomEventAIController, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, struct FDelegate& K2NodeCreateDelegateOutputDelegate7, bool& CallFuncK2CommitAbilityReturnValue, class UFortAbilityTask_PlayMontageWaitTarget*& CallFuncPlayMontageInfoAndWaitForTriggerReturnValue, bool& CallFuncIsValidReturnValue, bool& K2NodeEventbWasCancelled, class AActor*& CallFuncGetAIAbilityTargetReturnValue, class UFortAbilityTask_MoveAI*& CallFuncCreateMoveAITaskReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsValidReturnValue2, bool& CallFuncNotEqualByteByteReturnValue, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData, struct FGameplayTag& K2NodeCustomEventApplicationTag, bool& CallFuncNPCApplyGameplayEffectContainerAndLaunchTargetsHitAbilityTargetRightNow, bool& CallFuncNPCApplyGameplayEffectContainerAndLaunchTargetsHitAbilityTargetDuringThisAbilityActivation, struct TArray<class AActor*>& CallFuncNPCApplyGameplayEffectContainerAndLaunchTargetsActorsWeHaveHitDuringThisAbilityActivation, struct TArray<class AActor*>& CallFuncNPCApplyGameplayEffectContainerAndLaunchTargetsActorsHitWithThisSpecificTargetSelection); // (Final | 0x00008000 | HasDefaults)
};

