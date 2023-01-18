// BlueprintGeneratedClass /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C
// Size: 0xca0
class UGA_Athena_HidingProp_Hide_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0xb28 (0x8)
	class AB_HidingProp_C* HidingProp; // 0xb30 (0x8)
	class UAnimMontage* EnterAnimMontage; // 0xb38 (0x8)
	struct FGameplayTag GCWobble; // 0xb40 (0x4)
	unsigned char unreflected_b44[0x4]; // 0xb44 (0x4) 
	struct FScalableFloat ExitBlockShootDelay; // 0xb48 (0x28)
	struct FGameplayTagContainer TCQuest; // 0xb70 (0x20)
	struct FGameplayTagContainer TCPlayerOwned; // 0xb90 (0x20)
	struct FScalableFloat RustleMinDelay; // 0xbb0 (0x28)
	struct FScalableFloat RustleMaxDelay; // 0xbd8 (0x28)
	class AFortPlayerController* PlayerController; // 0xc00 (0x8)
	struct FMulticastInlineDelegate NewEventDispatcher0; // 0xc08 (0x10)
	struct FGameplayTagContainer HidingInPropTag; // 0xc18 (0x20)
	struct FGameplayTagContainer GettingInPropTag; // 0xc38 (0x20)
	struct FGameplayTag CurieBurningTag; // 0xc58 (0x4)
	bool AllowCosmetics; // 0xc5c (0x1)
	unsigned char unreflected_c5d[0x3]; // 0xc5d (0x3) 
	struct FGameplayTag DisallowCosmeticsTag; // 0xc60 (0x4)
	bool LandedOnProp; // 0xc64 (0x1)
	unsigned char unreflected_c65[0x3]; // 0xc65 (0x3) 
	struct FTimerHandle* LockOnTimer; // 0xc68 (0x8)
	struct FVector HideLocationForwardVectorWorldPos; // 0xc70 (0x18)
	struct FRotator HideLocationForwardVectorWorldRot; // 0xc88 (0x18)

	/* Functions */

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.SetAvatarHiddenInGame (Has no native function)
	void SetAvatarHiddenInGame(bool& NewHidden, class AActor*& AvatarActor, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.SetCosmeticsAllowed (Has no native function)
	void SetCosmeticsAllowed(bool& Allowed, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncNotEqualBoolBoolReturnValue, bool& CallFuncK2HasAuthorityReturnValue, int& CallFuncArrayAddUniqueReturnValue, bool& CallFuncArrayRemoveItemReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Completed_75B60D4B43DAA553E4C21EA3D2E3AD03 (Has no native function)
	void Completed75B60D4B43DAA553E4C21EA3D2E3AD03(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Cancelled_75B60D4B43DAA553E4C21EA3D2E3AD03 (Has no native function)
	void Cancelled75B60D4B43DAA553E4C21EA3D2E3AD03(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Triggered_75B60D4B43DAA553E4C21EA3D2E3AD03 (Has no native function)
	void Triggered75B60D4B43DAA553E4C21EA3D2E3AD03(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnTimedOutAndDestinationReached_859E251740F1C46B914344A9FC343B19 (Has no native function)
	void OnTimedOutAndDestinationReached859E251740F1C46B914344A9FC343B19(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnTimedOut_859E251740F1C46B914344A9FC343B19 (Has no native function)
	void OnTimedOut859E251740F1C46B914344A9FC343B19(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnTimedOutAndDestinationReached_8010F4C64221E8F497C6559558420C32 (Has no native function)
	void OnTimedOutAndDestinationReached8010F4C64221E8F497C6559558420C32(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnTimedOut_8010F4C64221E8F497C6559558420C32 (Has no native function)
	void OnTimedOut8010F4C64221E8F497C6559558420C32(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_F049BFC743FE176042ECD98641AFE2B9 (Has no native function)
	void AddedF049BFC743FE176042ECD98641AFE2B9(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_35C56E354FE08855A837E0BDFB150F20 (Has no native function)
	void Added35C56E354FE08855A837E0BDFB150F20(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_CD24BC554E955808A88A5B809807A94E (Has no native function)
	void AddedCD24BC554E955808A88A5B809807A94E(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_E60D990647FDAB06895E738C7A2BAE7E (Has no native function)
	void AddedE60D990647FDAB06895E738C7A2BAE7E(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_D329D9924DF9DF1B79D0738C6CB8EBA1 (Has no native function)
	void AddedD329D9924DF9DF1B79D0738C6CB8EBA1(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_1D4A49874AC422976CAC2C9155DDA736 (Has no native function)
	void Added1D4A49874AC422976CAC2C9155DDA736(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.EventReceived_8C4C6D7442A0B18F41B269995833ED85 (Has no native function)
	void EventReceived8C4C6D7442A0B18F41B269995833ED85(struct FGameplayEventData& Payload); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_D54881A34BC79E85BE563BA220DD924D (Has no native function)
	void AddedD54881A34BC79E85BE563BA220DD924D(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_EAA3FC0B4E27CDA8B4F3289DF7EA9E90 (Has no native function)
	void AddedEAA3FC0B4E27CDA8B4F3289DF7EA9E90(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnFinished_35C1D63345930DB9A5BDB7BED8B808BF (Has no native function)
	void OnFinished35C1D63345930DB9A5BDB7BED8B808BF(bool& DestinationReached, bool& TimedOut, struct FVector& FinalTargetLocation); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.K2_ActivateAbilityFromEvent (Has no native function)
	void K2ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.RustleLoop (Has no native function)
	void RustleLoop(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.End (Has no native function)
	void End(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.WobbleHidingProp (Has no native function)
	void WobbleHidingProp(double& NormalizedMagnitude); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Event_LockOnProp (Has no native function)
	void EventLockOnProp(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.ExecuteUbergraph_GA_Athena_HidingProp_Hide (Has no native function)
	void ExecuteUbergraphGAAthenaHidingPropHide(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class UAbilityTask_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, bool& CallFuncIsValidReturnValue, struct FGameplayEventData& K2NodeCustomEventPayload, struct FGameplayEventData& TempstructVariable, class UAbilityTask_WaitGameplayEvent*& CallFuncWaitGameplayEventReturnValue, bool& CallFuncIsValidReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, class UAbilityTask_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, bool& CallFuncIsValidReturnValue2, bool& TempboolVariable, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, struct FTimerHandle*& CallFuncK2SetTimerForNextTickDelegateReturnValue, struct FTimerHandle*& CallFuncK2SetTimerForNextTickDelegateReturnValue1, bool& K2NodeCustomEventDestinationReached, bool& K2NodeCustomEventTimedOut, struct FVector& K2NodeCustomEventFinalTargetLocation, struct FVector& TempstructVariable1, bool& TempboolVariable1, bool& TempboolVariable2, struct FGameplayAbilityTargetDataHandle& TempstructVariable2, struct FGameplayTag& TempstructVariable3, struct FGameplayEventData& K2NodeEventEventData, class UAbilityTask_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddReturnValue2, bool& CallFuncEqualEqualDoubleDoubleReturnValue, class AB_HidingProp_C*& K2NodeDynamicCastAsBHidingProp, bool& K2NodeDynamicCastbSuccess, class AB_HidingProp_C*& K2NodeDynamicCastAsBHidingProp1, bool& K2NodeDynamicCastbSuccess1, class AB_HidingProp_C*& K2NodeDynamicCastAsBHidingProp2, bool& K2NodeDynamicCastbSuccess2, bool& GameplayTagsK2NodeSwitchGameplayTagCmpSuccess, bool& CallFuncIsValidReturnValue3, struct FRotator& CallFuncK2GetActorRotationReturnValue, struct FRotator& CallFuncGetControlRotationReturnValue, struct FVector& CallFuncGetForwardVectorReturnValue, struct FVector& CallFuncGetForwardVectorReturnValue1, bool& K2NodeEventbWasCancelled, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, struct FVector& CallFuncMakeVectorReturnValue, double& CallFuncVSizeReturnValue, struct FVector& CallFuncNormalReturnValue, bool& CallFuncLessEqualDoubleDoubleReturnValue, struct FVector& CallFuncSelectVectorReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, float& CallFuncPlayAnimMontageReturnValue, float& CallFuncGetPlayLengthReturnValue, double& CallFuncAddDoubleDoubleReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess3, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, class UAbilityTask_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddReturnValue3, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData, struct FGameplayTag& K2NodeCustomEventApplicationTag, bool& CallFuncIsValidReturnValue4, struct FVector& CallFuncGetActorForwardVectorReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue1, float& CallFuncGetValueAtLevelReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue1, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate7, bool& CallFuncIsValidReturnValue5, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncGetOwnedGameplayTagsselfCastInput, struct FGameplayTagContainer& CallFuncGetOwnedGameplayTagsTagContainer, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncGetOwnedGameplayTagsselfCastInput1, struct FGameplayTagContainer& CallFuncGetOwnedGameplayTagsTagContainer1, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue, class UFortQuestManager*& CallFuncGetQuestManagerReturnValue, float& CallFuncGetValueAtLevelReturnValue1, float& CallFuncGetValueAtLevelReturnValue2, double& CallFuncRandomFloatInRangeReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate8, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, bool& TempboolHasBeenInitdVariable, struct FDelegate& K2NodeCreateDelegateOutputDelegate9, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue1, bool& CallFuncIsServerReturnValue, class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess4, class UAnimMontage*& CallFuncGetCurrentMontageReturnValue, class UAbilityTask_ApplyRootMotionMoveToActorForce*& CallFuncApplyRootMotionMoveToActorForceReturnValue, struct FVector& CallFuncK2GetComponentLocationReturnValue, struct FVector& CallFuncSelectVectorReturnValue1, bool& CallFuncIsValidReturnValue6, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue2, struct FVector& CallFuncK2GetComponentLocationReturnValue1, class UAbilityTask_ApplyRootMotionMoveToForce*& CallFuncApplyRootMotionMoveToForceReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue, bool& CallFuncIsValidReturnValue7, struct FVector& CallFuncGetForwardVectorReturnValue2, class UAbilityTask_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddReturnValue4, struct FVector& CallFuncMultiplyVectorFloatReturnValue1, bool& CallFuncIsValidReturnValue8, class UFortHeldObjectComponent*& CallFuncGetHeldObjectComponentAttachedToPlayerReturnValue, bool& CallFuncIsPassengerInVehicleReturnValue, bool& CallFuncIsInVehicleReturnValue, struct TArray<struct FGameplayTag>& K2NodeMakeArrayArray, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue1, struct FGameplayTagContainer& CallFuncMakeGameplayTagContainerFromArrayReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAnyMatchingGameplayTagsselfCastInput, bool& CallFuncHasAnyMatchingGameplayTagsReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue2, bool& CallFuncBooleanORReturnValue, bool& CallFuncBooleanORReturnValue1, bool& CallFuncBooleanORReturnValue2, struct FGameplayEventData& K2NodeMakeStructGameplayEventData, bool& CallFuncIsServerReturnValue1, class UFortAbilityTask_PlayMontageWaitTarget*& CallFuncPlayMontageWaitTargetReturnValue, float& CallFuncPlayAnimMontageReturnValue1, bool& CallFuncIsValidReturnValue9, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData1, struct FGameplayTag& K2NodeCustomEventApplicationTag1, bool& CallFuncIsValidReturnValue10, bool& CallFuncIsValidReturnValue11, float& CallFuncPlayAnimMontageReturnValue2, double& CallFuncSelectFloatReturnValue, struct FVector& CallFuncGetForwardVectorReturnValue3, struct FVector& CallFuncK2GetActorLocationReturnValue2, struct FVector& CallFuncMultiplyVectorFloatReturnValue2, struct FVector& CallFuncAddVectorVectorReturnValue, bool& TempboolIsClosedVariable, class UAbilityTask_ApplyRootMotionMoveToForce*& CallFuncApplyRootMotionMoveToForceReturnValue1, bool& CallFuncIsValidReturnValue12, struct FDelegate& K2NodeCreateDelegateOutputDelegate10, struct FDelegate& K2NodeCreateDelegateOutputDelegate11, struct FGameplayEventData& K2NodeMakeStructGameplayEventData1, class UAbilityTask_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddReturnValue5, bool& CallFuncIsServerReturnValue2, bool& CallFuncIsValidReturnValue13, struct FDelegate& K2NodeCreateDelegateOutputDelegate12, int& TempintVariable, int& CallFuncAddIntIntReturnValue, struct FGameplayEventData& K2NodeMakeStructGameplayEventData2, double& CallFuncSelectFloatReturnValue1, struct FVector& CallFuncAddVectorVectorReturnValue1, struct FVector& CallFuncAddVectorVectorReturnValue2, struct FVector& CallFuncSelectVectorReturnValue2, struct FVector& CallFuncMultiplyVectorFloatReturnValue3, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData2, struct FGameplayTag& K2NodeCustomEventApplicationTag2, bool& CallFuncHasTagReturnValue, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncNotPreBoolReturnValue1, bool& CallFuncBooleanORReturnValue3, class UAbilityTask_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddReturnValue6, bool& CallFuncIsValidReturnValue14, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue3, struct FDelegate& K2NodeCreateDelegateOutputDelegate13, bool& CallFuncIsValidReturnValue15, bool& TempboolHasBeenInitdVariable1, struct FDelegate& K2NodeCreateDelegateOutputDelegate14, bool& CallFuncIsValidReturnValue16, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue4, bool& TempboolIsClosedVariable1, struct FDelegate& K2NodeCreateDelegateOutputDelegate15, enum EFortGetPlayerPawnExecutions& CallFuncGetAvatarAsValidFortPlayerPawnOutExec, class AFortPlayerPawn*& CallFuncGetAvatarAsValidFortPlayerPawnOutFortPlayerPawn, bool& K2NodeSwitchEnumCmpSuccess, class UAbilityTask_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddReturnValue7, bool& CallFuncIsValidReturnValue17, struct FGameplayEventData& K2NodeMakeStructGameplayEventData3, struct FDelegate& K2NodeCreateDelegateOutputDelegate16, struct FRotator& CallFuncK2GetComponentRotationReturnValue, struct FRotator& CallFuncComposeRotatorsReturnValue, bool& CallFuncK2SetActorRotationReturnValue, float& CallFuncGetValueAtLevelReturnValue3, float& CallFuncGetValueAtLevelReturnValue4, int& CallFuncFTruncReturnValue, bool& CallFuncGreaterEqualIntIntReturnValue, bool& CallFuncLessIntIntReturnValue, struct FRotator& CallFuncRandomRotatorReturnValue, struct FVector& CallFuncConvRotatorToVectorReturnValue, double& K2NodeCustomEventNormalizedMagnitude, struct FVector& CallFuncGetForwardVectorReturnValue4, struct FVector& CallFuncMultiplyVectorFloatReturnValue4, struct FVector& K2NodeSelectDefault, float& CallFuncGetValueAtLevelReturnValue5, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue3, float& CallFuncGetValueAtLevelReturnValue6, float& CallFuncGetValueAtLevelReturnValue7, bool& TempboolWhetherthegateiscurrentlyopenorcloseVariable, float& CallFuncPlayAnimMontageReturnValue3, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue5, bool& CallFuncCanActorSimulatePhysicsReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate17, struct FDelegate& K2NodeCreateDelegateOutputDelegate18, bool& CallFuncCanActorSimulatePhysicsReturnValue1, struct FRotator& CallFuncComposeRotatorsReturnValue1, struct FVector& CallFuncAddVectorVectorReturnValue3, struct FVector& CallFuncAddVectorVectorReturnValue4, struct FHitResult& CallFuncK2SetActorLocationAndRotationSweepHitResult, bool& CallFuncK2SetActorLocationAndRotationReturnValue, struct FHitResult& CallFuncK2SetActorLocationSweepHitResult, bool& CallFuncK2SetActorLocationReturnValue, struct FVector& CallFuncK2GetComponentLocationReturnValue2, struct FRotator& CallFuncK2GetComponentRotationReturnValue1, struct FHitResult& CallFuncK2SetActorLocationSweepHitResult1, bool& CallFuncK2SetActorLocationReturnValue1, struct FVector& CallFuncK2GetComponentLocationReturnValue3, bool& CallFuncIsServerReturnValue3, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue2, bool& CallFuncIsValidReturnValue18, bool& CallFuncIsServerReturnValue4, double& CallFuncEqualEqualDoubleDoubleAImplicitCast, double& CallFuncMultiplyVectorFloatBImplicitCast, double& CallFuncSubtractDoubleDoubleAImplicitCast, double& CallFuncAddDoubleDoubleAImplicitCast, float& CallFuncAddIgnoredActorInIgnoreDurationImplicitCast, float& CallFuncApplyRootMotionMoveToActorForceDurationImplicitCast, float& CallFuncApplyRootMotionMoveToForceDurationImplicitCast, double& CallFuncRandomFloatInRangeMinImplicitCast, double& CallFuncRandomFloatInRangeMaxImplicitCast, float& CallFuncDelayDurationImplicitCast, double& CallFuncFTruncAImplicitCast, double& CallFuncWobbleHidingPropNormalizedMagnitudeImplicitCast, float& CallFuncMakeGameplayCueParametersNormalizedMagnitudeImplicitCast, double& CallFuncWobbleHidingPropNormalizedMagnitudeImplicitCast1, double& CallFuncWobbleHidingPropNormalizedMagnitudeImplicitCast2, double& CallFuncWobbleHidingPropNormalizedMagnitudeImplicitCast3); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.NewEventDispatcher_0__DelegateSignature (Has no native function)
	void NewEventDispatcher0DelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

