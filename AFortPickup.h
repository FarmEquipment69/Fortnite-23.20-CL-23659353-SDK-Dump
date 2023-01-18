// Class /Script/FortniteGame.FortPickup
// Size: 0x740
class AFortPickup : public AActor
{
	unsigned char unreflected_288[0x18]; // 0x288 (0x18) 
	bool bUsePickupWidget; // 0x2a0 (0x1)
	bool bSuppressInteractionWidget; // 0x2a1 (0x1)
	bool bWeaponsCanBeAutoPickups; // 0x2a2 (0x1)
	bool bAutoUpgradeWeapons; // 0x2a3 (0x1)
	bool bDoServerHandlePickupTrace; // 0x2a4 (0x1)
	unsigned char unreflected_2a5[0x3]; // 0x2a5 (0x3) 
	float SimulatingTooLongLength; // 0x2a8 (0x4)
	unsigned char unreflected_2ac[0x4]; // 0x2ac (0x4) 
	struct FMulticastInlineDelegate OnPickup; // 0x2b0 (0x10)
	struct FMulticastInlineDelegate OnPickupAttempted; // 0x2c0 (0x10)
	struct FMulticastInlineDelegate OnPickupDespawned; // 0x2d0 (0x10)
	struct FMulticastInlineDelegate OnPickupDestroyed; // 0x2e0 (0x10)
	struct FMulticastInlineDelegate OnPickupCombined; // 0x2f0 (0x10)
	struct FMulticastInlineDelegate OnPickupCombinedOverflow; // 0x300 (0x10)
	struct FMulticastInlineDelegate OnSetPawnWhoDroppedPickup; // 0x310 (0x10)
	unsigned char unreflected_320[0x8]; // 0x320 (0x8) 
	struct FFortItemEntry PrimaryPickupItemEntry; // 0x328 (0x1a0)
	struct TArray<struct FFortItemEntry> MultiItemPickupEntries; // 0x4c8 (0x10)
	struct FFortPickupLocationData PickupLocationData; // 0x4d8 (0x98)
	enum EFortPickupSourceTypeFlag PickupSourceTypeFlags; // 0x570 (0x1)
	enum EFortPickupSpawnSource PickupSpawnSource; // 0x571 (0x1)
	unsigned char unreflected_572[0x2]; // 0x572 (0x2) 
	struct TWeakObjectPtr<class AActor> OwnerInstigator; // 0x574 (0x8)
	int16_t OptionalOwnerID; // 0x57c (0x2)
	int16_t DropperID; // 0x57e (0x2)
	struct FGuid OptionalMissionGuid; // 0x580 (0x10)
	class UFortItem* PrimaryPickupDummyItem; // 0x590 (0x8)
	struct TWeakObjectPtr<class AFortPickupEffect> PickupEffectBlueprint; // 0x598 (0x8)
	class UCapsuleComponent* TouchCapsule; // 0x5a0 (0x8)
	class UFortProjectileMovementComponent* MovementComponent; // 0x5a8 (0x8)
	class UFortWaterInteractionComponent* WaterInteractionComponent; // 0x5b0 (0x8)
	class UFortLinkToActorComponent* LinkToActorComponent; // 0x5b8 (0x8)
	bool bPickedUp; // 0x5c0 (0x1)
	bool bSplitOnPickup; // 0x5c1 (0x1)
	bool bTossedFromContainer; // 0x5c2 (0x1)
	bool bForceHideMinimapIndicator; // 0x5c3 (0x1)
	bool bCombinePickupsWhenTossCompletes; // 0x5c4 (0x1)
	bool bServerStoppedSimulation; // 0x5c5 (0x1)
	bool bClientUseInterpolationOnly; // 0x5c6 (0x1)
	unsigned char ServerImpactSoundFlash; // 0x5c7 (0x1)
	float LastLandedSoundPlayTime; // 0x5c8 (0x4)
	float OverrideInteractAimRadius; // 0x5cc (0x4)
	float LandSoundZForceThreshold; // 0x5d0 (0x4)
	float DefaultFlyTime; // 0x5d4 (0x4)
	bool bForceDefaultFlyTime; // 0x5d8 (0x1)
	unsigned char unreflected_5d9[0x7]; // 0x5d9 (0x7) 
	struct TArray<class UAudioComponent*> DroppedLoopingSoundComps; // 0x5e0 (0x10)
	class USoundBase* LandedSoundOverride; // 0x5f0 (0x8)
	struct TWeakObjectPtr<class AFortPawn> PawnWhoDroppedPickup; // 0x5f8 (0x8)
	int CachedSpecialActorIdx; // 0x600 (0x4)
	struct FName SpecialActorID; // 0x604 (0x4)
	class UFortSimpleMiniMapIndicator* MiniMapIndicator; // 0x608 (0x8)
	class UFortSlateHUDIndicator* HUDLabel; // 0x610 (0x8)
	unsigned char unreflected_618[0xd4]; // 0x618 (0xd4) 
	bool bRandomRotation; // 0x6ec (0x1)
	unsigned char unreflected_6ed[0x3]; // 0x6ed (0x3) 
	class AActor* VolumeAtSpawn; // 0x6f0 (0x8)
	unsigned char unreflected_6f8[0x18]; // 0x6f8 (0x18) 
	float DespawnTime; // 0x710 (0x4)
	float StormDespawnTime; // 0x714 (0x4)
	float StartSimulatingTime; // 0x718 (0x4)
	unsigned char padding_71c[0x24]; // 0x71c (0x24)

	/* Functions */

	// Function /Script/FortniteGame.FortPickup.TossPickup (Underlying native function: TossPickup 0x8a79d44)
	void TossPickup(struct FVector& FinalLocation, class AFortPawn*& ItemOwner, int& OverrideMaxStackCount, bool& bToss, bool& bShouldCombinePickupsWhenTossCompletes, enum EFortPickupSourceTypeFlag& InPickupSourceTypeFlags, enum EFortPickupSpawnSource& InPickupSpawnSource); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickup.SetPickedUp (Underlying native function: SetPickedUp 0x8a79368)
	void SetPickedUp(bool& bInPickedUp); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickup.SetOverrideInteractRadius (Underlying native function: SetOverrideInteractRadius 0x8a792d0)
	void SetOverrideInteractRadius(float& NewRadius); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickup.SetDropper (Underlying native function: SetDropper 0x8a79150)
	void SetDropper(class AFortPlayerController*& Dropper); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickup.SetDespawnTime (Underlying native function: SetDespawnTime 0x8a790b4)
	void SetDespawnTime(float& InDespawnTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickup.SetCombinePickupsWhenTossCompletes (Underlying native function: SetCombinePickupsWhenTossCompletes 0x8a7902c)
	void SetCombinePickupsWhenTossCompletes(bool& CombinePickupsWhenTossCompletes); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickup.PickedUp (Underlying native function: PickedUp 0x8a79014)
	bool PickedUp(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickup.OnServerStopCallback (Underlying native function: OnServerStopCallback 0x8a78f78)
	void OnServerStopCallback(struct FHitResult& Hit); // (0x00000002 | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPickup.OnServerBounceCallback (Underlying native function: OnServerBounceCallback 0x8a78e80)
	void OnServerBounceCallback(struct FHitResult& Hit, struct FVector& OldVelocity); // (0x00000002 | Native | Public | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortPickup.OnRep_TossedFromContainer (Underlying native function: OnRep_TossedFromContainer 0x240d908)
	void OnRepTossedFromContainer(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortPickup.OnRep_ServerStoppedSimulation (Underlying native function: OnRep_ServerStoppedSimulation 0x2346ed8)
	void OnRepServerStoppedSimulation(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortPickup.OnRep_ServerImpactSoundFlash (Underlying native function: OnRep_ServerImpactSoundFlash 0xed0df8)
	void OnRepServerImpactSoundFlash(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortPickup.OnRep_PrimaryPickupItemEntry (Underlying native function: OnRep_PrimaryPickupItemEntry 0x14bfb28)
	void OnRepPrimaryPickupItemEntry(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortPickup.OnRep_PickupOwnerData (Underlying native function: OnRep_PickupOwnerData 0x8a78da8)
	void OnRepPickupOwnerData(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortPickup.OnRep_PickupLocationData (Underlying native function: OnRep_PickupLocationData 0xed5808)
	void OnRepPickupLocationData(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortPickup.OnRep_ForceHideMinimapIndicator (Underlying native function: OnRep_ForceHideMinimapIndicator 0x14f9120)
	void OnRepForceHideMinimapIndicator(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortPickup.OnRep_bPickedUp (Underlying native function: OnRep_bPickedUp 0x2411814)
	void OnRepbPickedUp(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortPickup.OnOwnerEndPlay (Underlying native function: OnOwnerEndPlay 0x17419b8)
	void OnOwnerEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPickup.NotifyQuestManager (Underlying native function: NotifyQuestManager 0x8a78ca8)
	void NotifyQuestManager(enum EFortQuestObjectiveStatEvent& StatEvent, struct FGameplayTagContainer& EventTags); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickup.IsSkeletalMeshComponent (Underlying native function: IsSkeletalMeshComponent 0x8a78adc)
	bool IsSkeletalMeshComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickup.HandleMoveIgnoredActorEndPlay (Underlying native function: HandleMoveIgnoredActorEndPlay 0x2706084)
	void HandleMoveIgnoredActorEndPlay(class AActor*& EndPlayActor, struct TEnumAsByte<EEndPlayReason>& Reason); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPickup.HandleGiveItemSpawnedPickup (Underlying native function: HandleGiveItemSpawnedPickup 0x8a789dc)
	void HandleGiveItemSpawnedPickup(class AFortPlayerController*& PlayerController, class AFortPickup*& PickUp); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPickup.HandleConnectedPhysicsActorWake (Underlying native function: HandleConnectedPhysicsActorWake 0x8a78960)
	void HandleConnectedPhysicsActorWake(class AActor*& PhysicsActor); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPickup.HandleConnectedActorDestroyed (Underlying native function: HandleConnectedActorDestroyed 0x8a78960)
	void HandleConnectedActorDestroyed(class AActor*& DamageCauser); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPickup.GetTrackerGuid (Underlying native function: GetTrackerGuid 0x8a787b8)
	struct FGuid GetTrackerGuid(); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickup.GetPrimaryItemEntry (Underlying native function: GetPrimaryItemEntry 0x8a7879c)
	struct FFortItemEntry GetPrimaryItemEntry(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickup.GetPrimaryItemDefinition (Underlying native function: GetPrimaryItemDefinition 0x8843214)
	class UFortItemDefinition* GetPrimaryItemDefinition(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickup.GetPickupStaticMeshComponent (Underlying native function: GetPickupStaticMeshComponent 0x8a786e8)
	class UStaticMeshComponent* GetPickupStaticMeshComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickup.GetPickupSkeletalMeshComponent (Underlying native function: GetPickupSkeletalMeshComponent 0x8a786c4)
	class USkeletalMeshComponent* GetPickupSkeletalMeshComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickup.GetPickupEffectBlueprint (Underlying native function: GetPickupEffectBlueprint 0x8a78658)
	class AFortPickupEffect* GetPickupEffectBlueprint(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickup.GetPawnWhoDroppedPickup (Underlying native function: GetPawnWhoDroppedPickup 0x8a785cc)
	class AFortPawn* GetPawnWhoDroppedPickup(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickup.GetOwnerPlayerController (Underlying native function: GetOwnerPlayerController 0x8a785a8)
	class AFortPlayerController* GetOwnerPlayerController(); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortPickup.GetMovementCapsuleRadius (Underlying native function: GetMovementCapsuleRadius 0x8a78590)
	static float GetMovementCapsuleRadius(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPickup.GetMovementCapsuleHalfHeight (Underlying native function: GetMovementCapsuleHalfHeight 0x2499d98)
	static float GetMovementCapsuleHalfHeight(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPickup.GetItemEntryNum (Underlying native function: GetItemEntryNum 0x8a7856c)
	int GetItemEntryNum(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickup.GetItemEntry (Underlying native function: GetItemEntry 0x2651634)
	struct FFortItemEntry GetItemEntry(int& ItemIndex); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickup.GetInteractText (Underlying native function: GetInteractText 0x8a7849c)
	bool GetInteractText(struct FText& InteractText); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickup.GetInteractErrorText (Underlying native function: GetInteractErrorText 0x8a783cc)
	bool GetInteractErrorText(struct FText& InteractErrorText); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickup.GetDisplayName (Underlying native function: GetDisplayName 0x8a78208)
	struct FText GetDisplayName(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickup.BlueprintSetPickupTarget (Underlying native function: BlueprintSetPickupTarget 0x8a77c18)
	void BlueprintSetPickupTarget(class AFortPawn*& PickupTarget, bool& bPlayPickupSound); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickup.BlueprintGetInteractErrorText (Underlying native function: BlueprintGetInteractErrorText 0x8a77b48)
	bool BlueprintGetInteractErrorText(struct FText& OverrideInteractErrorText); // (0x00000002 | Native | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickup.BlueprintCanInteract (Underlying native function: BlueprintCanInteract 0x2526484)
	bool BlueprintCanInteract(class AFortPlayerPawn*& FortPawn, bool& bCanInteractOverride); // (0x00000002 | Native | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickup.AllowLongRangeAutoPickup (Underlying native function: AllowLongRangeAutoPickup 0x8a77500)
	bool AllowLongRangeAutoPickup(class AFortPlayerPawn*& FortPawn); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickup.AddSpawnSourceTags (Underlying native function: AddSpawnSourceTags 0x8a76f6c)
	void AddSpawnSourceTags(struct FGameplayTagContainer& AdditionalTagsToAdd); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

