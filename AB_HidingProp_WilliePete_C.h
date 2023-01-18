// BlueprintGeneratedClass /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/B_HidingProp_WilliePete.B_HidingProp_WilliePete_C
// Size: 0x15fa
class AB_HidingProp_WilliePete_C : public AB_HidingProp_C
{
	unsigned char unreflected_13c3[0x5]; // 0x13c3 (0x5) 
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x13c8 (0x8)
	class UStaticMeshComponent* overlapCylinder; // 0x13d0 (0x8)
	class UAudioComponent* WilliePeteAmbientLoop; // 0x13d8 (0x8)
	class UStaticMeshComponent* Geyser; // 0x13e0 (0x8)
	class UStaticMeshComponent* SWhirlpool01; // 0x13e8 (0x8)
	class UParticleSystemComponent* PWilliePeteSurfaceVerticalSplash; // 0x13f0 (0x8)
	class UFortProjectileMovementComponent* OverlappedFortProjectileMovementComponent; // 0x13f8 (0x8)
	class UProjectileMovementComponent* OverlappedStandardProjectileMovementComponent; // 0x1400 (0x8)
	class AActor* TeleportingNonPawn; // 0x1408 (0x8)
	struct FHitResult SphereOverlapResult; // 0x1410 (0xe0)
	double ProjectileSpeedCeiling; // 0x14f0 (0x8)
	struct FRotator ProjectileExitFVectorRotation; // 0x14f8 (0x18)
	int WaterLevel; // 0x1510 (0x4)
	struct FGameplayTag GCExit; // 0x1514 (0x4)
	struct FGameplayTag GCEnter; // 0x1518 (0x4)
	unsigned char unreflected_151c[0x4]; // 0x151c (0x4) 
	struct FScalableFloat EnabledValue; // 0x1520 (0x28)
	struct FScalableFloat LaunchHeightValue; // 0x1548 (0x28)
	class AFortPlayerPawnAthena* LaunchPawn; // 0x1570 (0x8)
	struct FActiveGameplayEffectHandle* LaunchGrantedEffectHandle; // 0x1578 (0x8)
	struct FGameplayTagContainer TQuest; // 0x1580 (0x20)
	class UClass* SpawnedWaterBody; // 0x15a0 (0x8)
	struct FGameplayTag GCScreenFX; // 0x15a8 (0x4)
	bool isOnTestMap; // 0x15ac (0x1)
	unsigned char unreflected_15ad[0x3]; // 0x15ad (0x3) 
	class USoundBase* LaunchSound; // 0x15b0 (0x8)
	struct FVector AdjustedLocation; // 0x15b8 (0x18)
	bool skipAnimForLaunch; // 0x15d0 (0x1)
	unsigned char unreflected_15d1[0x7]; // 0x15d1 (0x7) 
	class AFortPlayerPawnAthena* ExitingPawn; // 0x15d8 (0x8)
	class UMovementComponent* OverlappedMovementComponent; // 0x15e0 (0x8)
	double ProjectileSpeedMult; // 0x15e8 (0x8)
	double PickupSpeedMult; // 0x15f0 (0x8)
	bool bSetSilentDie; // 0x15f8 (0x1)
	bool bSetSpawnedWaterBody; // 0x15f9 (0x1)

	/* Functions */

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnRep_bSetSpawnedWaterBody (Has no native function)
	void OnRepbSetSpawnedWaterBody(bool& CallFuncHasAuthorityReturnValue); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnRep_bSetSilentDie (Has no native function)
	void OnRepbSetSilentDie(bool& CallFuncHasAuthorityReturnValue); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.HelperLocationLogger (Has no native function)
	void HelperLocationLogger(struct FString& InString, struct FVector& CallFuncK2GetActorLocationReturnValue, struct FString& CallFuncConcatStrStrReturnValue, struct FString& CallFuncConvVectorToStringReturnValue, struct FString& CallFuncConcatStrStrReturnValue1, struct FString& CallFuncConcatStrStrReturnValue2, struct FString& CallFuncConcatStrStrReturnValue3); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnRep_AdjustedLocation (Has no native function)
	void OnRepAdjustedLocation(class UWaterSubsystem*& CallFuncGetWorldSubsystemReturnValue, float& CallFuncGetOceanTotalHeightReturnValue, struct FString& CallFuncConvDoubleToStringReturnValue, float& CallFuncGetOceanFloodHeightReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, struct FString& CallFuncConvDoubleToStringReturnValue1, struct FString& CallFuncConcatStrStrReturnValue, struct FString& CallFuncConcatStrStrReturnValue1, struct FString& CallFuncConvVectorToStringReturnValue, struct FString& CallFuncConcatStrStrReturnValue2, struct FString& CallFuncConcatStrStrReturnValue3, struct FString& CallFuncConcatStrStrReturnValue4, struct FString& CallFuncConcatStrStrReturnValue5, struct FHitResult& CallFuncK2SetActorLocationSweepHitResult, bool& CallFuncK2SetActorLocationReturnValue, double& CallFuncConvDoubleToStringInDoubleImplicitCast, double& CallFuncDivideDoubleDoubleAImplicitCast); // (HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.TeleportExitSpeed (Has no native function)
	void TeleportExitSpeed(struct FVector& ExitFVector, double& EnterSpeed, double& OverrideSpeed, double& MinimumSpeed, bool& ForceSpeedOverride, struct FVector& TeleportExitVelocity, bool& TempboolVariable, bool& CallFuncLessDoubleDoubleReturnValue, bool& TempboolVariable1, double& K2NodeSelectDefault, double& K2NodeSelectDefault1, struct FVector& CallFuncMultiplyVectorFloatReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnReady_74044DD44988556292500EB8F289359F (Has no native function)
	void OnReady74044DD44988556292500EB8F289359F(class AFortGameStateAthena*& GameState, class UFortPlaylist*& Playlist, struct FGameplayTagContainer& PlaylistContextTags); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Non Pawn Actor Destroyed (Has no native function)
	void NonPawnActorDestroyed(class AActor*& DestroyedActor); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Non Pawn Teleport (Has no native function)
	void NonPawnTeleport(class AActor*& TeleportingActor); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Remove GE (Has no native function)
	void RemoveGE(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature (Has no native function)
	void BndEvtoverlapCylinderK2NodeComponentBoundEvent0ComponentBeginOverlapSignatureDelegateSignature(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Complete Setup (Has no native function)
	void CompleteSetup(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.StopHiding (Has no native function)
	void StopHiding(class AFortPawn*& Pawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.ResetGravity (Has no native function)
	void ResetGravity(struct FHitResult& Hit); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.ExecuteUbergraph_B_HidingProp_WilliePete (Has no native function)
	void ExecuteUbergraphBHidingPropWilliePete(int& EntryPoint, bool& CallFuncIsValidReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class AActor*& K2NodeCustomEventDestroyedActor, class AActor*& K2NodeCustomEventTeleportingActor, struct TScriptInterface<class IFortProjectileMovementInterface>& K2NodeDynamicCastAsFortProjectileMovementInterface, bool& K2NodeDynamicCastbSuccess, class UFortProjectileMovementComponent*& CallFuncGetFortProjectileMovementComponentReturnValue, class UMovementComponent*& CallFuncGetComponentByClassReturnValue, class UProjectileMovementComponent*& CallFuncGetComponentByClassReturnValue1, bool& CallFuncIsValidReturnValue1, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& CallFuncIsValidReturnValue2, bool& CallFuncHasAuthorityReturnValue, bool& CallFuncLessEqualDoubleDoubleReturnValue, bool& CallFuncBooleanANDReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, struct FHitResult& CallFuncK2SetWorldRotationSweepHitResult, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, float& CallFuncConvIntToFloatReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue1, double& CallFuncBreakVectorX1, double& CallFuncBreakVectorY1, double& CallFuncBreakVectorZ1, struct FVector& CallFuncGetForwardVectorReturnValue, double& CallFuncBreakVectorX2, double& CallFuncBreakVectorY2, double& CallFuncBreakVectorZ2, struct FVector& CallFuncGetForwardVectorReturnValue1, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, double& CallFuncBreakVectorX3, double& CallFuncBreakVectorY3, double& CallFuncBreakVectorZ3, bool& CallFuncIsValidReturnValue3, bool& CallFuncRowToBoolReturnValue, double& CallFuncRandomFloatInRangeReturnValue, struct FVector& CallFuncGetActorUpVectorReturnValue, bool& CallFuncHasAuthorityReturnValue1, float& CallFuncGetValueAtLevelReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue1, struct FActiveGameplayEffectHandle*& CallFuncBPFortApplyGameplayEffectToTargetReturnValue, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue2, bool& CallFuncRemoveActiveGameplayEffectReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue1, struct FTransform& CallFuncGetTransformReturnValue, struct FVector& CallFuncBreakTransformLocation, struct FRotator& CallFuncBreakTransformRotation, struct FVector& CallFuncBreakTransformScale, struct FVector& CallFuncK2GetActorLocationReturnValue2, struct FGameplayTagContainer& CallFuncGetOwnedGameplayTagsTagContainer, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue, class UFortQuestManager*& CallFuncGetQuestManagerReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue3, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue2, float& CallFuncGetValueAtLevelReturnValue1, double& CallFuncMultiplyDoubleDoubleReturnValue, struct FGameplayTagContainer& CallFuncGetOwnedGameplayTagsTagContainer1, bool& TempboolVariable, bool& CallFuncIsValidReturnValue4, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, bool& CallFuncIsValidReturnValue5, class UPrimitiveComponent*& K2NodeComponentBoundEventOverlappedComponent, class AActor*& K2NodeComponentBoundEventOtherActor, class UPrimitiveComponent*& K2NodeComponentBoundEventOtherComp, int& K2NodeComponentBoundEventOtherBodyIndex, bool& K2NodeComponentBoundEventbFromSweep, struct FHitResult& K2NodeComponentBoundEventSweepResult, struct TScriptInterface<class IGameplayTagAssetInterface>& K2NodeDynamicCastAsGameplayTagAssetInterface, bool& K2NodeDynamicCastbSuccess1, bool& CallFuncHasMatchingGameplayTagReturnValue, class AFortPlayerPawnAthena*& K2NodeDynamicCastAsFortPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess2, bool& CallFuncIsValidReturnValue6, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess3, bool& CallFuncIsInVehicleReturnValue, bool& CallFuncIsValidReturnValue7, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue1, bool& CallFuncIsTetheredReturnValue, class AFortAIPawn*& K2NodeDynamicCastAsFortAIPawn, bool& K2NodeDynamicCastbSuccess4, struct FVector& CallFuncGetActorForwardVectorReturnValue, bool& CallFuncIsValidReturnValue8, double& CallFuncBreakVectorX4, double& CallFuncBreakVectorY4, double& CallFuncBreakVectorZ4, double& CallFuncMultiplyDoubleDoubleReturnValue1, struct FVector& CallFuncMakeVectorReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue1, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue1, struct TScriptInterface<class IFortVehicleInterface>& K2NodeDynamicCastAsFortVehicleInterface, bool& K2NodeDynamicCastbSuccess5, class UFortQuestManager*& CallFuncGetQuestManagerReturnValue1, struct FVector& CallFuncGetVehicleForwardVectorReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue2, struct FVector& CallFuncGetVehicleVelocityReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, class AActor*& CallFuncGetVehicleActorPtrConstReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue1, bool& CallFuncHasAuthorityReturnValue2, class AGameStateBase*& CallFuncGetGameStateReturnValue, struct FTransform& CallFuncMakeTransformReturnValue, class AFortPawn*& K2NodeEventPawn, class AActor*& CallFuncBeginDeferredActorSpawnFromClassReturnValue, class AFortPlayerPawnAthena*& K2NodeDynamicCastAsFortPlayerPawnAthena1, bool& K2NodeDynamicCastbSuccess6, class AActor*& CallFuncFinishSpawningActorReturnValue, struct FGameplayEventData& K2NodeMakeStructGameplayEventData, bool& CallFuncEqualEqualObjectObjectReturnValue, bool& CallFuncBooleanORReturnValue, bool& CallFuncNotPreBoolReturnValue, class UFortAsyncAction_CurrentPlaylistReady*& CallFuncPlaylistDataReadyAsyncReturnValue, bool& CallFuncIsValidReturnValue9, class AFortGameStateAthena*& TempobjectVariable, class UFortPlaylist*& TempobjectVariable1, struct FGameplayTagContainer& TempstructVariable, bool& CallFuncIsValidReturnValue10, class AFortGameStateAthena*& K2NodeCustomEventGameState, class UFortPlaylist*& K2NodeCustomEventPlaylist, struct FGameplayTagContainer& K2NodeCustomEventPlaylistContextTags, class UFortProjectileMovementComponent*& TempobjectVariable2, bool& CallFuncGreaterDoubleDoubleReturnValue1, bool& CallFuncLessEqualDoubleDoubleReturnValue1, bool& CallFuncIsValidReturnValue11, bool& CallFuncBooleanANDReturnValue1, struct FVector& CallFuncGetForwardVectorReturnValue2, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FHitResult& K2NodeCustomEventHit, struct FVector& CallFuncMultiplyVectorFloatReturnValue3, double& CallFuncMultiplyDoubleDoubleReturnValue2, double& CallFuncRandomFloatInRangeReturnValue1, double& CallFuncRandomFloatInRangeReturnValue2, double& CallFuncMultiplyDoubleDoubleReturnValue3, double& CallFuncMultiplyDoubleDoubleReturnValue4, double& CallFuncRandomFloatInRangeReturnValue3, struct FVector& CallFuncMakeVectorReturnValue1, double& CallFuncMultiplyDoubleDoubleReturnValue5, struct FVector& CallFuncMultiplyVectorFloatReturnValue4, double& CallFuncRandomFloatInRangeReturnValue4, double& CallFuncMultiplyDoubleDoubleReturnValue6, double& CallFuncRandomFloatInRangeReturnValue5, class UWaterSubsystem*& CallFuncGetWorldSubsystemReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue7, float& CallFuncGetOceanTotalHeightReturnValue, struct FVector& CallFuncMakeVectorReturnValue2, struct FVector& CallFuncMakeVectorReturnValue3, struct FVector& CallFuncMultiplyVectorFloatReturnValue5, class UWaterSubsystem*& CallFuncGetWorldSubsystemReturnValue1, float& CallFuncGetOceanBaseHeightReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue, double& CallFuncDivideDoubleDoubleReturnValue1, bool& CallFuncGreaterEqualDoubleDoubleReturnValue, double& CallFuncGreaterDoubleDoubleAImplicitCast, double& CallFuncLessEqualDoubleDoubleAImplicitCast, double& CallFuncGreaterEqualDoubleDoubleAImplicitCast, float& CallFuncSetLifeSpanInLifespanImplicitCast, double& CallFuncMultiplyVectorFloatBImplicitCast, double& CallFuncDivideDoubleDoubleAImplicitCast, double& CallFuncMultiplyDoubleDoubleAImplicitCast, double& CallFuncGreaterDoubleDoubleAImplicitCast1, double& CallFuncLessEqualDoubleDoubleAImplicitCast1, double& CallFuncMakeVectorZImplicitCast, double& CallFuncSubtractDoubleDoubleBImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

