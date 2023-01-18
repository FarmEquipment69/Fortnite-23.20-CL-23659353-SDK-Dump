// BlueprintGeneratedClass /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C
// Size: 0x13c3
class AB_HidingProp_C : public AFortHidingProp
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xf40 (0x8)
	class USceneComponent* ProjectileLocationForwardVector; // 0xf48 (0x8)
	class UStaticMeshComponent* LandedOnCollisionMesh; // 0xf50 (0x8)
	class USphereComponent* Sphere; // 0xf58 (0x8)
	class USceneComponent* HideLocationForwardVector; // 0xf60 (0x8)
	float LootMovementTimelineForward0FC694AE4A45D691CB6BD5A8CD00E521; // 0xf68 (0x4)
	float LootMovementTimelineZ0FC694AE4A45D691CB6BD5A8CD00E521; // 0xf6c (0x4)
	struct TEnumAsByte<ETimelineDirection> LootMovementTimelineDirection0FC694AE4A45D691CB6BD5A8CD00E521; // 0xf70 (0x1)
	unsigned char unreflected_f71[0x7]; // 0xf71 (0x7) 
	class UTimelineComponent* LootMovementTimeline; // 0xf78 (0x8)
	struct FScalableFloat Enabled; // 0xf80 (0x28)
	struct FScalableFloat HidingEnabled; // 0xfa8 (0x28)
	struct FScalableFloat PlayerLimit; // 0xfd0 (0x28)
	struct FScalableFloat TeleportEnabled; // 0xff8 (0x28)
	struct FScalableFloat CanTeleport; // 0x1020 (0x28)
	struct TArray<class AFortPawn*> HidingPlayers; // 0x1048 (0x10)
	struct FGameplayTag EnterGameplayCue; // 0x1058 (0x4)
	struct FGameplayTag ExitGameplayCue; // 0x105c (0x4)
	struct FGameplayTag LandedOnGameplayCue; // 0x1060 (0x4)
	unsigned char unreflected_1064[0x4]; // 0x1064 (0x4) 
	class UMaterialInstanceDynamic* Mid; // 0x1068 (0x8)
	struct FGameplayTag RustleGameplayCue; // 0x1070 (0x4)
	struct FGameplayTag ExitGameplayCuePlayer; // 0x1074 (0x4)
	struct FGameplayTag WhileEnteringGameplayCue; // 0x1078 (0x4)
	unsigned char unreflected_107c[0x4]; // 0x107c (0x4) 
	double ObstructionTraceLength; // 0x1080 (0x8)
	struct TArray<struct TEnumAsByte<EObjectTypeQuery>> DestroyObjectTypes; // 0x1088 (0x10)
	struct TArray<class AFortPawn*> Array; // 0x1098 (0x10)
	int Int; // 0x10a8 (0x4)
	unsigned char unreflected_10ac[0x4]; // 0x10ac (0x4) 
	struct FVector DeimosPropSpawnerOffset; // 0x10b0 (0x18)
	bool FixedEntranceDirection; // 0x10c8 (0x1)
	unsigned char unreflected_10c9[0x7]; // 0x10c9 (0x7) 
	double MaxInteractAngle; // 0x10d0 (0x8)
	struct FVector WobbleLocationOffset; // 0x10d8 (0x18)
	double InteractBelowPropDistance; // 0x10f0 (0x8)
	struct TMap<class AFortPawn*, double> HiddenPlayersAndEnterTimes; // 0x10f8 (0x50)
	class AFortPawn* LastPawnToInteract; // 0x1148 (0x8)
	class AB_HidingProp_C* TargetTeleporter; // 0x1150 (0x8)
	struct FGameplayTag TeleporterEnterGameplayCue; // 0x1158 (0x4)
	struct FGameplayTag TeleporterExitGameplayCue; // 0x115c (0x4)
	struct FGameplayTag LoopingTeleportingCue; // 0x1160 (0x4)
	struct FGameplayTag GCWobble; // 0x1164 (0x4)
	struct FTimerHandle* WobbleTimerHandle; // 0x1168 (0x8)
	struct TArray<struct FGameplayTag> BlockEntranceTags; // 0x1170 (0x10)
	struct TArray<struct FGameplayTag> BlockExitTags; // 0x1180 (0x10)
	class UAnimMontage* EnterAnimMontage; // 0x1190 (0x8)
	class UAnimMontage* ExitAnimMontage; // 0x1198 (0x8)
	class AFortPawn* LastPawnToHide; // 0x11a0 (0x8)
	struct FGameplayTag TeleportingStateGC; // 0x11a8 (0x4)
	bool RandomWobbleNormal; // 0x11ac (0x1)
	bool SingleOccupant; // 0x11ad (0x1)
	bool Teleporting; // 0x11ae (0x1)
	bool JumpOut; // 0x11af (0x1)
	class UClass* GEOnExitingPropNoJumpBlockActions; // 0x11b0 (0x8)
	bool DestroyInNonSpyLTM; // 0x11b8 (0x1)
	bool ActiveInSpyLTM; // 0x11b9 (0x1)
	unsigned char unreflected_11ba[0x6]; // 0x11ba (0x6) 
	struct TArray<struct FGameplayTag> ForceAllowInteractTags; // 0x11c0 (0x10)
	struct FGameplayTag IsTeleporter; // 0x11d0 (0x4)
	struct FGameplayTag ContainsPlayerRepNof; // 0x11d4 (0x4)
	struct FVector ObstructionTraceExtents; // 0x11d8 (0x18)
	struct FVector ObstructionTraceStartOffSet; // 0x11f0 (0x18)
	double ExitLaunchVelocity; // 0x1208 (0x8)
	struct FVector AdditionalLaunchVelocity; // 0x1210 (0x18)
	struct FVector FixedEntraceObstructionTraceEndOffset; // 0x1228 (0x18)
	bool isActiveTeleportExit; // 0x1240 (0x1)
	unsigned char unreflected_1241[0x7]; // 0x1241 (0x7) 
	class UClass* GETeleportAbilityGranted; // 0x1248 (0x8)
	bool DisableWhenSubmergedInWater; // 0x1250 (0x1)
	unsigned char unreflected_1251[0x7]; // 0x1251 (0x7) 
	struct FGameplayTagContainer DisableWhenSubmergedExceptionTags; // 0x1258 (0x20)
	struct TArray<class AFortPawn*> NonCosmeticPawns; // 0x1278 (0x10)
	class UClass* CameraModifier; // 0x1288 (0x8)
	struct FVector NewVar0; // 0x1290 (0x18)
	class AActor* Pawn; // 0x12a8 (0x8)
	struct FVector LootCachedActorForward; // 0x12b0 (0x18)
	struct TArray<struct FVector> LootVectorOffsets; // 0x12c8 (0x10)
	bool SpawnedLoot; // 0x12d8 (0x1)
	unsigned char unreflected_12d9[0x7]; // 0x12d9 (0x7) 
	double LootMoveForwardDistance; // 0x12e0 (0x8)
	double LootMoveUpDistance; // 0x12e8 (0x8)
	double LootSpawnRadius; // 0x12f0 (0x8)
	struct FVector LootSpawnOffset; // 0x12f8 (0x18)
	bool ShouldSpawnLoot; // 0x1310 (0x1)
	unsigned char unreflected_1311[0x7]; // 0x1311 (0x7) 
	struct FString LootTierGroup; // 0x1318 (0x10)
	bool SetEntranceRotation; // 0x1328 (0x1)
	unsigned char unreflected_1329[0x7]; // 0x1329 (0x7) 
	class UClass* PropSpecificEffectToApplyToHiders; // 0x1330 (0x8)
	struct FScalableFloat RustlesPerWobble; // 0x1338 (0x28)
	struct FScalableFloat RustleWobbleRadius; // 0x1360 (0x28)
	struct FScalableFloat EnterWobbleRadius; // 0x1388 (0x28)
	double NonJumpExitDistance; // 0x13b0 (0x8)
	class UClass* CameraMode; // 0x13b8 (0x8)
	bool MoveToActorOnEnter; // 0x13c0 (0x1)
	bool IgnorePhysicsBodyCollisionOnEnter; // 0x13c1 (0x1)
	bool bCanRustleAndWobble; // 0x13c2 (0x1)

	/* Functions */

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.Can Hide by Falling (Has no native function)
	void CanHidebyFalling(class AActor*& OtherActor, bool& CanHide, class AFortPlayerPawn*& aFortPlayerPawn, class AFortPlayerPawn*& localFortPlayerPawn, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue, int& CallFuncGetPlayerLimitPlayerLimit, int& CallFuncArrayLengthReturnValue, bool& CallFuncGreaterIntIntReturnValue, int& CallFuncArrayLengthReturnValue1, bool& CallFuncLessIntIntReturnValue, int& CallFuncArrayFindReturnValue, bool& CallFuncEqualEqualIntIntReturnValue, bool& CallFuncIsPassengerInVehicleReturnValue, bool& CallFuncIsInVehicleReturnValue, bool& CallFuncBooleanORReturnValue, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue, struct FVector& CallFuncGetVelocityReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, bool& CallFuncLessEqualDoubleDoubleReturnValue, struct FGameplayTag& CallFuncMakeLiteralGameplayTagReturnValue, bool& CallFuncCanPerformNativeActionReturnValue, struct FGameplayTagContainer& CallFuncMakeGameplayTagContainerFromArrayReturnValue, bool& CallFuncIsServerReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAnyMatchingGameplayTagsselfCastInput, bool& CallFuncHasAnyMatchingGameplayTagsReturnValue); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.Player Getting in Prop (Has no native function)
	void PlayerGettinginProp(class AFortPawn*& FortPawn, bool& IsGettingIn, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.Player Hidden in Prop (Has no native function)
	void PlayerHiddeninProp(class AFortPawn*& FortPawn, bool& IsHidden, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue, bool& CallFuncArrayContainsReturnValue, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncBooleanANDReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.LocalOnFailedInteract (Has no native function)
	void LocalOnFailedInteract(class AFortPlayerPawn*& InteractingPawn); // (Event | Public | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.GetMinDistanceFromInteraction (Has no native function)
	float GetMinDistanceFromInteraction(); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.GetPlayerLimit (Has no native function)
	void GetPlayerLimit(int& PlayerLimit, float& CallFuncGetValueAtLevelReturnValue, int& CallFuncFTruncReturnValue, double& CallFuncFTruncAImplicitCast); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.Allow Cosmetics For Pawn (Has no native function)
	void AllowCosmeticsForPawn(class AFortPawn*& Pawn, bool& allow, bool& CallFuncIsValidReturnValue, bool& CallFuncArrayContainsReturnValue, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncNotPreBoolReturnValue1, bool& CallFuncBooleanORReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.OnRep_ContainsPlayer (Has no native function)
	void OnRepContainsPlayer(struct FGameplayTagContainer& CallFuncMakeGameplayTagContainerFromTagReturnValue, bool& CallFuncRemoveLooseGameplayTagsReturnValue, bool& CallFuncIsGameplayTagValidReturnValue, bool& CallFuncAddLooseGameplayTagsReturnValue); // (HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.OnRep_IsTeleporter (Has no native function)
	void OnRepIsTeleporter(struct FGameplayTagContainer& CallFuncMakeGameplayTagContainerFromTagReturnValue, bool& CallFuncAddLooseGameplayTagsReturnValue); // (HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.CheckCanUsePassage (Has no native function)
	bool CheckCanUsePassage(class UObject*& Object); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.IsInInfiltrationLTM (Has no native function)
	bool IsInInfiltrationLTM(); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.OnRep_Teleporting (Has no native function)
	void OnRepTeleporting(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.BlueprintGetFailedInteractionString (Has no native function)
	struct FText BlueprintGetFailedInteractionString(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.RemoveHiddenPlayer (Has no native function)
	void RemoveHiddenPlayer(class AFortPawn*& FortPawn, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, bool& CallFuncIsValidClassReturnValue, bool& CallFuncMapRemoveReturnValue, bool& CallFuncArrayRemoveItemReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.AddHiddenPlayer (Has no native function)
	void AddHiddenPlayer(class AFortPawn*& FortPawn, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue1, bool& CallFuncIsValidReturnValue, double& CallFuncGetRealTimeSecondsReturnValue, bool& CallFuncIsValidClassReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPFortApplyGameplayEffectToTargetReturnValue, int& CallFuncArrayAddUniqueReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.OnRep_HidingPlayers (Has no native function)
	void OnRepHidingPlayers(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.BlueprintGetInteractionTime (Has no native function)
	bool BlueprintGetInteractionTime(class AFortPawn*& InteractingPawn, float& OutInteractionTime, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.BlueprintGetInteractionString (Has no native function)
	struct FText BlueprintGetInteractionString(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.BlueprintCanInteract (Has no native function)
	bool BlueprintCanInteract(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted, struct TEnumAsByte<TInteractionType>& InteractionType); // (Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.Loot_MovementTimeline__FinishedFunc (Has no native function)
	void LootMovementTimelineFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.Loot_MovementTimeline__UpdateFunc (Has no native function)
	void LootMovementTimelineUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.OnReady_64CBF02E419FF250B433D5B2A6E5D744 (Has no native function)
	void OnReady64CBF02E419FF250B433D5B2A6E5D744(class AFortGameStateAthena*& GameState, class UFortPlaylist*& Playlist, struct FGameplayTagContainer& PlaylistContextTags); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.OnCurieActive_F2BFC8C54691C42FB5230BA7B7DEE141 (Has no native function)
	void OnCurieActiveF2BFC8C54691C42FB5230BA7B7DEE141(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.BlueprintOnInteract (Has no native function)
	void BlueprintOnInteract(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.OnDeathServer (Has no native function)
	void OnDeathServer(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature (Has no native function)
	void BndEvtSAthenaLaunchpadCollisionK2NodeComponentBoundEvent4ComponentBeginOverlapSignatureDelegateSignature(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.LandedOnHayStack (Has no native function)
	void LandedOnHayStack(class AFortPlayerPawn*& PlayerPawn, double& ZVelocityMag); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.LaunchPlayersOffTop (Has no native function)
	void LaunchPlayersOffTop(class AFortPlayerPawn*& PlayerPawn); // (Net | NetReliable | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.ReceiveActorBeginOverlap (Has no native function)
	void ReceiveActorBeginOverlap(class AActor*& OtherActor); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.StopHidingLoop (Has no native function)
	void StopHidingLoop(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.HidingPlayerCountChanged (Has no native function)
	void HidingPlayerCountChanged(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.InteractEnter (Has no native function)
	void InteractEnter(); // (Net | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.EndHidingAnalyticSession (Has no native function)
	void EndHidingAnalyticSession(class AFortPawn*& FortPawn, enum EEnvironmentalItemEndReason& EndReason); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.WatchForPlayerDeath (Has no native function)
	void WatchForPlayerDeath(class AFortPawn*& FortPawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.Pawn Died (Has no native function)
	void PawnDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.StopHiding (Has no native function)
	void StopHiding(class AFortPawn*& Pawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.Teleport (Has no native function)
	void Teleport(class AActor*& Pawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.IgnorePawnCollision (Has no native function)
	void IgnorePawnCollision(class AFortPawn*& Target, double& InIgnoreDuration); // (Net | NetReliable | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.ToggleCameraCollisionForClients (Has no native function)
	void ToggleCameraCollisionForClients(); // (Net | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.StartHiding (Has no native function)
	void StartHiding(class AFortPawn*& InteractingPawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.TurnClientCameraCollisionOn (Has no native function)
	void TurnClientCameraCollisionOn(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.AddGameplayCue (Has no native function)
	void AddGameplayCue(struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& CueParameters); // (Net | NetReliable | NetMulticast | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.RemoveGameplayCue (Has no native function)
	void RemoveGameplayCue(struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& CueParameters); // (Net | NetReliable | NetMulticast | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.ExecuteGameplayCue (Has no native function)
	void ExecuteGameplayCue(struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& CueParameters); // (Net | NetReliable | NetMulticast | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.OnMatchStarted (Has no native function)
	void OnMatchStarted(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.Launch Pickups (Has no native function)
	void LaunchPickups(struct TArray<class AFortPickup*>& Array, class AActor*& Pawn); // (Net | NetReliable | NetMulticast | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.EntranceBlockedByUndamageable (Has no native function)
	void EntranceBlockedByUndamageable(class AFortPlayerPawn*& PlayerPawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.IgnorePhysicsCollisionDamage (Has no native function)
	void IgnorePhysicsCollisionDamage(class AFortPawn*& Target, double& IgnoreDuration); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.BP_HandleExitPressed (Has no native function)
	void BPHandleExitPressed(class AFortPlayerPawn*& TargetPlayerPawn); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C.ExecuteUbergraph_B_HidingProp (Has no native function)
	void ExecuteUbergraphBHidingProp(int& EntryPoint, float& K2NodeEventDamage, struct FGameplayTagContainer& K2NodeEventDamageTags, struct FVector& K2NodeEventMomentum, struct FHitResult& K2NodeEventHitInfo, class AController*& K2NodeEventInstigatedBy, class AActor*& K2NodeEventDamageCauser, struct FGameplayEffectContextHandle& K2NodeEventEffectContext, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class UPrimitiveComponent*& K2NodeComponentBoundEventOverlappedComponent, class AActor*& K2NodeComponentBoundEventOtherActor, class UPrimitiveComponent*& K2NodeComponentBoundEventOtherComp, int& K2NodeComponentBoundEventOtherBodyIndex, bool& K2NodeComponentBoundEventbFromSweep, struct FHitResult& K2NodeComponentBoundEventSweepResult, struct FGameplayEventData& K2NodeMakeStructGameplayEventData, bool& CallFuncCanHidebyFallingCanHide, class AFortPlayerPawn*& CallFuncCanHidebyFallingaFortPlayerPawn, struct FVector& CallFuncGetVelocityReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, class AFortPlayerPawn*& K2NodeCustomEventPlayerPawn2, double& K2NodeCustomEventZVelocityMag, struct FGameplayEventData& K2NodeMakeStructGameplayEventData1, struct FGameplayEventData& K2NodeMakeStructGameplayEventData2, class AFortPlayerPawn*& K2NodeCustomEventPlayerPawn1, double& CallFuncRandomFloatInRangeReturnValue, struct TArray<class AActor*>& K2NodeMakeArrayArray, struct FVector& CallFuncMakeVectorReturnValue, struct FVector& CallFuncRotateAngleAxisReturnValue, struct FVector& CallFuncK2GetComponentLocationReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, struct FGameplayEventData& K2NodeMakeStructGameplayEventData3, class AActor*& K2NodeEventOtherActor, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, int& CallFuncAddIntIntReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessEqualIntIntReturnValue, class AFortPawn*& CallFuncArrayGetItem, int& CallFuncAddIntIntReturnValue1, int& TempintArrayIndexVariable, struct TArray<struct FGameplayTag>& K2NodeMakeArrayArray1, struct FGameplayTagContainer& CallFuncMakeGameplayTagContainerFromArrayReturnValue, class AFortPawn*& K2NodeEventInteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& K2NodeEventInteractionBeingAttempted, bool& CallFuncBlueprintCanInteractReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput1, bool& CallFuncHasMatchingGameplayTagReturnValue1, class AFortPawn*& K2NodeCustomEventFortPawn1, enum EEnvironmentalItemEndReason& K2NodeCustomEventEndReason, bool& CallFuncIsValidReturnValue, class AController*& CallFuncGetControllerReturnValue, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController, bool& K2NodeDynamicCastbSuccess1, bool& CallFuncIsValidReturnValue1, double& CallFuncGetRealTimeSecondsReturnValue, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue2, class AFortPawn*& K2NodeCustomEventFortPawn, double& CallFuncMapFindValue, bool& CallFuncMapFindReturnValue, class AActor*& K2NodeCustomEventDamagedActor, float& K2NodeCustomEventDamage, class AController*& K2NodeCustomEventInstigatedBy, class AActor*& K2NodeCustomEventDamageCauser, struct FVector& K2NodeCustomEventHitLocation, class UPrimitiveComponent*& K2NodeCustomEventFHitComponent, struct FName& K2NodeCustomEventBoneName, struct FVector& K2NodeCustomEventMomentum, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn1, bool& K2NodeDynamicCastbSuccess2, double& CallFuncSubtractDoubleDoubleReturnValue, double& CallFuncMapFindValue1, bool& CallFuncMapFindReturnValue1, bool& CallFuncMapRemoveReturnValue, class AFortPawn*& K2NodeCustomEventPawn2, bool& CallFuncIsValidReturnValue2, struct FVector& CallFuncMakeVectorReturnValue1, bool& CallFuncIsServerReturnValue, class AActor*& K2NodeCustomEventPawn1, struct TScriptInterface<class IGameplayTagAssetInterface>& K2NodeDynamicCastAsGameplayTagAssetInterface, bool& K2NodeDynamicCastbSuccess3, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue, bool& CallFuncHasMatchingGameplayTagReturnValue2, class AFortPawn*& K2NodeCustomEventTarget1, double& K2NodeCustomEventInIgnoreDuration, class AFortPlayerPawnAthena*& K2NodeDynamicCastAsFortPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess4, struct TArray<class AFortPlayerController*>& CallFuncGetLocalFortPlayerControllersReturnValue, bool& CallFuncIsServerReturnValue1, class AFortPlayerController*& CallFuncArrayGetItem1, class AActor*& CallFuncGetViewTargetReturnValue, int& CallFuncArrayLengthReturnValue1, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess5, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, int& CallFuncArrayFindReturnValue, bool& CallFuncEqualEqualIntIntReturnValue, bool& CallFuncNotPreBoolReturnValue, class AFortPawn*& K2NodeCustomEventInteractingPawn, int& TempintLoopCounterVariable1, struct FGameplayEventData& K2NodeMakeStructGameplayEventData4, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue3, struct FGameplayEventData& K2NodeMakeStructGameplayEventData5, float& CallFuncGetPlayLengthReturnValue, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue1, bool& TempboolVariable, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn2, bool& K2NodeDynamicCastbSuccess6, struct FGameplayTag& K2NodeCustomEventGameplayCueTag2, struct FGameplayCueParameters& K2NodeCustomEventCueParameters2, bool& CallFuncIsServerReturnValue2, bool& CallFuncIsServerReturnValue3, struct FGameplayTag& K2NodeCustomEventGameplayCueTag1, struct FGameplayCueParameters& K2NodeCustomEventCueParameters1, bool& CallFuncIsServerReturnValue4, struct FGameplayTag& K2NodeCustomEventGameplayCueTag, struct FGameplayCueParameters& K2NodeCustomEventCueParameters, int& TempintArrayIndexVariable1, int& TempintLoopCounterVariable2, int& TempintArrayIndexVariable2, int& CallFuncAddIntIntReturnValue4, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue1, bool& CallFuncRowToBoolReturnValue, bool& CallFuncIsValidReturnValue3, int& TempintArrayIndexVariable3, bool& CallFuncRowToBoolReturnValue1, bool& CallFuncRowToBoolReturnValue2, bool& CallFuncIsServerReturnValue5, bool& CallFuncIsServerReturnValue6, int& CallFuncArrayLengthReturnValue2, bool& CallFuncGreaterIntIntReturnValue, struct FVector& CallFuncGetForwardVectorReturnValue, struct FRotator& CallFuncConvVectorToRotatorReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, struct TArray<struct FGameplayTag>& K2NodeMakeArrayArray2, struct FGameplayTagContainer& CallFuncMakeGameplayTagContainerFromArrayReturnValue1, struct FVector& CallFuncGetForwardVectorReturnValue1, class AController*& CallFuncGetOwningControllerReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue1, struct FVector& CallFuncAddVectorVectorReturnValue2, struct FVector& CallFuncSelectVectorReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue1, struct FVector& CallFuncAddVectorVectorReturnValue3, bool& CallFuncIsValidReturnValue4, struct TArray<struct FHitResult>& CallFuncBoxTraceMultiOutHits, bool& CallFuncBoxTraceMultiReturnValue, struct FHitResult& CallFuncArrayGetItem2, int& CallFuncArrayLengthReturnValue3, bool& CallFuncBreakHitResultbBlockingHit, bool& CallFuncBreakHitResultbInitialOverlap, float& CallFuncBreakHitResultTime, float& CallFuncBreakHitResultDistance, struct FVector& CallFuncBreakHitResultLocation, struct FVector& CallFuncBreakHitResultImpactPoint, struct FVector& CallFuncBreakHitResultNormal, struct FVector& CallFuncBreakHitResultImpactNormal, class UPhysicalMaterial*& CallFuncBreakHitResultPhysMat, class AActor*& CallFuncBreakHitResultHitActor, class UPrimitiveComponent*& CallFuncBreakHitResultHitComponent, struct FName& CallFuncBreakHitResultHitBoneName, struct FName& CallFuncBreakHitResultBoneName, int& CallFuncBreakHitResultHitItem, int& CallFuncBreakHitResultElementIndex, int& CallFuncBreakHitResultFaceIndex, struct FVector& CallFuncBreakHitResultTraceStart, struct FVector& CallFuncBreakHitResultTraceEnd, bool& CallFuncLessIntIntReturnValue1, class ABuildingActor*& K2NodeDynamicCastAsBuildingActor, bool& K2NodeDynamicCastbSuccess7, class ABuildingTrap*& K2NodeDynamicCastAsBuildingTrap, bool& K2NodeDynamicCastbSuccess8, class AActor*& CallFuncGetAttachParentActorReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput2, bool& CallFuncHasMatchingGameplayTagReturnValue3, bool& CallFuncEqualEqualObjectObjectReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn3, bool& K2NodeDynamicCastbSuccess9, struct FActiveGameplayEffectHandle*& CallFuncApplyGlobalEnvironmentGameplayEffectToActorReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn4, bool& K2NodeDynamicCastbSuccess10, struct TScriptInterface<class IFortVehicleInterface>& K2NodeDynamicCastAsFortVehicleInterface, bool& K2NodeDynamicCastbSuccess11, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAnyMatchingGameplayTagsselfCastInput, bool& CallFuncHasAnyMatchingGameplayTagsReturnValue, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue2, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAnyMatchingGameplayTagsselfCastInput1, bool& CallFuncHasAnyMatchingGameplayTagsReturnValue1, struct FActiveGameplayEffectHandle*& CallFuncBPFortApplyGameplayEffectToTargetReturnValue, bool& CallFuncIsActorSubmergedInOceanReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, class AGameStateBase*& CallFuncGetGameStateReturnValue, class AFortGameStateAthena*& K2NodeDynamicCastAsFortGameStateAthena, bool& K2NodeDynamicCastbSuccess12, int& TempintLoopCounterVariable3, struct FGameplayTagContainer& CallFuncGetPoiGridTagsForLocationReturnValue, bool& CallFuncHasAnyTagsReturnValue, int& CallFuncAddIntIntReturnValue5, bool& CallFuncIsValidReturnValue5, bool& CallFuncIsServerReturnValue7, class UFortAsyncAction_OnCurieActivated*& CallFuncOnCurieActivatedReturnValue, bool& CallFuncIsValidReturnValue6, struct TArray<class AFortPickup*>& K2NodeCustomEventArray, class AActor*& K2NodeCustomEventPawn, struct FVector& CallFuncGetActorForwardVectorReturnValue, class AFortPickup*& CallFuncArrayGetItem3, int& CallFuncArrayLengthReturnValue4, int& CallFuncArrayLengthReturnValue5, bool& CallFuncLessIntIntReturnValue2, bool& CallFuncLessIntIntReturnValue3, struct FVector& CallFuncK2GetActorLocationReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, struct FVector& CallFuncRandomUnitVectorInConeInDegreesReturnValue, int& TempintVariable, int& CallFuncArrayAddReturnValue, bool& TempboolVariable1, struct FVector& CallFuncArrayGetItem4, struct TArray<struct FVector>& K2NodeMakeArrayArray3, struct FVector& K2NodeSelectDefault, struct FVector& CallFuncAddVectorVectorReturnValue4, bool& CallFuncNotPreBoolReturnValue1, double& CallFuncMultiplyDoubleDoubleReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue2, struct FVector& CallFuncMakeVectorReturnValue2, class UFortAsyncAction_CurrentPlaylistReady*& CallFuncPlaylistDataReadyAsyncReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue3, struct FVector& CallFuncAddVectorVectorReturnValue5, bool& CallFuncIsValidReturnValue7, struct FVector& CallFuncAddVectorVectorReturnValue6, double& CallFuncMultiplyDoubleDoubleReturnValue1, class AFortGameStateAthena*& TempobjectVariable, struct FVector& CallFuncMultiplyVectorFloatReturnValue4, struct FGameplayTagContainer& CallFuncGetAthenaPlaylistContextTagsReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue7, bool& CallFuncHasTagReturnValue, struct FHitResult& CallFuncK2SetActorLocationSweepHitResult, bool& CallFuncK2SetActorLocationReturnValue, class UFortPlaylist*& TempobjectVariable1, bool& CallFuncBooleanANDReturnValue, struct FName& CallFuncConvStringToNameReturnValue, struct FGameplayTagContainer& TempstructVariable, struct FVector& CallFuncGetActorRightVectorReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue2, struct FVector& CallFuncSelectVectorReturnValue1, struct FVector& CallFuncAddVectorVectorReturnValue8, struct TArray<class AFortPickup*>& CallFuncSpawnLootFromTableItemPickupsSpawned, class AFortPlayerPawn*& K2NodeCustomEventPlayerPawn, class UFortPhysicsObjectComponent*& CallFuncGetComponentByClassReturnValue, bool& CallFuncIsValidReturnValue8, bool& CallFuncIsValidReturnValue9, class AFortGameStateAthena*& K2NodeCustomEventGameState, class UFortPlaylist*& K2NodeCustomEventPlaylist, struct FGameplayTagContainer& K2NodeCustomEventPlaylistContextTags, class AFortPawn*& K2NodeCustomEventTarget, double& K2NodeCustomEventIgnoreDuration, class UFortPhysicsObjectComponent*& CallFuncGetPhysicsObjectComponentReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, bool& CallFuncIsValidReturnValue10, class AFortPlayerPawn*& K2NodeEventTargetPlayerPawn, struct FGameplayEventData& K2NodeMakeStructGameplayEventData6, float& K2NodeMakeStructEventMagnitudeImplicitCast, float& CallFuncRotateAngleAxisAngleDegImplicitCast, float& CallFuncFireAnalyticEventEnvironmentalItemUsedSessionLengthImplicitCast, float& CallFuncAddIgnoredActorInIgnoreDurationImplicitCast, double& CallFuncMultiplyVectorFloatBImplicitCast, double& CallFuncMultiplyDoubleDoubleAImplicitCast, double& CallFuncMultiplyDoubleDoubleAImplicitCast1, float& CallFuncDelayDurationImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

