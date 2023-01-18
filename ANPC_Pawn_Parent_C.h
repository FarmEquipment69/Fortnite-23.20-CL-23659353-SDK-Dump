// BlueprintGeneratedClass /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C
// Size: 0x3aa8
class ANPC_Pawn_Parent_C : public AFortAIPawn
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x3300 (0x8)
	class UFortPawnComponent_CustomDepth* FortPawnComponentCustomDepth; // 0x3308 (0x8)
	class UCapsuleComponent* WeaponCapsuleCollision; // 0x3310 (0x8)
	class UFortTaggedNavFiltersComponent* FortTaggedNavFilters; // 0x3318 (0x8)
	class UFortActorComponent_Affiliation* FortActorComponentAffiliation; // 0x3320 (0x8)
	class USoundLibraryComponent* SoundLibraryComponent; // 0x3328 (0x8)
	class UAudioComponent* MovementAudioComponent; // 0x3330 (0x8)
	class UNPC_VoiceComponent_C* NPCVoiceComponent; // 0x3338 (0x8)
	class UAudioComponent* VOAudioComponent; // 0x3340 (0x8)
	class UFortWidgetComponent* NPCStatusWidget; // 0x3348 (0x8)
	float TimelineScaleMeshInOrOutMeshScaleAlpha9DAAC0B243D26E4160CEC3A458AE0E86; // 0x3350 (0x4)
	struct TEnumAsByte<ETimelineDirection> TimelineScaleMeshInOrOutDirection9DAAC0B243D26E4160CEC3A458AE0E86; // 0x3354 (0x1)
	unsigned char unreflected_3355[0x3]; // 0x3355 (0x3) 
	class UTimelineComponent* TimelineScaleMeshInOrOut; // 0x3358 (0x8)
	class UClass* GENPCRecentlyDamaged; // 0x3360 (0x8)
	struct TEnumAsByte<Enum_NPC_AlertLevel> NPCAlertLevel; // 0x3368 (0x1)
	struct TEnumAsByte<Enum_NPC_AlertLevel> NPCAlertLevelPrevious; // 0x3369 (0x1)
	unsigned char unreflected_336a[0x6]; // 0x336a (0x6) 
	struct TMap<struct TEnumAsByte<Enum_NPC_AlertLevel>, struct FGameplayTag> NPCAlertLevelToTagMap; // 0x3370 (0x50)
	bool NPCStatusWidgetHealthBarDisabled; // 0x33c0 (0x1)
	unsigned char unreflected_33c1[0x3]; // 0x33c1 (0x3) 
	struct FGameplayTag GameplayCuePickupGrabbed; // 0x33c4 (0x4)
	enum EFortRarity NPCBestLootRarityInInventory; // 0x33c8 (0x1)
	bool NPCDebugPawn; // 0x33c9 (0x1)
	bool NPCShowInventoryRarityVisuals; // 0x33ca (0x1)
	unsigned char unreflected_33cb[0x5]; // 0x33cb (0x5) 
	double InventoryGlowDelay; // 0x33d0 (0x8)
	struct FScalableFloat NPCNumberOfInventoryItemsToDeliverHF; // 0x33d8 (0x28)
	bool NPCSpawnInvisible; // 0x3400 (0x1)
	bool NPCScaleMeshInOnSpawn; // 0x3401 (0x1)
	unsigned char unreflected_3402[0x6]; // 0x3402 (0x6) 
	struct FGameplayTagContainer TCNPCSpawnAbilityTag; // 0x3408 (0x20)
	struct FGameplayTagContainer TCNPCAlternateSpawnAbilityTag; // 0x3428 (0x20)
	bool NPCIsSpawning; // 0x3448 (0x1)
	unsigned char unreflected_3449[0x7]; // 0x3449 (0x7) 
	double NPCOriginalGravityScale; // 0x3450 (0x8)
	struct FRotator NPCOriginalRotationRate; // 0x3458 (0x18)
	bool NPCHasPawnGoal; // 0x3470 (0x1)
	unsigned char unreflected_3471[0x7]; // 0x3471 (0x7) 
	class AActor* NPCPawnGoalActor; // 0x3478 (0x8)
	struct FScalableFloat NPCNumberOfInventoryItemsToConsumeBeforeFullHF; // 0x3480 (0x28)
	bool NPCPawnIsDestroyingBuildingForNavigation; // 0x34a8 (0x1)
	unsigned char unreflected_34a9[0x7]; // 0x34a9 (0x7) 
	struct FScalableFloat MaxIdleVODelay; // 0x34b0 (0x28)
	struct FScalableFloat MinIdleVODelay; // 0x34d8 (0x28)
	struct FScalableFloat NPCDeathDropLootDelay; // 0x3500 (0x28)
	struct FName NPCDeathDropLootTierGroupName; // 0x3528 (0x4)
	unsigned char unreflected_352c[0x4]; // 0x352c (0x4) 
	struct FGameplayTagContainer NPCDeathDropLootRequiredDamageTags; // 0x3530 (0x20)
	struct FGameplayTagContainer NPCDeathDropLootForbiddenDamageTags; // 0x3550 (0x20)
	struct FGameplayTagContainer GrantStartingItemsAbilityTC; // 0x3570 (0x20)
	bool NPCHasItemInInventory; // 0x3590 (0x1)
	unsigned char unreflected_3591[0x3]; // 0x3591 (0x3) 
	struct FGameplayTag VoiceTagFullAlertIdle; // 0x3594 (0x4)
	struct FGameplayTag VoiceTagIdle; // 0x3598 (0x4)
	struct FGameplayTag VoiceTagReturnToIdle; // 0x359c (0x4)
	struct FGameplayTag VoiceTagLostTarget; // 0x35a0 (0x4)
	struct FGameplayTag VoiceTagSuspicious; // 0x35a4 (0x4)
	struct FGameplayTag VoiceTagFullAlert; // 0x35a8 (0x4)
	unsigned char unreflected_35ac[0x4]; // 0x35ac (0x4) 
	struct TArray<struct FStruct_NPC_TargetSlots> NPCTargetSlotsHF; // 0x35b0 (0x10)
	bool NPCDamageCanCancelIntroPhase; // 0x35c0 (0x1)
	unsigned char unreflected_35c1[0x7]; // 0x35c1 (0x7) 
	struct FGameplayTagQuery TQNPCDamageTagsThatCanCancelIntroPhase; // 0x35c8 (0x48)
	class UClass* GENPCIntroPhaseBehaviorCooldown; // 0x3610 (0x8)
	struct FGameplayTagContainer TCIntroBehaviorActive; // 0x3618 (0x20)
	bool DebugNPCAlertLevelForced; // 0x3638 (0x1)
	bool NPCPawnCanInteractInternal; // 0x3639 (0x1)
	unsigned char unreflected_363a[0x6]; // 0x363a (0x6) 
	struct FScalableFloat NPCPrimtiveDataFloatSetRandomlyInRange; // 0x3640 (0x28)
	struct FScalableFloat NPCPrimtiveDataFloatIndexHF; // 0x3668 (0x28)
	struct FScalableFloat NPCPrimtiveDataFloatMinRangeHF; // 0x3690 (0x28)
	struct FScalableFloat NPCPrimtiveDataFloatMaxRangeHF; // 0x36b8 (0x28)
	class AActor* NPCLeader; // 0x36e0 (0x8)
	struct FGameplayTag GameplayCueLeaderSet; // 0x36e8 (0x4)
	unsigned char unreflected_36ec[0x4]; // 0x36ec (0x4) 
	double NPCSkeletalMeshIndex; // 0x36f0 (0x8)
	class USoundBase* TamedSound; // 0x36f8 (0x8)
	class UAudioComponent* StateChangeSound; // 0x3700 (0x8)
	struct FScalableFloat NPCShouldDespawnFromStormHF; // 0x3708 (0x28)
	struct FScalableFloat NPCDespawnTimerHF; // 0x3730 (0x28)
	struct FGameplayTag NPCDespawnGameplayTag; // 0x3758 (0x4)
	unsigned char unreflected_375c[0x4]; // 0x375c (0x4) 
	struct FTimerHandle* NPCTestIsInSafeZoneTimer; // 0x3760 (0x8)
	struct FTimerHandle* NPCDespawnFromStormTimer; // 0x3768 (0x8)
	bool NPCisTryingToDespawn; // 0x3770 (0x1)
	unsigned char unreflected_3771[0x3]; // 0x3771 (0x3) 
	struct FGameplayTag NPCResetIntroGameplayTags; // 0x3774 (0x4)
	double SelectedPrimitiveDataFloat; // 0x3778 (0x8)
	struct FGameplayTag GameplayCueDeath; // 0x3780 (0x4)
	unsigned char unreflected_3784[0x4]; // 0x3784 (0x4) 
	struct TArray<class UMaterialInterface*> OGMaterials; // 0x3788 (0x10)
	bool NPCApplyGEforSwimming; // 0x3798 (0x1)
	unsigned char unreflected_3799[0x7]; // 0x3799 (0x7) 
	class UClass* NPCGEClassToApplyForSwimming; // 0x37a0 (0x8)
	bool NPCApplyWaterEnterExitBurstGC; // 0x37a8 (0x1)
	unsigned char unreflected_37a9[0x3]; // 0x37a9 (0x3) 
	struct FActiveGameplayEffectHandle* NPCGEAppliedForSwimming; // 0x37ac (0x8)
	struct FName GoalActorBBKey; // 0x37b4 (0x4)
	struct FGameplayTag GameplayCueLureInterest; // 0x37b8 (0x4)
	unsigned char unreflected_37bc[0x4]; // 0x37bc (0x4) 
	class UObject* NPCPreviousLureGoal; // 0x37c0 (0x8)
	struct FGameplayTag ExitWater; // 0x37c8 (0x4)
	struct FGameplayTag EnterWater; // 0x37cc (0x4)
	struct FScalableFloat NPCMaxDistanceFromDamagedNPCToDrawHeallthBarHF; // 0x37d0 (0x28)
	struct FScalableFloat NPCHealthBarHideTimeAfterDeathHF; // 0x37f8 (0x28)
	struct FScalableFloat NPCPlayEffectWhenLuredHF; // 0x3820 (0x28)
	struct FScalableFloat NPCPawnCanInteractHF; // 0x3848 (0x28)
	struct FScalableFloat NPCAllowInteractOnlyWhenUnawareHF; // 0x3870 (0x28)
	struct FScalableFloat NPCAllowInteractWhenHasLeaderHF; // 0x3898 (0x28)
	struct FScalableFloat NPCAllowDrownInShallowWaterHF; // 0x38c0 (0x28)
	bool NPCIsInventoryInitialized; // 0x38e8 (0x1)
	unsigned char unreflected_38e9[0x3]; // 0x38e9 (0x3) 
	float LeaderClearedCueDelay; // 0x38ec (0x4)
	struct FGameplayTag GameplayCueLeaderCleared; // 0x38f0 (0x4)
	bool isGCForLeaderSetLooping; // 0x38f4 (0x1)
	unsigned char unreflected_38f5[0x3]; // 0x38f5 (0x3) 
	struct FGameplayTag NPCDeathByStormTag; // 0x38f8 (0x4)
	bool NPCTryDespawnAbility; // 0x38fc (0x1)
	unsigned char unreflected_38fd[0x3]; // 0x38fd (0x3) 
	struct FActiveGameplayEffectHandle* GeOutsideSafeZoneDamageHandle; // 0x3900 (0x8)
	bool IsGEStormDamageInit; // 0x3908 (0x1)
	bool NPCMeshScalingInProgress; // 0x3909 (0x1)
	bool NPCDisableCapsuleOverlapsWhenScalingOut; // 0x390a (0x1)
	unsigned char unreflected_390b[0x5]; // 0x390b (0x5) 
	struct FVector NPCOriginalMeshScale; // 0x3910 (0x18)
	struct FMulticastInlineDelegate NPCScaleMeshInCompleted; // 0x3928 (0x10)
	struct FMulticastInlineDelegate NPCScaleMeshOutCompleted; // 0x3938 (0x10)
	bool NPCCanDropLoot; // 0x3948 (0x1)
	unsigned char unreflected_3949[0x7]; // 0x3949 (0x7) 
	struct FScalableFloat NPCStaleDespawnTestDistanceHF; // 0x3950 (0x28)
	struct FScalableFloat NPCStaleDespawnTimeThresholdHF; // 0x3978 (0x28)
	double NPCLastNonStaleCheckTime; // 0x39a0 (0x8)
	bool bCanBeDamagedByNullInstigator; // 0x39a8 (0x1)
	bool IsEnteringWater; // 0x39a9 (0x1)
	unsigned char unreflected_39aa[0x6]; // 0x39aa (0x6) 
	struct FMulticastInlineDelegate NPCPawnInteractWithDispatcher; // 0x39b0 (0x10)
	bool NPCDynamicBlockConversionOnInteract; // 0x39c0 (0x1)
	bool NPCTempInteractOverride; // 0x39c1 (0x1)
	unsigned char unreflected_39c2[0x6]; // 0x39c2 (0x6) 
	class USoundBase* HeadShotSound; // 0x39c8 (0x8)
	struct FName HeadshotFXSocket; // 0x39d0 (0x4)
	bool UseHeadShotFX; // 0x39d4 (0x1)
	unsigned char unreflected_39d5[0x3]; // 0x39d5 (0x3) 
	struct FGameplayTagContainer TCWeaponTypesAllowedForHeadshotFX; // 0x39d8 (0x20)
	bool AllowHeadshot; // 0x39f8 (0x1)
	unsigned char unreflected_39f9[0x7]; // 0x39f9 (0x7) 
	double AdditiveHitReactRetriggerDelay; // 0x3a00 (0x8)
	class UAnimMontage* AdditiveHitReactMontage; // 0x3a08 (0x8)
	class USoundBase* DeathNormalSound; // 0x3a10 (0x8)
	class UParticleSystem* HeadshotFXEmitterTemplate; // 0x3a18 (0x8)
	struct TArray<class USoundLibrary*> SoundLibsDefault; // 0x3a20 (0x10)
	struct TArray<class USoundLibrary*> SoundLibsAlert; // 0x3a30 (0x10)
	class USoundLibrary* CurrentSoundLib; // 0x3a40 (0x8)
	struct TArray<class USoundLibrary*> SoundLibsAggressive; // 0x3a48 (0x10)
	struct TArray<class USoundLibrary*> SoundLibsFoley; // 0x3a58 (0x10)
	struct TArray<class USoundLibrary*> SoundLibsFoleyWater; // 0x3a68 (0x10)
	class USoundLibrary* CurrentFoleyLib; // 0x3a78 (0x8)
	double CustomDepthUpdateRate; // 0x3a80 (0x8)
	class UClass* Class; // 0x3a88 (0x8)
	class UClass* GEConverted; // 0x3a90 (0x8)
	struct FActiveGameplayEffectHandle* GEConvertedHandle; // 0x3a98 (0x8)
	double NPCDeathTime; // 0x3aa0 (0x8)

	/* Functions */

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.Orphaned (Has no native function)
	void Orphaned(bool& IsOrphaned, class AFortPawn*& AttachedPawn); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.TryShowHealthBar (Has no native function)
	void TryShowHealthBar(bool& TempboolTrueifbreakwashitVariable, int& TempintArrayIndexVariable, bool& CallFuncNotPreBoolReturnValue, int& TempintLoopCounterVariable, bool& CallFuncIsValidReturnValue, class UUserWidget*& CallFuncGetUserWidgetObjectReturnValue, class UNPCStatusWidget_C*& K2NodeDynamicCastAsNPCStatusWidget, bool& K2NodeDynamicCastbSuccess, int& CallFuncAddIntIntReturnValue, struct TArray<class AFortPlayerController*>& CallFuncGetLocalFortPlayerControllersReturnValue, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat, class AFortPlayerController*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, class APawn*& CallFuncK2GetPawnReturnValue, bool& CallFuncLessIntIntReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncNotPreBoolReturnValue1, bool& CallFuncNotPreBoolReturnValue2, double& CallFuncGetDistanceBetweenActorsDistance, float& CallFuncGetMaxHealthReturnValue, bool& CallFuncLessDoubleDoubleReturnValue, float& CallFuncGetHealthReturnValue, bool& CallFuncBooleanANDReturnValue1, double& CallFuncDivideDoubleDoubleReturnValue, bool& CallFuncBooleanANDReturnValue2, double& CallFuncDivideDoubleDoubleBImplicitCast, double& CallFuncDivideDoubleDoubleAImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC Death Time (Has no native function)
	void OnRepNPCDeathTime(bool& CallFuncIsDedicatedServerReturnValue); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.PlayStateChangeAudio (Has no native function)
	void PlayStateChangeAudio(struct TEnumAsByte<Enum_NPC_AlertLevel>& Index); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.IsConverted (Has no native function)
	void IsConverted(bool& IsConverted, class UFortPawnComponent_Convert*& CallFuncGetComponentByClassReturnValue, class AFortPlayerPawn*& CallFuncGetConverterPawnReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GhostCollisionSettings (Has no native function)
	void NPCGhostCollisionSettings(bool& NoCollisionForRanged, bool& NoCollisionForMelee, bool& NoCollisionForProjectiles, bool& OnlyOverlapCollisionForPawns, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsValidReturnValue2, bool& CallFuncIsValidReturnValue3, bool& CallFuncIsValidReturnValue4, bool& CallFuncIsValidReturnValue5, bool& CallFuncIsValidReturnValue6, bool& CallFuncIsValidReturnValue7, bool& CallFuncIsValidReturnValue8, bool& CallFuncIsValidReturnValue9); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.CanUpdateSoundLib (Has no native function)
	bool CanUpdateSoundLib(struct TArray<class USoundLibrary*>& TargetArray); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.PlayAdditiveHitReacts (Has no native function)
	void PlayAdditiveHitReacts(struct FVector& HitDirection, class UAnimMontage*& AnimMontage); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC DamageRemovesIdlePhaseTagGE (Has no native function)
	void NPCDamageRemovesIdlePhaseTagGE(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.GetSoundFoleyLibrary (Has no native function)
	void GetSoundFoleyLibrary(class USoundLibrary*& CallFuncArrayGetItem, bool& CallFuncNotEqualObjectObjectReturnValue, class USoundLibrary*& CallFuncArrayGetItem1, class USoundLibrarySubsystem*& CallFuncGetWorldSubsystemReturnValue, class USoundLibrarySubsystem*& CallFuncGetWorldSubsystemReturnValue1, bool& CallFuncIsValidReturnValue, class USoundLibrary*& CallFuncArrayGetItem2, class USoundLibrarySubsystem*& CallFuncGetWorldSubsystemReturnValue2, class USoundLibrary*& CallFuncArrayGetItem3, bool& CallFuncNotEqualObjectObjectReturnValue1, bool& CallFuncArrayIsValidIndexReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC CanBeInteractedWith (Has no native function)
	void NPCCanBeInteractedWith(bool& CanInteract); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC CheckForDespawnIfStaleToPlayers (Has no native function)
	void NPCCheckForDespawnIfStaleToPlayers(class AFortPlayerPawn*& ClosestFortPlayerPawn, bool& CallFuncIsValidReturnValue, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool1, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded1, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat1, bool& CallFuncGreaterDoubleDoubleReturnValue1, bool& CallFuncGreaterDoubleDoubleReturnValue2, bool& CallFuncBooleanANDReturnValue, double& CallFuncGetGameTimeInSecondsReturnValue, double& CallFuncGetGameTimeInSecondsReturnValue1, double& CallFuncSubtractDoubleDoubleReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue3, double& CallFuncGetDistanceBetweenActorsDistance, bool& CallFuncGreaterDoubleDoubleReturnValue4); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetCanDropLoot (Has no native function)
	void NPCSetCanDropLoot(bool& CanDropLoot); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetSafeZonePhase (Has no native function)
	void NPCGetSafeZonePhase(int& SafeZonePhase, class AGameStateBase*& CallFuncGetGameStateReturnValue, class AAthena_GameState_C*& K2NodeDynamicCastAsAthenaGameState, bool& K2NodeDynamicCastbSuccess, int& CallFuncGetSafeZonePhaseReturnValue, bool& CallFuncIsValidReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC Leader (Has no native function)
	void OnRepNPCLeader(bool& CallFuncIsGameplayTagValidReturnValue, bool& CallFuncIsValidReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, float& CallFuncMakeGameplayCueParametersRawMagnitudeImplicitCast); // (HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.Play Water Splash at Water Surface (Has no native function)
	void PlayWaterSplashatWaterSurface(class AFortWaterBodyActor*& WaterBody, bool& EnterWater, struct FVector& CallFuncK2GetActorLocationReturnValue, bool& TempboolVariable, struct FWaterSurfaceInfo& CallFuncGetWaterSurfaceInfoStructOutWaterSurfaceInfo, float& CallFuncConvIntToFloatReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, struct FGameplayTag& K2NodeSelectDefault); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.ResetMaterialFromDeath (Has no native function)
	void ResetMaterialFromDeath(int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, class UMaterialInterface*& CallFuncArrayGetItem, struct TArray<class UMaterialInterface*>& CallFuncGetMaterialsReturnValue, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_SelectedPrimitiveDataFloat (Has no native function)
	void OnRepSelectedPrimitiveDataFloat(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.CheckSoundLibraryRemoved (Has no native function)
	void CheckSoundLibraryRemoved(struct TArray<class USoundLibrary*>& Libraries, bool& CallFuncArrayIsValidIndexReturnValue, class USoundLibrarySubsystem*& CallFuncGetWorldSubsystemReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.CheckSoundLibraryAdded (Has no native function)
	void CheckSoundLibraryAdded(struct TArray<class USoundLibrary*>& Libraries, class USoundLibrarySubsystem*& CallFuncGetWorldSubsystemReturnValue, class USoundLibrary*& CallFuncArrayGetItem, bool& CallFuncArrayIsValidIndexReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.UpdateSoundLibrary (Has no native function)
	void UpdateSoundLibrary(struct TEnumAsByte<Enum_NPC_AlertLevel>& AlertLevel, bool& K2NodeSwitchEnumCmpSuccess, bool& CallFuncCanUpdateSoundLibReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncCanUpdateSoundLibReturnValue1, bool& CallFuncCanUpdateSoundLibReturnValue2, class USoundLibrarySubsystem*& CallFuncGetWorldSubsystemReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsValidReturnValue2); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ClearOutTargetSlots (Has no native function)
	void NPCClearOutTargetSlots(struct FGameplayTagContainer& CallFuncMakeLiteralGameplayTagContainerReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncGetOwnedGameplayTagsselfCastInput, struct FGameplayTagContainer& CallFuncGetOwnedGameplayTagsTagContainer, bool& CallFuncHasTagReturnValue, bool& CallFuncHasTagReturnValue1, bool& CallFuncHasAnyTagsReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC UpdateInteract (Has no native function)
	void NPCUpdateInteract(bool& CanInteract, bool& EnabledInteract, bool& wasInteractEnabled, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat, bool& CallFuncNPCHasLeaderHasLeader, class AActor*& CallFuncNPCHasLeaderLeader, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncBooleanORReturnValue, bool& CallFuncBooleanORReturnValue1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC HasLeader? (Has no native function)
	void NPCHasLeader(bool& HasLeader, class AActor*& Leader, bool& CallFuncIsValidReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetLeader (Has no native function)
	void NPCSetLeader(class AActor*& Leader, bool& Success, class AActor*& LeaderSet, bool& CallFuncNPCHasLeaderHasLeader, class AActor*& CallFuncNPCHasLeaderLeader, struct FName& CallFuncMakeLiteralNameReturnValue, class UBlackboardComponent*& CallFuncGetBlackboardReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC AttemptToSetLeader (Has no native function)
	void NPCAttemptToSetLeader(class AActor*& PossibleLeader, enum EUnconvertReason& UnconvertReason, bool& CallFuncNPCSetLeaderSuccess, class AActor*& CallFuncNPCSetLeaderLeaderSet); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.SetPrimitiveDataFloat (Has no native function)
	void SetPrimitiveDataFloat(bool& CallFuncNPCGetScalableFloatHotfixValueAsBool, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat, float& CallFuncSetCustomPrimitiveDataFloatValueImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.SelectPrimitiveDataFloat (Has no native function)
	void SelectPrimitiveDataFloat(bool& CallFuncNPCGetScalableFloatHotfixValueAsBool, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool1, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded1, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat1, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool2, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded2, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat2, double& CallFuncRandomFloatInRangeReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.StoreOriginalGravityAndRotation (Has no native function)
	void StoreOriginalGravityAndRotation(double& K2NodeVariableSetNPCOriginalGravityScaleImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC DisableIntroPhaseBehavior (Has no native function)
	void NPCDisableIntroPhaseBehavior(bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidClassReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToTargetReturnValue, int& CallFuncRemoveActiveEffectsWithAppliedTagsReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC DamageAttemptDisableIntroPhaseBehavior (Has no native function)
	void NPCDamageAttemptDisableIntroPhaseBehavior(struct FGameplayTagContainer& DamageTags, bool& CallFuncHasAuthorityReturnValue, bool& CallFuncDoesContainerMatchTagQueryReturnValue, bool& CallFuncIsTagQueryEmptyReturnValue, bool& CallFuncNotPreBoolReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC TargetSlotIsUsingOverride (Has no native function)
	void NPCTargetSlotIsUsingOverride(struct TEnumAsByte<Enum_NPC_TargetSlots>& TargetSlotType, class AActor*& TargetWeWantToSlotOnto, bool& Override, class UClass*& NPCTargetSlotOverrideGE, int& CallFuncNPCTargetSlotInfoTargetSlotCount, int& CallFuncNPCTargetSlotInfoTargetSlotMax, int& CallFuncNPCTargetSlotInfoNPCTargetSlotsRequired, bool& CallFuncNPCTargetSlotInfoTargetSlotsMaxOrMore, bool& CallFuncNPCTargetSlotInfoTargetSlotCountIsExactlyMax, bool& CallFuncNPCTargetSlotInfoNPCIsTargetSlotOwner, bool& CallFuncNPCTargetSlotInfoNPCHasSpaceToSlotOnTarget, struct TEnumAsByte<Enum_NPC_TargetSlots>& CallFuncNPCTargetSlotInfoTargetSlotTypeOut, class UClass*& CallFuncNPCTargetSlotInfoTargetSlotCountingGE, struct FScalableFloat& CallFuncNPCTargetSlotInfoAITargetSlotSizeHF, struct FScalableFloat& CallFuncNPCTargetSlotInfoAITargetSlotDurationHF, class UClass*& CallFuncNPCTargetSlotInfoTargetSlotOverrideGE, class UClass*& CallFuncNPCTargetSlotInfoTargetSlotOwnerGE, class UClass*& CallFuncNPCTargetSlotInfoTargetSlotCountingMaxedGE, bool& CallFuncIsValidClassReturnValue, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, bool& CallFuncIsValidReturnValue, struct TArray<class UClass*>& K2NodeMakeArrayArray, int& CallFuncGetTotalGameplayEffectCountFinalEffectCount, bool& CallFuncNotEqualIntIntReturnValue); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC TargetSlotInfo (Has no native function)
	void NPCTargetSlotInfo(struct TEnumAsByte<Enum_NPC_TargetSlots>& TargetSlotType, class AActor*& TargetWeWantToSlotOnto, int& TargetSlotCount, int& TargetSlotMax, int& NPCTargetSlotsRequired, bool& TargetSlotsMaxOrMore, bool& TargetSlotCountIsExactlyMax, bool& NPCIsTargetSlotOwner, bool& NPCHasSpaceToSlotOnTarget, struct TEnumAsByte<Enum_NPC_TargetSlots>& TargetSlotTypeOut, class UClass*& TargetSlotCountingGE, struct FScalableFloat& AITargetSlotSizeHF, struct FScalableFloat& AITargetSlotDurationHF, class UClass*& TargetSlotOverrideGE, class UClass*& TargetSlotOwnerGE, class UClass*& TargetSlotCountingMaxedGE, class UClass*& NPCTargetSlotCountingMaxedGE, class UClass*& NPCTargetSlotOwnerGE, class UClass*& NPCTargetSlotOverrideGE, struct FScalableFloat& NPCAITargetSlotDurationHF, struct FScalableFloat& NPCAITargetSlotSizeHF, class UClass*& NPCTargetSlotCountingGE, bool& TempboolTrueifbreakwashitVariable, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncNotPreBoolReturnValue, int& TempintArrayIndexVariable, struct TArray<class UClass*>& K2NodeMakeArrayArray, int& CallFuncGetTotalGameplayEffectCountFinalEffectCount, bool& CallFuncGreaterIntIntReturnValue, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat, struct TArray<class UClass*>& K2NodeMakeArrayArray1, bool& CallFuncIsValidClassReturnValue, int& CallFuncGetTotalGameplayEffectCountFinalEffectCount1, int& TempintLoopCounterVariable, struct FStruct_NPC_TargetSlots& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, int& CallFuncAddIntIntReturnValue, int& CallFuncMakeLiteralIntReturnValue, int& CallFuncSubtractIntIntReturnValue, bool& CallFuncGreaterEqualIntIntReturnValue, bool& CallFuncLessEqualIntIntReturnValue, bool& CallFuncEqualEqualIntIntReturnValue); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC CheckIsInSafeZone (Has no native function)
	void NPCCheckIsInSafeZone(bool& TestSucceeded, bool& isInSafeZone, struct FVector& CallFuncK2GetActorLocationReturnValue, class AGameStateBase*& CallFuncGetGameStateReturnValue, class AAthena_GameState_C*& K2NodeDynamicCastAsAthenaGameState, bool& K2NodeDynamicCastbSuccess, class AFortSafeZoneIndicator*& CallFuncGetSafeZoneIndicatorReturnValue, struct FVector& CallFuncGetSafeZoneCenterReturnValue, bool& CallFuncIsValidReturnValue, double& CallFuncVectorDistance2DSquaredReturnValue, float& CallFuncGetSafeZoneRadiusReturnValue, double& CallFuncSquareReturnValue, bool& CallFuncLessDoubleDoubleReturnValue, double& CallFuncSquareAImplicitCast); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC HandleAlertLevelVoice (Has no native function)
	void NPCHandleAlertLevelVoice(struct TEnumAsByte<Enum_NPC_AlertLevel>& TempbyteVariable, struct FGameplayTag& TempstructVariable, struct FGameplayTag& TempstructVariable1, struct FGameplayTag& TempstructVariable2, bool& CallFuncPlayVoiceLineSuccess, bool& CallFuncPlayVoiceLineSuccess1, bool& K2NodeSwitchEnumCmpSuccess, struct FGameplayTag& K2NodeSelectDefault, bool& CallFuncPlayVoiceLineSuccess2); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC TryToDropLootOnDeath (Has no native function)
	void NPCTryToDropLootOnDeath(struct FGameplayTagContainer& DamageTags, bool& CanDropLoot, bool& CanDropLootBool, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, bool& CallFuncIsInAthenaReturnValue, int& CallFuncGetLootLevelReturnValue, int& CallFuncSelectIntReturnValue, struct TArray<struct FFortItemEntry>& CallFuncPickLootDropsOutLootToDrop, bool& CallFuncPickLootDropsReturnValue, struct FFortItemEntry& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, struct TScriptInterface<class IFortInventoryOwnerInterface>& CallFuncGiveItemEntryToInventoryOwnerInventoryOwnerCastInput, bool& CallFuncGiveItemEntryToInventoryOwnerReturnValue, bool& CallFuncLessIntIntReturnValue, bool& CallFuncNotEqualNameNameReturnValue, struct FGameplayTagContainer& CallFuncMakeLiteralGameplayTagContainerReturnValue, bool& CallFuncEqualEqualGameplayTagContainerReturnValue, bool& CallFuncEqualEqualGameplayTagContainerReturnValue1, bool& CallFuncNotEqualGameplayTagContainerReturnValue, bool& CallFuncHasAnyTagsReturnValue, bool& CallFuncNotEqualGameplayTagContainerReturnValue1, bool& CallFuncBooleanANDReturnValue, bool& CallFuncHasAnyTagsReturnValue1, bool& CallFuncBooleanORReturnValue, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncBooleanANDReturnValue1, bool& CallFuncBooleanANDReturnValue2, bool& CallFuncBooleanORReturnValue1, bool& CallFuncBooleanANDReturnValue3, bool& CallFuncBooleanANDReturnValue4); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ApplyGameplayEffectWithMMRScaling (Has no native function)
	void NPCApplyGameplayEffectWithMMRScaling(class AActor*& Actor, class UClass*& GEClass, class AActor*& ApplyGeToThisActor, bool& TempboolOptionBIffalseuseOptionAVariable, bool& CallFuncIsValidReturnValue, bool& TempboolVariable, class AActor*& K2NodeSelectDefault); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetLootCollectionPhaseCompleteToBlackboard (Has no native function)
	void NPCSetLootCollectionPhaseCompleteToBlackboard(bool& LootCollectionPhaseComplete, struct FName& CallFuncMakeLiteralNameReturnValue, class UBlackboardComponent*& CallFuncGetBlackboardReturnValue, bool& CallFuncGetValueAsBoolReturnValue, bool& CallFuncNotEqualBoolBoolReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ResetOriginalRotationRate (Has no native function)
	void NPCResetOriginalRotationRate(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ResetOriginalGravityScale (Has no native function)
	void NPCResetOriginalGravityScale(float& K2NodeVariableSetGravityScaleImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetReturnGatheredLootToBlackboard (Has no native function)
	void NPCSetReturnGatheredLootToBlackboard(struct FName& CallFuncMakeLiteralNameReturnValue, bool& CallFuncNPCGetInventoryInformationHasItemInInventory, int& CallFuncNPCGetInventoryInformationTotalNumberOfInventoryItems, int& CallFuncNPCGetInventoryInformationLastInventoryItemIndex, bool& CallFuncNPCGetInventoryInformationHasEnoughItemsToDeliver, bool& CallFuncNPCGetInventoryInformationConsumedEnoughItemsToBeConsideredFull, class UBlackboardComponent*& CallFuncGetBlackboardReturnValue, bool& CallFuncGetValueAsBoolReturnValue, bool& CallFuncNotEqualBoolBoolReturnValue, bool& CallFuncNotEqualBoolBoolReturnValue1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetScalableFloatHotfixValue (Has no native function)
	void NPCGetScalableFloatHotfixValue(struct FScalableFloat& ScalableFloatHotfix, double& AtLevel, bool& AsBool, int& AsIntRounded, double& AsFloat, float& CallFuncGetValueAtLevelReturnValue, int& CallFuncRoundReturnValue, int& CallFuncRoundReturnValue1, bool& CallFuncGreaterIntIntReturnValue, bool& CallFuncGreaterIntIntReturnValue1, bool& CallFuncNPCScalableFloatIsValidValid, float& CallFuncGetValueAtLevelLevelImplicitCast, double& K2NodeFunctionResultAsFloatImplicitCast, double& K2NodeFunctionResultAsFloatImplicitCast1, double& CallFuncRoundAImplicitCast, double& CallFuncRoundAImplicitCast1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ScalableFloatIsValid (Has no native function)
	void NPCScalableFloatIsValid(struct FScalableFloat& ScalableFloat, bool& Valid, bool& CallFuncIsValidReturnValue, bool& CallFuncNotEqualNameNameReturnValue, bool& CallFuncBooleanANDReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PickupDropped (Has no native function)
	void NPCPickupDropped(class AFortPickup*& FortPickupDropped); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PickupGrabbed_Destroyed (Has no native function)
	void NPCPickupGrabbedDestroyed(class AActor*& ActorGrabbed); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PickupGrabbed (Has no native function)
	void NPCPickupGrabbed(class AFortPickup*& FortPickupGrabbed); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC BestLootRarityInInventory (Has no native function)
	void OnRepNPCBestLootRarityInInventory(bool& CallFuncIsDedicatedServerReturnValue); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SendGameplayCuePickupGrabbed (Has no native function)
	void NPCSendGameplayCuePickupGrabbed(bool& CallFuncIsDedicatedServerReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, struct FGameplayTag& CallFuncMakeLiteralGameplayTagReturnValue, bool& CallFuncIsGameplayTagValidReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PawnDebugMessage (Has no native function)
	void NPCPawnDebugMessage(struct FString& String, bool& OnlyWhenDebug, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncBooleanORReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetInventoryInformation (Has no native function)
	void NPCGetInventoryInformation(bool& HasItemInInventory, int& TotalNumberOfInventoryItems, int& LastInventoryItemIndex, bool& HasEnoughItemsToDeliver, bool& ConsumedEnoughItemsToBeConsideredFull, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool1, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded1, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat1, bool& CallFuncGreaterIntIntReturnValue, struct FString& CallFuncBuildStringBoolReturnValue, struct TScriptInterface<class IFortInventoryOwnerInterface>& CallFuncGetItemsFromInventoryOwnerInventoryOwnerCastInput, struct TArray<class UFortWorldItem*>& CallFuncGetItemsFromInventoryOwnerItems, int& CallFuncArrayLengthReturnValue, int& CallFuncArrayLastIndexReturnValue, bool& CallFuncGreaterEqualIntIntReturnValue, bool& CallFuncGreaterEqualIntIntReturnValue1, bool& CallFuncGreaterIntIntReturnValue1, bool& CallFuncBooleanANDReturnValue, struct FString& CallFuncBuildStringBoolReturnValue1, bool& CallFuncBooleanANDReturnValue1, struct FString& CallFuncBuildStringBoolReturnValue2, struct FString& CallFuncBuildStringBoolReturnValue3); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetBestLootRarityInInventory (Has no native function)
	void NPCSetBestLootRarityInInventory(enum EFortRarity& NPCBestLootRarityInInventory, enum EFortRarity& NPCBestLootRarityInventoryFound, struct FString& CallFuncConcatStrStrReturnValue, bool& CallFuncHasAuthorityReturnValue, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable, bool& CallFuncGreaterByteByteReturnValue, struct TScriptInterface<class IFortInventoryOwnerInterface>& CallFuncGetItemsFromInventoryOwnerInventoryOwnerCastInput, struct TArray<class UFortWorldItem*>& CallFuncGetItemsFromInventoryOwnerItems, struct FName& CallFuncGetEnumeratorNameReturnValue, class UFortWorldItem*& CallFuncArrayGetItem, struct FString& CallFuncBuildStringNameReturnValue, struct FText& CallFuncGetDisplayNameReturnValue, struct FString& CallFuncConvTextToStringReturnValue, enum EFortRarity& CallFuncGetRarityReturnValue, struct FString& CallFuncConcatStrStrReturnValue1, struct FName& CallFuncGetEnumeratorNameReturnValue1, struct FString& CallFuncConcatStrStrReturnValue2, struct FString& CallFuncConvNameToStringReturnValue, struct FString& CallFuncConcatStrStrReturnValue3, struct FString& CallFuncConcatStrStrReturnValue4, bool& CallFuncGreaterByteByteReturnValue1, struct FString& CallFuncConcatStrStrReturnValue5, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC_AlertLevel (Has no native function)
	void OnRepNPCAlertLevel(bool& CallFuncHasAuthorityReturnValue); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetAlertLevelInfo (Has no native function)
	void NPCGetAlertLevelInfo(struct TEnumAsByte<Enum_NPC_AlertLevel>& AlertLevel, struct FGameplayTag& AlertLevelTag, bool& ValidDataFound, struct FGameplayTag& CallFuncMapFindValue, bool& CallFuncMapFindReturnValue); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ApplyRecentlyDamagedTagGE (Has no native function)
	void NPCApplyRecentlyDamagedTagGE(class UClass*& RecentlyDamagedOverride, bool& CallFuncHasAuthorityReturnValue, bool& CallFuncIsValidClassReturnValue, bool& CallFuncIsValidClassReturnValue1, bool& CallFuncIsValidReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToTargetReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToTargetReturnValue1); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.ShouldUpdateSkeletalMesh (Has no native function)
	bool ShouldUpdateSkeletalMesh(); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(bool& CallFuncIsDedicatedServerReturnValue, bool& CallFuncIsValidReturnValue); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.Timeline_ScaleMeshInOrOut__FinishedFunc (Has no native function)
	void TimelineScaleMeshInOrOutFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.Timeline_ScaleMeshInOrOut__UpdateFunc (Has no native function)
	void TimelineScaleMeshInOrOutUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.WidgetVisibilityChanged (Has no native function)
	void WidgetVisibilityChanged(bool& bVisible); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ParentLaunchVehicle (Has no native function)
	void NPCParentLaunchVehicle(class AActor*& Vehicle, struct FVector& Velocity); // (Net | NetReliable | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.TestLoot (Has no native function)
	void TestLoot(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDeathPlayEffects (Has no native function)
	void OnDeathPlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC UpdateHealthBarComponentVisibility (Has no native function)
	void NPCUpdateHealthBarComponentVisibility(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceivePossessed (Has no native function)
	void ReceivePossessed(class AController*& NewController); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.RequestUpdateNPCAlertLevel (Has no native function)
	void RequestUpdateNPCAlertLevel(struct TEnumAsByte<Enum_NPC_AlertLevel>& NPCAlertLevel); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCAlertLevelChangedClient (Has no native function)
	void NPCAlertLevelChangedClient(struct TEnumAsByte<Enum_NPC_AlertLevel>& NPCAlertLevel); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC InitializeIdleVO (Has no native function)
	void NPCInitializeIdleVO(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.TriggerIdleVO (Has no native function)
	void TriggerIdleVO(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDeathServer (Has no native function)
	void OnDeathServer(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCEnableHealthBars (Has no native function)
	void NPCEnableHealthBars(); // (Net | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCDisableHealthBars (Has no native function)
	void NPCDisableHealthBars(); // (Net | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_AlertLevel_ForceLevel (Has no native function)
	void DebugAlertLevelForceLevel(struct TEnumAsByte<Enum_NPC_AlertLevel>& NewNPCAlertLevel); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_AlertLevel_ClearDebug (Has no native function)
	void DebugAlertLevelClearDebug(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_Invalid (Has no native function)
	void DebugForceAlertLevelInvalid(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_Unaware (Has no native function)
	void DebugForceAlertLevelUnaware(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_NA (Has no native function)
	void DebugForceAlertLevelNA(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_Alerted (Has no native function)
	void DebugForceAlertLevelAlerted(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_Aggressive (Has no native function)
	void DebugForceAlertLevelAggressive(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.HandleInteracts (Has no native function)
	void HandleInteracts(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC Pawn Interact (Has no native function)
	void NPCPawnInteract(class AFortAIPawn*& AI, class AFortPlayerController*& InteractingPlayerController, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.On NPC PawnInteractedWith (Has no native function)
	void OnNPCPawnInteractedWith(class AActor*& AIPawn, class AFortPlayerPawn*& InteractingPlayerPawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnBeginDeepWaterInteraction (Has no native function)
	void OnBeginDeepWaterInteraction(struct FVector& WaterSurfaceLocation, float& WaterDepth); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.GrantStartingItems (Has no native function)
	void GrantStartingItems(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC LeaderSet (Has no native function)
	void NPCLeaderSet(bool& Success, class AActor*& Leader, enum EUnconvertReason& UnconvertReason); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.TestIsInSafeZone (Has no native function)
	void TestIsInSafeZone(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDamageServer (Has no native function)
	void OnDamageServer(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.TriggerDeathFX (Has no native function)
	void TriggerDeathFX(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.TryToDespawnDueToStorm (Has no native function)
	void TryToDespawnDueToStorm(bool& ResetTimer); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.InitializeTestInSafeZone (Has no native function)
	void InitializeTestInSafeZone(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnEndDance (Has no native function)
	void OnEndDance(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.DespawnDueToStorm (Has no native function)
	void DespawnDueToStorm(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnBeginDance (Has no native function)
	void OnBeginDance(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.End Music Tracker (Has no native function)
	void EndMusicTracker(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.BeginMusicTracker (Has no native function)
	void BeginMusicTracker(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.StopUpdatingHealthBarWidget (Has no native function)
	void StopUpdatingHealthBarWidget(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.RemoveSoundSystemLibraries (Has no native function)
	void RemoveSoundSystemLibraries(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.AddSoundSystemLibraries (Has no native function)
	void AddSoundSystemLibraries(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.InitializeInventory (Has no native function)
	void InitializeInventory(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.StartUpdatingHleathBarWidget (Has no native function)
	void StartUpdatingHleathBarWidget(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC AlertLevelChangedServer (Has no native function)
	void NPCAlertLevelChangedServer(struct TEnumAsByte<Enum_NPC_AlertLevel>& NPCAlertLevel); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnPawnHealthChanged_Event_0 (Has no native function)
	void OnPawnHealthChangedEvent0(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnEnteredWaterBody (Has no native function)
	void OnEnteredWaterBody(class AFortWaterBodyActor*& WaterBody, bool& bIsFirstBody); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnExitedWaterBody (Has no native function)
	void OnExitedWaterBody(class AFortWaterBodyActor*& WaterBody, bool& bIsLastBody); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceiveEndPlay (Has no native function)
	void ReceiveEndPlay(struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.LuredOnServer (Has no native function)
	void LuredOnServer(struct TEnumAsByte<Enum_NPC_AlertLevel>& AlertLevel); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.LuredInterest (Has no native function)
	void LuredInterest(); // (Net | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.PlayEnterWaterSplash (Has no native function)
	void PlayEnterWaterSplash(class AFortWaterBodyActor*& WaterBody); // (Net | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.PlayExitWaterSplash (Has no native function)
	void PlayExitWaterSplash(class AFortWaterBodyActor*& WaterBody); // (Net | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.TryWaterInteractionDrown (Has no native function)
	void TryWaterInteractionDrown(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.StopTestingIsInSafeZone (Has no native function)
	void StopTestingIsInSafeZone(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCScaleMeshIn (Has no native function)
	void NPCScaleMeshIn(); // (Net | NetReliable | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCScaleMeshOut (Has no native function)
	void NPCScaleMeshOut(); // (Net | NetReliable | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.TriggerDespawnAbility (Has no native function)
	void TriggerDespawnAbility(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC MulticastGameplayCueDeath (Has no native function)
	void NPCMulticastGameplayCueDeath(); // (Net | NetReliable | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.UpdateSoundLibFoley (Has no native function)
	void UpdateSoundLibFoley(); // (Net | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDamagePlayEffects (Has no native function)
	void OnDamagePlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.AdditiveHitReactDelay (Has no native function)
	void AdditiveHitReactDelay(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.UpdateCustomDepth (Has no native function)
	void UpdateCustomDepth(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.ExecuteUbergraph_NPC_Pawn_Parent (Has no native function)
	void ExecuteUbergraphNPCPawnParent(int& EntryPoint, class UFortGameplayDataTrackerComponentManager*& CallFuncGetCurrentReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, class AActor*& K2NodeCustomEventVehicle, struct FVector& K2NodeCustomEventVelocity, enum EFortRarity& CallFuncNPCSetBestLootRarityInInventoryNPCBestLootRarityInInventory, float& K2NodeEventDamage3, struct FGameplayTagContainer& K2NodeEventDamageTags3, struct FVector& K2NodeEventMomentum3, struct FHitResult& K2NodeEventHitInfo3, class AFortPawn*& K2NodeEventInstigatedBy3, class AActor*& K2NodeEventDamageCauser3, struct FGameplayEffectContextHandle& K2NodeEventEffectContext3, class AController*& K2NodeEventNewController, struct FGameplayTagContainer& CallFuncMakeLiteralGameplayTagContainerReturnValue, bool& CallFuncNotEqualGameplayTagContainerReturnValue, struct TEnumAsByte<Enum_NPC_AlertLevel>& K2NodeCustomEventNPCAlertLevel1, bool& CallFuncNotEqualByteByteReturnValue, struct TEnumAsByte<Enum_NPC_AlertLevel>& K2NodeCustomEventNPCAlertLevel, float& CallFuncGetValueAtLevelReturnValue, float& CallFuncGetValueAtLevelReturnValue1, double& CallFuncRandomFloatInRangeReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncTryActivateAbilitiesByTagReturnValue, float& K2NodeEventDamage2, struct FGameplayTagContainer& K2NodeEventDamageTags2, struct FVector& K2NodeEventMomentum2, struct FHitResult& K2NodeEventHitInfo2, class AController*& K2NodeEventInstigatedBy2, class AActor*& K2NodeEventDamageCauser2, struct FGameplayEffectContextHandle& K2NodeEventEffectContext2, bool& CallFuncNPCTryToDropLootOnDeathCanDropLoot, bool& CallFuncIsValidReturnValue2, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat, bool& CallFuncGreaterDoubleDoubleReturnValue, class UUserWidget*& CallFuncGetUserWidgetObjectReturnValue, class UNPCStatusWidget_C*& K2NodeDynamicCastAsNPCStatusWidget, bool& K2NodeDynamicCastbSuccess, struct TEnumAsByte<Enum_NPC_AlertLevel>& K2NodeCustomEventNewNPCAlertLevel, bool& CallFuncHasAuthorityReturnValue, class AFortAIPawn*& K2NodeCustomEventAI, class AFortPlayerController*& K2NodeCustomEventInteractingPlayerController, struct TEnumAsByte<EInteractionBeingAttempted>& K2NodeCustomEventInteractionBeingAttempted, class AActor*& K2NodeCustomEventAIPawn, class AFortPlayerPawn*& K2NodeCustomEventInteractingPlayerPawn, class AFortPlayerPawn*& CallFuncGetPlayerPawnReturnValue, struct FVector& K2NodeEventWaterSurfaceLocation, float& K2NodeEventWaterDepth, bool& K2NodeCustomEventSuccess, class AActor*& K2NodeCustomEventLeader, enum EUnconvertReason& K2NodeCustomEventUnconvertReason, bool& K2NodeSwitchEnumCmpSuccess, bool& CallFuncNPCUpdateInteractEnabledInteract, bool& CallFuncNPCUpdateInteractEnabledInteract1, struct FVector& CallFuncK2GetActorLocationReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, bool& CallFuncNPCCheckIsInSafeZoneTestSucceeded, bool& CallFuncNPCCheckIsInSafeZoneisInSafeZone, float& K2NodeEventDamage1, struct FGameplayTagContainer& K2NodeEventDamageTags1, struct FVector& K2NodeEventMomentum1, struct FHitResult& K2NodeEventHitInfo1, class AController*& K2NodeEventInstigatedBy1, class AActor*& K2NodeEventDamageCauser1, struct FGameplayEffectContextHandle& K2NodeEventEffectContext1, bool& CallFuncHasAuthorityReturnValue1, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool1, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded1, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat1, struct FDelegate& K2NodeCreateDelegateOutputDelegate, double& CallFuncRandomFloatInRangeReturnValue1, bool& K2NodeCustomEventResetTimer, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, bool& TempboolVariable, struct FGameplayTag& K2NodeSelectDefault, bool& CallFuncPlayVoiceLineSuccess, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue1, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool2, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded2, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat2, bool& CallFuncK2IsValidTimerHandleReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncBooleanORReturnValue, bool& CallFuncHasAuthorityReturnValue2, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool3, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded3, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat3, bool& CallFuncBooleanANDReturnValue1, bool& K2NodeCustomEventbVisible, bool& TempboolHasBeenInitdVariable, bool& TempboolIsClosedVariable, bool& CallFuncHasAuthorityReturnValue3, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct TEnumAsByte<Enum_NPC_AlertLevel>& K2NodeCustomEventNPCAlertLevel, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue2, bool& K2NodeSwitchEnumCmpSuccess1, struct TEnumAsByte<Enum_NPC_AlertLevel>& CallFuncNPCGetAlertLevelInfoAlertLevel, struct FGameplayTag& CallFuncNPCGetAlertLevelInfoAlertLevelTag, bool& CallFuncNPCGetAlertLevelInfoValidDataFound, struct FGameplayEventData& K2NodeMakeStructGameplayEventData, struct FGameplayEventData& K2NodeMakeStructGameplayEventData1, class USoundLibrarySubsystem*& CallFuncGetWorldSubsystemReturnValue, bool& CallFuncIsValidReturnValue3, bool& CallFuncIsValidReturnValue4, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, class AFortWaterBodyActor*& K2NodeEventWaterBody1, bool& K2NodeEventbIsFirstBody, class AFortWaterBodyActor*& K2NodeEventWaterBody, bool& K2NodeEventbIsLastBody, bool& CallFuncIsDedicatedServerReturnValue, class UBlackboardComponent*& CallFuncGetBlackboardReturnValue, struct TEnumAsByte<EEndPlayReason>& K2NodeEventEndPlayReason, struct TEnumAsByte<Enum_NPC_AlertLevel>& K2NodeCustomEventAlertLevel, bool& K2NodeSwitchEnumCmpSuccess2, class UObject*& CallFuncGetValueAsObjectReturnValue, class AFortProjectileBase*& K2NodeDynamicCastAsFortProjectileBase, bool& K2NodeDynamicCastbSuccess1, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue1, class AFortPickup*& K2NodeDynamicCastAsFortPickup, bool& K2NodeDynamicCastbSuccess2, bool& CallFuncIsValidReturnValue5, bool& CallFuncIsGameplayTagValidReturnValue, bool& CallFuncNotEqualObjectObjectReturnValue, class UFortGameplayDataTrackerComponentManager*& CallFuncGetCurrentReturnValue1, bool& CallFuncIsValidReturnValue6, bool& CallFuncIsValidClassReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue, bool& CallFuncIsValidClassReturnValue1, bool& CallFuncRemoveActiveGameplayEffectReturnValue, class AFortWaterBodyActor*& K2NodeCustomEventWaterBody1, class AFortWaterBodyActor*& K2NodeCustomEventWaterBody, bool& CallFuncIsValidReturnValue7, struct FGameplayTagContainer& CallFuncMakeLiteralGameplayTagContainerReturnValue1, bool& CallFuncIsValidReturnValue8, bool& CallFuncK2IsValidTimerHandleReturnValue1, bool& CallFuncK2IsValidTimerHandleReturnValue2, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool4, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded4, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat4, bool& CallFuncIsValidReturnValue9, class UUserWidget*& CallFuncGetUserWidgetObjectReturnValue1, class UNPCStatusWidget_C*& K2NodeDynamicCastAsNPCStatusWidget1, bool& K2NodeDynamicCastbSuccess3, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool5, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded5, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat5, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool6, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded6, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat6, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool7, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded7, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat7, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool8, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded8, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat8, bool& CallFuncIsGameplayTagValidReturnValue1, bool& CallFuncBooleanANDReturnValue2, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue1, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue2, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue3, int& CallFuncNPCGetSafeZonePhaseSafeZonePhase, bool& CallFuncIsValidReturnValue10, bool& CallFuncTryActivateAbilitiesByTagReturnValue1, struct FGameplayTagContainer& CallFuncMakeLiteralGameplayTagContainerReturnValue2, struct FGameplayTagContainer& CallFuncMakeLiteralGameplayTagContainerReturnValue3, bool& CallFuncIsValidReturnValue11, bool& CallFuncNotEqualGameplayTagContainerReturnValue1, bool& CallFuncNPCCanBeInteractedWithCanInteract, bool& CallFuncNPCCanBeInteractedWithCanInteract1, bool& CallFuncNPCUpdateInteractEnabledInteract2, bool& CallFuncNPCUpdateInteractEnabledInteract3, bool& CallFuncBooleanORReturnValue1, bool& CallFuncBooleanORReturnValue2, bool& CallFuncBooleanANDReturnValue3, bool& CallFuncIsValidReturnValue12, class UUserWidget*& CallFuncGetUserWidgetObjectReturnValue2, class UNPCStatusWidget_C*& K2NodeDynamicCastAsNPCStatusWidget2, bool& K2NodeDynamicCastbSuccess4, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue2, struct FGameplayTag& CallFuncMakeLiteralGameplayTagReturnValue, bool& CallFuncNotEqualGameplayTagReturnValue, bool& CallFuncNotPreBoolReturnValue1, bool& CallFuncBooleanANDReturnValue4, struct TEnumAsByte<Enum_NPC_AlertLevel>& CallFuncNPCGetAlertLevelInfoAlertLevel1, struct FGameplayTag& CallFuncNPCGetAlertLevelInfoAlertLevelTag1, bool& CallFuncNPCGetAlertLevelInfoValidDataFound1, class UFortGameplayDataTrackerComponentManager*& CallFuncGetCurrentReturnValue2, bool& CallFuncIsValidReturnValue13, bool& CallFuncIsValidClassReturnValue2, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue4, bool& CallFuncEqualEqualByteByteReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, int& CallFuncConvBoolToIntReturnValue, struct TScriptInterface<class IAudioParameterControllerInterface>& CallFuncSetIntParameterselfCastInput, bool& CallFuncIsDedicatedServerReturnValue1, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue, bool& CallFuncNotPreBoolReturnValue2, bool& CallFuncNotPreBoolReturnValue3, bool& CallFuncBooleanANDReturnValue5, struct FTimerHandle*& CallFuncK2SetTimerReturnValue, bool& CallFuncIsValidReturnValue14, float& K2NodeEventDamage, struct FGameplayTagContainer& K2NodeEventDamageTags, struct FVector& K2NodeEventMomentum, struct FHitResult& K2NodeEventHitInfo, class AFortPawn*& K2NodeEventInstigatedBy, class AActor*& K2NodeEventDamageCauser, struct FGameplayEffectContextHandle& K2NodeEventEffectContext, class AFortProjectileBase*& K2NodeDynamicCastAsFortProjectileBase1, bool& K2NodeDynamicCastbSuccess5, class AFortWeapon*& K2NodeDynamicCastAsFortWeapon, bool& K2NodeDynamicCastbSuccess6, struct TEnumAsByte<EFortDamageZone>& CallFuncGetDamageZoneReturnValue, bool& K2NodeSwitchEnumCmpSuccess3, bool& CallFuncWeaponDataHasAnyMatchingGameplayTagsReturnValue, bool& CallFuncIsValidReturnValue15, struct FVector& CallFuncGetSocketLocationReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, struct FRotator& CallFuncK2GetComponentRotationReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue, bool& CallFuncIsValidReturnValue16, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue1, bool& CallFuncIsValidReturnValue17, bool& CallFuncGreaterDoubleDoubleReturnValue1, class UUserWidget*& CallFuncGetUserWidgetObjectReturnValue3, class UNPCStatusWidget_C*& K2NodeDynamicCastAsNPCStatusWidget3, bool& K2NodeDynamicCastbSuccess7, bool& CallFuncIsValidReturnValue18, bool& CallFuncIsVisibleReturnValue, bool& CallFuncIsValidReturnValue19, bool& CallFuncArrayIsValidIndexReturnValue, bool& CallFuncArrayIsValidIndexReturnValue1, bool& CallFuncIsConvertedIsConverted, bool& CallFuncIsValidReturnValue20, bool& CallFuncCanActivateAbilityWithMatchingTagReturnValue, bool& CallFuncTryActivateAbilitiesByTagReturnValue2, bool& CallFuncIsRenderCustomDepthEnabledReturnValue, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue3, bool& CallFuncIsGameplayTagValidReturnValue2, bool& K2NodeSwitchEnumCmpSuccess4, bool& K2NodeSwitchEnumCmpSuccess5, struct FVector& CallFuncVLerpReturnValue, bool& CallFuncIsValidReturnValue21, bool& CallFuncTryActivateAbilitiesByTagReturnValue3, bool& CallFuncRemoveActiveGameplayEffectReturnValue1, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool9, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded9, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat9, bool& CallFuncGreaterDoubleDoubleReturnValue2, bool& CallFuncNotPreBoolReturnValue4, bool& CallFuncBooleanANDReturnValue6, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool10, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded10, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat10, bool& CallFuncIsValidReturnValue22, double& CallFuncGetGameTimeInSecondsReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, double& CallFuncSubtractDoubleDoubleReturnValue1, bool& CallFuncGreaterDoubleDoubleReturnValue3, double& CallFuncGetGameTimeInSecondsReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate7, bool& CallFuncGreaterDoubleDoubleReturnValue4, float& CallFuncDelayDurationImplicitCast, double& CallFuncRandomFloatInRangeMinImplicitCast, double& CallFuncRandomFloatInRangeMaxImplicitCast, float& CallFuncK2SetTimerDelegateTimeImplicitCast, float& CallFuncDelayDurationImplicitCast1, float& CallFuncMakeGameplayCueParametersRawMagnitudeImplicitCast, float& CallFuncK2SetTimerDelegateTimeImplicitCast1, float& CallFuncK2SetTimerDelegateTimeImplicitCast2, float& CallFuncMakeGameplayCueParametersRawMagnitudeImplicitCast1, float& CallFuncK2SetTimerTimeImplicitCast, float& CallFuncK2SetTimerDelegateTimeImplicitCast3, float& CallFuncUpdateDeltaTimeImplicitCast, float& CallFuncDelayDurationImplicitCast2); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCPawnInteractWithDispatcher__DelegateSignature (Has no native function)
	void NPCPawnInteractWithDispatcherDelegateSignature(class AActor*& AIPawn, class AFortPlayerPawn*& InteractingPlayerPawn); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCScaleMeshOutCompleted__DelegateSignature (Has no native function)
	void NPCScaleMeshOutCompletedDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCScaleMeshInCompleted__DelegateSignature (Has no native function)
	void NPCScaleMeshInCompletedDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

