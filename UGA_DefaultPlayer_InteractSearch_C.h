// BlueprintGeneratedClass /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C
// Size: 0xd08
class UGA_DefaultPlayer_InteractSearch_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0xb28 (0x8)
	struct FGameplayTag RefillGasTankTag; // 0xb30 (0x4)
	unsigned char unreflected_b34[0x4]; // 0xb34 (0x4) 
	struct FFortGameplayAbilityMontageInfo RefillGasTankMontage; // 0xb38 (0x58)
	struct FGameplayTag CatchFireflyTag; // 0xb90 (0x4)
	unsigned char unreflected_b94[0x4]; // 0xb94 (0x4) 
	struct FFortGameplayAbilityMontageInfo FireflyCatchMontage; // 0xb98 (0x58)
	struct FFortGameplayAbilityMontageInfo RefillVehicleFuelMontage; // 0xbf0 (0x58)
	struct FGameplayTag GasCanRefillVehicleTag; // 0xc48 (0x4)
	unsigned char unreflected_c4c[0x4]; // 0xc4c (0x4) 
	struct FFortGameplayAbilityMontageInfo DBNOMontageInfo; // 0xc50 (0x58)
	struct FGameplayTag TagUseOverrideSearchMontage; // 0xca8 (0x4)
	unsigned char unreflected_cac[0x4]; // 0xcac (0x4) 
	struct FFortGameplayAbilityMontageInfo OverrideSearchMontageInfo; // 0xcb0 (0x58)

	/* Functions */

	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.EndInteractSearch (Has no native function)
	void EndInteractSearch(struct FGameplayTag& CallFuncMakeLiteralGameplayTagReturnValue, bool& CallFuncIsValidReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.StartInteractSearch (Has no native function)
	void StartInteractSearch(bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Completed_B697D9B445CA2BFDB1328D93C33FBCF3 (Has no native function)
	void CompletedB697D9B445CA2BFDB1328D93C33FBCF3(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Cancelled_B697D9B445CA2BFDB1328D93C33FBCF3 (Has no native function)
	void CancelledB697D9B445CA2BFDB1328D93C33FBCF3(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Triggered_B697D9B445CA2BFDB1328D93C33FBCF3 (Has no native function)
	void TriggeredB697D9B445CA2BFDB1328D93C33FBCF3(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Completed_72217B3542CE776DEDDBB3A7B5D6D343 (Has no native function)
	void Completed72217B3542CE776DEDDBB3A7B5D6D343(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Cancelled_72217B3542CE776DEDDBB3A7B5D6D343 (Has no native function)
	void Cancelled72217B3542CE776DEDDBB3A7B5D6D343(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Triggered_72217B3542CE776DEDDBB3A7B5D6D343 (Has no native function)
	void Triggered72217B3542CE776DEDDBB3A7B5D6D343(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Completed_6A38D93A428260E68695388965BFA176 (Has no native function)
	void Completed6A38D93A428260E68695388965BFA176(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Cancelled_6A38D93A428260E68695388965BFA176 (Has no native function)
	void Cancelled6A38D93A428260E68695388965BFA176(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Triggered_6A38D93A428260E68695388965BFA176 (Has no native function)
	void Triggered6A38D93A428260E68695388965BFA176(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Completed_5EB1B64344DD00ABFE41E2857DC3FB38 (Has no native function)
	void Completed5EB1B64344DD00ABFE41E2857DC3FB38(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Cancelled_5EB1B64344DD00ABFE41E2857DC3FB38 (Has no native function)
	void Cancelled5EB1B64344DD00ABFE41E2857DC3FB38(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Triggered_5EB1B64344DD00ABFE41E2857DC3FB38 (Has no native function)
	void Triggered5EB1B64344DD00ABFE41E2857DC3FB38(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Completed_3E01853F4E8362C959E7B4B82217702E (Has no native function)
	void Completed3E01853F4E8362C959E7B4B82217702E(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Cancelled_3E01853F4E8362C959E7B4B82217702E (Has no native function)
	void Cancelled3E01853F4E8362C959E7B4B82217702E(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Triggered_3E01853F4E8362C959E7B4B82217702E (Has no native function)
	void Triggered3E01853F4E8362C959E7B4B82217702E(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Completed_64A40E14483311B0BA6F95B516CA6468 (Has no native function)
	void Completed64A40E14483311B0BA6F95B516CA6468(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Cancelled_64A40E14483311B0BA6F95B516CA6468 (Has no native function)
	void Cancelled64A40E14483311B0BA6F95B516CA6468(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Triggered_64A40E14483311B0BA6F95B516CA6468 (Has no native function)
	void Triggered64A40E14483311B0BA6F95B516CA6468(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.ExecuteUbergraph_GA_DefaultPlayer_InteractSearch (Has no native function)
	void ExecuteUbergraphGADefaultPlayerInteractSearch(int& EntryPoint, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData16, struct FGameplayTag& K2NodeCustomEventApplicationTag16, class UFortAbilityTask_PlayMontageWaitTarget*& CallFuncPlayMontageInfoAndWaitForTriggerReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& CallFuncIsValidReturnValue, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData15, struct FGameplayTag& K2NodeCustomEventApplicationTag15, struct FGameplayTag& TempstructVariable, struct FGameplayAbilityTargetDataHandle& TempstructVariable1, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData14, struct FGameplayTag& K2NodeCustomEventApplicationTag14, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData13, struct FGameplayTag& K2NodeCustomEventApplicationTag13, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData12, struct FGameplayTag& K2NodeCustomEventApplicationTag12, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, struct FGameplayTag& TempstructVariable2, struct FGameplayAbilityTargetDataHandle& TempstructVariable3, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData11, struct FGameplayTag& K2NodeCustomEventApplicationTag11, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData10, struct FGameplayTag& K2NodeCustomEventApplicationTag10, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData9, struct FGameplayTag& K2NodeCustomEventApplicationTag9, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, struct FGameplayTag& TempstructVariable4, struct FGameplayAbilityTargetDataHandle& TempstructVariable5, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData8, struct FGameplayTag& K2NodeCustomEventApplicationTag8, struct FDelegate& K2NodeCreateDelegateOutputDelegate7, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData7, struct FGameplayTag& K2NodeCustomEventApplicationTag7, struct FDelegate& K2NodeCreateDelegateOutputDelegate8, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData6, struct FGameplayTag& K2NodeCustomEventApplicationTag6, struct FDelegate& K2NodeCreateDelegateOutputDelegate9, struct FGameplayTag& TempstructVariable6, struct FGameplayAbilityTargetDataHandle& TempstructVariable7, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData5, struct FGameplayTag& K2NodeCustomEventApplicationTag5, struct FDelegate& K2NodeCreateDelegateOutputDelegate10, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData4, struct FGameplayTag& K2NodeCustomEventApplicationTag4, struct FDelegate& K2NodeCreateDelegateOutputDelegate11, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData3, struct FGameplayTag& K2NodeCustomEventApplicationTag3, struct FDelegate& K2NodeCreateDelegateOutputDelegate12, struct FGameplayTag& TempstructVariable8, struct FGameplayAbilityTargetDataHandle& TempstructVariable9, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData2, struct FGameplayTag& K2NodeCustomEventApplicationTag2, struct FDelegate& K2NodeCreateDelegateOutputDelegate13, struct FDelegate& K2NodeCreateDelegateOutputDelegate14, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData1, struct FGameplayTag& K2NodeCustomEventApplicationTag1, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData, struct FGameplayTag& K2NodeCustomEventApplicationTag, struct FDelegate& K2NodeCreateDelegateOutputDelegate15, struct FGameplayTag& TempstructVariable10, struct FGameplayAbilityTargetDataHandle& TempstructVariable11, class UFortAbilityTask_PlayMontageWaitTarget*& CallFuncPlayMontageInfoAndWaitForTriggerReturnValue1, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData17, struct FGameplayTag& K2NodeCustomEventApplicationTag17, bool& CallFuncIsValidReturnValue1, struct FGameplayAbilityActorInfo& CallFuncGetActorInfoReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, class UFortAbilityTask_PlayMontageWaitTarget*& CallFuncPlayMontageInfoAndWaitForTriggerReturnValue2, bool& CallFuncIsValidReturnValue2, struct FDelegate& K2NodeCreateDelegateOutputDelegate16, class UFortAbilityTask_PlayMontageWaitTarget*& CallFuncPlayMontageInfoAndWaitForTriggerReturnValue3, bool& CallFuncIsValidReturnValue3, class UFortAbilityTask_PlayMontageWaitTarget*& CallFuncPlayMontageInfoAndWaitForTriggerReturnValue4, bool& CallFuncIsValidReturnValue4, class UFortAbilityTask_PlayMontageWaitTarget*& CallFuncPlayMontageInfoAndWaitForTriggerReturnValue5, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue, bool& CallFuncIsValidReturnValue5, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput1, bool& CallFuncHasMatchingGameplayTagReturnValue1, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput2, bool& CallFuncHasMatchingGameplayTagReturnValue2, bool& CallFuncIsDBNOReturnValue, bool& CallFuncNotPreBoolReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput3, bool& CallFuncHasMatchingGameplayTagReturnValue3, struct FDelegate& K2NodeCreateDelegateOutputDelegate17, class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess1, bool& CallFuncIsValidReturnValue6); // (Final | 0x00008000 | HasDefaults)
};

