// Class /Script/FortniteGame.BuildingActor
// Size: 0x780
class ABuildingActor : public AActor
{
	unsigned char unreflected_288[0x128]; // 0x288 (0x128) 
	struct FGuid MyGuid; // 0x3b0 (0x10)
	float SavedHealthPct; // 0x3c0 (0x4)
	int16_t OwnerPersistentID; // 0x3c4 (0x2)
	unsigned char unreflected_3c6[0x2]; // 0x3c6 (0x2) 
	struct TWeakObjectPtr<class UClass> AreaClass; // 0x3c8 (0x28)
	class UClass* NavigationLinksClass; // 0x3f0 (0x8)
	unsigned char unreflected_3f8[0x10]; // 0x3f8 (0x10) 
	struct TArray<class AFortAthenaVehicle*> InitialOverlappingVehicles; // 0x408 (0x10)
	int CurrentBuildingLevel; // 0x418 (0x4)
	int MaximumBuildingLevel; // 0x41c (0x4)
	class UClass* BuildingAttributeSetClass; // 0x420 (0x8)
	class UFortBuildingActorSet* BuildingAttributeSet; // 0x428 (0x8)
	class UFortDamageSet* DamageAttributeSet; // 0x430 (0x8)
	class UFortBuildingActorSet* ReplicatedBuildingAttributeSet; // 0x438 (0x8)
	struct FFortAttributeInitializationKey* AttributeInitKeys[0x2]; // 0x440 (0x8) (ARRAY) 
	enum EAttributeInitLevelSource AttributeInitLevelSource; // 0x450 (0x1)
	enum EBuildingActorComponentCreationPolicy AbilitySystemComponentCreationPolicy; // 0x451 (0x1)
	struct TEnumAsByte<EPhysicalSurface> PrimarySurfaceType; // 0x452 (0x1)
	struct TEnumAsByte<EFortBaseWeaponDamage> WeaponResponseType; // 0x453 (0x1)
	float LifespanAfterDeath; // 0x454 (0x4)
	unsigned char unreflected_458[0x10]; // 0x458 (0x10) 
	struct FMulticastInlineDelegate OnAbilitySystemComponentInitialized; // 0x468 (0x10)
	class UFortAbilitySystemComponent* AbilitySystemComponent; // 0x478 (0x8)
	class UFortAbilitySystemComponent* ReplicatedAbilitySystemComponent; // 0x480 (0x8)
	struct TArray<struct FGameplayCueParameters> PendingDamageImpactCues; // 0x488 (0x10)
	float HealthBarIndicatorWidth; // 0x498 (0x4)
	float HealthBarIndicatorVerticalOffset; // 0x49c (0x4)
	struct FName HealthBarIndicatorSocketName; // 0x4a0 (0x4)
	int HealthBarIndicatorDifficultyRating; // 0x4a4 (0x4)
	class UFortHealthBarIndicator* HealthBarIndicator; // 0x4a8 (0x8)
	unsigned char ForceMetadataRelevant; // 0x4b0 (0x1)
	unsigned char LastMetadataRelevant; // 0x4b1 (0x1)
	struct TEnumAsByte<EDynamicBuildingPlacementType> DynamicBuildingPlacementType; // 0x4b2 (0x1)
	enum ENavigationObstacleOverride NavigationObstacleOverride; // 0x4b3 (0x1)
	float CullDistance; // 0x4b4 (0x4)
	struct FGameplayTagQuery IncomingDamageFilterQuery; // 0x4b8 (0x48)
	unsigned char bIsInvulnerable; // 0x500 (0x1)
	unsigned char bPreviewBuildingActor; // 0x500 (0x1)
	unsigned char bLockedFromGameEditing; // 0x500 (0x1)
	unsigned char bPlayedDying; // 0x500 (0x1)
	unsigned char bHasRegisteredActorStateAtLeastOnce; // 0x500 (0x1)
	unsigned char bDirtyForLevelRecordSave; // 0x500 (0x1)
	unsigned char bSavedMetaPropertiesProcessed; // 0x500 (0x1)
	unsigned char bUpgradeUsesSameClass; // 0x501 (0x1)
	unsigned char bDisplayLevelInInfoWidget; // 0x501 (0x1)
	unsigned char bAllowUpgradeRegardlessOfPlayerBuildLevel; // 0x501 (0x1)
	unsigned char bAlwaysExportNavRelevantComponent; // 0x501 (0x1)
	unsigned char bDisplayDamageNumbersInAthena; // 0x501 (0x1)
	unsigned char bUseFortHealthBarIndicator; // 0x501 (0x1)
	unsigned char bSurpressHealthBar; // 0x501 (0x1)
	unsigned char bCreateVerboseHealthLogs; // 0x501 (0x1)
	unsigned char bIsIndestructibleForTargetSelection; // 0x502 (0x1)
	unsigned char bPropagateDrawDistanceOnAdditionalComponent; // 0x502 (0x1)
	unsigned char bCreatePhysicsObjectComponent; // 0x502 (0x1)
	unsigned char bIsGameFrameworkComponentReceiver; // 0x502 (0x1)
	unsigned char bDestroyed; // 0x502 (0x1)
	unsigned char bPersistToWorld; // 0x502 (0x1)
	unsigned char bRefreshFullSaveDataBeforeZoneSave; // 0x502 (0x1)
	unsigned char bBeingDragged; // 0x502 (0x1)
	unsigned char bBeingLocallyMoved; // 0x503 (0x1)
	unsigned char bRotateInPlaceGame; // 0x503 (0x1)
	unsigned char bBeingOneHitDisassembled; // 0x503 (0x1)
	unsigned char bBoundsAreInvalidForMelee; // 0x503 (0x1)
	unsigned char bIsNavigationModifier; // 0x503 (0x1)
	unsigned char bBlockNavigationLinks; // 0x503 (0x1)
	unsigned char bCanExportNavigationCollisions; // 0x503 (0x1)
	unsigned char bCanExportNavigationObstacle; // 0x504 (0x1)
	unsigned char bCreateObstacleNavModifierForEachComponent; // 0x504 (0x1)
	unsigned char bMirrorNavLinksX; // 0x504 (0x1)
	unsigned char bMirrorNavLinksY; // 0x504 (0x1)
	unsigned char bIgnoreMoveGoalCollisionRadius; // 0x504 (0x1)
	unsigned char bForceDisableRootNavigationRelevance; // 0x504 (0x1)
	unsigned char bForceAutomationPass; // 0x504 (0x1)
	unsigned char bForceAutomationPassNavmeshOnTop; // 0x504 (0x1)
	unsigned char bForceAutomationPassSmashableFlat; // 0x505 (0x1)
	unsigned char bCanBeSavedInCreativeVolume; // 0x505 (0x1)
	unsigned char bIsNavigationRelevant; // 0x505 (0x1)
	unsigned char bIsNavigationIndestructible; // 0x505 (0x1)
	unsigned char bBlockNavLinksInCell; // 0x505 (0x1)
	unsigned char bUseHotSpotAsMoveGoalReplacement; // 0x505 (0x1)
	unsigned char bHasCustomAttackLocation; // 0x505 (0x1)
	unsigned char bWorldReadyCalled; // 0x505 (0x1)
	unsigned char bBeingTranslated; // 0x506 (0x1)
	unsigned char bBeingRotated; // 0x506 (0x1)
	unsigned char bBeingScaled; // 0x506 (0x1)
	unsigned char bRotateInPlaceEditor; // 0x506 (0x1)
	unsigned char bEditorPlaced; // 0x506 (0x1)
	unsigned char bPlayerPlaced; // 0x506 (0x1)
	unsigned char bShouldTick; // 0x506 (0x1)
	unsigned char bUsesDayPhaseChange; // 0x506 (0x1)
	unsigned char bIsDynamic; // 0x507 (0x1)
	unsigned char bIsDynamicOnDedicatedServer; // 0x507 (0x1)
	unsigned char bIsDedicatedServer; // 0x507 (0x1)
	unsigned char bIsTemporarilyTicking; // 0x507 (0x1)
	unsigned char bUseTickManager; // 0x507 (0x1)
	unsigned char bIsMovable; // 0x507 (0x1)
	unsigned char bRegisteredForDayPhaseChange; // 0x507 (0x1)
	unsigned char bForceDamagePing; // 0x507 (0x1)
	unsigned char bDestroyFoliageWhenPlaced; // 0x508 (0x1)
	unsigned char bObstructTrapTargeting; // 0x508 (0x1)
	unsigned char bInstantDeath; // 0x508 (0x1)
	unsigned char bDoNotBlockBuildings; // 0x508 (0x1)
	unsigned char bForceBlockBuildings; // 0x508 (0x1)
	unsigned char bDestroyOnPlayerBuildingPlacement; // 0x508 (0x1)
	unsigned char bUseCentroidForBlockBuildingsCheck; // 0x508 (0x1)
	unsigned char bPredictedBuildingActor; // 0x509 (0x1)
	unsigned char bIgnoreCollisionWithCriticalActors; // 0x509 (0x1)
	unsigned char bIsPlayerBuildable; // 0x509 (0x1)
	unsigned char bFireBuiltAndDestroyedEvents; // 0x509 (0x1)
	unsigned char bStructurallySupportOverlappingActors; // 0x509 (0x1)
	unsigned char bAllowInteract; // 0x509 (0x1)
	unsigned char bShowFirstInteractPrompt; // 0x509 (0x1)
	unsigned char bShowSecondInteractPrompt; // 0x509 (0x1)
	unsigned char bAllowHostileBlueprintInteraction; // 0x50a (0x1)
	unsigned char bEndAbilitiesOnDeath; // 0x50a (0x1)
	unsigned char bAlwaysUseNetCullDistanceSquaredForRelevancy; // 0x50a (0x1)
	unsigned char bHighlightDirty; // 0x50a (0x1)
	unsigned char bCollisionBlockedByPawns; // 0x50a (0x1)
	unsigned char bAllowTeamDamage; // 0x50a (0x1)
	unsigned char bShouldClearMarkerOnInteract; // 0x50a (0x1)
	unsigned char bIgnoreAffiliationInteractHighlight; // 0x50b (0x1)
	unsigned char bSuppressInteractionWidget; // 0x50b (0x1)
	unsigned char bAutoReleaseCurieContainerOnDestroyed; // 0x50b (0x1)
	unsigned char bSpawnIntoGridSublevel; // 0x50b (0x1)
	unsigned char bUseMinLifeSpan; // 0x50b (0x1)
	struct TEnumAsByte<EFortBuildingType> BuildingType; // 0x50c (0x1)
	struct TEnumAsByte<EFortTeam> Team; // 0x50d (0x1)
	unsigned char TeamIndex; // 0x50e (0x1)
	bool bIgnoreDeterminePhysicsObjectImpactDataAutomatically; // 0x50f (0x1)
	struct FGameplayTagContainer ConstTags; // 0x510 (0x20)
	struct FGameplayTagContainer StaticGameplayTags; // 0x530 (0x20)
	struct FText InteractionText; // 0x550 (0x18)
	struct FGameplayTag CanInteractPerformNativeActionTag; // 0x568 (0x4)
	int DeviceTrackingGUID; // 0x56c (0x4)
	int DeviceNameIndex; // 0x570 (0x4)
	unsigned char unreflected_574[0x4]; // 0x574 (0x4) 
	struct FMulticastInlineDelegate OnDied; // 0x578 (0x10)
	struct FMulticastInlineDelegate OnOutOfHealthNotDestroyed; // 0x588 (0x10)
	struct FMulticastInlineDelegate OnDamaged; // 0x598 (0x10)
	struct FMulticastInlineDelegate OnDeathPlayEffectsDelegate; // 0x5a8 (0x10)
	class AFortMission* AssociatedMissionParam; // 0x5b8 (0x8)
	class AFortPlacementActor* OriginatingPlacementActor; // 0x5c0 (0x8)
	float BRMinDrawDistance; // 0x5c8 (0x4)
	float BRMaxDrawDistance; // 0x5cc (0x4)
	float StWMinDrawDistance; // 0x5d0 (0x4)
	float StWMaxDrawDistance; // 0x5d4 (0x4)
	struct FMulticastInlineDelegate OnInteract; // 0x5d8 (0x10)
	struct FCurveTableRowHandle InteractionSpeed; // 0x5e8 (0x10)
	class UClass* InteractionOverrideWidget; // 0x5f8 (0x8)
	class UClass* SecondInteractionOverrideWidget; // 0x600 (0x8)
	unsigned char unreflected_608[0x48]; // 0x608 (0x48) 
	int DataVersion; // 0x650 (0x4)
	float LastTakeHitTimeTimeout; // 0x654 (0x4)
	class USoundBase* PlayHitSound; // 0x658 (0x8)
	float SnapGridSize; // 0x660 (0x4)
	float VertSnapGridSize; // 0x664 (0x4)
	struct FVector SnapOffset; // 0x668 (0x18)
	struct FVector CentroidOffset; // 0x680 (0x18)
	struct FVector BaseLocToPivotOffset; // 0x698 (0x18)
	struct FString CustomState; // 0x6b0 (0x10)
	struct TArray<class UClass*> ComponentTypesWhitelistedForReplication; // 0x6c0 (0x10)
	struct TArray<class UPrimitiveComponent*> OverridePrimitivesToExcludeFoliage; // 0x6d0 (0x10)
	class UBuildingActorHotSpotConfig* HotSpotConfig; // 0x6e0 (0x8)
	struct FMulticastInlineDelegate OnBuildingHealthChanged; // 0x6e8 (0x10)
	struct FMulticastInlineDelegate OnActorHealthChanged; // 0x6f8 (0x10)
	struct FGuid SavedActorGuid; // 0x708 (0x10)
	unsigned char unreflected_718[0x18]; // 0x718 (0x18) 
	float BaselineScale; // 0x730 (0x4)
	float AccumulatedDeltaSinceLastVisualsTick; // 0x734 (0x4)
	class UProjectileMovementComponent* ProjectileMovementComponent; // 0x738 (0x8)
	struct FMulticastInlineDelegate OnTeamIndexChangedDelegate; // 0x740 (0x10)
	struct FGameplayTag PhysicsObjectPresetTag; // 0x750 (0x4)
	struct FGameplayTag PhysicsObjectPhysicalDataTag; // 0x754 (0x4)
	struct FGameplayTag PhysicsObjectBuoyancyDataTag; // 0x758 (0x4)
	struct FGameplayTag PhysicsObjectImpactDamageDataTag; // 0x75c (0x4)
	class UFortPhysicsObjectComponent* PhysicsObjectComponent; // 0x760 (0x8)
	struct FName ActorTemplateID; // 0x768 (0x4)
	struct FName PlaysetPackagePathName; // 0x76c (0x4)
	struct FString LabelOverride; // 0x770 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.BuildingActor.UseDefaultHealthBar (Underlying native function: UseDefaultHealthBar 0x134a9ec)
	bool UseDefaultHealthBar(); // (0x00000002 | Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingActor.UpdateCullDistance (Underlying native function: UpdateCullDistance 0x5cd5560)
	void UpdateCullDistance(bool& bIgnoreLODParent); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.SnapDmgVisualsToCurrentHealth (Underlying native function: SnapDmgVisualsToCurrentHealth 0x240d908)
	void SnapDmgVisualsToCurrentHealth(); // (0x00000002 | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.SilentDie (Underlying native function: SilentDie 0x85bf580)
	void SilentDie(bool& bPropagateSilentDeath); // (0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.ShouldDisplaySecondInteractPrompt (Underlying native function: ShouldDisplaySecondInteractPrompt 0x85bf4b4)
	bool ShouldDisplaySecondInteractPrompt(class AFortPawn*& InteractingPawn, struct TEnumAsByte<TInteractionType>& InteractionType); // (0x00000002 | Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingActor.ShouldDisplayMobileInteractPrompt (Underlying native function: ShouldDisplayMobileInteractPrompt 0x85bf48c)
	bool ShouldDisplayMobileInteractPrompt(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.ShouldDisplayFirstInteractPrompt (Underlying native function: ShouldDisplayFirstInteractPrompt 0x85bf3c0)
	bool ShouldDisplayFirstInteractPrompt(class AFortPawn*& InteractingPawn, struct TEnumAsByte<TInteractionType>& InteractionType); // (0x00000002 | Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingActor.ShouldDisplayDamageNumbers (Underlying native function: ShouldDisplayDamageNumbers 0x26209f8)
	bool ShouldDisplayDamageNumbers(); // (0x00000002 | Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingActor.ShouldDie (Underlying native function: ShouldDie 0x85bf2bc)
	bool ShouldDie(float& Damage, class AController*& EventInstigator, class AActor*& DamageCauser); // (0x00000002 | BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.SetUsesDayPhaseChange (Underlying native function: SetUsesDayPhaseChange 0x85bf1e8)
	void SetUsesDayPhaseChange(bool& bUseDayPhase); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.SetTeam (Underlying native function: SetTeam 0x85bf164)
	void SetTeam(unsigned char& InTeam); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.SetSuppressHealthBar (Underlying native function: SetSuppressHealthBar 0x85bf0e0)
	void SetSuppressHealthBar(bool& bNewValue); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.SetQuestHighlight (Underlying native function: SetQuestHighlight 0x85bef40)
	void SetQuestHighlight(bool& Enabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.SetNavigationObstacleOverride (Underlying native function: SetNavigationObstacleOverride 0x85bee9c)
	void SetNavigationObstacleOverride(enum ENavigationObstacleOverride& NavOverride); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.SetNavigationModifier (Underlying native function: SetNavigationModifier 0x85bede8)
	void SetNavigationModifier(bool& bEnableModifier); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.SetNavigationIndestructible (Underlying native function: SetNavigationIndestructible 0x85bed5c)
	void SetNavigationIndestructible(bool& bNavIndestructible); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.SetMaxHealth_DontCreateASC (Underlying native function: SetMaxHealth_DontCreateASC 0x85becc0)
	bool SetMaxHealthDontCreateASC(float& NewMaxHealth); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.SetIsNavigationRelevant (Underlying native function: SetIsNavigationRelevant 0x85bec1c)
	void SetIsNavigationRelevant(bool& bInIsNavigationRelevant); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.SetHealthBarIndicatorDifficultyRating (Underlying native function: SetHealthBarIndicatorDifficultyRating 0x85bead4)
	void SetHealthBarIndicatorDifficultyRating(int& InDisplayLevel); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.SetHealth_DontCreateASC (Underlying native function: SetHealth_DontCreateASC 0x85beb50)
	void SetHealthDontCreateASC(float& NewHealth); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.SetHealth (Underlying native function: SetHealth 0x85bea50)
	void SetHealth(float& NewHealth); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.SetCustomState (Underlying native function: SetCustomState 0x85be8d8)
	void SetCustomState(struct FString& NewState); // (0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.SetCanExportNavigationObstacle (Underlying native function: SetCanExportNavigationObstacle 0x85be82c)
	void SetCanExportNavigationObstacle(bool& InCanExportNavigationObstacle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.SetCanBeSavedToCreativeVolume (Underlying native function: SetCanBeSavedToCreativeVolume 0x85be7a0)
	void SetCanBeSavedToCreativeVolume(bool& bCanBeSaved); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.SetBRDrawDistances (Underlying native function: SetBRDrawDistances 0x85be6c4)
	void SetBRDrawDistances(float& NewBRMinDrawDistance, float& NewBRMaxDrawDistance); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.SetAlwaysExportNavRelevantComponent (Underlying native function: SetAlwaysExportNavRelevantComponent 0x85be60c)
	void SetAlwaysExportNavRelevantComponent(bool& bInAlwaysExportNavRelevantComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.Resave (Underlying native function: Resave 0x2971b44)
	void Resave(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.ReplaceNavAreaClass (Underlying native function: ReplaceNavAreaClass 0x85be4a8)
	void ReplaceNavAreaClass(class UClass*& ReplacementAreaClass); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.RemoveEditorOnlyInstanceGameplayTags (Underlying native function: RemoveEditorOnlyInstanceGameplayTags 0x76c607c)
	void RemoveEditorOnlyInstanceGameplayTags(struct FGameplayTagContainer& TagsToRemove); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.RemoveAbilitySystemComponentAfterAutoBuildIfFullHealth (Underlying native function: RemoveAbilitySystemComponentAfterAutoBuildIfFullHealth 0x85be494)
	void RemoveAbilitySystemComponentAfterAutoBuildIfFullHealth(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingActor.RefreshRemovedFoliageAroundBounds (Underlying native function: RefreshRemovedFoliageAroundBounds 0x85be3f4)
	void RefreshRemovedFoliageAroundBounds(bool& bUseNonCollidingBounds); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.PlacedByPlayer (Has no native function)
	void PlacedByPlayer(class AFortPlayerStateZone*& PlayerState); // (0x00000002 | BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.PlacedByPlacementTool (Underlying native function: PlacedByPlacementTool 0x8546790)
	void PlacedByPlacementTool(); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.OnWorldReady (Has no native function)
	void OnWorldReady(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.OnSetCustomDepthStencilValue (Has no native function)
	void OnSetCustomDepthStencilValue(struct TArray<class UPrimitiveComponent*>& PrimComponents, bool& bUseCustomDepth, int& StencilValue, bool& bOutConsume); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.OnRep_Team (Underlying native function: OnRep_Team 0x2444858)
	void OnRepTeam(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingActor.OnRep_InstantDeath (Underlying native function: OnRep_InstantDeath 0x17305cc)
	void OnRepInstantDeath(); // (Final | Native | Public)

	// Function /Script/FortniteGame.BuildingActor.OnRep_InitialOverlappingVehicles (Underlying native function: OnRep_InitialOverlappingVehicles 0x1b4bf50)
	void OnRepInitialOverlappingVehicles(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingActor.OnRep_CustomState (Underlying native function: OnRep_CustomState 0x14c74c0)
	void OnRepCustomState(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingActor.OnRep_CurrentBuildingLevel (Underlying native function: OnRep_CurrentBuildingLevel 0x85be134)
	void OnRepCurrentBuildingLevel(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingActor.OnRep_BuildingAttributeSet (Underlying native function: OnRep_BuildingAttributeSet 0x27a4760)
	void OnRepBuildingAttributeSet(); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingActor.OnRep_bDestroyed (Underlying native function: OnRep_bDestroyed 0x17372e4)
	void OnRepbDestroyed(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingActor.OnRep_bCollisionBlockedByPawns (Underlying native function: OnRep_bCollisionBlockedByPawns 0x1ac3ea8)
	void OnRepbCollisionBlockedByPawns(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingActor.OnRep_AbilitySystemComponent (Underlying native function: OnRep_AbilitySystemComponent 0x22eac48)
	void OnRepAbilitySystemComponent(); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingActor.OnMatchStarted (Has no native function)
	void OnMatchStarted(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.OnIsForPreviewingChangedBP (Has no native function)
	void OnIsForPreviewingChangedBP(bool& bNewIsForPreviewing); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.OnDeathServer (Has no native function)
	void OnDeathServer(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.OnDeathPlayEffects (Has no native function)
	void OnDeathPlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.OnDayPhaseChanged (Underlying native function: OnDayPhaseChanged 0x85bde1c)
	void OnDayPhaseChanged(enum EFortDayPhase& CurrentDayPhase, enum EFortDayPhase& PreviousDayPhase, bool& bAtCreation); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.OnDamageServer (Has no native function)
	void OnDamageServer(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.OnDamagePlayEffects (Has no native function)
	void OnDamagePlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.OnBuildingActorInitialized (Underlying native function: OnBuildingActorInitialized 0x85bdd54)
	void OnBuildingActorInitialized(struct TEnumAsByte<EFortBuildingInitializationReason>& InitializationReason, struct TEnumAsByte<EFortBuildingPersistentState>& BuildingPersistentState); // (0x00000002 | BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.MigrateLegacyUserOptions (Underlying native function: MigrateLegacyUserOptions 0x22c0e58)
	void MigrateLegacyUserOptions(); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.K2_UpdateEditorPreview (Has no native function)
	void K2UpdateEditorPreview(bool& bHasMoved); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.K2_SpawnBuildingActor (Underlying native function: K2_SpawnBuildingActor 0x85bdb0c)
	static class ABuildingActor* K2SpawnBuildingActor(class UObject*& WorldContextObject, class UClass*& Class, struct FTransform& Transform, class AActor*& OptionalOwner, class AActor*& OptionalInstigator, bool& bDeferConstruction); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.K2_SetupForEditorPreview (Has no native function)
	void K2SetupForEditorPreview(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.K2_HandleUserOptionsLoaded (Has no native function)
	void K2HandleUserOptionsLoaded(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.K2_HandleUserOptionsChanged (Has no native function)
	void K2HandleUserOptionsChanged(struct TArray<struct FName>& ChangedPropertyNames); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.K2_CanEditorImportWithStaticMobility (Has no native function)
	bool K2CanEditorImportWithStaticMobility(bool& bCanBeImportedWithStaticMobility); // (Event | Protected | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingActor.IsPreviewBuildingActor (Underlying native function: IsPreviewBuildingActor 0x85bdaf0)
	bool IsPreviewBuildingActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.IsPlayerBuilt (Underlying native function: IsPlayerBuilt 0x85bdad0)
	bool IsPlayerBuilt(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.IsLockedFromGameEditing (Underlying native function: IsLockedFromGameEditing 0x5cd5530)
	bool IsLockedFromGameEditing(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.IsDamaged (Underlying native function: IsDamaged 0x85bdaac)
	bool IsDamaged(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.IsAcceptablePositionForPlacement (Underlying native function: IsAcceptablePositionForPlacement 0x85bd8a8)
	bool IsAcceptablePositionForPlacement(struct FVector& InLocation, struct FRotator& InRotation, class AFortDecoTool*& DecoTool, bool& bIsCDO, struct FText& OutFailureReason); // (0x00000002 | Native | Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.InitializeKismetSpawnedBuildingActor (Underlying native function: InitializeKismetSpawnedBuildingActor 0x85bd764)
	void InitializeKismetSpawnedBuildingActor(class ABuildingActor*& BuildingOwner, class AFortPlayerController*& SpawningController, bool& bUsePlayerBuildAnimations, class ABuildingActor*& ReplacedBuilding); // (0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.HasHealthLeft (Underlying native function: HasHealthLeft 0x2d0e4b4)
	bool HasHealthLeft(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.HandleDestroyed (Underlying native function: HandleDestroyed 0x239db94)
	void HandleDestroyed(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingActor.GetShieldPercent (Underlying native function: GetShieldPercent 0x85bd738)
	float GetShieldPercent(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.GetShieldOrHealthPercent (Underlying native function: GetShieldOrHealthPercent 0x85bd710)
	float GetShieldOrHealthPercent(); // (Final | Native | Public)

	// Function /Script/FortniteGame.BuildingActor.GetShield (Underlying native function: GetShield 0x85bd6e4)
	float GetShield(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.GetPhysicsObjectComponent (Underlying native function: GetPhysicsObjectComponent 0x2927e00)
	static class UFortPhysicsObjectComponent* GetPhysicsObjectComponent(class ABuildingActor*& Building); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.GetOwningPlayerState (Underlying native function: GetOwningPlayerState 0x27f5e08)
	class AFortPlayerState* GetOwningPlayerState(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.GetOwningController (Underlying native function: GetOwningController 0x85bd6a8)
	class AController* GetOwningController(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.GetMissingHealth (Underlying native function: GetMissingHealth 0x85bd680)
	float GetMissingHealth(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.GetMaxShield (Underlying native function: GetMaxShield 0x85bd654)
	float GetMaxShield(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.GetMaxHealth (Underlying native function: GetMaxHealth 0x85bd628)
	float GetMaxHealth(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.GetLootTierGroupOverride (Underlying native function: GetLootTierGroupOverride 0x85bd604)
	struct FName GetLootTierGroupOverride(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.GetHealthPercent (Underlying native function: GetHealthPercent 0x85bd5c0)
	float GetHealthPercent(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.GetHealth (Underlying native function: GetHealth 0x85bd594)
	float GetHealth(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.GetGameplayTags (Underlying native function: GetGameplayTags 0x85bd578)
	struct FGameplayTagContainer GetGameplayTags(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.GetEditorTestTags (Underlying native function: GetEditorTestTags 0x76c607c)
	void GetEditorTestTags(struct FGameplayTagContainer& TagContainer); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.GetDescription (Underlying native function: GetDescription 0x85bd214)
	struct FText GetDescription(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.GetCustomState (Underlying native function: GetCustomState 0x85bd19c)
	struct FString GetCustomState(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.GetCurrentBuildingLevel (Underlying native function: GetCurrentBuildingLevel 0x85bd174)
	int GetCurrentBuildingLevel(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.GetCurieCollisionComponentOverride (Underlying native function: GetCurieCollisionComponentOverride 0x281fbe0)
	class UPrimitiveComponent* GetCurieCollisionComponentOverride(); // (0x00000002 | Native | Event | Protected | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingActor.GetCentroid (Underlying native function: GetCentroid 0x85bd120)
	struct FVector GetCentroid(); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.GetBuildingAttributeSet_DontCreate (Underlying native function: GetBuildingAttributeSet_DontCreate 0x7a9d0a8)
	class UFortBuildingActorSet* GetBuildingAttributeSetDontCreate(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.GetBuildingAttributeSet (Underlying native function: GetBuildingAttributeSet 0x85bd0e0)
	class UFortBuildingActorSet* GetBuildingAttributeSet(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.GameplayCue_InstantDeath (Underlying native function: GameplayCue_InstantDeath 0x85bcfe4)
	void GameplayCueInstantDeath(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingActor.GameplayCue_Healing (Underlying native function: GameplayCue_Healing 0x85bcee8)
	void GameplayCueHealing(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingActor.GameplayCue_Damage (Underlying native function: GameplayCue_Damage 0x1731dfc)
	void GameplayCueDamage(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingActor.ForceChangeOwnerInstigator (Underlying native function: ForceChangeOwnerInstigator 0x85bcdd8)
	void ForceChangeOwnerInstigator(class AFortPlayerController*& NewInstigator); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.ForceBuildingHealth (Underlying native function: ForceBuildingHealth 0x85bcd54)
	void ForceBuildingHealth(float& NewHealth); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.DoesMutatorBlockIncomingDamage (Underlying native function: DoesMutatorBlockIncomingDamage 0x2486284)
	bool DoesMutatorBlockIncomingDamage(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.BuildingActor.CustomStateChanged (Has no native function)
	void CustomStateChanged(); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.ClearPlayedDying (Underlying native function: ClearPlayedDying 0x85bcd3c)
	void ClearPlayedDying(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.CanDestroyBuildingActor (Underlying native function: CanDestroyBuildingActor 0x85bcc30)
	static bool CanDestroyBuildingActor(class ABuildingActor*& BuildingActor, class AController*& DamageInstigator, class AActor*& DamageCauser); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.BP_SetTemporarilyTicking (Underlying native function: BP_SetTemporarilyTicking 0x5cd5490)
	void BPSetTemporarilyTicking(bool& bEnabled); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.BP_HandlePhysicsObjectWasSetup (Has no native function)
	void BPHandlePhysicsObjectWasSetup(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.BP_HandlePhysicsObjectDeactivated (Has no native function)
	void BPHandlePhysicsObjectDeactivated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.BP_HandlePhysicsObjectAwakeChanged (Has no native function)
	void BPHandlePhysicsObjectAwakeChanged(bool& bAwake); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.BP_HandlePhysicsObjectActivated (Has no native function)
	void BPHandlePhysicsObjectActivated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.BlueprintUpdateDynamicInteractionOptions (Has no native function)
	void BlueprintUpdateDynamicInteractionOptions(struct FGameplayTagContainer& OutGameplayTags, class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted); // (Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingActor.BlueprintOnLocalInteract (Has no native function)
	bool BlueprintOnLocalInteract(class AFortPlayerPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.BlueprintOnInterruptInteract (Has no native function)
	void BlueprintOnInterruptInteract(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.BlueprintOnInteract (Has no native function)
	void BlueprintOnInteract(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.BlueprintOnBeginInteract (Has no native function)
	void BlueprintOnBeginInteract(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted, struct TEnumAsByte<TInteractionType>& InteractionType); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingActor.BlueprintGetSubInteractionString (Has no native function)
	struct FText BlueprintGetSubInteractionString(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted); // (Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingActor.BlueprintGetInteractionTime (Underlying native function: BlueprintGetInteractionTime 0x85bcb10)
	bool BlueprintGetInteractionTime(class AFortPawn*& InteractingPawn, float& OutInteractionTime, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted); // (0x00000002 | Native | Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingActor.BlueprintGetInteractionString (Has no native function)
	struct FText BlueprintGetInteractionString(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted); // (Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingActor.BlueprintGetFailedSubTextTexture (Has no native function)
	struct TWeakObjectPtr<class UTexture2D> BlueprintGetFailedSubTextTexture(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted); // (Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingActor.BlueprintGetFailedSubInteractionString (Has no native function)
	struct FText BlueprintGetFailedSubInteractionString(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted); // (Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingActor.BlueprintGetFailedInteractionString (Has no native function)
	struct FText BlueprintGetFailedInteractionString(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted); // (Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingActor.BlueprintGetAllHighlightableComponents (Underlying native function: BlueprintGetAllHighlightableComponents 0x85bca60)
	bool BlueprintGetAllHighlightableComponents(struct TArray<class UPrimitiveComponent*>& OutHighlightableComponents); // (0x00000002 | Native | Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingActor.BlueprintDisplaySubInteractIcon (Has no native function)
	bool BlueprintDisplaySubInteractIcon(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted, struct TEnumAsByte<TInteractionType>& InteractionType); // (0x00000002 | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.BlueprintDie (Underlying native function: BlueprintDie 0x85bc964)
	void BlueprintDie(struct FGameplayTag& DeathReason, class AController*& Killer, class AActor*& DamageCauser); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingActor.BlueprintCanInteract (Has no native function)
	bool BlueprintCanInteract(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted, struct TEnumAsByte<TInteractionType>& InteractionType); // (0x00000002 | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingActor.AddEditorOnlyInstanceGameplayTags (Underlying native function: AddEditorOnlyInstanceGameplayTags 0x76c607c)
	void AddEditorOnlyInstanceGameplayTags(struct FGameplayTagContainer& NewTags); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

