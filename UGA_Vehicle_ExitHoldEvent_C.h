// BlueprintGeneratedClass /Game/Athena/DrivableVehicles/GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C
// Size: 0xb34
class UGA_Vehicle_ExitHoldEvent_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0xb28 (0x8)
	struct FGameplayTag EquippingCue; // 0xb30 (0x4)

	/* Functions */

	// Function /Game/Athena/DrivableVehicles/GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.EventReceived_7AE1D485464AEC7EB429C3877D33AF69 (Has no native function)
	void EventReceived7AE1D485464AEC7EB429C3877D33AF69(struct FGameplayEventData& Payload); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/DrivableVehicles/GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.EventReceived_209BF560404B83EBEAA8DD8090C443AC (Has no native function)
	void EventReceived209BF560404B83EBEAA8DD8090C443AC(struct FGameplayEventData& Payload); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/DrivableVehicles/GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/DrivableVehicles/GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/DrivableVehicles/GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.FailedToActivatePassiveAbility (Has no native function)
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo& ActorInfo); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/DrivableVehicles/GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.ExecuteUbergraph_GA_Vehicle_ExitHoldEvent (Has no native function)
	void ExecuteUbergraphGAVehicleExitHoldEvent(int& EntryPoint, struct FGameplayEventData& TempstructVariable, class UAbilityTask_WaitGameplayEvent*& CallFuncWaitGameplayEventReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, bool& CallFuncIsValidReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FGameplayEventData& K2NodeCustomEventPayload, struct FGameplayEventData& TempstructVariable1, class UAbilityTask_WaitGameplayEvent*& CallFuncWaitGameplayEventReturnValue1, bool& CallFuncIsValidReturnValue1, struct FGameplayAbilityActorInfo& CallFuncGetActorInfoReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncK2CommitAbilityReturnValue, struct FGameplayAbilityTargetDataHandle& CallFuncAbilityTargetDataFromActorReturnValue, struct TArray<struct FActiveGameplayEffectHandle*>& CallFuncBPApplyGameplayEffectToTargetReturnValue, struct FGameplayEventData& K2NodeCustomEventPayload1, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, bool& K2NodeEventbWasCancelled, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue1, struct FGameplayAbilityActorInfo& K2NodeEventActorInfo); // (Final | 0x00008000 | HasDefaults)
};

