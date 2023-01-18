// BlueprintGeneratedClass /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C
// Size: 0x60e8
class ABP_PlayerPawn_NonParticipant_C : public ABP_PlayerPawn_Athena_Phoebe_C
{
	unsigned char unreflected_5f24[0x4]; // 0x5f24 (0x4) 
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x5f28 (0x8)
	class UFortAthenaAlertStateComponent* FortAthenaAlertState; // 0x5f30 (0x8)
	class UAudioComponent* VOAudioComponent; // 0x5f38 (0x8)
	bool UseAlertness; // 0x5f40 (0x1)
	bool UseVO; // 0x5f41 (0x1)
	bool UseIdleVO; // 0x5f42 (0x1)
	bool UseDropExtraLootOnDeath; // 0x5f43 (0x1)
	bool UseFullBodyHitReact; // 0x5f44 (0x1)
	enum EAlertLevel AlertLevel; // 0x5f45 (0x1)
	enum EAlertLevel OldAlertLevel; // 0x5f46 (0x1)
	unsigned char unreflected_5f47[0x1]; // 0x5f47 (0x1) 
	struct FGameplayTag GameplayCueAlertState; // 0x5f48 (0x4)
	unsigned char unreflected_5f4c[0x4]; // 0x5f4c (0x4) 
	class UClass* GENPCStatusStressedInfinite; // 0x5f50 (0x8)
	class UClass* GENPCStatusStressedCooldown; // 0x5f58 (0x8)
	double MinDistanceToTargetToPlayCombatAlertAnimation; // 0x5f60 (0x8)
	struct FScalableFloat MinIdleVODelay; // 0x5f68 (0x28)
	struct FScalableFloat MaxIdleVODelay; // 0x5f90 (0x28)
	struct FName LootTierNameToSpawnWhenDead; // 0x5fb8 (0x4)
	struct FName LootTierMedium; // 0x5fbc (0x4)
	struct FName LootTierShell; // 0x5fc0 (0x4)
	struct FName LootTierHeavy; // 0x5fc4 (0x4)
	struct FName LootTierLight; // 0x5fc8 (0x4)
	struct FName LootTierRockets; // 0x5fcc (0x4)
	class UFortGameplayDataTrackerComponentManager* DataTrackerComponentManager; // 0x5fd0 (0x8)
	struct FGameplayTag AlertLevelUnawareTag; // 0x5fd8 (0x4)
	struct FGameplayTag AlertLevelAlertedTag; // 0x5fdc (0x4)
	struct FGameplayTag AlertLevelAggressiveTag; // 0x5fe0 (0x4)
	struct FGameplayTag TCDisguiseTag; // 0x5fe4 (0x4)
	class UClass* GERemoveDisguise; // 0x5fe8 (0x8)
	class UFortAbilitySet* HitReactAbilitySet; // 0x5ff0 (0x8)
	class UAnimMontage* DefaultFullbodyHitReactionMontage; // 0x5ff8 (0x8)
	class UFortPatrolAnimAsset* CurrentPatrolAnimAsset; // 0x6000 (0x8)
	class UClass* PatrolLayerAnimBP; // 0x6008 (0x8)
	struct TArray<struct FFortPatrolAnimSetWeaponPair> PatrolAnimSetPairs; // 0x6010 (0x10)
	bool bShouldDoFullAnimationUpdate; // 0x6020 (0x1)
	unsigned char unreflected_6021[0x3]; // 0x6021 (0x3) 
	struct FActiveGameplayEffectHandle* GEDuelHandle; // 0x6024 (0x8)
	unsigned char unreflected_602c[0x4]; // 0x602c (0x4) 
	class UClass* GEDuelTag; // 0x6030 (0x8)
	class AFortPlayerPawn* Challenger; // 0x6038 (0x8)
	class UClass* OverrideLayerAnimBP; // 0x6040 (0x8)
	class UFortPatrolAnimAsset* FallbackPatrolAnimAsset; // 0x6048 (0x8)
	bool QuantizeVOToMusic; // 0x6050 (0x1)
	unsigned char unreflected_6051[0x7]; // 0x6051 (0x7) 
	struct FQuartzQuantizationBoundary QuantizationBoundary; // 0x6058 (0x20)
	struct FName VOQuantizationClockName; // 0x6078 (0x4)
	bool bIsInVehicleThatSupportsNoAlertState; // 0x607c (0x1)
	unsigned char unreflected_607d[0x3]; // 0x607d (0x3) 
	struct FActiveGameplayEffectHandle* GEQuestConvertedHandle; // 0x6080 (0x8)
	class UClass* GEQuestConvertedHireNPC; // 0x6088 (0x8)
	class USoundBase* DeathFXSound; // 0x6090 (0x8)
	class AFortPawn* PawnConverter; // 0x6098 (0x8)
	struct FGameplayTagContainer TagsToApplyOnConvertedPawn; // 0x60a0 (0x20)
	struct FGameplayTagContainer TagsToApplyOnConvertingPawn; // 0x60c0 (0x20)
	class USoundLibrary* PawnSoundLibrary; // 0x60e0 (0x8)

	/* Functions */

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.SoundLibrarySetup (Has no native function)
	void SoundLibrarySetup(bool& IsAdding, class USoundLibrarySubsystem*& CallFuncGetWorldSubsystemReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsValidReturnValue2); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.HandlePawnUnconverted (Has no native function)
	void HandlePawnUnconverted(class AFortPawn*& UnconvertedPawn, bool& CallFuncRemoveLooseGameplayTagsReturnValue, bool& CallFuncRemoveLooseGameplayTagsReturnValue1, bool& CallFuncIsValidReturnValue, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncRemoveActiveGameplayEffectReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.HandlePawnConverted (Has no native function)
	void HandlePawnConverted(class AFortPawn*& InstigatorPawn, class AFortPawn*& ConvertedPawn, bool& CallFuncAddLooseGameplayTagsReturnValue, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue, bool& CallFuncAddLooseGameplayTagsReturnValue1, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.PlayAlertLevelVO (Has no native function)
	void PlayAlertLevelVO(enum EAlertLevel& OldAlertLevel, enum EAlertLevel& NewAlertLevel, enum EAlertLevel& OldAlertLevelLocal, bool& TempboolVariable, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncEqualEqualByteByteReturnValue1, bool& CallFuncEqualEqualByteByteReturnValue2, bool& CallFuncBooleanORReturnValue, bool& CallFuncEqualEqualByteByteReturnValue3, enum EAlertLevel& TempbyteVariable, bool& TempboolVariable1, bool& TempboolVariable2, bool& TempboolVariable3, bool& TempboolVariable4, bool& TempboolVariable5, enum EAlertLevel& TempbyteVariable1, bool& TempboolVariable6, bool& TempboolVariable7, bool& TempboolVariable8, bool& TempboolVariable9, bool& TempboolVariable10, enum EAlertLevel& TempbyteVariable2, bool& TempboolVariable11, bool& TempboolVariable12, bool& TempboolVariable13, bool& TempboolVariable14, bool& TempboolVariable15, bool& TempboolVariable16, bool& K2NodeSelectDefault, bool& K2NodeSelectDefault1, bool& TempboolVariable17, bool& K2NodeSelectDefault2, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue, bool& CallFuncIsDeadReturnValue, enum EAlertLevel& TempbyteVariable3, bool& CallFuncBooleanORReturnValue1, bool& CallFuncBooleanORReturnValue2, bool& TempboolVariable18, bool& TempboolVariable19, class UAudioComponent*& CallFuncPlayVoiceComponentSoundByTagAudioComponent, class UAudioComponent*& CallFuncPlayVoiceComponentSoundByTagAudioComponent1, bool& K2NodeSelectDefault3, class UAudioComponent*& CallFuncPlayVoiceComponentSoundByTagAudioComponent2, class UAudioComponent*& CallFuncPlayVoiceComponentSoundByTagAudioComponent3); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.HandleAlertStateUpdates (Has no native function)
	void HandleAlertStateUpdates(bool& TempboolVariable, bool& TempboolVariable1, bool& TempboolVariable2, bool& TempboolVariable3, enum EAlertLevel& TempbyteVariable, bool& TempboolVariable4, bool& TempboolVariable5, bool& TempboolVariable6, bool& TempboolVariable7, bool& TempboolVariable8, enum EAlertLevel& TempbyteVariable1, bool& TempboolVariable9, bool& TempboolVariable10, bool& TempboolVariable11, bool& TempboolVariable12, bool& TempboolVariable13, bool& CallFuncIsDedicatedServerReturnValue, bool& CallFuncHasAuthorityReturnValue, enum EAlertLevel& TempbyteVariable2, bool& TempboolVariable14, enum EAlertLevel& TempbyteVariable3, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue, bool& CallFuncIsDeadReturnValue, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, bool& CallFuncIsValidReturnValue, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue1, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue, bool& CallFuncIsValidReturnValue1, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue1, bool& TempboolVariable15, bool& TempboolVariable16, bool& TempboolVariable17, struct FName& CallFuncMakeLiteralNameReturnValue, class UBlackboardComponent*& CallFuncGetBlackboardReturnValue, bool& CallFuncIsValidReturnValue2, class UObject*& CallFuncGetValueAsObjectReturnValue, bool& CallFuncIsValidReturnValue3, class AActor*& K2NodeDynamicCastAsActor, bool& K2NodeDynamicCastbSuccess, double& CallFuncGetDistanceBetweenActorsDistance, bool& CallFuncGreaterDoubleDoubleReturnValue, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue2, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue2, bool& K2NodeSelectDefault, bool& K2NodeSelectDefault1, bool& K2NodeSelectDefault2, bool& CallFuncBooleanORReturnValue, bool& CallFuncBooleanORReturnValue1, bool& TempboolVariable18, bool& CallFuncBooleanORReturnValue2, bool& TempboolVariable19, bool& CallFuncEqualEqualByteByteReturnValue, bool& K2NodeSelectDefault3, bool& CallFuncEqualEqualByteByteReturnValue1, bool& CallFuncBooleanORReturnValue3, bool& CallFuncEqualEqualByteByteReturnValue2, bool& CallFuncEqualEqualByteByteReturnValue3); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnRep_bIsInVehicleThatSupportsNoAlertState (Has no native function)
	void OnRepbIsInVehicleThatSupportsNoAlertState(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.UpdateAlertStateVehicleCheck (Has no native function)
	void UpdateAlertStateVehicleCheck(bool& CallFuncIsInVehicleReturnValue, struct TScriptInterface<class IFortVehicleInterface>& CallFuncGetVehicleUInterfaceReturnValue, struct FGameplayTagContainer& CallFuncGetVehicleTagsReturnValue, class UObject*& CallFuncConvInterfaceToObjectReturnValue, bool& CallFuncHasTagReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncNotPreBoolReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.GetIconPlacement (Has no native function)
	void GetIconPlacement(class AActor*& SelfActor, class AActor*& ViewingActor, struct FVector& OutLocation, struct FVector& OutExtents, struct FVector& CallFuncGetIconPlacementOutLocation, struct FVector& CallFuncGetIconPlacementOutExtents, bool& CallFuncIsValidReturnValue, bool& CallFuncDoesSocketExistReturnValue, struct FVector& CallFuncGetSocketLocationReturnValue, bool& CallFuncNotPreBoolReturnValue, struct FVector& CallFuncSelectVectorReturnValue); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ClientOnAlertLevelChanged (Has no native function)
	void ClientOnAlertLevelChanged(enum EAlertLevel& OldAlertLevel, enum EAlertLevel& NewAlertLevel); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.InitializeAnimInstanceSettings (Has no native function)
	void InitializeAnimInstanceSettings(class UAnimInstance*& CallFuncGetAnimInstanceReturnValue, class UFortPlayerAnimInstance*& K2NodeDynamicCastAsFortPlayerAnimInstance, bool& K2NodeDynamicCastbSuccess); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.UpdatePatrolAnimSet (Has no native function)
	void UpdatePatrolAnimSet(class AFortWeapon*& NewWeapon, class UFortPatrolAnimAsset*& FoundAnimAsset, class UAnimInstance*& CallFuncGetAnimInstanceReturnValue, bool& CallFuncIsValidReturnValue, class UAnimInstance*& CallFuncGetLinkedAnimLayerInstanceByClassReturnValue, class UFortPatrolAnimLayer*& K2NodeDynamicCastAsFortPatrolAnimLayer, bool& K2NodeDynamicCastbSuccess, class UFortPatrolAnimAsset*& CallFuncGetPatrolAnimSetFromWeaponReturnValue, bool& CallFuncIsValidReturnValue1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.GetCurrentFullbodyHitReactionMontage (Has no native function)
	void GetCurrentFullbodyHitReactionMontage(class UAnimMontage*& CurrentMontage, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncIsWalkingReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncBooleanANDReturnValue1, bool& CallFuncIsValidReturnValue1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.SetDataTrackerActorStateFromAlertLevel (Has no native function)
	void SetDataTrackerActorStateFromAlertLevel(enum EAlertLevel& AlertLevel, enum EAlertLevel& TempbyteVariable, struct FGameplayTag& TempstructVariable, bool& CallFuncIsDedicatedServerReturnValue, bool& CallFuncIsValidReturnValue, struct FGameplayTag& K2NodeSelectDefault); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.DataTrackerSetup (Has no native function)
	void DataTrackerSetup(bool& IsRegistering, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsDedicatedServerReturnValue, class UFortGameplayDataTrackerComponentManager*& CallFuncGetCurrentReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.SetupLootTierNameWithWeapon (Has no native function)
	void SetupLootTierNameWithWeapon(bool& TempboolVariable, bool& TempboolVariable1, bool& TempboolVariable2, bool& TempboolVariable3, bool& TempboolVariable4, class UFortWorldItemDefinition*& CallFuncGetWeaponDataAmmoWorldItemDefinitionReturnValue, class AB_Athena_Pickaxe_Generic_C*& K2NodeDynamicCastAsBAthenaPickaxeGeneric, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue, bool& CallFuncHasTagReturnValue, bool& CallFuncHasTagReturnValue1, struct FName& K2NodeSelectDefault, bool& CallFuncHasTagReturnValue2, struct FName& K2NodeSelectDefault1, bool& CallFuncHasTagReturnValue3, struct FName& K2NodeSelectDefault2, bool& CallFuncHasTagReturnValue4, struct FName& K2NodeSelectDefault3, struct FName& K2NodeSelectDefault4); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.AlertLevelChanged (Has no native function)
	void AlertLevelChanged(enum EAlertLevel& OldAlertLevel, enum EAlertLevel& InputPin); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.PlayVoiceComponentSoundByTag (Has no native function)
	void PlayVoiceComponentSoundByTag(struct FGameplayTag& SoundBankTag, class UAudioComponent*& AudioComponent, class UNPC_VoiceComponent_C*& FoundVoiceComponent, class UAudioComponent*& TempobjectVariable, bool& CallFuncEqualEqualGameplayTagReturnValue, bool& CallFuncEqualEqualGameplayTagReturnValue1, bool& CallFuncBooleanORReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsDedicatedServerReturnValue, bool& TempboolVariable, class UNPC_VoiceComponent_C*& CallFuncGetComponentByClassReturnValue, class UQuartzSubsystem*& CallFuncGetWorldSubsystemReturnValue, struct FDelegate& TempdelegateVariable, class UQuartzClockHandle*& CallFuncGetHandleForClockReturnValue, bool& CallFuncIsValidReturnValue2, class UAudioComponent*& K2NodeSelectDefault, bool& CallFuncPlayVoiceLineSuccess); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.SetAlertedStateGameplayCue (Has no native function)
	void SetAlertedStateGameplayCue(bool& Alerted, bool& Combat, int& CallFuncSelectIntReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnRep_AlertLevel (Has no native function)
	void OnRepAlertLevel(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(struct TArray<class UFortAIComponent_Voice*>& CallFuncK2GetComponentsByClassReturnValue, class UFortAIComponent_Voice*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncEqualEqualIntIntReturnValue); // (Event | Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnDBNOStateChanged_Event (Has no native function)
	void OnDBNOStateChangedEvent(class AFortPawn*& FortPawn, bool& bInIsDBNO); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ActivateAlertDBNOCleanUp (Has no native function)
	void ActivateAlertDBNOCleanUp(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnAlertLEvelCHangedEvent (Has no native function)
	void OnAlertLEvelCHangedEvent(class AFortAthenaAIBotController*& BotController, enum EAlertLevel& OldAlertLevel, enum EAlertLevel& NewAlertLevel); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.TriggerIdleVO (Has no native function)
	void TriggerIdleVO(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnWeaponEquipped (Has no native function)
	void OnWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ReceiveEndPlay (Has no native function)
	void ReceiveEndPlay(struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature (Has no native function)
	void BndEvtCapsuleComponentK2NodeComponentBoundEvent0ComponentHitSignatureDelegateSignature(class UPrimitiveComponent*& HitComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, struct FVector& NormalImpulse, struct FHitResult& Hit); // (HasOutParms | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnCharacterCustomizationCompleted (Has no native function)
	void OnCharacterCustomizationCompleted(class AFortPlayerPawn*& Pawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.GameplayCue.Player.Interrogation.Voice.PickedUp (Has no native function)
	void GameplayCuePlayerInterrogationVoicePickedUp(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnWeaponAttachmentChangedDelegate_Event_0 (Has no native function)
	void OnWeaponAttachmentChangedDelegateEvent0(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ChallengerDied (Has no native function)
	void ChallengerDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.SetChallenger (Has no native function)
	void SetChallenger(class AFortPlayerPawn*& Challenger); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.LinkPatrolAnimLayer (Has no native function)
	void LinkPatrolAnimLayer(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.LinkOverrideAnimLayer (Has no native function)
	void LinkOverrideAnimLayer(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnAnimInputEvent (Has no native function)
	void OnAnimInputEvent(class UFortAnimInputEvent*& AnimInputEvent); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ReLinkAnimLayer (Has no native function)
	void ReLinkAnimLayer(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.PlayVoiceSoundByTag (Has no native function)
	void PlayVoiceSoundByTag(struct FGameplayTag& SoundBankTag); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnEnteredVehicleEvent (Has no native function)
	void OnEnteredVehicleEvent(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnExitedVehicleEvent (Has no native function)
	void OnExitedVehicleEvent(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnDeathPlayEffects (Has no native function)
	void OnDeathPlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.BndEvt__BP_PlayerPawn_NonParticipant_ConvertComponent_K2Node_ComponentBoundEvent_1_ConvertedEvent__DelegateSignature (Has no native function)
	void BndEvtBPPlayerPawnNonParticipantConvertComponentK2NodeComponentBoundEvent1ConvertedEventDelegateSignature(class AFortPawn*& InstigatorPawn, class AFortPawn*& ConvertedPawn); // (BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature (Has no native function)
	void BndEvtConvertComponentK2NodeComponentBoundEvent1UnconvertedEventDelegateSignature(class AFortPawn*& UnconvertedPawn, enum EUnconvertReason& UnconvertReason); // (BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnExitedVehicle (Has no native function)
	void OnExitedVehicle(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ExecuteUbergraph_BP_PlayerPawn_NonParticipant (Has no native function)
	void ExecuteUbergraphBPPlayerPawnNonParticipant(int& EntryPoint, bool& TempboolVariable, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FGameplayTag& TempstructVariable, struct FGameplayTag& TempstructVariable1, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, bool& CallFuncIsValidReturnValue, class AFortPawn*& K2NodeCustomEventFortPawn, bool& K2NodeCustomEventbInIsDBNO, bool& CallFuncNotPreBoolReturnValue, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue1, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue1, class AAIController*& CallFuncGetAIControllerReturnValue, class AFortAthenaAIBotController*& K2NodeDynamicCastAsFortAthenaAIBotController, bool& K2NodeDynamicCastbSuccess, class ABP_PhoebeController_NonParticipant_C*& K2NodeDynamicCastAsBPPhoebeControllerNonParticipant, bool& K2NodeDynamicCastbSuccess1, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, bool& CallFuncIsDeadReturnValue, bool& CallFuncNotPreBoolReturnValue1, class AFortAthenaAIBotController*& K2NodeCustomEventBotController, enum EAlertLevel& K2NodeCustomEventOldAlertLevel, enum EAlertLevel& K2NodeCustomEventNewAlertLevel, class UAudioComponent*& CallFuncPlayVoiceComponentSoundByTagAudioComponent, float& CallFuncGetValueAtLevelReturnValue, float& CallFuncGetValueAtLevelReturnValue1, bool& CallFuncHasAuthorityReturnValue, double& CallFuncRandomFloatInRangeReturnValue, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, class AFortWeapon*& K2NodeEventNewWeapon, class AFortWeapon*& K2NodeEventPrevWeapon, struct TEnumAsByte<EEndPlayReason>& K2NodeEventEndPlayReason, class UPrimitiveComponent*& K2NodeComponentBoundEventHitComponent, class AActor*& K2NodeComponentBoundEventOtherActor, class UPrimitiveComponent*& K2NodeComponentBoundEventOtherComp, struct FVector& K2NodeComponentBoundEventNormalImpulse, struct FHitResult& K2NodeComponentBoundEventHit, bool& CallFuncEqualEqualByteByteReturnValue, class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess2, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue2, struct FGameplayTag& K2NodeSelectDefault, class UAudioComponent*& CallFuncPlayVoiceComponentSoundByTagAudioComponent1, bool& CallFuncNotEqualObjectObjectReturnValue, bool& TempboolVariable1, bool& TempboolVariable2, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToTargetReturnValue, struct TScriptInterface<class IAbilitySystemInterface>& CallFuncEquipFortAbilitySetAbilitySystemInterfaceActorCastInput, struct FFortAbilitySetHandle& CallFuncEquipFortAbilitySetReturnValue, class AFortPlayerPawn*& K2NodeEventPawn, bool& CallFuncIsDedicatedServerReturnValue, bool& CallFuncOnSameTeamReturnValue, class UAudioComponent*& CallFuncPlayVoiceComponentSoundByTagAudioComponent2, enum EAlertLevel& TempbyteVariable, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters, class AFortWeapon*& K2NodeCustomEventNewWeapon, class AFortWeapon*& K2NodeCustomEventPrevWeapon, class AActor*& K2NodeCustomEventDamagedActor, float& K2NodeCustomEventDamage, class AController*& K2NodeCustomEventInstigatedBy, class AActor*& K2NodeCustomEventDamageCauser, struct FVector& K2NodeCustomEventHitLocation, class UPrimitiveComponent*& K2NodeCustomEventFHitComponent, struct FName& K2NodeCustomEventBoneName, struct FVector& K2NodeCustomEventMomentum, class AFortPlayerPawn*& K2NodeCustomEventChallenger, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue3, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue2, bool& CallFuncRemoveActiveGameplayEffectReturnValue, class UFortAnimInputEvent*& K2NodeEventAnimInputEvent, class UFortAnimInputEvent_AnimClass*& K2NodeDynamicCastAsFortAnimInputEventAnimClass, bool& K2NodeDynamicCastbSuccess3, bool& CallFuncIsNamedReturnValue, bool& CallFuncIsNamedReturnValue1, bool& CallFuncHasAuthorityReturnValue1, bool& CallFuncIsValidClassReturnValue, struct FGameplayTag& K2NodeEventSoundBankTag, class UAudioComponent*& CallFuncPlayVoiceComponentSoundByTagAudioComponent3, bool& CallFuncHasMatchingGameplayTagReturnValue1, bool& TempboolVariable3, bool& TempboolVariable4, bool& TempboolVariable5, bool& K2NodeSelectDefault1, float& K2NodeEventDamage, struct FGameplayTagContainer& K2NodeEventDamageTags, struct FVector& K2NodeEventMomentum, struct FHitResult& K2NodeEventHitInfo, class AFortPawn*& K2NodeEventInstigatedBy, class AActor*& K2NodeEventDamageCauser, struct FGameplayEffectContextHandle& K2NodeEventEffectContext, bool& CallFuncBooleanANDReturnValue, class UAudioComponent*& CallFuncPlayVoiceComponentSoundByTagAudioComponent4, class AFortPawn*& K2NodeComponentBoundEventInstigatorPawn, class AFortPawn*& K2NodeComponentBoundEventConvertedPawn, bool& CallFuncHasAuthorityReturnValue2, class AFortPawn*& K2NodeComponentBoundEventUnconvertedPawn, enum EUnconvertReason& K2NodeComponentBoundEventUnconvertReason, struct FVector& CallFuncK2GetActorLocationReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, double& CallFuncRandomFloatInRangeMinImplicitCast, double& CallFuncRandomFloatInRangeMaxImplicitCast, float& CallFuncK2SetTimerDelegateTimeImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

