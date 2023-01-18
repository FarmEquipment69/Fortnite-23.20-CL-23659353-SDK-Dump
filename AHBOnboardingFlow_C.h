// BlueprintGeneratedClass /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C
// Size: 0x2c0
class AHBOnboardingFlow_C : public AActor
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x288 (0x8)
	class USceneComponent* DefaultSceneRoot; // 0x290 (0x8)
	class UFortQuestItemDefinition_Campaign* PlayPeriodicEventMovieQuest; // 0x298 (0x8)
	bool bPlayedPeriodicEventMovie; // 0x2a0 (0x1)
	bool bHasRecheckedNeedToPlayPeriodicEventMovie; // 0x2a1 (0x1)
	unsigned char unreflected_2a2[0x6]; // 0x2a2 (0x6) 
	struct FDataTableRowHandle PlayPeriodicEventCineObjective; // 0x2a8 (0x10)
	class UClass* PeriodicEventMovieAnnouncementClass; // 0x2b8 (0x8)

	/* Functions */

	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.GetCampaignQuestManager (Has no native function)
	void GetCampaignQuestManager(class UFortQuestManager*& QuestManager, class UFortGlobalUIContext*& CallFuncGetContextReturnValue, class UFortQuestManager*& CallFuncGetQuestManagerReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.RecheckNeedToPlayEventMovie (Has no native function)
	void RecheckNeedToPlayEventMovie(bool& WaitingToCheckAgain, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncNotPreBoolReturnValue1, bool& CallFuncBooleanANDReturnValue); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.NeedsToPlayEventMovie (Has no native function)
	bool NeedsToPlayEventMovie(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_856A325D44ECC73B857CE5B301E90D33 (Has no native function)
	void OnCanceled856A325D44ECC73B857CE5B301E90D33(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33 (Has no native function)
	void OnAllClientsReady856A325D44ECC73B857CE5B301E90D33(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_50CD26324B96B121A5B49DA66113AE5D (Has no native function)
	void OnFailure50CD26324B96B121A5B49DA66113AE5D(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_50CD26324B96B121A5B49DA66113AE5D (Has no native function)
	void OnIgnored50CD26324B96B121A5B49DA66113AE5D(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_50CD26324B96B121A5B49DA66113AE5D (Has no native function)
	void OnSuccess50CD26324B96B121A5B49DA66113AE5D(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.HandlePlayEventCine (Has no native function)
	void HandlePlayEventCine(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_PlayEventMovie (Has no native function)
	void HandleClientEventPlayEventMovie(class UObject*& EventSource, class UObject*& EventFocus, struct FFortClientEvent& ClientEvent); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.StartFlow (Has no native function)
	void StartFlow(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.ExecuteUbergraph_HBOnboardingFlow (Has no native function)
	void ExecuteUbergraphHBOnboardingFlow(int& EntryPoint, class UFortGlobalUIContext*& CallFuncGetContextReturnValue, enum EFortUIFeatureState& CallFuncGetFeatureStateOutFeatureState, enum EFortUIFeatureStateReason& CallFuncGetFeatureStateOutReason, bool& CallFuncEqualEqualByteByteReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FTransform& CallFuncMakeTransformReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, class UFortGlobalUIContext*& CallFuncGetContextReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, class UFortQuestManager*& CallFuncGetQuestManagerReturnValue, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncIsValidReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, struct TArray<class AFortPlayerController*>& K2NodeMakeArrayArray, bool& CallFuncNeedsToPlayEventMovieReturnValue, bool& CallFuncRecheckNeedToPlayEventMovieWaitingToCheckAgain, bool& CallFuncRecheckNeedToPlayEventMovieWaitingToCheckAgain1, class UObject*& K2NodeHandleClientEventEventSource, class UObject*& K2NodeHandleClientEventEventFocus, struct FFortClientEvent& K2NodeHandleClientEventClientEvent, class UFortQuestManager*& CallFuncGetCampaignQuestManagerQuestManager, class UFortAsyncAction_SendQuestStatEvent*& CallFuncSendClientStatEventReturnValue, class AActor*& CallFuncBeginDeferredActorSpawnFromClassReturnValue, class AFortClientAnnouncement*& CallFuncFinishSpawningActorReturnValue, class UFortAsyncAction_WaitForClientAnnouncement*& CallFuncWaitForClientAnnouncementReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsValidReturnValue2, bool& CallFuncIsValidReturnValue3, bool& CallFuncClassIsChildOfReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate4); // (Final | 0x00008000 | HasDefaults)
};

