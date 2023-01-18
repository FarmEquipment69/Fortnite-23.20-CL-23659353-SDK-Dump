// BlueprintGeneratedClass /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C
// Size: 0x1165
class AB_Athena_Zipline_Ascender_C : public AFortAscenderZipline
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xfe8 (0x8)
	class UCapsuleComponent* Capsule; // 0xff0 (0x8)
	class UFortSoundIndicatorComponent* FortSoundIndicator; // 0xff8 (0x8)
	class UStaticMeshComponent* AscenderEndCap; // 0x1000 (0x8)
	class UAudioComponent* PoleMotorSFX; // 0x1008 (0x8)
	class UNiagaraComponent* HandleVFX; // 0x1010 (0x8)
	class UNiagaraComponent* PoleMotorVFX; // 0x1018 (0x8)
	class UAudioComponent* HandleAscendingSFX; // 0x1020 (0x8)
	class UAudioComponent* HandleDescendingSFX; // 0x1028 (0x8)
	class USphereComponent* HandleInteractVolume; // 0x1030 (0x8)
	class UStaticMeshComponent* Handle; // 0x1038 (0x8)
	class UStaticMeshComponent* Top; // 0x1040 (0x8)
	struct FScalableFloat Hotfix; // 0x1048 (0x28)
	class USoundBase* StartHandleSound; // 0x1070 (0x8)
	class USoundBase* StopHandleSound; // 0x1078 (0x8)
	class USoundBase* StopPoleMotorSoundSkid; // 0x1080 (0x8)
	class UMaterialInterface* SplineMeshMaterialOverride; // 0x1088 (0x8)
	class UNiagaraSystem* AscendingHandleVFX; // 0x1090 (0x8)
	class UNiagaraSystem* DescendingHandleVFX; // 0x1098 (0x8)
	class UMaterialInterface* SplineThickenMeshMaterialOverride; // 0x10a0 (0x8)
	double MaxWobbleAnimationLength; // 0x10a8 (0x8)
	double LastWobbleActivationTime; // 0x10b0 (0x8)
	double TilingDivisor; // 0x10b8 (0x8)
	struct FVector HandleAnimOffset; // 0x10c0 (0x18)
	struct FVector SlideAnimOffset; // 0x10d8 (0x18)
	class USoundBase* PlayerGrabBeginDecentSound; // 0x10f0 (0x8)
	class UAudioComponent* HandleStart; // 0x10f8 (0x8)
	struct FVector EndCapRelativeScale; // 0x1100 (0x18)
	class UClass* StructureDamageGE; // 0x1118 (0x8)
	struct FTimerHandle* AudioVisualizerHandle; // 0x1120 (0x8)
	struct TArray<class AFortPlayerPawn*> PlayersOnAscender; // 0x1128 (0x10)
	class USoundBase* TravelSound; // 0x1138 (0x8)
	bool ShouldPlayWhoosh; // 0x1140 (0x1)
	unsigned char unreflected_1141[0x7]; // 0x1141 (0x7) 
	class USoundBase* AscendWhooshSound; // 0x1148 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0x1150 (0x8)
	struct FTimerHandle* WhooshHandle; // 0x1158 (0x8)
	struct FGameplayTag LinkToDestroyedGC; // 0x1160 (0x4)
	bool BeDestroy; // 0x1164 (0x1)

	/* Functions */

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnRep_BeDestroy (Has no native function)
	void OnRepBeDestroy(); // (BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BlueprintCanInteract (Has no native function)
	bool BlueprintCanInteract(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted, struct TEnumAsByte<TInteractionType>& InteractionType); // (Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.CanBeginZiplining (Has no native function)
	bool CanBeginZiplining(class AFortPlayerPawn*& InteractingPawn, class UPrimitiveComponent*& InteractComponent); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.LocalOnFailedInteract (Has no native function)
	void LocalOnFailedInteract(class AFortPlayerPawn*& InteractingPawn); // (Event | Public | BlueprintCallable | BlueprintEvent | Const)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetBoundsComponents (Has no native function)
	void GetBoundsComponents(class AActor*& SelfActor, struct TArray<class USceneComponent*>& OutComponents, class UPrimitiveComponent*& CallFuncGetHandleComponentReturnValue, struct TArray<class AActor*>& CallFuncGetOverlappingActorsOverlappingActors, struct TArray<class USceneComponent*>& K2NodeMakeArrayArray, int& CallFuncArrayLengthReturnValue, bool& CallFuncGreaterEqualIntIntReturnValue, struct TArray<class USceneComponent*>& K2NodeMakeArrayArray1); // (Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ApplyStructureDamage (Has no native function)
	void ApplyStructureDamage(class ABuildingSMActor*& BuildingActor, class AActor*& DamageSource, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, struct TArray<class UClass*>& K2NodeMakeArrayArray, struct FVector& CallFuncK2GetActorLocationReturnValue); // (Event | Public | HasDefaults | BlueprintCallable | BlueprintEvent | Const)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.AttachCapToEndOfSplineMesh (Has no native function)
	void AttachCapToEndOfSplineMesh(struct FVector& CallFuncMakeVectorReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsValidReturnValue2, bool& CallFuncBooleanANDReturnValue, bool& CallFuncBooleanANDReturnValue1, struct FHitResult& CallFuncK2SetWorldLocationSweepHitResult, double& CallFuncMakeVectorZImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.AttemptOverrideZiplineSocketOffset (Has no native function)
	bool AttemptOverrideZiplineSocketOffset(class AFortPlayerPawn*& InteractingPawn, class UPrimitiveComponent*& InteractComponent, struct FVector& BaseSocketOffset, struct FVector& OutSocketOffset); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.CalculateLaunchVelocity (Has no native function)
	void CalculateLaunchVelocity(class AActor*& PlayerPawn, struct FVector& LaunchVelocity, struct FVector& CallFuncGetActorForwardVectorReturnValue, float& CallFuncGetValueAtLevelReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, float& CallFuncGetValueAtLevelReturnValue1, struct FVector& CallFuncMultiplyVectorFloatReturnValue, struct FVector& CallFuncMakeVectorReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, double& CallFuncMultiplyDoubleDoubleAImplicitCast, double& CallFuncMakeVectorZImplicitCast); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.SetCableTilingBySplineLength (Has no native function)
	void SetCableTilingBySplineLength(float& CallFuncGetSplineLengthReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, int& CallFuncFTruncReturnValue, float& CallFuncConvIntToFloatReturnValue, double& CallFuncDivideDoubleDoubleAImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.DeactivateCableWobble (Has no native function)
	void DeactivateCableWobble(bool& CallFuncIsDedicatedServerReturnValue, double& CallFuncGetGameTimeInSecondsReturnValue, double& CallFuncAddDoubleDoubleReturnValue, double& CallFuncGetGameTimeInSecondsReturnValue1, bool& CallFuncGreaterDoubleDoubleReturnValue, float& CallFuncSetScalarParameterValueOnMaterialsParameterValueImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ActivateCableWobble (Has no native function)
	void ActivateCableWobble(bool& CallFuncIsDedicatedServerReturnValue, double& CallFuncAddDoubleDoubleReturnValue, double& CallFuncGetGameTimeInSecondsReturnValue, float& CallFuncSetScalarParameterValueOnMaterialsParameterValueImplicitCast, float& CallFuncSetScalarParameterValueOnMaterialsParameterValueImplicitCast1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.HotfixEnabled (Has no native function)
	void HotfixEnabled(bool& CallFuncGetValueAsBoolReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetTopComponent (Has no native function)
	class UPrimitiveComponent* GetTopComponent(); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetHandleComponent (Has no native function)
	class UPrimitiveComponent* GetHandleComponent(); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetInteractComponentOverride (Has no native function)
	class UPrimitiveComponent* GetInteractComponentOverride(class AFortPlayerPawn*& InteractingPawn, class UPrimitiveComponent*& InteractComponent); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.PawnIsInHandleRange (Has no native function)
	bool PawnIsInHandleRange(class AFortPawn*& Pawn); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | Const)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BlueprintGetInteractionString (Has no native function)
	struct FText BlueprintGetInteractionString(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted); // (Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | Const)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetLastSplinePointIndex (Has no native function)
	int GetLastSplinePointIndex(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(bool& CallFuncIsDedicatedServerReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnReady_93837FC44A18F6AE57D3478CC43A98AB (Has no native function)
	void OnReady93837FC44A18F6AE57D3478CC43A98AB(class AFortGameStateAthena*& GameState, class UFortPlaylist*& Playlist, struct FGameplayTagContainer& PlaylistContextTags); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandlePlayerStartedUsingHandle (Has no native function)
	void BPHandlePlayerStartedUsingHandle(class AFortPlayerPawn*& Player); // (Event | Public | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandlePlayerStoppedUsingHandle (Has no native function)
	void BPHandlePlayerStoppedUsingHandle(class AFortPlayerPawn*& Player); // (Event | Public | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStartedLoweringCable (Has no native function)
	void BPHandleStartedLoweringCable(); // (Event | Public | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStartedLoweringHandle (Has no native function)
	void BPHandleStartedLoweringHandle(); // (Event | Public | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStoppedLoweringCable (Has no native function)
	void BPHandleStoppedLoweringCable(); // (Event | Public | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStoppedLoweringHandle (Has no native function)
	void BPHandleStoppedLoweringHandle(); // (Event | Public | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnZipliningStarted (Has no native function)
	void OnZipliningStarted(class AFortPlayerPawn*& InteractingPawn, class UPrimitiveComponent*& InteractComponent); // (Event | Public | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.PlayerDescendingStarted (Has no native function)
	void PlayerDescendingStarted(class AFortPlayerPawn*& SlidingPlayer); // (Net | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleUpdatedLoweringCable (Has no native function)
	void BPHandleUpdatedLoweringCable(); // (Event | Public | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnZipliningStopped (Has no native function)
	void OnZipliningStopped(class AFortPlayerPawn*& InteractingPawn, class UPrimitiveComponent*& InteractComponent, float& ZiplineUsageDuration); // (Event | Public | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ShouldPlayWhooshTimer (Has no native function)
	void ShouldPlayWhooshTimer(); // (BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnAscenderSetupComplete_Event (Has no native function)
	void OnAscenderSetupCompleteEvent(); // (BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.HandleLinkedActorDestroyed (Has no native function)
	void HandleLinkedActorDestroyed(class AActor*& DamageCauser); // (BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ExecuteUbergraph_B_Athena_Zipline_Ascender (Has no native function)
	void ExecuteUbergraphBAthenaZiplineAscender(int& EntryPoint, bool& CallFuncGetValueAsBoolReturnValue, struct FVector& CallFuncK2GetComponentLocationReturnValue, class AFortPlayerPawn*& CallFuncGetPawnUsingHandleReturnValue, bool& CallFuncIsValidReturnValue, class AFortPlayerPawn*& K2NodeEventPlayer, class AFortPlayerPawn*& K2NodeEventPlayer1, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue, class AFortPlayerPawn*& K2NodeEventInteractingPawn1, class UPrimitiveComponent*& K2NodeEventInteractComponent1, class AFortPlayerPawn*& CallFuncGetPawnUsingHandleReturnValue1, bool& CallFuncNotEqualObjectObjectReturnValue, class AFortPlayerPawn*& K2NodeCustomEventSlidingPlayer, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& CallFuncIsValidReturnValue1, class UFortAsyncAction_CurrentPlaylistReady*& CallFuncPlaylistDataReadyAsyncReturnValue, bool& CallFuncIsValidReturnValue2, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue1, struct FVector& CallFuncK2GetComponentLocationReturnValue1, bool& CallFuncIsValidReturnValue3, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue2, bool& CallFuncIsValidReturnValue4, class AFortPlayerPawn*& K2NodeEventInteractingPawn, class UPrimitiveComponent*& K2NodeEventInteractComponent, float& K2NodeEventZiplineUsageDuration, class AFortPlayerPawn*& CallFuncGetPawnUsingHandleReturnValue2, bool& CallFuncNotEqualObjectObjectReturnValue1, class AFortGameStateAthena*& TempobjectVariable, class UFortPlaylist*& TempobjectVariable1, struct FGameplayTagContainer& TempstructVariable, class AFortGameStateAthena*& K2NodeCustomEventGameState, class UFortPlaylist*& K2NodeCustomEventPlaylist, struct FGameplayTagContainer& K2NodeCustomEventPlaylistContextTags, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, bool& CallFuncIsValidReturnValue5, bool& CallFuncIsValidReturnValue6, class AFortPlayerPawn*& CallFuncGetPawnUsingHandleReturnValue3, bool& CallFuncIsValidReturnValue7, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue3, struct FTimerHandle*& CallFuncK2SetTimerReturnValue, bool& CallFuncIsValidReturnValue8, struct FVector& CallFuncK2GetComponentLocationReturnValue2, struct FVector& CallFuncAddVectorVectorReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, class AActor*& K2NodeCustomEventDamageCauser, struct FDelegate& K2NodeCreateDelegateOutputDelegate2); // (Final | 0x00008000 | HasDefaults)
};

