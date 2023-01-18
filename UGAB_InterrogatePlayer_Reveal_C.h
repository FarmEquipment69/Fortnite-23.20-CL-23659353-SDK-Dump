// BlueprintGeneratedClass /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C
// Size: 0xf60
class UGAB_InterrogatePlayer_Reveal_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0xb28 (0x8)
	class AFortPlayerControllerAthena* PlayerController; // 0xb30 (0x8)
	class AFortPlayerPawn* InterrogatedPlayer; // 0xb38 (0x8)
	class UAnimMontage* AnimReveal; // 0xb40 (0x8)
	class UAnimMontage* AnimEnd; // 0xb48 (0x8)
	struct FName RevealHolster; // 0xb50 (0x4)
	struct FGameplayTag GCReveal; // 0xb54 (0x4)
	struct FScalableFloat MarkDurationPlayer; // 0xb58 (0x28)
	struct FScalableFloat MarkDurationNPC; // 0xb80 (0x28)
	struct FScalableFloat MarkRadius; // 0xba8 (0x28)
	struct TArray<class AActor*> SquadmatesToMark; // 0xbd0 (0x10)
	struct FTimerHandle* TimerReveal; // 0xbe0 (0x8)
	struct FGameplayTag TNPC; // 0xbe8 (0x4)
	unsigned char unreflected_bec[0x4]; // 0xbec (0x4) 
	double RevealDuration; // 0xbf0 (0x8)
	double EndAbilityDelay; // 0xbf8 (0x8)
	double SweepDelay; // 0xc00 (0x8)
	bool Cancelled; // 0xc08 (0x1)
	bool Ending; // 0xc09 (0x1)
	unsigned char unreflected_c0a[0x6]; // 0xc0a (0x6) 
	struct FString IndicatorGroup; // 0xc10 (0x10)
	class UClass* CameraMode; // 0xc20 (0x8)
	struct TArray<class AActor*> ActorsToMark; // 0xc28 (0x10)
	struct FGameplayTagContainer TReticleHUD; // 0xc38 (0x20)
	struct FGameplayTagContainer NPCTagsToMark; // 0xc58 (0x20)
	struct FGameplayTagContainer ChestTagsToMark; // 0xc78 (0x20)
	struct FGameplayTagContainer GameplayItemTagsToMark; // 0xc98 (0x20)
	struct FName ParticleSystemParamName; // 0xcb8 (0x4)
	unsigned char unreflected_cbc[0x4]; // 0xcbc (0x4) 
	class UParticleSystem* IndicatedPS; // 0xcc0 (0x8)
	class USoundBase* IndicatedSound; // 0xcc8 (0x8)
	struct FVector PSOffset; // 0xcd0 (0x18)
	struct FName PSVectorParamName; // 0xce8 (0x4)
	unsigned char unreflected_cec[0x4]; // 0xcec (0x4) 
	struct FVector PSDBNOOffset; // 0xcf0 (0x18)
	struct FName EnemyStencilName; // 0xd08 (0x4)
	struct FName TreasureChestStencilName; // 0xd0c (0x4)
	double StepTime; // 0xd10 (0x8)
	bool testbool; // 0xd18 (0x1)
	unsigned char unreflected_d19[0x7]; // 0xd19 (0x7) 
	struct FScalableFloat EnemyStencilID; // 0xd20 (0x28)
	struct FScalableFloat StencilStepTime; // 0xd48 (0x28)
	struct FScalableFloat bUseDefaultStencil; // 0xd70 (0x28)
	struct FScalableFloat IndicatorStepTime; // 0xd98 (0x28)
	struct FGameplayTagQuery NPCGameplayTagQuery; // 0xdc0 (0x48)
	struct FIndicatedActorData IndicatedActorDataPlayers; // 0xe08 (0xd8)
	struct FStenciledActorData StenciledActorDataPlayers; // 0xee0 (0x80)

	/* Functions */

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.GetTeamMembers (Has no native function)
	struct TArray<class AFortPlayerStateAthena*> GetTeamMembers(class APawn*& Target, bool& bIncludeSelf); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.GAB_InterrogatePlayer_Reveal_AutoGenFunc (Has no native function)
	void GABInterrogatePlayerRevealAutoGenFunc(class AActor*& IndicatedActor); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.ToggleReticleVisibility (Has no native function)
	void ToggleReticleVisibility(bool& Hide, struct FName& TempnameVariable, class UFortHUDContext*& CallFuncGetContextReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Reveal (Has no native function)
	void Reveal(int& TempintLoopCounterVariable, bool& TempboolVariable, int& CallFuncAddIntIntReturnValue, int& TempintLoopCounterVariable1, int& CallFuncAddIntIntReturnValue1, int& TempintArrayIndexVariable, struct FName& TempnameVariable, struct TArray<class AFortPlayerStateAthena*>& CallFuncGetTeamMembersReturnValue, struct TArray<class AFortPlayerStateAthena*>& CallFuncGetTeamMembersReturnValue1, class AFortPlayerStateAthena*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncLessIntIntReturnValue, class AFortPlayerPawn*& CallFuncGetPlayerPawnOrVehicleDriverReturnValue, int& CallFuncArrayLengthReturnValue1, struct TScriptInterface<class IGameplayTagAssetInterface>& K2NodeDynamicCastAsGameplayTagAssetInterface, bool& K2NodeDynamicCastbSuccess, bool& CallFuncLessIntIntReturnValue1, int& CallFuncArrayLengthReturnValue2, bool& CallFuncGreaterIntIntReturnValue, bool& TempboolVariable1, struct FDelegate& K2NodeCreateDelegateOutputDelegate, float& CallFuncGetValueAtLevelReturnValue, struct FGameplayTagContainer& CallFuncMakeLiteralGameplayTagContainerReturnValue, bool& CallFuncHasAnyMatchingGameplayTagsReturnValue, struct FName& TempnameVariable1, float& CallFuncGetValueAtLevelReturnValue1, float& CallFuncGetValueAtLevelReturnValue2, float& CallFuncGetValueAtLevelReturnValue3, float& CallFuncGetValueAtLevelReturnValue4, bool& CallFuncRowToBoolReturnValue, bool& CallFuncRowToBoolReturnValue1, bool& CallFuncRowToBoolReturnValue2, bool& CallFuncRowToBoolReturnValue3, float& CallFuncGetValueAtLevelReturnValue5, float& CallFuncGetValueAtLevelReturnValue6, float& CallFuncGetValueAtLevelReturnValue7, bool& TempboolVariable2, struct FName& TempnameVariable2, struct FName& K2NodeSelectDefault, struct FIndicatedActorParticleSystemData& CallFuncMakeIndicatedActorParticleSystemDataReturnValue, unsigned char& CallFuncGetActorTeamReturnValue, struct FIndicatedActorData& K2NodeMakeStructIndicatedActorData, struct FName& K2NodeSelectDefault1, float& CallFuncGetValueAtLevelReturnValue8, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& K2NodeMakeArrayArray, float& CallFuncGetValueAtLevelReturnValue9, struct FIndicatedActorData& CallFuncMakeIndicatedActorDataReturnValue, float& CallFuncGetValueAtLevelReturnValue10, float& CallFuncGetValueAtLevelReturnValue11, struct FStenciledActorData& CallFuncMakeStenciledActorDataReturnValue, struct FIndicatedActorParticleSystemData& CallFuncMakeIndicatedActorParticleSystemDataReturnValue1, struct FStenciledActorData& CallFuncMakeStenciledActorDataReturnValue1, struct FIndicatedActorData& CallFuncMakeIndicatedActorDataReturnValue1, float& CallFuncGetValueAtLevelReturnValue12, float& CallFuncGetValueAtLevelReturnValue13, struct FIndicatedActorData& CallFuncMakeIndicatedActorDataReturnValue2, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& K2NodeMakeArrayArray1, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& K2NodeMakeArrayArray2, struct TArray<struct TEnumAsByte<EFortTeamAffiliation>>& CallFuncMakeIndicatedActorDataWithFilterInAffiliations, struct FIndicatedActorDataWithFilter& CallFuncMakeIndicatedActorDataWithFilterReturnValue, bool& TempboolVariable3, struct FName& K2NodeSelectDefault2, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue, struct FStenciledActorData& K2NodeMakeStructStenciledActorData, struct FName& TempnameVariable3, bool& TempboolVariable4, int& TempintArrayIndexVariable1, struct FName& K2NodeSelectDefault3, class AFortPlayerStateAthena*& CallFuncArrayGetItem1, struct FStenciledActorData& CallFuncMakeStenciledActorDataReturnValue2, class AFortPlayerPawn*& CallFuncGetCurrentPawnReturnValue, struct TArray<struct TEnumAsByte<EFortTeamAffiliation>>& CallFuncMakeIndicatedActorDataWithFilterInAffiliations1, struct FIndicatedActorDataWithFilter& CallFuncMakeIndicatedActorDataWithFilterReturnValue1, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue1, struct FGameplayEffectContextHandle& CallFuncMakeFortEffectContextReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPFortApplyGameplayEffectToTargetReturnValue, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue1, class UFortQuestManager*& CallFuncGetQuestManagerReturnValue, class UFortQuestManager*& CallFuncGetQuestManagerReturnValue1, int& CallFuncArrayAddReturnValue, bool& CallFuncIsValidReturnValue1, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, bool& CallFuncIsDedicatedServerReturnValue, struct FGameplayTagContainer& CallFuncGetFactionTagContainerForActorReturnValue, bool& CallFuncIsValidReturnValue2, struct TArray<struct TEnumAsByte<EFortTeamAffiliation>>& CallFuncMakeIndicatedActorDataWithFilterInAffiliations2, struct FIndicatedActorDataWithFilter& CallFuncMakeIndicatedActorDataWithFilterReturnValue2, struct TArray<struct FIndicatedActorDataWithFilter>& K2NodeMakeArrayArray3, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue, bool& CallFuncNotPreBoolReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.EndAbilityCleanup (Has no native function)
	void EndAbilityCleanup(bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.InitAbility (Has no native function)
	void InitAbility(bool& CallFuncK2CommitAbilityReturnValue, struct FGameplayAbilityActorInfo& CallFuncGetActorInfoReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, struct FGameplayAbilityTargetDataHandle& CallFuncAbilityTargetDataFromActorReturnValue, struct TArray<struct FActiveGameplayEffectHandle*>& CallFuncBPApplyGameplayEffectToTargetReturnValue, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue, class AFortPlayerControllerAthena*& K2NodeDynamicCastAsFortPlayerControllerAthena, bool& K2NodeDynamicCastbSuccess1); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Completed_23F3C2DB411862D627ACFCA8233F7B33 (Has no native function)
	void Completed23F3C2DB411862D627ACFCA8233F7B33(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Cancelled_23F3C2DB411862D627ACFCA8233F7B33 (Has no native function)
	void Cancelled23F3C2DB411862D627ACFCA8233F7B33(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Triggered_23F3C2DB411862D627ACFCA8233F7B33 (Has no native function)
	void Triggered23F3C2DB411862D627ACFCA8233F7B33(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Completed_3C2C8C224B62B00BDEEAF5AF38A401C1 (Has no native function)
	void Completed3C2C8C224B62B00BDEEAF5AF38A401C1(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Cancelled_3C2C8C224B62B00BDEEAF5AF38A401C1 (Has no native function)
	void Cancelled3C2C8C224B62B00BDEEAF5AF38A401C1(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Triggered_3C2C8C224B62B00BDEEAF5AF38A401C1 (Has no native function)
	void Triggered3C2C8C224B62B00BDEEAF5AF38A401C1(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.OnFinish_68B3C6D14B44CCD3170ABDA038C1203E (Has no native function)
	void OnFinish68B3C6D14B44CCD3170ABDA038C1203E(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.OnDied_Event_1 (Has no native function)
	void OnDiedEvent1(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.EndInterrogation (Has no native function)
	void EndInterrogation(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.K2_ActivateAbilityFromEvent (Has no native function)
	void K2ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.ExecuteUbergraph_GAB_InterrogatePlayer_Reveal (Has no native function)
	void ExecuteUbergraphGABInterrogatePlayerReveal(int& EntryPoint, class UAbilityTask_WaitDelay*& CallFuncWaitDelayReturnValue, bool& CallFuncIsValidReturnValue, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData5, struct FGameplayTag& K2NodeCustomEventApplicationTag5, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData4, struct FGameplayTag& K2NodeCustomEventApplicationTag4, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData3, struct FGameplayTag& K2NodeCustomEventApplicationTag3, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FGameplayTag& TempstructVariable, struct FGameplayAbilityTargetDataHandle& TempstructVariable1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData2, struct FGameplayTag& K2NodeCustomEventApplicationTag2, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData1, struct FGameplayTag& K2NodeCustomEventApplicationTag1, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData, struct FGameplayTag& K2NodeCustomEventApplicationTag, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, struct FGameplayTag& TempstructVariable2, struct FGameplayAbilityTargetDataHandle& TempstructVariable3, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, bool& K2NodeEventbWasCancelled, class UFortAbilityTask_PlayMontageWaitTarget*& CallFuncPlayMontageWaitTargetReturnValue, bool& CallFuncIsValidReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate7, bool& CallFuncIsValidReturnValue2, class AActor*& K2NodeCustomEventDamagedActor, float& K2NodeCustomEventDamage, class AController*& K2NodeCustomEventInstigatedBy, class AActor*& K2NodeCustomEventDamageCauser, struct FVector& K2NodeCustomEventHitLocation, class UPrimitiveComponent*& K2NodeCustomEventFHitComponent, struct FName& K2NodeCustomEventBoneName, struct FVector& K2NodeCustomEventMomentum, struct FDelegate& K2NodeCreateDelegateOutputDelegate8, struct FGameplayEventData& K2NodeEventEventData, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue3, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, class UFortAbilityTask_PlayMontageWaitTarget*& CallFuncPlayMontageWaitTargetReturnValue1, bool& CallFuncIsValidReturnValue4, float& CallFuncWaitDelayTimeImplicitCast, float& CallFuncK2SetTimerDelegateTimeImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

