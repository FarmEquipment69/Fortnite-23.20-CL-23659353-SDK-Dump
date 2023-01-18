// Class /Script/FortniteGame.BuildingTrap
// Size: 0x1088
class ABuildingTrap : public ABuildingSMActor
{
	unsigned char unreflected_dd0[0x20]; // 0xdd0 (0x20) 
	class USceneComponent* TraceLocation; // 0xdf0 (0x8)
	class USkeletalMesh* PlacementSkeletalMesh; // 0xdf8 (0x8)
	struct FVector PlacementSkeletalMeshRelativeLocation; // 0xe00 (0x18)
	struct FRotator PlacementSkeletalMeshRelativeRotation; // 0xe18 (0x18)
	class UStaticMesh* TrapRangeMesh; // 0xe30 (0x8)
	class UStaticMesh* TrapPreviewMesh; // 0xe38 (0x8)
	struct FVector PreviewOverrideScale; // 0xe40 (0x18)
	class UFortTrapItemDefinition* TrapData; // 0xe58 (0x8)
	struct FText AttachmentHintText; // 0xe60 (0x18)
	bool bShouldAffectAllPawnsInMinigames; // 0xe78 (0x1)
	unsigned char unreflected_e79[0x7]; // 0xe79 (0x7) 
	struct FFortTargetFilter TriggerFilter; // 0xe80 (0x38)
	struct FVector TrapPlacementOffset; // 0xeb8 (0x18)
	bool bTriggerAbilityOnEndoverlap; // 0xed0 (0x1)
	unsigned char unreflected_ed1[0x7]; // 0xed1 (0x7) 
	class UFortAbilitySet* AbilitySet; // 0xed8 (0x8)
	struct TArray<class UFortAlterationItemDefinition*> AppliedAlterations; // 0xee0 (0x10)
	struct TArray<struct FFortAbilitySetHandle> AlterationAbilitySetHandles; // 0xef0 (0x10)
	class ABuildingSMActor* AttachedTo; // 0xf00 (0x8)
	bool bTargetWithAttachedTo; // 0xf08 (0x1)
	unsigned char unreflected_f09[0x7]; // 0xf09 (0x7) 
	class ABuildingSMActor* LastAttachedTo; // 0xf10 (0x8)
	float DelayBeforeDestroyAfterDurabilityExpired; // 0xf18 (0x4)
	float SavedDurabilityPct; // 0xf1c (0x4)
	unsigned char unreflected_f20[0x4]; // 0xf20 (0x4) 
	float ObstructedTargetRecheckInterval; // 0xf24 (0x4)
	struct TArray<struct FVector> ShouldTriggerTraceOffsets; // 0xf28 (0x10)
	struct TArray<class UPrimitiveComponent*> TriggerComponents; // 0xf38 (0x10)
	bool bIgnoreBuildingObstructions; // 0xf48 (0x1)
	bool bOwnAllFacesOfAttachedToActor; // 0xf49 (0x1)
	unsigned char unreflected_f4a[0x6]; // 0xf4a (0x6) 
	class UMaterialInstance* AlternateMaterialInstance; // 0xf50 (0x8)
	class UAthenaTrapAIPerceptionStimuliSourceComponent* StimSourceComponent; // 0xf58 (0x8)
	unsigned char bCanBeMarked; // 0xf60 (0x1)
	unsigned char bBlockMarking; // 0xf60 (0x1)
	unsigned char unreflected_f61[0x7]; // 0xf61 (0x7) 
	struct FMarkedActorDisplayInfo MarkerDisplay; // 0xf68 (0x98)
	struct FVector MarkerPositionOffset; // 0x1000 (0x18)
	struct TArray<class UPrimitiveComponent*> DamageComponents; // 0x1018 (0x10)
	struct TArray<class UStaticMeshComponent*> StaticMeshes; // 0x1028 (0x10)
	int TrapLevel; // 0x1038 (0x4)
	int OriginalTrapLevel; // 0x103c (0x4)
	bool bTrapRecharging; // 0x1040 (0x1)
	unsigned char unreflected_1041[0x27]; // 0x1041 (0x27) 
	struct FGameplayTagContainer AnalyticsTags; // 0x1068 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.BuildingTrap.UseAttachedToWhenTargeted (Underlying native function: UseAttachedToWhenTargeted 0x862f3dc)
	bool UseAttachedToWhenTargeted(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTrap.TriggerOverlapEnd (Underlying native function: TriggerOverlapEnd 0x862f0b0)
	void TriggerOverlapEnd(class AActor*& OtherActor); // (Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTrap.TriggerIfAppropriate (Underlying native function: TriggerIfAppropriate 0x862f088)
	bool TriggerIfAppropriate(); // (BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTrap.SwitchToAlternateMaterial (Underlying native function: SwitchToAlternateMaterial 0x862f070)
	void SwitchToAlternateMaterial(); // (BlueprintCosmetic | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingTrap.SpawnedFromItemDefinition (Underlying native function: SpawnedFromItemDefinition 0x862ef94)
	void SpawnedFromItemDefinition(class UFortTrapItemDefinition*& ItemDef, int& InTrapLevel); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTrap.SetTeamForMinigameStart (Underlying native function: SetTeamForMinigameStart 0x862ef80)
	void SetTeamForMinigameStart(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingTrap.SetAttachedTo (Underlying native function: SetAttachedTo 0x862eaec)
	void SetAttachedTo(class ABuildingSMActor*& ActorAttachedTo); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTrap.ResetTrapLevel (Underlying native function: ResetTrapLevel 0x862eab0)
	void ResetTrapLevel(); // (Final | Native | Public)

	// Function /Script/FortniteGame.BuildingTrap.ResetTeamOnMinigameEnd (Underlying native function: ResetTeamOnMinigameEnd 0x862ea80)
	void ResetTeamOnMinigameEnd(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingTrap.OverrideMarkerDisplayInfo (Underlying native function: OverrideMarkerDisplayInfo 0x862e744)
	void OverrideMarkerDisplayInfo(struct FMarkedActorDisplayInfo& NewDisplayInfo); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTrap.OnTriggerTouch (Underlying native function: OnTriggerTouch 0x862e554)
	void OnTriggerTouch(class UPrimitiveComponent*& OverlappedComp, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Native | Public | HasOutParms)

	// Function /Script/FortniteGame.BuildingTrap.OnTriggerEndTouch (Underlying native function: OnTriggerEndTouch 0x862e414)
	void OnTriggerEndTouch(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (Native | Public)

	// Function /Script/FortniteGame.BuildingTrap.OnRep_ReplicatedAppliedAlterations (Underlying native function: OnRep_ReplicatedAppliedAlterations 0x2a888a8)
	void OnRepReplicatedAppliedAlterations(); // (Native | Protected)

	// Function /Script/FortniteGame.BuildingTrap.OnRep_bTrapRecharging (Underlying native function: OnRep_bTrapRecharging 0x862e088)
	void OnRepbTrapRecharging(); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingTrap.OnRep_AttachedTo (Underlying native function: OnRep_AttachedTo 0x1b4b43c)
	void OnRepAttachedTo(); // (Native | Protected)

	// Function /Script/FortniteGame.BuildingTrap.OnReloadEnd (Has no native function)
	void OnReloadEnd(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingTrap.OnReloadBegin (Has no native function)
	void OnReloadBegin(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingTrap.OnPlaced (Has no native function)
	void OnPlaced(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingTrap.OnOutOfDurability (Has no native function)
	void OnOutOfDurability(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingTrap.OnModifyTrapIncomingDamage (Has no native function)
	void OnModifyTrapIncomingDamage(float& Damage, class AController*& EventInstigator, class AActor*& DamageCauser, float& OutDamage, bool& bOutConsumeEvent); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingTrap.OnInitTeam (Has no native function)
	void OnInitTeam(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingTrap.OnInitCosmeticAlterations (Has no native function)
	void OnInitCosmeticAlterations(struct FFortCosmeticModification& CosmeticMod); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingTrap.OnInitAlteration (Has no native function)
	void OnInitAlteration(class UFortAlterationItemDefinition*& NewAlteration); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingTrap.OnFinishedBuilding (Has no native function)
	void OnFinishedBuilding(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingTrap.OnDestroy (Has no native function)
	void OnDestroy(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingTrap.OnBlockingBuildingDied (Underlying native function: OnBlockingBuildingDied 0x862d230)
	void OnBlockingBuildingDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Public | HasDefaults)

	// Function /Script/FortniteGame.BuildingTrap.HasDurability (Underlying native function: HasDurability 0x862cb84)
	bool HasDurability(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingTrap.GetTrapRating (Underlying native function: GetTrapRating 0x862c978)
	int GetTrapRating(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingTrap.GetTrapLevel (Underlying native function: GetTrapLevel 0x862c950)
	int GetTrapLevel(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingTrap.GetTouchingDamageTargets (Underlying native function: GetTouchingDamageTargets 0x862c828)
	struct TArray<class AActor*> GetTouchingDamageTargets(struct FFortTargetFilter& Filter); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingTrap.GetReloadTime (Underlying native function: GetReloadTime 0x862c768)
	float GetReloadTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.BuildingTrap.GetReloadBeginGameplayCueTag (Underlying native function: GetReloadBeginGameplayCueTag 0x862c73c)
	struct FGameplayTag GetReloadBeginGameplayCueTag(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingTrap.GetNumberOfRemainingDelayedAttachingAttempts (Underlying native function: GetNumberOfRemainingDelayedAttachingAttempts 0x862c6e0)
	int GetNumberOfRemainingDelayedAttachingAttempts(); // (Native | Event | Protected | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingTrap.GetMaxDurability (Underlying native function: GetMaxDurability 0x862c660)
	float GetMaxDurability(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingTrap.GetFireDelay (Underlying native function: GetFireDelay 0x862c634)
	float GetFireDelay(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingTrap.GetDurabilityPercent (Underlying native function: GetDurabilityPercent 0x862c608)
	float GetDurabilityPercent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingTrap.GetDelayBeginGameplayCueTag (Underlying native function: GetDelayBeginGameplayCueTag 0x862c5bc)
	struct FGameplayTag GetDelayBeginGameplayCueTag(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingTrap.GetDamageDelay (Underlying native function: GetDamageDelay 0x862c590)
	float GetDamageDelay(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingTrap.GetCenter (Underlying native function: GetCenter 0x862c530)
	struct FVector GetCenter(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.BuildingTrap.GetBuildingAttachedTo (Underlying native function: GetBuildingAttachedTo 0x862c518)
	class ABuildingSMActor* GetBuildingAttachedTo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingTrap.GetArmTime (Underlying native function: GetArmTime 0x862c4f0)
	float GetArmTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.BuildingTrap.GetAlterations (Underlying native function: GetAlterations 0x862c478)
	struct TArray<class UFortAlterationItemDefinition*> GetAlterations(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingTrap.GetActivateTrapGameplayCueTag (Underlying native function: GetActivateTrapGameplayCueTag 0x862c44c)
	struct FGameplayTag GetActivateTrapGameplayCueTag(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingTrap.GameplayCue_Abilities_Activation_Traps (Underlying native function: GameplayCue_Abilities_Activation_Traps 0x862bf2c)
	void GameplayCueAbilitiesActivationTraps(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTrap.FinishTrigger (Underlying native function: FinishTrigger 0x862bf00)
	void FinishTrigger(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTrap.BP_ShouldTrigger (Underlying native function: BP_ShouldTrigger 0x862b720)
	bool BPShouldTrigger(struct TArray<class AActor*>& TouchingActors); // (Native | Event | Protected | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingTrap.BP_OnTrigger (Has no native function)
	void BPOnTrigger(struct TArray<class AActor*>& TouchingActors, bool& bOutConsumeEvent); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingTrap.AttemptRetrigger (Underlying native function: AttemptRetrigger 0x862b604)
	void AttemptRetrigger(float& Seconds); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTrap.AddTriggerComponent (Underlying native function: AddTriggerComponent 0x23b8a50)
	void AddTriggerComponent(class UPrimitiveComponent*& TriggerComponent); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTrap.AddDamageComponent (Underlying native function: AddDamageComponent 0x862b17c)
	void AddDamageComponent(class UPrimitiveComponent*& DamageComponent); // (Final | Native | Public | BlueprintCallable)
};

