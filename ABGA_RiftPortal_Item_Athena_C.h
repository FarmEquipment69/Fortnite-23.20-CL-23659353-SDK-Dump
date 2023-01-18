// BlueprintGeneratedClass /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C
// Size: 0xcd8
class ABGA_RiftPortal_Item_Athena_C : public AFortAthenaRiftPortal
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xa68 (0x8)
	class UFortSoundIndicatorComponent* SoundIndicator; // 0xa70 (0x8)
	class UPostProcessComponent* RiftPostProcess; // 0xa78 (0x8)
	class USphereComponent* PostProcessRadius; // 0xa80 (0x8)
	class UParticleSystemComponent* PRiftClosingUp; // 0xa88 (0x8)
	class UParticleSystemComponent* PRiftIdleLoop; // 0xa90 (0x8)
	class UCapsuleComponent* OverlapCapsule; // 0xa98 (0x8)
	class UCapsuleComponent* Capsule; // 0xaa0 (0x8)
	class UStaticMeshComponent* SMRift; // 0xaa8 (0x8)
	class UAudioComponent* AudioLooping; // 0xab0 (0x8)
	float FragmentMovementGlow9A68D88241DDB9CCA0BC82888C4EC266; // 0xab8 (0x4)
	float FragmentMovementOpen9A68D88241DDB9CCA0BC82888C4EC266; // 0xabc (0x4)
	struct TEnumAsByte<ETimelineDirection> FragmentMovementDirection9A68D88241DDB9CCA0BC82888C4EC266; // 0xac0 (0x1)
	unsigned char unreflected_ac1[0x7]; // 0xac1 (0x7) 
	class UTimelineComponent* FragmentMovement; // 0xac8 (0x8)
	float AudioRiftDestroyedPitchCurve00EF53CD47287903FB5B01AC2A7BE7C6; // 0xad0 (0x4)
	struct TEnumAsByte<ETimelineDirection> AudioRiftDestroyedDirection00EF53CD47287903FB5B01AC2A7BE7C6; // 0xad4 (0x1)
	unsigned char unreflected_ad5[0x3]; // 0xad5 (0x3) 
	class UTimelineComponent* AudioRiftDestroyed; // 0xad8 (0x8)
	float VectorScaleOpen1424CF6C4426FFF7BA2A64817506E111; // 0xae0 (0x4)
	struct TEnumAsByte<ETimelineDirection> VectorScaleDirection1424CF6C4426FFF7BA2A64817506E111; // 0xae4 (0x1)
	unsigned char unreflected_ae5[0x3]; // 0xae5 (0x3) 
	class UTimelineComponent* VectorScale; // 0xae8 (0x8)
	class UParticleSystem* DeathEffects; // 0xaf0 (0x8)
	class USoundBase* EnteredRift; // 0xaf8 (0x8)
	class USoundBase* RiftDestroyed; // 0xb00 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0xb08 (0x8)
	struct FVector TeleportLocation; // 0xb10 (0x18)
	class UParticleSystem* EnterRift; // 0xb28 (0x8)
	bool PortalOpen; // 0xb30 (0x1)
	unsigned char unreflected_b31[0x7]; // 0xb31 (0x7) 
	class UAnimMontage* FallingAnimation; // 0xb38 (0x8)
	struct FScalableFloat TeleportHeight; // 0xb40 (0x28)
	struct FScalableFloat ActiveDuration; // 0xb68 (0x28)
	struct FScalableFloat HangTime; // 0xb90 (0x28)
	double TeleportDelay; // 0xbb8 (0x8)
	struct TArray<class AFortPlayerPawn*> PassengerArray; // 0xbc0 (0x10)
	class UParticleSystem* CrackExitRift; // 0xbd0 (0x8)
	class USoundBase* PlayerExitSkyCrack; // 0xbd8 (0x8)
	struct FVector ActorOriginalLocation; // 0xbe0 (0x18)
	int MaxSpawnHeightMultiplier; // 0xbf8 (0x4)
	unsigned char unreflected_bfc[0x4]; // 0xbfc (0x4) 
	class UFortQuestItemDefinition* QuestItem; // 0xc00 (0x8)
	struct FName ObjectiveBackendName; // 0xc08 (0x4)
	unsigned char unreflected_c0c[0x4]; // 0xc0c (0x4) 
	class UFortQuestItemDefinition* RiftPortalLocationsQuest; // 0xc10 (0x8)
	bool CreativeMode; // 0xc18 (0x1)
	unsigned char unreflected_c19[0x7]; // 0xc19 (0x7) 
	class AActor* OverlapActor; // 0xc20 (0x8)
	int RiftLocationNum; // 0xc28 (0x4)
	unsigned char unreflected_c2c[0x4]; // 0xc2c (0x4) 
	struct FRotator ActorRotation; // 0xc30 (0x18)
	struct TScriptInterface<class IFortVehicleInterface> VehicleInterface; // 0xc48 (0x10)
	struct FVector PlayerLocation; // 0xc58 (0x18)
	struct FVector TeleportLocationOffset; // 0xc70 (0x18)
	struct TSet<class AActor*> BeganOverlapList; // 0xc88 (0x50)

	/* Functions */

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.GetAffiliationsToShowFor (Has no native function)
	struct TArray<struct TEnumAsByte<EFortTeamAffiliation>> GetAffiliationsToShowFor(); // (Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.ShouldShowSoundIndicator (Has no native function)
	bool ShouldShowSoundIndicator(class AFortPlayerController*& PlayerController); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.TeleportPlayerAndSendEvent (Has no native function)
	void TeleportPlayerAndSendEvent(class AFortPlayerPawn*& PlayerPawn, struct FVector& CallFuncGetActorBoundsOrigin, struct FVector& CallFuncGetActorBoundsBoxExtent, struct FVector& CallFuncMultiplyVectorVectorReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, float& CallFuncBreakRotatorRoll, float& CallFuncBreakRotatorPitch, float& CallFuncBreakRotatorYaw, struct FRotator& CallFuncMakeRotatorReturnValue, bool& CallFuncTeleportPlayerPawnReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.IsPlayerAttachedToAIPawn (Has no native function)
	void IsPlayerAttachedToAIPawn(class AFortAIPawn*& AIPawn, bool& Result, class AFortPlayerPawn*& AttachedPlayerPawn, struct TArray<class AActor*>& CallFuncGetAttachedActorsOutActors, int& TempintArrayIndexVariable, int& CallFuncArrayLengthReturnValue, class AActor*& CallFuncArrayGetItem, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, int& TempintLoopCounterVariable, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.EjectFromTurret (Has no native function)
	void EjectFromTurret(class AFortPlayerPawn*& PlayerPawn, struct TScriptInterface<class IFortVehicleInterface>& CallFuncGetVehicleUInterfaceReturnValue, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, bool& CallFuncCanTeleportReturnValue, int& CallFuncRemoveActiveEffectsWithGrantedTagsReturnValue, class UObject*& CallFuncConvInterfaceToObjectReturnValue, bool& CallFuncIsInVehicleReturnValue, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.Is Flying (Has no native function)
	void IsFlying(bool& NewParam, class UPawnMovementComponent*& CallFuncGetMovementComponentReturnValue, class UFortMovementComp_Character*& K2NodeDynamicCastAsFortMovementCompCharacter, bool& K2NodeDynamicCastbSuccess, bool& CallFuncEqualEqualByteByteReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.UseRiftQuestUpdate (Has no native function)
	void UseRiftQuestUpdate(class AController*& InController, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue, struct TArray<class AFortPlayerController*>& K2NodeMakeArrayArray, bool& CallFuncAthenaCheckQuestAndObjectiveCompletionQuestIsValid, bool& CallFuncAthenaCheckQuestAndObjectiveCompletionQuestCompleted, bool& CallFuncAthenaCheckQuestAndObjectiveCompletionObjectiveCompleted, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncBooleanANDReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.CheckForRiftLocUpdate (Has no native function)
	void CheckForRiftLocUpdate(class AController*& InController); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.OnRep_PlayerPawn (Has no native function)
	void OnRepPlayerPawn(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.OnRep_Vehicle (Has no native function)
	void OnRepVehicle(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.OnRep_TeleportLocation (Has no native function)
	void OnRepTeleportLocation(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.PlayExpandOrCollapseAudio (Has no native function)
	void PlayExpandOrCollapseAudio(bool& Expand, bool& TempboolVariable, class USoundBase*& TempobjectVariable, class USoundBase*& TempobjectVariable1, class USoundBase*& K2NodeSelectDefault, struct FVector& CallFuncK2GetComponentLocationReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.Audio RiftDestroyed__FinishedFunc (Has no native function)
	void AudioRiftDestroyedFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.Audio RiftDestroyed__UpdateFunc (Has no native function)
	void AudioRiftDestroyedUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.VectorScale__FinishedFunc (Has no native function)
	void VectorScaleFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.VectorScale__UpdateFunc (Has no native function)
	void VectorScaleUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.FragmentMovement__FinishedFunc (Has no native function)
	void FragmentMovementFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.FragmentMovement__UpdateFunc (Has no native function)
	void FragmentMovementUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.DestroyRift (Has no native function)
	void DestroyRift(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature (Has no native function)
	void BndEvtOverlapCapsuleK2NodeComponentBoundEvent1ComponentBeginOverlapSignatureDelegateSignature(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature (Has no native function)
	void BndEvtCapsuleK2NodeComponentBoundEvent2ComponentBeginOverlapSignatureDelegateSignature(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature (Has no native function)
	void BndEvtCapsuleK2NodeComponentBoundEvent3ComponentEndOverlapSignatureDelegateSignature(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.PlayTeleportFX (Has no native function)
	void PlayTeleportFX(struct FVector& PlayerLocation, class APlayerState*& RequestingPlayerState); // (Net | NetReliable | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.PlayCosmeticFX (Has no native function)
	void PlayCosmeticFX(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.OverlappingOnBeginPlay (Has no native function)
	void OverlappingOnBeginPlay(class AActor*& Actor); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.VehicleTeleportEvent (Has no native function)
	void VehicleTeleportEvent(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.NotifyTeleportedVehicle (Has no native function)
	void NotifyTeleportedVehicle(class AActor*& VehicleActor); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.PlaylistLoaded (Has no native function)
	void PlaylistLoaded(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.VehicleInteractionFailed (Has no native function)
	void VehicleInteractionFailed(class AFortPlayerPawnAthena*& FortPlayerPawnAthena); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.TryRiftTeleport (Has no native function)
	void TryRiftTeleport(class AActor*& TargetActor); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.IncrementTeleportLocationOffset (Has no native function)
	void IncrementTeleportLocationOffset(struct FVector& IncrementValue); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.ResetTeleportLocationOffset (Has no native function)
	void ResetTeleportLocationOffset(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.ExecuteUbergraph_BGA_RiftPortal_Item_Athena (Has no native function)
	void ExecuteUbergraphBGARiftPortalItemAthena(int& EntryPoint, struct FVector& CallFuncK2GetActorLocationReturnValue, class UPrimitiveComponent*& K2NodeComponentBoundEventOverlappedComponent2, class AActor*& K2NodeComponentBoundEventOtherActor2, class UPrimitiveComponent*& K2NodeComponentBoundEventOtherComp2, int& K2NodeComponentBoundEventOtherBodyIndex2, bool& K2NodeComponentBoundEventbFromSweep1, struct FHitResult& K2NodeComponentBoundEventSweepResult1, class UPrimitiveComponent*& K2NodeComponentBoundEventOverlappedComponent1, class AActor*& K2NodeComponentBoundEventOtherActor1, class UPrimitiveComponent*& K2NodeComponentBoundEventOtherComp1, int& K2NodeComponentBoundEventOtherBodyIndex1, bool& K2NodeComponentBoundEventbFromSweep, struct FHitResult& K2NodeComponentBoundEventSweepResult, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsIgnoredActorReturnValue, class UPrimitiveComponent*& K2NodeComponentBoundEventOverlappedComponent, class AActor*& K2NodeComponentBoundEventOtherActor, class UPrimitiveComponent*& K2NodeComponentBoundEventOtherComp, int& K2NodeComponentBoundEventOtherBodyIndex, class AFortPlayerPawnAthena*& K2NodeDynamicCastAsFortPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess1, struct TArray<class AActor*>& CallFuncGetOverlappingActorsOverlappingActors, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessEqualIntIntReturnValue, float& CallFuncGetValueAtLevelReturnValue, double& CallFuncAddDoubleDoubleReturnValue, struct FVector& K2NodeCustomEventPlayerLocation, class APlayerState*& K2NodeCustomEventRequestingPlayerState, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue, bool& CallFuncHasAuthorityReturnValue, double& CallFuncRandomFloatInRangeReturnValue, struct FRotator& CallFuncMakeRotatorReturnValue, bool& CallFuncIsPlayingReturnValue, class AActor*& K2NodeEventActor, bool& CallFuncIsValidReturnValue, bool& CallFuncHasAuthorityReturnValue1, struct FVector& CallFuncK2GetActorLocationReturnValue1, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, float& CallFuncGetValueAtLevelReturnValue1, struct FVector& CallFuncAddVectorVectorReturnValue, struct FVector& CallFuncMakeVectorReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue1, bool& CallFuncHasAuthorityReturnValue2, struct FDelegate& K2NodeCreateDelegateOutputDelegate, float& CallFuncGetValueAtLevelReturnValue2, class UAudioComponent*& CallFuncSpawnSoundAtLocationReturnValue, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, class AActor*& K2NodeEventVehicleActor, struct TScriptInterface<class IFortVehicleInterface>& K2NodeDynamicCastAsFortVehicleInterface, bool& K2NodeDynamicCastbSuccess2, class AGameStateBase*& CallFuncGetGameStateReturnValue, struct FName& K2NodeCustomEventPlaylistName, struct FGameplayTagContainer& K2NodeCustomEventPlaylistContextTags, class AFortGameStateAthena*& K2NodeDynamicCastAsFortGameStateAthena, bool& K2NodeDynamicCastbSuccess3, bool& CallFuncAthenaCheckCreativeModeCanCompleteQuest, bool& CallFuncAthenaCheckCreativeModeCanCompleteQuest1, bool& CallFuncIsValidReturnValue1, class AController*& CallFuncGetControllerReturnValue, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, bool& CallFuncIsDedicatedServerReturnValue, class AFortPlayerPawnAthena*& K2NodeCustomEventFortPlayerPawnAthena, struct FRotator& CallFuncK2GetActorRotationReturnValue, bool& CallFuncIsFlyingNewParam, struct TArray<class AActor*>& CallFuncGetOverlappingActorsOverlappingActors1, bool& CallFuncArrayContainsReturnValue, bool& CallFuncIsFlyingNewParam1, int& TempintArrayIndexVariable, class AActor*& CallFuncGetVehicleActorPtrReturnValue, bool& CallFuncCanTeleportReturnValue, struct FVector& CallFuncGetActorBoundsOrigin, struct FVector& CallFuncGetActorBoundsBoxExtent, struct FVector& CallFuncMultiplyVectorVectorReturnValue, struct TArray<class AFortPlayerPawn*>& CallFuncBPGetAllPassengersReturnValue, struct TArray<class AFortPlayerPawn*>& CallFuncBPGetAllPassengersReturnValue1, class AFortPlayerPawn*& CallFuncArrayGetItem, class AFortPlayerPawn*& CallFuncArrayGetItem1, bool& CallFuncIsValidReturnValue2, class AController*& CallFuncGetControllerReturnValue1, int& CallFuncArrayLengthReturnValue1, bool& CallFuncGreaterIntIntReturnValue, int& CallFuncArrayLengthReturnValue2, struct FVector& CallFuncGetOwnerLocationReturnValue, class AFortPlayerPawn*& CallFuncGetDriverReturnValue, class UObject*& CallFuncConvInterfaceToObjectReturnValue, bool& CallFuncIsValidReturnValue3, bool& CallFuncIsValidReturnValue4, class AController*& CallFuncGetControllerReturnValue2, class APlayerState*& TempobjectVariable, bool& TempboolVariable, int& TempintArrayIndexVariable1, class APlayerState*& K2NodeSelectDefault, struct FVector& CallFuncK2GetActorLocationReturnValue2, struct FActiveGameplayEffectHandle*& CallFuncApplyGlobalEnvironmentGameplayEffectToActorReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, class AActor*& K2NodeCustomEventTargetActor, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue1, struct FVector& K2NodeCustomEventIncrementValue, struct FVector& CallFuncAddVectorVectorReturnValue1, struct FVector& CallFuncAddVectorVectorReturnValue2, struct FVector& CallFuncMakeVectorReturnValue1, struct FVector& CallFuncAddVectorVectorReturnValue3, struct TArray<class AFortPlayerPawn*>& CallFuncBPGetAllPassengersReturnValue2, int& CallFuncArrayLengthReturnValue3, struct TArray<class AFortPlayerPawn*>& CallFuncBPGetAllPassengersReturnValue3, bool& CallFuncEqualEqualIntIntReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, class AFortPlayerPawn*& CallFuncArrayGetItem2, int& CallFuncArrayLengthReturnValue4, bool& CallFuncLessIntIntReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn1, bool& K2NodeDynamicCastbSuccess4, struct TScriptInterface<class IFortVehicleInterface>& K2NodeDynamicCastAsFortVehicleInterface1, bool& K2NodeDynamicCastbSuccess5, struct FActiveGameplayEffectHandle*& CallFuncApplyGlobalEnvironmentGameplayEffectToActorReturnValue1, bool& CallFuncIsInVehicleReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue3, bool& CallFuncIsInsideHidingPropReturnValue, class AFortAIPawn*& K2NodeDynamicCastAsFortAIPawn, bool& K2NodeDynamicCastbSuccess6, int& TempintLoopCounterVariable1, bool& CallFuncLessIntIntReturnValue1, int& CallFuncAddIntIntReturnValue1, bool& CallFuncTeleportAIPawnReturnValue, bool& CallFuncIsPlayerAttachedToAIPawnResult, class AFortPlayerPawn*& CallFuncIsPlayerAttachedToAIPawnAttachedPlayerPawn, bool& CallFuncIsValidReturnValue5, bool& CallFuncSetContainsReturnValue, bool& CallFuncBooleanORReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, double& CallFuncSelectFloatReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, struct FRotator& CallFuncMakeRotatorReturnValue1, struct FHitResult& CallFuncK2SetRelativeRotationSweepHitResult, double& CallFuncAddDoubleDoubleAImplicitCast, float& CallFuncDelayDurationImplicitCast, float& CallFuncMakeRotatorYawImplicitCast, double& CallFuncMakeVectorZImplicitCast, double& CallFuncMultiplyDoubleDoubleAImplicitCast, double& CallFuncSelectFloatBImplicitCast, float& CallFuncSetScalarParameterValueOnMaterialsParameterValueImplicitCast, float& CallFuncMakeRotatorRollImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

