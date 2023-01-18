// Class /Script/FortniteGame.FortCreativeMoveTool
// Size: 0x1870
class AFortCreativeMoveTool : public AFortWeapon
{
	class UFortObjectMoverInputComponent* CreativeMoveToolInputComponent; // 0x1040 (0x8)
	unsigned char unreflected_1048[0x78]; // 0x1048 (0x78) 
	struct FMulticastInlineDelegate OnFinishedSpawningDelegate; // 0x10c0 (0x10)
	struct TMap<class AActor*, class AActor*> PreviewToOriginalActors; // 0x10d0 (0x50)
	unsigned char unreflected_1120[0x8]; // 0x1120 (0x8) 
	struct TArray<struct FOriginalAndSpawnedPair> SpawnHelperNewlyPlacedActors; // 0x1128 (0x10)
	struct TArray<struct FActorAndTransformPair> ToDuplicateActors; // 0x1138 (0x10)
	unsigned char unreflected_1148[0x8]; // 0x1148 (0x8) 
	struct FMulticastInlineDelegate OnFinishedSpawningSelectedActors; // 0x1150 (0x10)
	struct FMulticastInlineDelegate OnFinishedSpawningPreviewActors; // 0x1160 (0x10)
	struct FMulticastInlineDelegate OnFinishedSpawningForCut; // 0x1170 (0x10)
	struct TArray<struct FCreativeSelectedActorInfo> SelectedActorsReplicateToRemoteClients; // 0x1180 (0x10)
	class UObjectInteractionBehavior* ActiveMovementModeReplicateToRemoteClients; // 0x1190 (0x8)
	float MaxRange; // 0x1198 (0x4)
	unsigned char unreflected_119c[0x4]; // 0x119c (0x4) 
	class UObjectInteractionBehavior* ActiveMovementMode; // 0x11a0 (0x8)
	bool bIsPreviewingMove; // 0x11a8 (0x1)
	unsigned char unreflected_11a9[0x7]; // 0x11a9 (0x7) 
	struct TArray<class UObjectInteractionBehavior*> InteractionBehaviors; // 0x11b0 (0x10)
	unsigned char unreflected_11c0[0x10]; // 0x11c0 (0x10) 
	class UDeleteObjects* DeleteObjectsInteractionBehavior; // 0x11d0 (0x8)
	class UPlaysetPreview* PlaysetPreviewInteractionBehavior; // 0x11d8 (0x8)
	unsigned char unreflected_11e0[0x10]; // 0x11e0 (0x10) 
	struct FMulticastInlineDelegate OnMoveToolInteractionStarted; // 0x11f0 (0x10)
	struct FMulticastInlineDelegate OnMoveToolInteractionStopped; // 0x1200 (0x10)
	struct FMulticastInlineDelegate OnMoveToolRotationAxisChanged; // 0x1210 (0x10)
	struct FMulticastInlineDelegate OnMoveToolScaleAxisChanged; // 0x1220 (0x10)
	struct FMulticastInlineDelegate OnMoveToolLineOfSightBlockingChanged; // 0x1230 (0x10)
	struct FMulticastInlineDelegate OnMoveToolDropToFloorChanged; // 0x1240 (0x10)
	struct FMulticastInlineDelegate OnMoveToolPrecisionChanged; // 0x1250 (0x10)
	struct FMulticastInlineDelegate OnMoveToolTransformationModeChanged; // 0x1260 (0x10)
	struct FMulticastInlineDelegate OnMoveToolScaleInsteadOfRotateChanged; // 0x1270 (0x10)
	struct FMulticastInlineDelegate OnAddedSelectedActor; // 0x1280 (0x10)
	struct FMulticastInlineDelegate OnCouldNotAddReachedSelectionLimit; // 0x1290 (0x10)
	struct FMulticastInlineDelegate OnRemovedSelectedActor; // 0x12a0 (0x10)
	struct FMulticastInlineDelegate OnSelectedActorsCleared; // 0x12b0 (0x10)
	struct FMulticastInlineDelegate OnSelectionPropertyChanged; // 0x12c0 (0x10)
	struct FMulticastInlineDelegate OnMoveToolScaleModified; // 0x12d0 (0x10)
	struct FMulticastInlineDelegate OnMoveToolRotationModified; // 0x12e0 (0x10)
	struct FMulticastInlineDelegate OnMoveToolBuildingAsPropSettingChanged; // 0x12f0 (0x10)
	struct FMulticastInlineDelegate OnMoveToolFocusChanged; // 0x1300 (0x10)
	unsigned char unreflected_1310[0x59]; // 0x1310 (0x59) 
	enum ETransformationType CurrentTransformationType; // 0x1369 (0x1)
	unsigned char unreflected_136a[0x6]; // 0x136a (0x6) 
	struct TArray<struct FCreativeSelectedActorInfo> SelectedActors; // 0x1370 (0x10)
	struct TArray<struct FLogicalConnectionChain> ServerSelectedActorLogicalConnections; // 0x1380 (0x10)
	struct TArray<struct FValidPlacementPair> ConnectedActorStates; // 0x1390 (0x10)
	struct FVector ScaleModifier; // 0x13a0 (0x18)
	unsigned char unreflected_13b8[0x8]; // 0x13b8 (0x8) 
	struct FTransform SelectionToWorld; // 0x13c0 (0x60)
	struct FBox SelectionSpaceActorsBounds; // 0x1420 (0x38)
	unsigned char unreflected_1458[0xc8]; // 0x1458 (0xc8) 
	bool bIsScaleUpPressed; // 0x1520 (0x1)
	unsigned char unreflected_1521[0x2f]; // 0x1521 (0x2f) 
	bool bIsMultiselectEnabled; // 0x1550 (0x1)
	bool bIsQuickbarSupported; // 0x1551 (0x1)
	bool bIsImmersiveEditModeEnabled; // 0x1552 (0x1)
	enum ESelectionProperty SelectionProperty; // 0x1553 (0x1)
	unsigned char unreflected_1554[0x2]; // 0x1554 (0x2) 
	bool bIsScaleDownPressed; // 0x1556 (0x1)
	bool bIsPushPressed; // 0x1557 (0x1)
	bool bIsPullPressed; // 0x1558 (0x1)
	bool bIsAutoTractorBeamRunning; // 0x1559 (0x1)
	unsigned char unreflected_155a[0xa]; // 0x155a (0xa) 
	bool bIsRotateClockwisePressed; // 0x1564 (0x1)
	bool bIsRotateCounterclockwisePressed; // 0x1565 (0x1)
	bool bIsScalingInsteadOfRotating; // 0x1566 (0x1)
	unsigned char unreflected_1567[0x9]; // 0x1567 (0x9) 
	struct FQuat TargetRotationOffset; // 0x1570 (0x20)
	struct FQuat RotationOffset; // 0x1590 (0x20)
	struct TArray<struct FRotator> RotationAxes; // 0x15b0 (0x10)
	unsigned char RotationAxisIndex; // 0x15c0 (0x1)
	enum EScaleAxis SelectedScaleAxis; // 0x15c1 (0x1)
	unsigned char unreflected_15c2[0x6]; // 0x15c2 (0x6) 
	struct TSet<class UMeshComponent*> HoveredComponents; // 0x15c8 (0x50)
	struct TMap<class UMeshComponent*, float> ComponentsToReclaimMIDsFrom; // 0x1618 (0x50)
	struct TArray<struct FCreativePooledMID> AllMIDs; // 0x1668 (0x10)
	unsigned char unreflected_1678[0x50]; // 0x1678 (0x50) 
	float MaxUnhoverAnimationTime; // 0x16c8 (0x4)
	unsigned char unreflected_16cc[0x4]; // 0x16cc (0x4) 
	struct TArray<struct FOriginalAndSpawnedPair> NewlyPlacedActors; // 0x16d0 (0x10)
	struct FFlashCountedActorInfo CutActors; // 0x16e0 (0x18)
	struct TArray<struct FCreativeSelectedActorInfo> CutActorsPrereplication; // 0x16f8 (0x10)
	struct TArray<class AActor*> DisableCollisionActors; // 0x1708 (0x10)
	struct TArray<class AActor*> DisableCollisionActorsPrereplication; // 0x1718 (0x10)
	struct TSet<class AActor*> AlreadyProcessedNewlyPlacedActorsOnClient; // 0x1728 (0x50)
	struct FAgingActorArray RecentlyPlacedAgingActors; // 0x1778 (0x10)
	bool bShouldDestroyPropsWhenPlacing; // 0x1788 (0x1)
	bool bAllowGravityOnPlace; // 0x1789 (0x1)
	unsigned char unreflected_178a[0x2]; // 0x178a (0x2) 
	struct FCreativeOptionVariableBase* WantsGravityOnPlace; // 0x178c (0x8)
	bool bShouldUsePrecisionGridSnapping; // 0x1794 (0x1)
	unsigned char GridSnapIndex; // 0x1795 (0x1)
	unsigned char unreflected_1796[0x2]; // 0x1796 (0x2) 
	struct FCreativeOptionVariableBase* WantsPrecisionGridSnapping; // 0x1798 (0x8)
	struct TArray<struct FVector> GridSnapRatios; // 0x17a0 (0x10)
	bool bDoesRequireCreatePermission; // 0x17b0 (0x1)
	enum EHitTraceType TraceType; // 0x17b1 (0x1)
	bool bClientNeedsToProcessNewlyPlacedActors; // 0x17b2 (0x1)
	unsigned char unreflected_17b3[0x1]; // 0x17b3 (0x1) 
	struct FCreativeOptionVariableBase* WantedHitTraceRule; // 0x17b4 (0x8)
	unsigned char unreflected_17bc[0x4]; // 0x17bc (0x4) 
	struct FGameplayTagContainer MoveToolActivatedTags; // 0x17c0 (0x20)
	struct FGameplayTag ProgressTimerCueTag; // 0x17e0 (0x4)
	unsigned char unreflected_17e4[0x4]; // 0x17e4 (0x4) 
	class ULevelRecordSpawner* ActiveRecordSpawner; // 0x17e8 (0x8)
	class UClass* VolumeClassToSpawn; // 0x17f0 (0x8)
	struct FCreativeOptionVariableBase* WantedIgnoreRecentlyPlacedTime; // 0x17f8 (0x8)
	bool bAlwaysMoveFreely; // 0x1800 (0x1)
	unsigned char unreflected_1801[0x7]; // 0x1801 (0x7) 
	bool bBuildingsAsPropsSnapToCenter; // 0x1808 (0x1)
	unsigned char unreflected_1809[0x3]; // 0x1809 (0x3) 
	struct FCreativeOptionVariableBase* WantedAlwaysMoveFreely; // 0x180c (0x8)
	struct FCreativeOptionVariableBase* WantedCameraSpacePositioning; // 0x1814 (0x8)
	struct FCreativeOptionVariableBase* WantsAutoTractorBeam; // 0x181c (0x8)
	unsigned char unreflected_1824[0x4]; // 0x1824 (0x4) 
	class AActor* HoveredActor; // 0x1828 (0x8)
	class AFortCreativeHeatmapThermometerPreview* CreativeHeatmapThermometerPreview; // 0x1830 (0x8)
	struct FGameplayTagContainer WeaponEquipContextTags; // 0x1838 (0x20)
	struct FString PlacementLocale; // 0x1858 (0x10)
	unsigned char padding_1868[0x8]; // 0x1868 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeMoveTool.UnholsterWeapon (Underlying native function: UnholsterWeapon 0x90127d4)
	void UnholsterWeapon(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeMoveTool.TurboBuildAttemptToPlace (Underlying native function: TurboBuildAttemptToPlace 0x90127c0)
	void TurboBuildAttemptToPlace(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.SpawnPlaysetVolumeOnServer (Underlying native function: SpawnPlaysetVolumeOnServer 0x9012678)
	void SpawnPlaysetVolumeOnServer(class UFortPlaysetItemDefinition*& Playset, struct FVector& SpawnLocation, struct FRotator& SpawnRotation); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.SetupMIDForComponent (Underlying native function: SetupMIDForComponent 0x9012214)
	void SetupMIDForComponent(class UMeshComponent*& MeshComponent); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeMoveTool.SetTargetingState (Underlying native function: SetTargetingState 0x9012190)
	void SetTargetingState(bool& bNewTargetingState); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerUpdateTractorBeam (Underlying native function: ServerUpdateTractorBeam 0x9012054)
	void ServerUpdateTractorBeam(float& NewTargetTractorBeamOffset, bool& bNewIsPushPressed, bool& bNewIsPullPressed); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerUpdateScalePressed (Underlying native function: ServerUpdateScalePressed 0x9011f5c)
	void ServerUpdateScalePressed(bool& bNewIsScaleUpPressed, bool& bNewIsScaleDownPressed); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerUpdateScaleAxis (Underlying native function: ServerUpdateScaleAxis 0x9011ec0)
	void ServerUpdateScaleAxis(enum EScaleAxis& SelectedAxis); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerUpdateRotationAxis (Underlying native function: ServerUpdateRotationAxis 0x9011e24)
	void ServerUpdateRotationAxis(unsigned char& AxisIndex); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerUpdateRotation (Underlying native function: ServerUpdateRotation 0x9011cc4)
	void ServerUpdateRotation(struct FQuat& ClientRotation, bool& bNewIsRotateClockwisePressed, bool& bNewIsRotateCounterclockwisePressed); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerUpdatePrecisionMode (Underlying native function: ServerUpdatePrecisionMode 0x9011bcc)
	void ServerUpdatePrecisionMode(bool& bPrecisionMode, unsigned char& PrecisionModeIndex); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerUpdateMirrored (Underlying native function: ServerUpdateMirrored 0x9011b1c)
	void ServerUpdateMirrored(bool& bMirrored); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerUpdateLocale (Underlying native function: ServerUpdateLocale 0x90119a0)
	void ServerUpdateLocale(struct FString& UpdatedLocale); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerStartReselectTimer (Underlying native function: ServerStartReselectTimer 0x9011988)
	void ServerStartReselectTimer(); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerStartInteracting (Underlying native function: ServerStartInteracting 0x90117b4)
	void ServerStartInteracting(struct TArray<class AActor*>& Actors, struct FTransform& DragStart); // (0x00000002 | Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerSpawnSelectedActorsWithTransform (Underlying native function: ServerSpawnSelectedActorsWithTransform 0x90115c8)
	void ServerSpawnSelectedActorsWithTransform(bool& bAllowOverlap, bool& bAllowGravity, bool& bIgnoreStructuralIssues, bool& bForPreviewing, bool& bNotifyOwnerOnFailure); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerSpawnActorWithTransform (Underlying native function: ServerSpawnActorWithTransform 0x90112b8)
	void ServerSpawnActorWithTransform(class AActor*& ActorToSpawn, struct FTransform& TargetTransform, bool& bAllowOverlap, bool& bAllowGravity, bool& bIgnoreStructuralIssues, bool& bForPreviewing); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerSetAlwaysMoveFreely (Underlying native function: ServerSetAlwaysMoveFreely 0x9011180)
	void ServerSetAlwaysMoveFreely(enum EBuildingAsPropSetting& NewSetting); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerSetAllowGravity (Underlying native function: ServerSetAllowGravity 0x90110d0)
	void ServerSetAllowGravity(bool& bAllow); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerSendProgressTimerCue (Underlying native function: ServerSendProgressTimerCue 0x901102c)
	void ServerSendProgressTimerCue(float& Duration); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerResetScale (Underlying native function: ServerResetScale 0x9010fe0)
	void ServerResetScale(); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerPlaceActorsAndClearMovementMode (Underlying native function: ServerPlaceActorsAndClearMovementMode 0x9010e70)
	void ServerPlaceActorsAndClearMovementMode(struct FTransform& TargetTransformForBuildings); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerOnNewlyPlacedActorProcessedByClient (Underlying native function: ServerOnNewlyPlacedActorProcessedByClient 0x9010d9c)
	void ServerOnNewlyPlacedActorProcessedByClient(struct FOriginalAndSpawnedPair& NewlyPlacedActorPair); // (0x00000002 | Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerMoveSelectionSet (Underlying native function: ServerMoveSelectionSet 0x9010be0)
	void ServerMoveSelectionSet(struct FTransform& NewSelectionToWorld, bool& bShouldUpdateOwningClient); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerDuplicateStartInteracting (Underlying native function: ServerDuplicateStartInteracting 0x9010a0c)
	void ServerDuplicateStartInteracting(struct TArray<class AActor*>& Actors, struct FTransform& DragStart); // (0x00000002 | Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerDestroyActor (Underlying native function: ServerDestroyActor 0x901096c)
	void ServerDestroyActor(class AActor*& ActorToDestroy); // (Net | NetReliable | Native | Event | Protected | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerClearMovementMode (Underlying native function: ServerClearMovementMode 0x90108bc)
	void ServerClearMovementMode(bool& bExited); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerBatchDestroyActors (Underlying native function: ServerBatchDestroyActors 0x9010804)
	void ServerBatchDestroyActors(struct TArray<class AActor*>& ActorsToDestroy); // (Net | NetReliable | Native | Event | Protected | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerAddItemToMoveTool (Underlying native function: ServerAddItemToMoveTool 0x9010704)
	void ServerAddItemToMoveTool(class AFortPlayerControllerAthena*& FortPC, class UFortItemDefinition*& PlaysetToSpawn, bool& bUseVolume); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerActorSelected (Underlying native function: ServerActorSelected 0x9010618)
	void ServerActorSelected(class AActor*& Actor, class AFortPlayerController*& InstigatorPlayer); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ServerActorDeselected (Underlying native function: ServerActorDeselected 0x901052c)
	void ServerActorDeselected(class AActor*& Actor, class AFortPlayerController*& InstigatorPlayer); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortCreativeMoveTool.QueuedActorDestroyed (Underlying native function: QueuedActorDestroyed 0x901042c)
	void QueuedActorDestroyed(class AActor*& DestroyedActor); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.PushCreativeMoveToolEquippedInputComponent (Underlying native function: PushCreativeMoveToolEquippedInputComponent 0x860bc4c)
	void PushCreativeMoveToolEquippedInputComponent(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.PopCreativeMoveToolEquippedInputComponent (Underlying native function: PopCreativeMoveToolEquippedInputComponent 0x9010414)
	void PopCreativeMoveToolEquippedInputComponent(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnWantsPrecisionGridSnapping (Underlying native function: OnWantsPrecisionGridSnapping 0x900fd50)
	void OnWantsPrecisionGridSnapping(class UFortCreativeOption*& CreativeOption, unsigned char& Index); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnWantsGravityOnPlace (Underlying native function: OnWantsGravityOnPlace 0x900fc78)
	void OnWantsGravityOnPlace(class UFortCreativeOption*& CreativeOption, unsigned char& Index); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnWantsAutoTractorBeamChanged (Underlying native function: OnWantsAutoTractorBeamChanged 0x900fbb4)
	void OnWantsAutoTractorBeamChanged(class UFortCreativeOption*& CreativeOption, unsigned char& IndexValue); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnWantedIgnoreRecentlyPlacedTime (Underlying native function: OnWantedIgnoreRecentlyPlacedTime 0x900faf0)
	void OnWantedIgnoreRecentlyPlacedTime(class UFortCreativeOption*& CreativeOption, unsigned char& Index); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnWantedHitTraceRule (Underlying native function: OnWantedHitTraceRule 0x900f9fc)
	void OnWantedHitTraceRule(class UFortCreativeOption*& CreativeOption, unsigned char& Index); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnWantedCameraSpacePositioning (Underlying native function: OnWantedCameraSpacePositioning 0x900f938)
	void OnWantedCameraSpacePositioning(class UFortCreativeOption*& CreativeOption, unsigned char& Index); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnWantedAlwaysMoveFreely (Underlying native function: OnWantedAlwaysMoveFreely 0x900f824)
	void OnWantedAlwaysMoveFreely(class UFortCreativeOption*& CreativeOption, unsigned char& Index); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnValidPlacementChangedActorInstance (Has no native function)
	void OnValidPlacementChangedActorInstance(class AActor*& ActorForPlacement, bool& ValidPlacement); // (0x00000002 | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnValidPlacementChanged (Has no native function)
	void OnValidPlacementChanged(bool& bValidPlacement); // (0x00000002 | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnRep_SelectionProperty (Underlying native function: OnRep_SelectionProperty 0x900f7c8)
	void OnRepSelectionProperty(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnRep_SelectedActorsReplicateToRemoteClients (Underlying native function: OnRep_SelectedActorsReplicateToRemoteClients 0x900f748)
	void OnRepSelectedActorsReplicateToRemoteClients(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnRep_NewlyPlacedActors (Underlying native function: OnRep_NewlyPlacedActors 0x900f720)
	void OnRepNewlyPlacedActors(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnRep_DisableCollisionActors (Underlying native function: OnRep_DisableCollisionActors 0x900f70c)
	void OnRepDisableCollisionActors(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnRep_CutActors (Underlying native function: OnRep_CutActors 0x900f6f8)
	void OnRepCutActors(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnRep_ConnectedActorStates (Underlying native function: OnRep_ConnectedActorStates 0x900f694)
	void OnRepConnectedActorStates(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnRep_BuildingsAsPropsSnapToCenter (Underlying native function: OnRep_BuildingsAsPropsSnapToCenter 0x900f678)
	void OnRepBuildingsAsPropsSnapToCenter(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnRep_AllowGravityOnPlace (Underlying native function: OnRep_AllowGravityOnPlace 0x900f608)
	void OnRepAllowGravityOnPlace(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnRep_ActiveMovementModeReplicateToRemoteClients (Underlying native function: OnRep_ActiveMovementModeReplicateToRemoteClients 0x900f590)
	void OnRepActiveMovementModeReplicateToRemoteClients(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnRemoveHighlightSelectedActor (Has no native function)
	void OnRemoveHighlightSelectedActor(class AActor*& SelectedActor, struct TArray<class UMeshComponent*>& SelectedComponents); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnPlaysetSelected (Underlying native function: OnPlaysetSelected 0x900f470)
	void OnPlaysetSelected(class UFortPlaysetItemDefinition*& SelectedPlayset); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnObjectPlacement (Has no native function)
	void OnObjectPlacement(struct TArray<class UMeshComponent*>& Components, struct FOriginalAndSpawnedPair& NewlyPlacedActorPair); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnInteractionStarted (Has no native function)
	void OnInteractionStarted(struct TArray<class UMeshComponent*>& Components); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnInteractionFinished (Has no native function)
	void OnInteractionFinished(struct TArray<class UMeshComponent*>& Components); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnHoverChanged (Has no native function)
	void OnHoverChanged(struct TArray<class UMeshComponent*>& NewHoveredComponents, struct TArray<class UMeshComponent*>& UnhoveredComponents, class UObjectInteractionBehavior*& ObjectInteraction); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnHighlightSelectedActor (Has no native function)
	void OnHighlightSelectedActor(class AActor*& SelectedActor, struct TArray<class UMeshComponent*>& SelectedComponents); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnDeviceAddedToPlayspace (Underlying native function: OnDeviceAddedToPlayspace 0x900f380)
	void OnDeviceAddedToPlayspace(int& AddedDeviceTrackingGUID, struct FCreativeDeviceInstanceInfo& AddedDeviceInfo); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnCreativeQuickmenuEnabledChanged (Underlying native function: OnCreativeQuickmenuEnabledChanged 0x900f304)
	void OnCreativeQuickmenuEnabledChanged(bool& bEnabled); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnCopyOrPickupFailed (Has no native function)
	void OnCopyOrPickupFailed(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnClientInstigatorWeaponUnequipped (Underlying native function: OnClientInstigatorWeaponUnequipped 0x900f2e0)
	void OnClientInstigatorWeaponUnequipped(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnClientInstigatorWeaponEquipped (Underlying native function: OnClientInstigatorWeaponEquipped 0x900f21c)
	void OnClientInstigatorWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnAllowGravityToggleChanged (Has no native function)
	void OnAllowGravityToggleChanged(bool& bAllowGravity); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.OnAddedToQuickbar (Has no native function)
	void OnAddedToQuickbar(struct TArray<class UMeshComponent*>& Components); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.MulticastUpdateSelectionSetExceptServerAndOwningClient (Underlying native function: MulticastUpdateSelectionSetExceptServerAndOwningClient 0x900f0e8)
	void MulticastUpdateSelectionSetExceptServerAndOwningClient(struct FTransform& NewTransformToWorld); // (0x00000002 | Net | NetReliable | Native | Event | NetMulticast | Protected | HasDefaults)

	// Function /Script/FortniteGame.FortCreativeMoveTool.MulticastUpdateSelectionSetExceptServer (Underlying native function: MulticastUpdateSelectionSetExceptServer 0x900efd0)
	void MulticastUpdateSelectionSetExceptServer(struct FTransform& NewTransformToWorld); // (0x00000002 | Net | NetReliable | Native | Event | NetMulticast | Protected | HasDefaults)

	// Function /Script/FortniteGame.FortCreativeMoveTool.MulticastForceMoveActorExceptOwningClient (Underlying native function: MulticastForceMoveActorExceptOwningClient 0x900ee74)
	void MulticastForceMoveActorExceptOwningClient(class AActor*& ActorToMove, struct FTransform& NewTransform); // (0x00000002 | Net | NetReliable | Native | Event | NetMulticast | Protected | HasDefaults)

	// Function /Script/FortniteGame.FortCreativeMoveTool.MulticastForceMoveActor (Underlying native function: MulticastForceMoveActor 0x900ed18)
	void MulticastForceMoveActor(class AActor*& ActorToMove, struct FTransform& NewTransform); // (0x00000002 | Net | NetReliable | Native | Event | NetMulticast | Protected | HasDefaults)

	// Function /Script/FortniteGame.FortCreativeMoveTool.IsRunningOnOwningClient (Underlying native function: IsRunningOnOwningClient 0x900eae4)
	bool IsRunningOnOwningClient(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.IsMultiselectingMoveOnGrid (Underlying native function: IsMultiselectingMoveOnGrid 0x900eac8)
	bool IsMultiselectingMoveOnGrid(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeMoveTool.IsMultiSelecting (Underlying native function: IsMultiSelecting 0x900eaa8)
	bool IsMultiSelecting(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeMoveTool.IncrementOrWrapHitTraceRuleOnClient (Underlying native function: IncrementOrWrapHitTraceRuleOnClient 0x900e9f0)
	void IncrementOrWrapHitTraceRuleOnClient(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleTransformModeUpPressed (Underlying native function: HandleTransformModeUpPressed 0x900e418)
	void HandleTransformModeUpPressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleTransformModeDownPressed (Underlying native function: HandleTransformModeDownPressed 0x900e400)
	void HandleTransformModeDownPressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleScaleUpReleased (Underlying native function: HandleScaleUpReleased 0x88fab64)
	void HandleScaleUpReleased(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleScaleUpPressed (Underlying native function: HandleScaleUpPressed 0x88fb454)
	void HandleScaleUpPressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleScaleSwitchAxisReleased (Underlying native function: HandleScaleSwitchAxisReleased 0x900e3e8)
	void HandleScaleSwitchAxisReleased(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleScaleSwitchAxisPressed (Underlying native function: HandleScaleSwitchAxisPressed 0x900e3d0)
	void HandleScaleSwitchAxisPressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleScaleDownReleased (Underlying native function: HandleScaleDownReleased 0x8cf01d8)
	void HandleScaleDownReleased(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleScaleDownPressed (Underlying native function: HandleScaleDownPressed 0x88fab24)
	void HandleScaleDownPressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleRotateSwitchAxisReleased (Underlying native function: HandleRotateSwitchAxisReleased 0x900e3b8)
	void HandleRotateSwitchAxisReleased(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleRotateSwitchAxisPressed (Underlying native function: HandleRotateSwitchAxisPressed 0x900e3a0)
	void HandleRotateSwitchAxisPressed(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleRotateSingleCounterclockwiseReleased (Underlying native function: HandleRotateSingleCounterclockwiseReleased 0x8607914)
	void HandleRotateSingleCounterclockwiseReleased(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleRotateSingleCounterclockwisePressed (Underlying native function: HandleRotateSingleCounterclockwisePressed 0x900e388)
	void HandleRotateSingleCounterclockwisePressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleRotateSingleClockwiseReleased (Underlying native function: HandleRotateSingleClockwiseReleased 0x900e370)
	void HandleRotateSingleClockwiseReleased(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleRotateSingleClockwisePressed (Underlying native function: HandleRotateSingleClockwisePressed 0x900e358)
	void HandleRotateSingleClockwisePressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleRotateCounterclockwiseReleased (Underlying native function: HandleRotateCounterclockwiseReleased 0x900e340)
	void HandleRotateCounterclockwiseReleased(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleRotateCounterclockwisePressed (Underlying native function: HandleRotateCounterclockwisePressed 0x900e328)
	void HandleRotateCounterclockwisePressed(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleRotateClockwiseReleased (Underlying native function: HandleRotateClockwiseReleased 0x900e310)
	void HandleRotateClockwiseReleased(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleRotateClockwisePressed (Underlying native function: HandleRotateClockwisePressed 0x900e2f8)
	void HandleRotateClockwisePressed(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleResetScalePressed (Underlying native function: HandleResetScalePressed 0x900e2e0)
	void HandleResetScalePressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleResetRotationPressed (Underlying native function: HandleResetRotationPressed 0x900e2c8)
	void HandleResetRotationPressed(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandlePushReleased (Underlying native function: HandlePushReleased 0x900e2b0)
	void HandlePushReleased(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandlePushPressed (Underlying native function: HandlePushPressed 0x900e298)
	void HandlePushPressed(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandlePullReleased (Underlying native function: HandlePullReleased 0x900e280)
	void HandlePullReleased(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandlePullPressed (Underlying native function: HandlePullPressed 0x900e268)
	void HandlePullPressed(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandlePrecisionModeReleased (Underlying native function: HandlePrecisionModeReleased 0x900e250)
	void HandlePrecisionModeReleased(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandlePrecisionModePressed (Underlying native function: HandlePrecisionModePressed 0x900e238)
	void HandlePrecisionModePressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandlePlaysetPreviewPlace (Underlying native function: HandlePlaysetPreviewPlace 0x900e220)
	void HandlePlaysetPreviewPlace(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandlePickupPressed (Underlying native function: HandlePickupPressed 0x900e208)
	void HandlePickupPressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleMirrorPressed (Underlying native function: HandleMirrorPressed 0x900e1f0)
	void HandleMirrorPressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleHitTraceRuleReleased (Underlying native function: HandleHitTraceRuleReleased 0x900e1d8)
	void HandleHitTraceRuleReleased(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleHitTraceRulePressed (Underlying native function: HandleHitTraceRulePressed 0x900e1c0)
	void HandleHitTraceRulePressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleHitTraceRuleHeldDownLongEnough (Underlying native function: HandleHitTraceRuleHeldDownLongEnough 0x900e1a8)
	void HandleHitTraceRuleHeldDownLongEnough(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleExitReleased (Underlying native function: HandleExitReleased 0x900e190)
	void HandleExitReleased(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleExitPressed (Underlying native function: HandleExitPressed 0x900e178)
	void HandleExitPressed(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleExitOrDeletePressed (Underlying native function: HandleExitOrDeletePressed 0x900e160)
	void HandleExitOrDeletePressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleExitHeldDownLongEnough (Underlying native function: HandleExitHeldDownLongEnough 0x900e148)
	void HandleExitHeldDownLongEnough(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleDuplicateActorReleased (Underlying native function: HandleDuplicateActorReleased 0x900e130)
	void HandleDuplicateActorReleased(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleDuplicateActorPressed (Underlying native function: HandleDuplicateActorPressed 0x900e118)
	void HandleDuplicateActorPressed(); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleDropToFloorPressed (Underlying native function: HandleDropToFloorPressed 0x900e100)
	void HandleDropToFloorPressed(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleDeleteReleased (Underlying native function: HandleDeleteReleased 0x860c20c)
	void HandleDeleteReleased(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleDeletePressed (Underlying native function: HandleDeletePressed 0x2cfe75c)
	void HandleDeletePressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleDeleteHeldDownLongEnough (Underlying native function: HandleDeleteHeldDownLongEnough 0x23540dc)
	void HandleDeleteHeldDownLongEnough(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleCopyPickupReleased (Underlying native function: HandleCopyPickupReleased 0x900e0e8)
	void HandleCopyPickupReleased(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleCopyPickupPressed (Underlying native function: HandleCopyPickupPressed 0x900e0d0)
	void HandleCopyPickupPressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleClearMultiSelectQueuePressed (Underlying native function: HandleClearMultiSelectQueuePressed 0x1566900)
	void HandleClearMultiSelectQueuePressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleActorSelectedForQueueReleased (Underlying native function: HandleActorSelectedForQueueReleased 0x113baa0)
	void HandleActorSelectedForQueueReleased(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleActorSelectedForQueuePressed (Underlying native function: HandleActorSelectedForQueuePressed 0x160c864)
	void HandleActorSelectedForQueuePressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleActivateTranslateModePressed (Underlying native function: HandleActivateTranslateModePressed 0x2a07d5c)
	void HandleActivateTranslateModePressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleActivateScaleModePressed (Underlying native function: HandleActivateScaleModePressed 0x160c8d8)
	void HandleActivateScaleModePressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.HandleActivateRotationModePressed (Underlying native function: HandleActivateRotationModePressed 0x2a9b2a8)
	void HandleActivateRotationModePressed(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetValidQueuedActorsAsArray (Underlying native function: GetValidQueuedActorsAsArray 0x900de10)
	void GetValidQueuedActorsAsArray(struct TArray<class AActor*>& ValidQueuedActors); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetTargetTractorBeamOffset (Underlying native function: GetTargetTractorBeamOffset 0x900ddc4)
	float GetTargetTractorBeamOffset(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetShouldUsePrecisionGridSnapping (Underlying native function: GetShouldUsePrecisionGridSnapping 0x900dce0)
	bool GetShouldUsePrecisionGridSnapping(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetShouldAutoTractorBeam (Underlying native function: GetShouldAutoTractorBeam 0x900dcc0)
	bool GetShouldAutoTractorBeam(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetSelectedScaleAxis (Underlying native function: GetSelectedScaleAxis 0x88629b4)
	enum EScaleAxis GetSelectedScaleAxis(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetRotationAxisIndex (Underlying native function: GetRotationAxisIndex 0x88629ec)
	unsigned char GetRotationAxisIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetMultiselectLimit (Underlying native function: GetMultiselectLimit 0x900d9c4)
	int GetMultiselectLimit(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetGridSnapRatios (Underlying native function: GetGridSnapRatios 0x900d874)
	struct TArray<struct FVector> GetGridSnapRatios(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetGridSnapIndex (Underlying native function: GetGridSnapIndex 0x900d85c)
	unsigned char GetGridSnapIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetCurrentVolume (Underlying native function: GetCurrentVolume 0x900d53c)
	class AFortVolume* GetCurrentVolume(bool& bMustHavePermissions); // (Final | Native | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetCurrentHitTraceRule (Underlying native function: GetCurrentHitTraceRule 0x900d524)
	enum EHitTraceRule GetCurrentHitTraceRule(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetCreativeMoveToolInputComponent (Underlying native function: GetCreativeMoveToolInputComponent 0x900d50c)
	class UFortObjectMoverInputComponent* GetCreativeMoveToolInputComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetClientNeedsToProcessNewlyPlacedActors (Underlying native function: GetClientNeedsToProcessNewlyPlacedActors 0x900d4f4)
	bool GetClientNeedsToProcessNewlyPlacedActors(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetAverageScaleModifier (Underlying native function: GetAverageScaleModifier 0x900d42c)
	float GetAverageScaleModifier(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetAllowGravityOnPlace (Underlying native function: GetAllowGravityOnPlace 0x900d3f8)
	bool GetAllowGravityOnPlace(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.GetActiveMovementMode (Underlying native function: GetActiveMovementMode 0x900d3e0)
	class UObjectInteractionBehavior* GetActiveMovementMode(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeMoveTool.Finished_DuplicateStartInteractingOnServer (Underlying native function: Finished_DuplicateStartInteractingOnServer 0x900d3cc)
	void FinishedDuplicateStartInteractingOnServer(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.Finished_CutDuplicateStartInteractingOnServer (Underlying native function: Finished_CutDuplicateStartInteractingOnServer 0x900d3b8)
	void FinishedCutDuplicateStartInteractingOnServer(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeMoveTool.DoesBoxOverlapTerrain (Underlying native function: DoesBoxOverlapTerrain 0x900d2c8)
	static bool DoesBoxOverlapTerrain(class AActor*& WorldContextObject, struct FBox& Box); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeMoveTool.DeactiveWeaponAndState (Underlying native function: DeactiveWeaponAndState 0x900d294)
	void DeactiveWeaponAndState(); // (0x00000002 | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ClientStopInteracting (Underlying native function: ClientStopInteracting 0x900d1f0)
	void ClientStopInteracting(); // (0x00000002 | Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ClientStartInteracting (Underlying native function: ClientStartInteracting 0x900d028)
	void ClientStartInteracting(class UObjectInteractionBehavior*& NewActiveMovementMode, struct TArray<struct FCreativeSelectedActorInfo>& NewSelectedActors, struct FTransform& NewSelectionToWorld, struct FBox& NewSelectionSpaceActorBounds); // (0x00000002 | Net | NetReliable | Native | Event | Protected | HasDefaults | NetClient)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ClientDeactiveWeaponAndState (Underlying native function: ClientDeactiveWeaponAndState 0x860b884)
	void ClientDeactiveWeaponAndState(); // (0x00000002 | Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortCreativeMoveTool.ClientAddItemToMoveToolComplete (Underlying native function: ClientAddItemToMoveToolComplete 0x900cfa4)
	void ClientAddItemToMoveToolComplete(class AFortPlayerControllerAthena*& FortPC); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortCreativeMoveTool.CanUtilizeMoveToolSpawningFunctionality (Underlying native function: CanUtilizeMoveToolSpawningFunctionality 0x900cf7c)
	bool CanUtilizeMoveToolSpawningFunctionality(); // (Native | Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeMoveTool.AdjustOptionsBasedOnSelectionProperty (Underlying native function: AdjustOptionsBasedOnSelectionProperty 0x900cd20)
	void AdjustOptionsBasedOnSelectionProperty(enum ESelectionProperty& UpdatedSelectionProperty); // (Final | Native | Protected)
};

