// BlueprintGeneratedClass /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C
// Size: 0xb39
class UGA_Riding_Player_Sprint_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	struct TArray<struct FGameplayTag> Tagstocancelsprinting; // 0xb28 (0x10)
	bool ShouldCancelSprint; // 0xb38 (0x1)

	/* Functions */

	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.OnRep_CancelSprintDispatcher (Has no native function)
	void OnRepCancelSprintDispatcher(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.Added_BA9D24D64958BB04345A3D89BD7617CA (Has no native function)
	void AddedBA9D24D64958BB04345A3D89BD7617CA(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.FailedToActivatePassiveAbility (Has no native function)
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo& ActorInfo); // (Event | Public | BlueprintEvent)

	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.ExecuteUbergraph_GA_Riding_Player_Sprint (Has no native function)
	void ExecuteUbergraphGARidingPlayerSprint(int& EntryPoint, bool& CallFuncK2CommitAbilityReturnValue, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable, bool& K2NodeEventbWasCancelled, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& CallFuncIsValidReturnValue, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue1, class UControllingRiderComponent*& CallFuncGetComponentByClassReturnValue, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue1, bool& CallFuncIsValidReturnValue2, bool& CallFuncIsValidReturnValue3, class AFortPawn*& K2NodeDynamicCastAsFortPawn1, bool& K2NodeDynamicCastbSuccess1, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, bool& CallFuncIsValidReturnValue4, bool& CallFuncIsValidReturnValue5, class UControllingRiderComponent*& CallFuncGetComponentByClassReturnValue1, bool& CallFuncIsValidReturnValue6, class UCreatureBaseRidableComponent_C*& K2NodeDynamicCastAsCreatureBaseRidableComponent, bool& K2NodeDynamicCastbSuccess2, bool& CallFuncIsValidReturnValue7, class UCreatureBaseRidableComponent_C*& K2NodeDynamicCastAsCreatureBaseRidableComponent1, bool& K2NodeDynamicCastbSuccess3, class AActor*& CallFuncGetOwnerReturnValue, bool& CallFuncIsValidReturnValue8, class UCreatureBaseRidableComponent_C*& K2NodeDynamicCastAsCreatureBaseRidableComponent2, bool& K2NodeDynamicCastbSuccess4, bool& CallFuncIsValidReturnValue9, class AActor*& CallFuncGetOwnerReturnValue1, bool& CallFuncIsValidReturnValue10, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue1, struct FGameplayAbilityActorInfo& K2NodeEventActorInfo, bool& CallFuncIsValidReturnValue11, int& CallFuncArrayLengthReturnValue, struct FGameplayTag& CallFuncArrayGetItem, bool& CallFuncLessIntIntReturnValue, class UAbilityTask_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddReturnValue, bool& CallFuncIsValidReturnValue12); // (Final | 0x00008000 | HasDefaults)
};

