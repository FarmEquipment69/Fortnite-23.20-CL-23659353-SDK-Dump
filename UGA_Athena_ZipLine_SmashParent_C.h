// BlueprintGeneratedClass /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C
// Size: 0xbe8
class UGA_Athena_ZipLine_SmashParent_C : public UFortGameplayAbility_ZiplineSmashBase
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb38 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0xb40 (0x8)
	double UpdateIntervalForSmashVolume; // 0xb48 (0x8)
	class UClass* StructureDamageGE; // 0xb50 (0x8)
	class ABP_ZipLine_Athena_Harness_C* ZiplineHarness; // 0xb58 (0x8)
	class AFortAthenaZipline* Zipline; // 0xb60 (0x8)
	class UPrimitiveComponent* ZiplineInteractComponent; // 0xb68 (0x8)
	struct TEnumAsByte<EFortCustomMovement> DrivingCustomMovementMode; // 0xb70 (0x1)
	unsigned char unreflected_b71[0x3]; // 0xb71 (0x3) 
	struct FActiveGameplayEffectHandle* FallImmunityGEFX; // 0xb74 (0x8)
	struct FGameplayTag AttachVFXCue; // 0xb7c (0x4)
	struct FGameplayTag SmashCue; // 0xb80 (0x4)
	struct FGameplayTag TSwimming; // 0xb84 (0x4)
	struct FGameplayTag TFalling; // 0xb88 (0x4)
	unsigned char unreflected_b8c[0x4]; // 0xb8c (0x4) 
	struct FGameplayTagContainer TagsThatBlockFallImmunityRemoval; // 0xb90 (0x20)
	struct FTimerHandle* THDelayFallDamageRemoval; // 0xbb0 (0x8)
	struct FTimerHandle* SurroundingsCheckTimerHandle; // 0xbb8 (0x8)
	struct FGameplayTag ZiplineExitTag; // 0xbc0 (0x4)
	unsigned char unreflected_bc4[0x4]; // 0xbc4 (0x4) 
	struct FVector SmashBoxExtent; // 0xbc8 (0x18)
	double SmashBoxPosAdditionalZ; // 0xbe0 (0x8)

	/* Functions */

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Get Zipline Motor Offset (Has no native function)
	void GetZiplineMotorOffset(struct FVector& Offset, class ABP_Athena_Environmental_ZipLine_Spline_C*& K2NodeDynamicCastAsBPAthenaEnvironmentalZipLineSpline, bool& K2NodeDynamicCastbSuccess); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.GetZiplineRotationForMotor (Has no native function)
	void GetZiplineRotationForMotor(struct FRotator& Rotation, struct FRotator& CallFuncK2GetActorRotationReturnValue, class ABP_Athena_Environmental_ZipLine_Spline_C*& K2NodeDynamicCastAsBPAthenaEnvironmentalZipLineSpline, bool& K2NodeDynamicCastbSuccess, struct FVector& CallFuncSubtractVectorVectorReturnValue, struct FRotator& CallFuncMakeRotFromZReturnValue, float& CallFuncBreakRotatorRoll, float& CallFuncBreakRotatorPitch, float& CallFuncBreakRotatorYaw, double& CallFuncAddDoubleDoubleReturnValue, struct FRotator& CallFuncMakeRotatorReturnValue, double& CallFuncAddDoubleDoubleAImplicitCast, float& CallFuncMakeRotatorRollImplicitCast); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Get Zipline Pole A Socket Loc (Has no native function)
	void GetZiplinePoleASocketLoc(struct FVector& PoleBSocketLoc, struct FVector& CallFuncK2GetActorLocationReturnValue, class ABP_Athena_Environmental_ZipLine_Spline_C*& K2NodeDynamicCastAsBPAthenaEnvironmentalZipLineSpline, bool& K2NodeDynamicCastbSuccess); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Get Zipline Pole B Socket Loc (Has no native function)
	void GetZiplinePoleBSocketLoc(struct FVector& PoleBSocketLoc, struct FVector& CallFuncK2GetActorLocationReturnValue, class ABP_Athena_Environmental_ZipLine_Spline_C*& K2NodeDynamicCastAsBPAthenaEnvironmentalZipLineSpline, bool& K2NodeDynamicCastbSuccess); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.CheckForQuestProgress (Has no native function)
	void CheckForQuestProgress(struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncGetOwnedGameplayTagsselfCastInput, struct FGameplayTagContainer& CallFuncGetOwnedGameplayTagsTagContainer, class AController*& CallFuncGetControllerReturnValue, bool& CallFuncHasAuthorityReturnValue, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController, bool& K2NodeDynamicCastbSuccess, class UFortQuestManager*& CallFuncGetQuestManagerReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.CheckMotor (Has no native function)
	void CheckMotor(bool& HasHarness, bool& TempboolTrueifbreakwashitVariable, int& TempintArrayIndexVariable, bool& CallFuncNotPreBoolReturnValue, struct TArray<class AActor*>& CallFuncGetAttachedActorsOutActors, int& TempintLoopCounterVariable, class AActor*& CallFuncArrayGetItem, class ABP_ZipLine_Athena_Harness_C*& K2NodeDynamicCastAsBPZipLineAthenaHarness, bool& K2NodeDynamicCastbSuccess, int& CallFuncAddIntIntReturnValue, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, bool& CallFuncBooleanANDReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Spawn Motor (Has no native function)
	void SpawnMotor(class AActor*& PlayerPawn, bool& CallFuncHasAuthorityReturnValue, struct FVector& CallFuncGetZiplineMotorOffsetOffset, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FVector& CallFuncK2GetActorLocationReturnValue, struct FTransform& CallFuncMakeTransformReturnValue, class AActor*& CallFuncBeginDeferredActorSpawnFromClassReturnValue, class ABP_ZipLine_Athena_Harness_Yellow_C*& CallFuncFinishSpawningActorReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.BreakNearbyStructures (Has no native function)
	void BreakNearbyStructures(class AFortPlayerPawn*& PlayerPawn, struct TArray<class AActor*>& K2NodeMakeArrayArray, struct FVector& CallFuncK2GetActorLocationReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& K2NodeMakeArrayArray1, double& CallFuncAddDoubleDoubleReturnValue, struct FVector& CallFuncMakeVectorReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Added_5A9C02A9480D39B213A8AC81767C7A76 (Has no native function)
	void Added5A9C02A9480D39B213A8AC81767C7A76(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Removed_A0F18316443E5C5267615C9692274B36 (Has no native function)
	void RemovedA0F18316443E5C5267615C9692274B36(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.SurroundingsCheck (Has no native function)
	void SurroundingsCheck(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.K2_ActivateAbilityFromEvent (Has no native function)
	void K2ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.OnPawnLanded_Bind (Has no native function)
	void OnPawnLandedBind(struct FHitResult& Hit); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.HandleZiplineStateChanged (Has no native function)
	void HandleZiplineStateChanged(bool& bIsZiplining, class AFortPlayerPawn*& Pawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.RemoveFallDamageImmunity (Has no native function)
	void RemoveFallDamageImmunity(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.OnEnterVehicle_Bind (Has no native function)
	void OnEnterVehicleBind(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.ZipliningComplete (Has no native function)
	void ZipliningComplete(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.OnEnteredAircraft_Bind (Has no native function)
	void OnEnteredAircraftBind(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.OnBeginSkydiving_Bind (Has no native function)
	void OnBeginSkydivingBind(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.DelaySpawnMotor (Has no native function)
	void DelaySpawnMotor(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.BindEvent (Has no native function)
	void BindEvent(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.SwimmingStarted (Has no native function)
	void SwimmingStarted(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.EnterWaterExit (Has no native function)
	void EnterWaterExit(class AFortPlayerPawn*& FortPlayerPawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.HandleClientSplineZiplineStateChanged (Has no native function)
	void HandleClientSplineZiplineStateChanged(bool& bIsZiplining, class AFortPlayerPawn*& Pawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.SplineZiplineMovementModeDelayOver (Has no native function)
	void SplineZiplineMovementModeDelayOver(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Remove Fall Damage Immunity Delayed (Has no native function)
	void RemoveFallDamageImmunityDelayed(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.EndAsyncBreakNearbyStructuresOverlap (Has no native function)
	void EndAsyncBreakNearbyStructuresOverlap(struct TArray<class AActor*>& OverlapActors); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.SurroundingsCheck_SmashObjects (Has no native function)
	void SurroundingsCheckSmashObjects(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.SurroundingsCheck_MotorCheck (Has no native function)
	void SurroundingsCheckMotorCheck(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.SurruondingsCheck_VehicleCheck (Has no native function)
	void SurruondingsCheckVehicleCheck(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.StartSurroundingsCheck (Has no native function)
	void StartSurroundingsCheck(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.OnPawnDied (Has no native function)
	void OnPawnDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.GameplayTagEvent_ZiplineEnter (Has no native function)
	void GameplayTagEventZiplineEnter(struct FGameplayEventData& EventData); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.GameplayTagEvent_ZiplineExit (Has no native function)
	void GameplayTagEventZiplineExit(struct FGameplayEventData& EventData); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.GameplayEvent_ZiplineEnter_BeginZiplining (Has no native function)
	void GameplayEventZiplineEnterBeginZiplining(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.FallingTagRemoved (Has no native function)
	void FallingTagRemoved(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Pre_BeginZiplinging (Has no native function)
	void PreBeginZiplinging(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Post_BeginZiplining (Has no native function)
	void PostBeginZiplining(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.HandleGameplayEventTag (Has no native function)
	void HandleGameplayEventTag(struct FGameplayEventData& EventData); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.ExecuteUbergraph_GA_Athena_ZipLine_SmashParent (Has no native function)
	void ExecuteUbergraphGAAthenaZipLineSmashParent(int& EntryPoint, bool& CallFuncIsValidReturnValue, struct TScriptInterface<class IFortVehicleInterface>& CallFuncGetVehicleUInterfaceReturnValue, bool& CallFuncIsValidReturnValue1, class UObject*& CallFuncConvInterfaceToObjectReturnValue, bool& CallFuncIsValidReturnValue2, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FHitResult& K2NodeCustomEventHit, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToTargetReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToTargetReturnValue1, bool& K2NodeCustomEventbIsZiplining1, class AFortPlayerPawn*& K2NodeCustomEventPawn1, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, class AController*& CallFuncGetControllerReturnValue, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController, bool& K2NodeDynamicCastbSuccess1, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, bool& CallFuncIsValidReturnValue3, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, struct FDelegate& K2NodeCreateDelegateOutputDelegate7, struct FGameplayEventData& K2NodeEventEventData, struct FDelegate& K2NodeCreateDelegateOutputDelegate8, class UPawnMovementComponent*& CallFuncGetMovementComponentReturnValue, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, class UCharacterMovementComponent*& K2NodeDynamicCastAsCharacterMovementComponent, bool& K2NodeDynamicCastbSuccess2, int& TempintArrayIndexVariable, unsigned char& CallFuncGetValidValueReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncEqualEqualByteByteReturnValue1, bool& CallFuncBooleanORReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate9, struct FDelegate& K2NodeCreateDelegateOutputDelegate10, struct FDelegate& K2NodeCreateDelegateOutputDelegate11, struct FDelegate& K2NodeCreateDelegateOutputDelegate12, class UPawnMovementComponent*& CallFuncGetMovementComponentReturnValue1, class AController*& CallFuncGetControllerReturnValue1, class UCharacterMovementComponent*& K2NodeDynamicCastAsCharacterMovementComponent1, bool& K2NodeDynamicCastbSuccess3, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController1, bool& K2NodeDynamicCastbSuccess4, unsigned char& CallFuncGetValidValueReturnValue1, bool& CallFuncEqualEqualByteByteReturnValue2, bool& CallFuncEqualEqualByteByteReturnValue3, bool& CallFuncBooleanORReturnValue1, bool& CallFuncNotPreBoolReturnValue, class UAbilityTask_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddReturnValue, class AFortPlayerPawn*& K2NodeCustomEventFortPlayerPawn, bool& CallFuncIsValidReturnValue4, class UAbilityTask_WaitGameplayTagRemoved*& CallFuncWaitGameplayTagRemoveReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAnyMatchingGameplayTagsselfCastInput, bool& CallFuncHasAnyMatchingGameplayTagsReturnValue, bool& CallFuncIsValidReturnValue5, bool& K2NodeCustomEventbIsZiplining, class AFortPlayerPawn*& K2NodeCustomEventPawn, struct FDelegate& K2NodeCreateDelegateOutputDelegate13, struct FDelegate& K2NodeCreateDelegateOutputDelegate14, bool& K2NodeEventbWasCancelled, bool& CallFuncIsValidReturnValue6, bool& CallFuncK2IsValidTimerHandleReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate15, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue1, bool& CallFuncK2IsValidTimerHandleReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate16, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue2, bool& CallFuncIsValidReturnValue7, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, bool& CallFuncIsValidReturnValue8, struct TArray<class AActor*>& K2NodeEventOverlapActors, bool& CallFuncIsValidReturnValue9, class AActor*& CallFuncArrayGetItem, class ABuildingActor*& K2NodeDynamicCastAsBuildingActor, bool& K2NodeDynamicCastbSuccess5, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn1, bool& K2NodeDynamicCastbSuccess6, struct FGameplayAbilityTargetDataHandle& CallFuncAbilityTargetDataFromActorReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue, struct TArray<struct FActiveGameplayEffectHandle*>& CallFuncBPApplyGameplayEffectToTargetReturnValue2, bool& CallFuncNotPreBoolReturnValue1, class AFortAthenaSupplyDropBalloon*& K2NodeDynamicCastAsFortAthenaSupplyDropBalloon, bool& K2NodeDynamicCastbSuccess7, class UFortHeldObjectComponent*& CallFuncGetComponentByClassReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncIsValidReturnValue10, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate17, struct FDelegate& K2NodeCreateDelegateOutputDelegate18, class UFortAnimInputEvent*& CallFuncCreateAnimInputEventReturnValue, class UFortAnimInputEvent*& CallFuncCreateAnimInputEventReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate19, struct FGameplayEventData& K2NodeMakeStructGameplayEventData, struct FDelegate& K2NodeCreateDelegateOutputDelegate20, bool& CallFuncIsDedicatedServerReturnValue, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue3, struct FDelegate& K2NodeCreateDelegateOutputDelegate21, class AActor*& K2NodeCustomEventDamagedActor, float& K2NodeCustomEventDamage, class AController*& K2NodeCustomEventInstigatedBy, class AActor*& K2NodeCustomEventDamageCauser, struct FVector& K2NodeCustomEventHitLocation, class UPrimitiveComponent*& K2NodeCustomEventFHitComponent, struct FName& K2NodeCustomEventBoneName, struct FVector& K2NodeCustomEventMomentum, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue4, struct FGameplayEventData& K2NodeCustomEventEventData2, struct FGameplayEventData& K2NodeCustomEventEventData1, class UPrimitiveComponent*& K2NodeDynamicCastAsPrimitiveComponent, bool& K2NodeDynamicCastbSuccess8, class AFortAthenaZipline*& K2NodeDynamicCastAsFortAthenaZipline, bool& K2NodeDynamicCastbSuccess9, struct FDelegate& K2NodeCreateDelegateOutputDelegate22, struct FGameplayEventData& K2NodeCustomEventEventData, bool& GameplayTagsK2NodeSwitchGameplayTagCmpSuccess, float& CallFuncK2SetTimerDelegateTimeImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

