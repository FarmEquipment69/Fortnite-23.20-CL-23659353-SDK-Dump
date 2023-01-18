// BlueprintGeneratedClass /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C
// Size: 0xb50
class UGA_Riding_Player_Petting_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	class URidableComponent* ActiveRidable; // 0xb28 (0x8)
	class UClass* GEPlayerPetting; // 0xb30 (0x8)
	struct TArray<struct FGameplayTag> TagsToCancelPetting; // 0xb38 (0x10)
	class AFortPlayerPawn* FortPlayerPawnRider; // 0xb48 (0x8)

	/* Functions */

	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.PettingTelemetry (Has no native function)
	void PettingTelemetry(class AActor*& Owner, bool& CallFuncK2HasAuthorityReturnValue, class UFortAthenaAITelemetryData*& CallFuncGetOrCreateAITelemetryDataReturnValue, class UFortAthenaPettingWildlifeTelemetryData*& K2NodeDynamicCastAsFortAthenaPettingWildlifeTelemetryData, bool& K2NodeDynamicCastbSuccess); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.GetRiderPettingMontage (Has no native function)
	void GetRiderPettingMontage(class UAnimMontage*& RiderPettingMontage, struct FRidingPettingData& CallFuncGetPettingDataReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, struct TEnumAsByte<EFortCustomGender>& CallFuncGetCharacterGenderReturnValue, bool& K2NodeSwitchEnumCmpSuccess, struct FRidingPettingData& CallFuncGetPettingDataReturnValue1); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.OnCancelled_EBEF9ED74121A25C39ABC2B953D1B3F8 (Has no native function)
	void OnCancelledEBEF9ED74121A25C39ABC2B953D1B3F8(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.OnInterrupted_EBEF9ED74121A25C39ABC2B953D1B3F8 (Has no native function)
	void OnInterruptedEBEF9ED74121A25C39ABC2B953D1B3F8(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.OnBlendOut_EBEF9ED74121A25C39ABC2B953D1B3F8 (Has no native function)
	void OnBlendOutEBEF9ED74121A25C39ABC2B953D1B3F8(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.OnCompleted_EBEF9ED74121A25C39ABC2B953D1B3F8 (Has no native function)
	void OnCompletedEBEF9ED74121A25C39ABC2B953D1B3F8(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.Added_DE1C9DFC4A5B4A7B0E203C8095E1CE5D (Has no native function)
	void AddedDE1C9DFC4A5B4A7B0E203C8095E1CE5D(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.FailedToActivatePassiveAbility (Has no native function)
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo& ActorInfo); // (Event | Public | BlueprintEvent)

	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.ExecuteUbergraph_GA_Riding_Player_Petting (Has no native function)
	void ExecuteUbergraphGARidingPlayerPetting(int& EntryPoint, class AActor*& CallFuncGetOwnerReturnValue, class UControllableRidableComponent*& K2NodeDynamicCastAsControllableRidableComponent, bool& K2NodeDynamicCastbSuccess, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable, bool& K2NodeEventbWasCancelled, bool& CallFuncK2CommitAbilityReturnValue, struct FGameplayAbilityActorInfo& K2NodeEventActorInfo, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess1, class UControllingRiderComponent*& CallFuncGetComponentByClassReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue1, bool& CallFuncIsValidReturnValue2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, class UControllingRiderComponent*& CallFuncGetComponentByClassReturnValue1, bool& CallFuncIsValidReturnValue3, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue2, class AActor*& CallFuncGetOwnerReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, bool& CallFuncIsValidReturnValue4, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue, bool& CallFuncIsValidReturnValue5, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue3, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue4, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess2, class AFortPawn*& K2NodeDynamicCastAsFortPawn1, bool& K2NodeDynamicCastbSuccess3, struct FGameplayTag& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, class UAbilityTask_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddReturnValue, bool& CallFuncLessIntIntReturnValue, bool& CallFuncIsValidReturnValue6, class UAnimMontage*& CallFuncGetRiderPettingMontageRiderPettingMontage, class UAbilityTask_PlayMontageAndWait*& CallFuncCreatePlayMontageAndWaitProxyReturnValue, bool& CallFuncIsValidReturnValue7); // (Final | 0x00008000 | HasDefaults)
};

