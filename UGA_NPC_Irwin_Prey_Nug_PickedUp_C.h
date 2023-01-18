// BlueprintGeneratedClass /Irwin/AI/Prey/Nug/Abilities/GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C
// Size: 0xe90
class UGA_NPC_Irwin_Prey_Nug_PickedUp_C : public UGA_NPC_Parent_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xe58 (0x8)
	class UClass* GEPlayerFloatAbility; // 0xe60 (0x8)
	class UFortAbilitySystemComponent* PlayerAbilitySystem; // 0xe68 (0x8)
	class UAnimMontage* MontageFloating; // 0xe70 (0x8)
	struct FName FloatingMontageTask; // 0xe78 (0x4)
	unsigned char unreflected_e7c[0x4]; // 0xe7c (0x4) 
	class UClass* GEHeldFloating; // 0xe80 (0x8)
	struct FActiveGameplayEffectHandle* GEHeldFloatingHandle; // 0xe88 (0x8)

	/* Functions */

	// Function /Irwin/AI/Prey/Nug/Abilities/GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.StopMontage (Has no native function)
	void StopMontage(class UAnimMontage*& CallFuncGetCurrentMontageReturnValue, bool& CallFuncEqualEqualObjectObjectReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Abilities/GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.EventReceived_652F951742ACDCA03108779C2A03D41E (Has no native function)
	void EventReceived652F951742ACDCA03108779C2A03D41E(struct FGameplayEventData& Payload); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Abilities/GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.OnNotifyEnd_C589B85E45A774D41686D3BDFD1ED73C (Has no native function)
	void OnNotifyEndC589B85E45A774D41686D3BDFD1ED73C(struct FGameplayTag& NotifyTag); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Abilities/GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.OnNotifyBegin_C589B85E45A774D41686D3BDFD1ED73C (Has no native function)
	void OnNotifyBeginC589B85E45A774D41686D3BDFD1ED73C(struct FGameplayTag& NotifyTag); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Abilities/GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.OnCancelled_C589B85E45A774D41686D3BDFD1ED73C (Has no native function)
	void OnCancelledC589B85E45A774D41686D3BDFD1ED73C(struct FGameplayTag& NotifyTag); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Abilities/GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.OnInterrupted_C589B85E45A774D41686D3BDFD1ED73C (Has no native function)
	void OnInterruptedC589B85E45A774D41686D3BDFD1ED73C(struct FGameplayTag& NotifyTag); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Abilities/GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.OnBlendOut_C589B85E45A774D41686D3BDFD1ED73C (Has no native function)
	void OnBlendOutC589B85E45A774D41686D3BDFD1ED73C(struct FGameplayTag& NotifyTag); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Abilities/GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.OnCompleted_C589B85E45A774D41686D3BDFD1ED73C (Has no native function)
	void OnCompletedC589B85E45A774D41686D3BDFD1ED73C(struct FGameplayTag& NotifyTag); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Abilities/GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.EventReceived_A0AE263D4404EBF0B62950A680B1C36D (Has no native function)
	void EventReceivedA0AE263D4404EBF0B62950A680B1C36D(struct FGameplayEventData& Payload); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Abilities/GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Abilities/GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Abilities/GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.FailedToActivatePassiveAbility (Has no native function)
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo& ActorInfo); // (Event | Public | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Abilities/GA_NPC_Irwin_Prey_Nug_PickedUp.GA_NPC_Irwin_Prey_Nug_PickedUp_C.ExecuteUbergraph_GA_NPC_Irwin_Prey_Nug_PickedUp (Has no native function)
	void ExecuteUbergraphGANPCIrwinPreyNugPickedUp(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FGameplayEventData& K2NodeCustomEventPayload1, struct FGameplayEventData& TempstructVariable, class UAbilityTask_WaitGameplayEvent*& CallFuncWaitGameplayEventReturnValue, bool& CallFuncIsValidReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FGameplayTag& K2NodeCustomEventNotifyTag5, struct FGameplayTag& K2NodeCustomEventNotifyTag4, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FGameplayTag& K2NodeCustomEventNotifyTag3, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, struct FGameplayTag& K2NodeCustomEventNotifyTag2, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, struct FGameplayTag& K2NodeCustomEventNotifyTag1, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, struct FGameplayTag& K2NodeCustomEventNotifyTag, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, struct FGameplayTag& TempstructVariable1, struct FDelegate& K2NodeCreateDelegateOutputDelegate7, struct FGameplayEventData& K2NodeCustomEventPayload, struct FGameplayEventData& TempstructVariable2, class UAbilityTask_WaitGameplayEvent*& CallFuncWaitGameplayEventReturnValue1, bool& CallFuncIsValidReturnValue1, struct FGameplayEffectContextHandle& CallFuncGetGrantedByEffectContextReturnValue, class AActor*& CallFuncEffectContextGetInstigatorActorReturnValue, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue, class UFortAbilityTask_PlayMontageWaitNotify*& CallFuncPlayMontageAndWaitNotifyReturnValue, bool& CallFuncIsValidReturnValue2, bool& K2NodeEventbWasCancelled, struct FGameplayAbilityActorInfo& K2NodeEventActorInfo, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue1); // (Final | 0x00008000 | HasDefaults)
};

