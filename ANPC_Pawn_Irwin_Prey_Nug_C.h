// BlueprintGeneratedClass /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C
// Size: 0x3d80
class ANPC_Pawn_Irwin_Prey_Nug_C : public ANPC_Pawn_Wildlife_Prey_Parent_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x3c08 (0x8)
	class UFortCharacterPartsComponent* FortCharacterParts; // 0x3c10 (0x8)
	class UFTP_NPC_Assignment_Loot_Herbivore_C* FTPNPCAssignmentLootHerbivore; // 0x3c18 (0x8)
	class UFortHeldObjectComponent* FortHeldObject; // 0x3c20 (0x8)
	bool bPawnPickedUp; // 0x3c28 (0x1)
	bool bPawnThrown; // 0x3c29 (0x1)
	unsigned char unreflected_3c2a[0x2]; // 0x3c2a (0x2) 
	struct FActiveGameplayEffectHandle* HGEPickedUpChicken; // 0x3c2c (0x8)
	struct FActiveGameplayEffectHandle* HGEPickedUpPlayer; // 0x3c34 (0x8)
	unsigned char unreflected_3c3c[0x4]; // 0x3c3c (0x4) 
	class UClass* GEApplyPickupAbilityChicken; // 0x3c40 (0x8)
	class UClass* GEApplyAbilitiesPlayer; // 0x3c48 (0x8)
	struct FGameplayTagContainer TCBlockPickup; // 0x3c50 (0x20)
	bool bIsPickupEnabled; // 0x3c70 (0x1)
	unsigned char unreflected_3c71[0x7]; // 0x3c71 (0x7) 
	double PickupEnableDelay; // 0x3c78 (0x8)
	double PostLandDelay; // 0x3c80 (0x8)
	struct FGameplayTagContainer InteractionPreventingTags; // 0x3c88 (0x20)
	class USoundBase* NugJumpLandSound; // 0x3ca8 (0x8)
	bool bHasJumped; // 0x3cb0 (0x1)
	unsigned char unreflected_3cb1[0x7]; // 0x3cb1 (0x7) 
	class USoundBase* NugFloatLandSound; // 0x3cb8 (0x8)
	class UClass* GERecentlyAttackedByPawn; // 0x3cc0 (0x8)
	class AFortPlayerPawn* FortPlayerPawnHoldingChicken; // 0x3cc8 (0x8)
	struct FGameplayTagContainer TCHeldBumpMeleeAbility; // 0x3cd0 (0x20)
	struct FScalableFloat ChickenTrackHeldBumpsHF; // 0x3cf0 (0x28)
	struct TSet<int> ThrownByPlayerIDs; // 0x3d18 (0x50)
	struct FTimerHandle* ThrownHandle; // 0x3d68 (0x8)
	class UAbilityAsync_WaitGameplayTagAdded* AsyncAction; // 0x3d70 (0x8)
	struct FTimerHandle* TryStopGuildeProjectileTimer; // 0x3d78 (0x8)

	/* Functions */

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.GetCurrentLocation (Has no native function)
	struct FVector GetCurrentLocation(); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.GetFortProjectileMovementComponent (Has no native function)
	class UFortProjectileMovementComponent* GetFortProjectileMovementComponent(); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.GetInstigatorPlayerController (Has no native function)
	class AFortPlayerController* GetInstigatorPlayerController(); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.IsProjectileBeingKilled (Has no native function)
	bool IsProjectileBeingKilled(); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetColorVariation (Has no native function)
	void SetColorVariation(bool& CallFuncGreaterDoubleDoubleReturnValue, class USkeletalMeshComponent*& CallFuncGetSkeletalMeshForPartTypeReturnValue, float& CallFuncSetCustomPrimitiveDataFloatValueImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SendThrownByPlayerEvents (Has no native function)
	void SendThrownByPlayerEvents(bool& bAlreadyThrown, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue, bool& CallFuncIsValidReturnValue, class UFortQuestManager*& CallFuncGetQuestManagerReturnValue, bool& CallFuncIsValidReturnValue1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.UpdateMovementComponents (Has no native function)
	void UpdateMovementComponents(struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue, class UFortAnimInputEvent_Bool*& CallFuncCreateAnimInputEventBoolReturnValue, class UFortAnimInputEvent_Bool*& CallFuncCreateAnimInputEventBoolReturnValue1, bool& CallFuncBooleanORReturnValue, bool& CallFuncBooleanORReturnValue1, bool& CallFuncNotPreBoolReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.UpdateCollision (Has no native function)
	void UpdateCollision(int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable1, int& TempintLoopCounterVariable1, int& CallFuncAddIntIntReturnValue1, struct TArray<class AActor*>& CallFuncGetAttachedActorsOutActors, class AActor*& CallFuncArrayGetItem, class AActor*& CallFuncArrayGetItem1, int& CallFuncArrayLengthReturnValue, int& CallFuncArrayLengthReturnValue1, bool& CallFuncLessIntIntReturnValue, bool& CallFuncLessIntIntReturnValue1, bool& CallFuncBooleanORReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetPawnMovementEnabled (Has no native function)
	void SetPawnMovementEnabled(bool& bEnabled, bool& TempboolVariable, struct TEnumAsByte<EMovementMode>& TempbyteVariable, struct TEnumAsByte<EMovementMode>& TempbyteVariable1, struct TEnumAsByte<EMovementMode>& K2NodeSelectDefault); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.BlueprintCanInteract (Has no native function)
	bool BlueprintCanInteract(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.Server Only Handle Player Controller OnUnPossess (Has no native function)
	void ServerOnlyHandlePlayerControllerOnUnPossess(class APawn*& PlayerPawn); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.BindPlayerControllerOnUnpossess (Has no native function)
	void BindPlayerControllerOnUnpossess(struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& CallFuncHasAuthorityReturnValue, class AFortPlayerPawn*& CallFuncGetInstigatorReturnValue, class AFortPlayerPawnAthena*& K2NodeDynamicCastAsFortPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnRep_bPawnThrown (Has no native function)
	void OnRepbPawnThrown(); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnRep_bPawnPickedUp (Has no native function)
	void OnRepbPawnPickedUp(); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.Added_F6ED737845BDF2DDD6FACA8494C8C372 (Has no native function)
	void AddedF6ED737845BDF2DDD6FACA8494C8C372(); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnHomingPassedTarget (Has no native function)
	void OnHomingPassedTarget(); // (Event | Public | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnReachedLockTargetDistanceThreshold (Has no native function)
	void OnReachedLockTargetDistanceThreshold(); // (Event | Public | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetAccelerationMagnitude (Has no native function)
	void SetAccelerationMagnitude(class AActor*& SelfActor, float& InAccelerationMagnitude); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetDesiredDirection (Has no native function)
	void SetDesiredDirection(class AActor*& SelfActor, struct FVector& Direction); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingData (Has no native function)
	void SetHomingData(class AActor*& SelfActor, struct FProjectileHomingData& NewHomingData); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingLaserTargetDistance (Has no native function)
	void SetHomingLaserTargetDistance(class AActor*& SelfActor, float& NewDistance); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingLockTargetDistanceThreshold (Has no native function)
	void SetHomingLockTargetDistanceThreshold(class AActor*& SelfActor, float& NewDistanceThreshold); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingStyle (Has no native function)
	void SetHomingStyle(class AActor*& SelfActor, enum EFortHomingStyle& NewHomingStyle, bool& ResetHomingTurnSpeedTimer); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingTarget (Has no native function)
	void SetHomingTarget(class AActor*& SelfActor, class AActor*& HomingTarget); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingTargetOffset (Has no native function)
	void SetHomingTargetOffset(class AActor*& SelfActor, struct FVector& NewHomingOffset); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingTargetPosition (Has no native function)
	void SetHomingTargetPosition(class AActor*& SelfActor, struct FVector& HomingTargetPosition); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingTimeUntilMaxTurnSpeed (Has no native function)
	void SetHomingTimeUntilMaxTurnSpeed(class AActor*& SelfActor, float& NewTimeUntilMax); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingTurnSpeedMax (Has no native function)
	void SetHomingTurnSpeedMax(class AActor*& SelfActor, float& NewTurnSpeedMin); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingTurnSpeedMin (Has no native function)
	void SetHomingTurnSpeedMin(class AActor*& SelfActor, float& NewTurnSpeedMin); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.On NPC PawnInteractedWith (Has no native function)
	void OnNPCPawnInteractedWith(class AActor*& AIPawn, class AFortPlayerPawn*& InteractingPlayerPawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.EnablePickUp (Has no native function)
	void EnablePickUp(); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.ResetChickenVars (Has no native function)
	void ResetChickenVars(); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.NPCNugUpdateStormHandling (Has no native function)
	void NPCNugUpdateStormHandling(); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.PlayThrowAudio (Has no native function)
	void PlayThrowAudio(); // (Net | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.PlayPickUpAudio (Has no native function)
	void PlayPickUpAudio(); // (Net | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_4_OnHeldObjectGuideProjectileStarted__DelegateSignature (Has no native function)
	void BndEvtFortHeldObjectK2NodeComponentBoundEvent4OnHeldObjectGuideProjectileStartedDelegateSignature(); // (BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectGuideProjectileStopped__DelegateSignature (Has no native function)
	void BndEvtFortHeldObjectK2NodeComponentBoundEvent5OnHeldObjectGuideProjectileStoppedDelegateSignature(); // (BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnNugLanded (Has no native function)
	void OnNugLanded(struct FHitResult& Hit); // (Net | NetReliable | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.NugLanded (Has no native function)
	void NugLanded(struct FHitResult& Hit); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnDamageServer (Has no native function)
	void OnDamageServer(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.AssignPlayerBumpEvent (Has no native function)
	void AssignPlayerBumpEvent(); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.UnassignPlayerBumpEvent (Has no native function)
	void UnassignPlayerBumpEvent(); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnActorHit_Event (Has no native function)
	void OnActorHitEvent(class AActor*& SelfActor, class AActor*& OtherActor, struct FVector& NormalImpulse, struct FHitResult& Hit); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnDied_Event (Has no native function)
	void OnDiedEvent(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnEndPlay_Event (Has no native function)
	void OnEndPlayEvent(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnActorBeginOverlap_Event (Has no native function)
	void OnActorBeginOverlapEvent(class AActor*& OverlappedActor, class AActor*& OtherActor); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.BndEvt__NPC_Pawn_Irwin_Prey_Nug_FortHeldObject_K2Node_ComponentBoundEvent_0_OnHeldObjectThrown__DelegateSignature (Has no native function)
	void BndEvtNPCPawnIrwinPreyNugFortHeldObjectK2NodeComponentBoundEvent0OnHeldObjectThrownDelegateSignature(); // (BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.On Nug Died Event (Has no native function)
	void OnNugDiedEvent(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.AttemptTriggerAbilityAfterPlayerBumpEvent (Has no native function)
	void AttemptTriggerAbilityAfterPlayerBumpEvent(); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnCustomizationsLoaded_BP (Has no native function)
	void OnCustomizationsLoadedBP(); // (Event | Protected | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.ClearPlayer (Has no native function)
	void ClearPlayer(); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.ForceLanding (Has no native function)
	void ForceLanding(); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.TestIfInWindSpline (Has no native function)
	void TestIfInWindSpline(); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.TryStopGuideProjectile (Has no native function)
	void TryStopGuideProjectile(); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Pawns/NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Nug (Has no native function)
	void ExecuteUbergraphNPCPawnIrwinPreyNug(int& EntryPoint, bool& CallFuncIsValidReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& CallFuncHasAuthorityReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, class AActor*& K2NodeEventSelfActor11, float& K2NodeEventInAccelerationMagnitude, class AActor*& K2NodeEventSelfActor10, struct FVector& K2NodeEventDirection, class AActor*& K2NodeEventSelfActor9, struct FProjectileHomingData& K2NodeEventNewHomingData, class AActor*& K2NodeEventSelfActor8, float& K2NodeEventNewDistance, class AActor*& K2NodeEventSelfActor7, float& K2NodeEventNewDistanceThreshold, class AActor*& K2NodeEventSelfActor6, enum EFortHomingStyle& K2NodeEventNewHomingStyle, bool& K2NodeEventResetHomingTurnSpeedTimer, class AActor*& K2NodeEventSelfActor5, class AActor*& K2NodeEventHomingTarget, class AActor*& K2NodeEventSelfActor4, struct FVector& K2NodeEventNewHomingOffset, class AActor*& K2NodeEventSelfActor3, struct FVector& K2NodeEventHomingTargetPosition, class AActor*& K2NodeEventSelfActor2, float& K2NodeEventNewTimeUntilMax, class AActor*& K2NodeEventSelfActor1, float& K2NodeEventNewTurnSpeedMin1, class AActor*& K2NodeEventSelfActor, float& K2NodeEventNewTurnSpeedMin, class AActor*& K2NodeEventAIPawn, class AFortPlayerPawn*& K2NodeEventInteractingPlayerPawn, bool& CallFuncIsServerReturnValue, bool& CallFuncIsServerReturnValue1, bool& CallFuncRemoveActiveGameplayEffectReturnValue, struct FGameplayEffectContextHandle& K2NodeMakeStructGameplayEffectContextHandle, bool& CallFuncIsValidReturnValue1, bool& CallFuncHasAuthorityReturnValue1, struct FHitResult& K2NodeCustomEventHit2, struct FVector& CallFuncK2GetActorLocationReturnValue, struct FHitResult& K2NodeCustomEventHit1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, float& K2NodeEventDamage, struct FGameplayTagContainer& K2NodeEventDamageTags, struct FVector& K2NodeEventMomentum, struct FHitResult& K2NodeEventHitInfo, class AController*& K2NodeEventInstigatedBy, class AActor*& K2NodeEventDamageCauser, struct FGameplayEffectContextHandle& K2NodeEventEffectContext, class APawn*& CallFuncK2GetPawnReturnValue, bool& CallFuncIsValidReturnValue2, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue, bool& CallFuncIsValidReturnValue3, bool& CallFuncIsValidClassReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, class AActor*& K2NodeCustomEventSelfActor, class AActor*& K2NodeCustomEventOtherActor1, struct FVector& K2NodeCustomEventNormalImpulse, struct FHitResult& K2NodeCustomEventHit, bool& CallFuncIsValidReturnValue4, struct FVector& CallFuncGetActorForwardVectorReturnValue, struct FRotator& CallFuncConvVectorToRotatorReturnValue, class AActor*& K2NodeCustomEventDamagedActor1, float& K2NodeCustomEventDamage1, class AController*& K2NodeCustomEventInstigatedBy1, class AActor*& K2NodeCustomEventDamageCauser1, struct FVector& K2NodeCustomEventHitLocation1, class UPrimitiveComponent*& K2NodeCustomEventFHitComponent1, struct FName& K2NodeCustomEventBoneName1, struct FVector& K2NodeCustomEventMomentum1, class AActor*& K2NodeCustomEventActor, struct TEnumAsByte<EEndPlayReason>& K2NodeCustomEventEndPlayReason, bool& TempboolOptionBIffalseuseOptionAVariable, bool& CallFuncIsValidReturnValue5, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, struct FGameplayTagContainer& CallFuncMakeLiteralGameplayTagContainerReturnValue, bool& CallFuncTryActivateAbilitiesByTagReturnValue, bool& CallFuncCanActivateAbilityWithMatchingTagReturnValue, bool& CallFuncHasActiveAbilityWithAnyMatchingTagReturnValue, bool& CallFuncGetValueAsBoolReturnValue, bool& CallFuncIsValidReturnValue6, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToTargetReturnValue, bool& CallFuncIsDedicatedServerReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToTargetReturnValue1, class AActor*& K2NodeCustomEventOverlappedActor, class AActor*& K2NodeCustomEventOtherActor, bool& CallFuncIsValidReturnValue7, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, class AActor*& K2NodeCustomEventDamagedActor, float& K2NodeCustomEventDamage, class AController*& K2NodeCustomEventInstigatedBy, class AActor*& K2NodeCustomEventDamageCauser, struct FVector& K2NodeCustomEventHitLocation, class UPrimitiveComponent*& K2NodeCustomEventFHitComponent, struct FName& K2NodeCustomEventBoneName, struct FVector& K2NodeCustomEventMomentum, bool& CallFuncSetContainsReturnValue, bool& TempboolVariable, class AActor*& K2NodeSelectDefault, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess, struct TEnumAsByte<EFortTeamAffiliation>& CallFuncGetTeamAffiliationReturnValue, struct TEnumAsByte<EFortTeamAffiliation>& CallFuncGetTeamAffiliationReturnValue1, bool& K2NodeSwitchEnumCmpSuccess, bool& K2NodeSwitchEnumCmpSuccess1, bool& CallFuncIsValidReturnValue8, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue1, bool& CallFuncIsValidReturnValue9, bool& CallFuncRemoveActiveGameplayEffectReturnValue1, bool& CallFuncK2IsValidTimerHandleReturnValue, bool& CallFuncK2IsValidTimerHandleReturnValue1, bool& CallFuncK2IsValidTimerHandleReturnValue2, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, bool& CallFuncIsValidReturnValue10, struct FVector& CallFuncK2GetActorLocationReturnValue1, struct FHitResult& CallFuncMakeHitResultReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate7, class UAbilityAsync_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddToActorReturnValue, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue1, bool& CallFuncIsValidReturnValue11, bool& CallFuncHasAuthorityReturnValue2, bool& CallFuncIsValidReturnValue12, bool& CallFuncIsValidReturnValue13, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue, bool& CallFuncIsValidReturnValue14, struct FDelegate& K2NodeCreateDelegateOutputDelegate8, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue2, bool& CallFuncK2IsValidTimerHandleReturnValue3, struct FDelegate& K2NodeCreateDelegateOutputDelegate9, bool& CallFuncK2IsValidTimerHandleReturnValue4, float& CallFuncK2SetTimerDelegateTimeImplicitCast, float& CallFuncDelayDurationImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

