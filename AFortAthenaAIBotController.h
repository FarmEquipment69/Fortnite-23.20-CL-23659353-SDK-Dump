// Class /Script/FortniteAI.FortAthenaAIBotController
// Size: 0x12b0
class AFortAthenaAIBotController : public AAIController
{
	unsigned char unreflected_3b0[0x48]; // 0x3b0 (0x48) 
	class AActor* PreviousVehicle; // 0x3f8 (0x8)
	struct FMulticastInlineDelegate OnPickupCreated; // 0x400 (0x10)
	unsigned char unreflected_410[0x10]; // 0x410 (0x10) 
	struct TMap<struct FGuid, struct FFortAbilitySetHandle> AppliedInGameModifierAbilitySetHandles; // 0x420 (0x50)
	struct TSet<struct FGuid> GadgetTrackedAttributeItemInstanceIds; // 0x470 (0x50)
	unsigned char unreflected_4c0[0x50]; // 0x4c0 (0x50) 
	struct FFortBotTargetHandler TargetHandler; // 0x510 (0x40)
	unsigned char unreflected_550[0x1]; // 0x550 (0x1) 
	unsigned char bIsAnAthenaGameParticipant; // 0x551 (0x1)
	unsigned char unreflected_552[0x6]; // 0x552 (0x6) 
	enum EReachLocationValidationMode ReachLocationValidationMode; // 0x558 (0x1)
	unsigned char unreflected_559[0x7]; // 0x559 (0x7) 
	class UBehaviorTree* BehaviorTree; // 0x560 (0x8)
	struct FFortBotInventoryInfo SlotItems[0x6]; // 0x568 (0x18) (ARRAY) 
	unsigned char unreflected_5f8[0x18]; // 0x5f8 (0x18) 
	class UFortAthenaAIBotInventoryDigestedSkillSet* CacheInventoryDigestedSkillSet; // 0x610 (0x8)
	unsigned char unreflected_618[0x8]; // 0x618 (0x8) 
	class AFortPlayerPawnAthena* PlayerBotPawn; // 0x620 (0x8)
	class UAthenaAIServicePlayerBots* CachedAIServicePlayerBots; // 0x628 (0x8)
	class AFortGameModeAthena* CachedGameMode; // 0x630 (0x8)
	class UFortAthenaAIRuntimeParametersComponent* CachedAIRuntimeParametersComponent; // 0x638 (0x8)
	class UFortAthenaAIRuntimeParameters_Leash* CachedLeashRuntimeParameters; // 0x640 (0x8)
	class UFortAthenaAIRuntimeParameters_AffiliationBase* CachedAffiliationRuntimeParameters; // 0x648 (0x8)
	class UFortAthenaNpcPatrollingComponent* CachedPatrollingComponent; // 0x650 (0x8)
	class UFortAIControllerPerksComponent* CachedAIPerksComponent; // 0x658 (0x8)
	unsigned char unreflected_660[0x8]; // 0x660 (0x8) 
	struct TArray<struct FBotDelayedStimulus> DelayedStimulus; // 0x668 (0x10)
	unsigned char unreflected_678[0x18]; // 0x678 (0x18) 
	struct TArray<struct FFortBotThreatActorInfo> ObjectsThreatList; // 0x690 (0x10)
	struct TArray<struct FFortBotThreatActorInfo> TrapsThreatList; // 0x6a0 (0x10)
	enum EAlertLevel CurrentAlertLevel; // 0x6b0 (0x1)
	unsigned char unreflected_6b1[0x7]; // 0x6b1 (0x7) 
	struct FAlertLevelInfo DefaultAlertLevelInfo; // 0x6b8 (0x10)
	struct FMulticastInlineDelegate OnAlertLevelChangedEventDelegate; // 0x6c8 (0x10)
	struct FMulticastInlineDelegate OnStealthMeterChangedEventDelegate; // 0x6d8 (0x10)
	unsigned char unreflected_6e8[0x8]; // 0x6e8 (0x8) 
	struct FMulticastInlineDelegate OnAgentDBNOStatusChangedEventDelegate; // 0x6f0 (0x10)
	struct FMulticastInlineDelegate OnAgentDiedEventDelegate; // 0x700 (0x10)
	struct FMulticastInlineDelegate OnAgentGameOver; // 0x710 (0x10)
	unsigned char unreflected_720[0x48]; // 0x720 (0x48) 
	struct FMulticastInlineDelegate OnPlayerPawnKilledByBot; // 0x768 (0x10)
	struct FMulticastInlineDelegate OnAIPawnKilledByBot; // 0x778 (0x10)
	unsigned char unreflected_788[0x30]; // 0x788 (0x30) 
	class AFortInventory* Inventory; // 0x7b8 (0x8)
	float Skill; // 0x7c0 (0x4)
	unsigned char bAllowUnsupportedItemsInDefaultInventory; // 0x7c4 (0x1)
	unsigned char unreflected_7c5[0x3]; // 0x7c5 (0x3) 
	struct TArray<class UClass*> BotSkillSetClasses; // 0x7c8 (0x10)
	unsigned char unreflected_7d8[0x20]; // 0x7d8 (0x20) 
	class UFortAthenaAIBotInventoryItems* StartupInventory; // 0x7f8 (0x8)
	struct FFortAthenaLoadout CosmeticLoadoutBC; // 0x800 (0x178)
	struct TArray<class UCustomCharacterPart*> CustomCharacterPartOverridesBC; // 0x978 (0x10)
	class UFortBotNameSettings* NameSettingsBC; // 0x988 (0x8)
	struct FScalableFloat SpectateOnDeathMinTime; // 0x990 (0x28)
	struct FScalableFloat SpectateOnDeathMaxTime; // 0x9b8 (0x28)
	struct FScalableFloat EmotesMaxCount; // 0x9e0 (0x28)
	class UFortAthenaAIBotPerceptionDigestedSkillSet* CachePerceptionDigestedSkillSet; // 0xa08 (0x8)
	class UFortAthenaAIBotHarvestDigestedSkillSet* CacheHarvestDigestedSkillSet; // 0xa10 (0x8)
	class UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementSkillSet; // 0xa18 (0x8)
	class UFortAthenaAIBotLootingDigestedSkillSet* CacheLootingSkillSet; // 0xa20 (0x8)
	class UFortAthenaAIBotAttackingDigestedSkillSet* CacheAttackingSkillSet; // 0xa28 (0x8)
	class UFortAthenaAIBotPlayStyleDigestedSkillSet* CachePlayStyleSkillSet; // 0xa30 (0x8)
	class UFortAthenaAIBotUnstuckDigestedSkillSet* CacheUnstuckSkillSet; // 0xa38 (0x8)
	class UFortAthenaAIBotRangeAttackDigestedSkillSet* CacheRangeAttackSkillSet; // 0xa40 (0x8)
	class UFortAthenaAIBotVehicleDigestedSkillSet* CacheVehicleSkillSet; // 0xa48 (0x8)
	unsigned char unreflected_a50[0x60]; // 0xa50 (0x60) 
	class UFortInteractContextInfo* InteractContextInfo; // 0xab0 (0x8)
	unsigned char unreflected_ab8[0x68]; // 0xab8 (0x68) 
	class UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet; // 0xb20 (0x8)
	unsigned char unreflected_b28[0x4]; // 0xb28 (0x4) 
	unsigned char bCanBeDestroyedOnDeath; // 0xb2c (0x1)
	unsigned char unreflected_b2d[0xb]; // 0xb2d (0xb) 
	struct FVector LastDeathLocation; // 0xb38 (0x18)
	struct FRotator LastDeathRotation; // 0xb50 (0x18)
	class UFortWorldItem* CachedWorldItem; // 0xb68 (0x8)
	unsigned char unreflected_b70[0x8]; // 0xb70 (0x8) 
	class AFortWeapon* CacheWeaponUsedToCalculateType; // 0xb78 (0x8)
	bool bCachedIsUsingArcedProjectileWeapon; // 0xb80 (0x1)
	unsigned char unreflected_b81[0x3]; // 0xb81 (0x3) 
	float CachedProjectileGravityScale; // 0xb84 (0x4)
	class AFortWeapon* CachedWeaponUsedToCalculateProjectileData; // 0xb88 (0x8)
	class UStatManager* StatManager; // 0xb90 (0x8)
	struct TArray<struct FBuildingWeakSpotData> ActiveWeakSpots; // 0xb98 (0x10)
	unsigned char unreflected_ba8[0x28]; // 0xba8 (0x28) 
	class UClass* CacheBotPawnClass; // 0xbd0 (0x8)
	unsigned char unreflected_bd8[0x8]; // 0xbd8 (0x8) 
	class AActor* CurrentLootActor; // 0xbe0 (0x8)
	class UAthenaMarkerComponent* MarkerComponent; // 0xbe8 (0x8)
	struct FString BotPlayerName; // 0xbf0 (0x10)
	struct FGameplayTag DescriptorTag; // 0xc00 (0x4)
	unsigned char unreflected_c04[0x4]; // 0xc04 (0x4) 
	struct FString BotIDSuffix; // 0xc08 (0x10)
	struct FString BotPlayerNameWithSkillRating; // 0xc18 (0x10)
	unsigned char unreflected_c28[0x10]; // 0xc28 (0x10) 
	class UFortAthenaMutator_SpawningPolicyData* PolicyDataSpawner; // 0xc38 (0x8)
	unsigned char unreflected_c40[0xd8]; // 0xc40 (0xd8) 
	class UFortControllerComponent_Telemetry* FortControllerComponentTelemetry; // 0xd18 (0x8)
	bool bForceUsingBuildingTool; // 0xd20 (0x1)
	bool bForceHolsterWeapon; // 0xd21 (0x1)
	unsigned char unreflected_d22[0x6]; // 0xd22 (0x6) 
	class UFortWorldItem* PendingEquipWeapon; // 0xd28 (0x8)
	unsigned char unreflected_d30[0x48]; // 0xd30 (0x48) 
	class APawn* PlayerToSpectateOnDeath; // 0xd78 (0x8)
	struct FMulticastInlineDelegate OnPlayerPawnAISpawnedDelegate; // 0xd80 (0x10)
	unsigned char unreflected_d90[0x108]; // 0xd90 (0x108) 
	class UAISenseConfig_Sight* AISenseConfigSightOverride; // 0xe98 (0x8)
	unsigned char unreflected_ea0[0x10]; // 0xea0 (0x10) 
	class AActor* BotOwner; // 0xeb0 (0x8)
	int BotControllerUID; // 0xeb8 (0x4)
	unsigned char unreflected_ebc[0x4]; // 0xebc (0x4) 
	class AFortPlayerPawnAthena* ReviveTarget; // 0xec0 (0x8)
	unsigned char unreflected_ec8[0x90]; // 0xec8 (0x90) 
	class UFortAthenaAIBotCustomizationData* BotData; // 0xf58 (0x8)
	struct FDebugMinimapData DebugMinimapData; // 0xf60 (0x1b0)
	class AFortPlayerPawnAthena* RevivePlayerPawnToken; // 0x1110 (0x8)
	unsigned char unreflected_1118[0x18]; // 0x1118 (0x18) 
	class AActor* LeashActorToFollow; // 0x1130 (0x8)
	struct FVector LeashActorToFollowLocalOffset; // 0x1138 (0x18)
	class AFortAthenaAILeashVolume* LeashVolume; // 0x1150 (0x8)
	class UFortGameStateComponent_AffiliationManager* CachedAffiliationManager; // 0x1158 (0x8)
	class UFortActorComponent_Affiliation* CachedAffiliationComponent; // 0x1160 (0x8)
	bool bIsAffectedByMutatorHealthAndShieldModifiers; // 0x1168 (0x1)
	unsigned char unreflected_1169[0x7]; // 0x1169 (0x7) 
	bool bHasChangedPawnCullDistanceToAggroMode; // 0x1170 (0x1)
	unsigned char unreflected_1171[0x7]; // 0x1171 (0x7) 
	class UFortAthenaAIRuntimeParameters_AIBotRespawn* RespawnRuntimeParameters; // 0x1178 (0x8)
	struct TWeakObjectPtr<class AActor> CurrentBlockingObstacle; // 0x1180 (0x8)
	unsigned char unreflected_1188[0x8]; // 0x1188 (0x8) 
	struct TArray<struct TWeakObjectPtr<class AActor>> NoSmashActors; // 0x1190 (0x10)
	unsigned char unreflected_11a0[0x8]; // 0x11a0 (0x8) 
	class APawn* FinisherPawn; // 0x11a8 (0x8)
	unsigned char unreflected_11b0[0x54]; // 0x11b0 (0x54) 
	enum EFortPawnStasisMode PreviousStasisMode; // 0x1204 (0x1)
	bool bPostponeGiveWeaponCheat; // 0x1205 (0x1)
	bool bPostponeGiveMaterialsCheat; // 0x1206 (0x1)
	unsigned char unreflected_1207[0x1]; // 0x1207 (0x1) 
	float StartSpectatingTime; // 0x1208 (0x4)
	unsigned char unreflected_120c[0x3c]; // 0x120c (0x3c) 
	class UAthenaDanceItemDefinition* RequestedEmoteAsset; // 0x1248 (0x8)
	unsigned char unreflected_1250[0x8]; // 0x1250 (0x8) 
	class UBehaviorTree* BTAssetToRunOnPawnAISpawned; // 0x1258 (0x8)
	unsigned char padding_1260[0x50]; // 0x1260 (0x50)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAIBotController.UpdateLeashActorToFollowLocation (Underlying native function: UpdateLeashActorToFollowLocation 0xa2a2fac)
	void UpdateLeashActorToFollowLocation(); // (Final | Native | Protected)

	// Function /Script/FortniteAI.FortAthenaAIBotController.ThankBusDriver (Underlying native function: ThankBusDriver 0xa2a2f98)
	void ThankBusDriver(); // (Final | Native | Protected)

	// Function /Script/FortniteAI.FortAthenaAIBotController.SwitchTeam (Underlying native function: SwitchTeam 0xa2a2d20)
	void SwitchTeam(unsigned char& TeamIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.StopSecondaryFire (Underlying native function: StopSecondaryFire 0xa2a2c4c)
	void StopSecondaryFire(bool& bFireWhenStopping); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.StopFire (Underlying native function: StopFire 0xa2a2c38)
	void StopFire(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.StopEmote (Underlying native function: StopEmote 0xa2a2c24)
	void StopEmote(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.StartSecondaryFire (Underlying native function: StartSecondaryFire 0xa2a2b94)
	void StartSecondaryFire(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.StartFire (Underlying native function: StartFire 0xa2a2b80)
	void StartFire(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.SetSkillSet (Underlying native function: SetSkillSet 0xa2a268c)
	void SetSkillSet(class UClass*& SkillSetClass); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.SetRadialLeashOuterRadius (Underlying native function: SetRadialLeashOuterRadius 0xa2a2608)
	void SetRadialLeashOuterRadius(float& OuterRadius); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.SetRadialLeashInnerRadius (Underlying native function: SetRadialLeashInnerRadius 0xa2a2584)
	void SetRadialLeashInnerRadius(float& InnerRadius); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.SetPatrollingEnable (Underlying native function: SetPatrollingEnable 0xa2a2504)
	void SetPatrollingEnable(bool& bEnable); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.SetLeashVolume (Underlying native function: SetLeashVolume 0xa2a2468)
	void SetLeashVolume(class AFortAthenaAILeashVolume*& InLeashVolume); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.SetLeashReturnLocationMode (Underlying native function: SetLeashReturnLocationMode 0xa2a23ec)
	void SetLeashReturnLocationMode(enum ELeashReturnLocationMode& ReturnMode); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.SetLeashActorToFollow (Underlying native function: SetLeashActorToFollow 0xa2a22dc)
	void SetLeashActorToFollow(class AActor*& ActorToFollow, float& LeashLocationUpdateRate, struct FVector& LocalOffset); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.SetBotOwner (Underlying native function: SetBotOwner 0xa2a1ef4)
	void SetBotOwner(class AActor*& InBotOwner); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.RequestEmote (Underlying native function: RequestEmote 0xa2a1d9c)
	void RequestEmote(struct FPrimaryAssetId*& EmotePrimaryAssetId, float& InfiniteEmoteMaxDuration); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.RemoveSkillSet (Underlying native function: RemoveSkillSet 0xa2a1bac)
	void RemoveSkillSet(class UClass*& SkillSetClass); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.RemoveEmoteRequest (Underlying native function: RemoveEmoteRequest 0xa2a16ac)
	void RemoveEmoteRequest(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.ReleaseBuildTool (Underlying native function: ReleaseBuildTool 0xa2a1698)
	void ReleaseBuildTool(); // (Final | Native | Protected)

	// Function /Script/FortniteAI.FortAthenaAIBotController.QueueStim (Underlying native function: QueueStim 0xa2a14a4)
	void QueueStim(class AActor*& SourceActor, struct FVector& SourceLocation, struct FVector& SourceDirection, enum EStimType& NewStimType, float& StimStrength, struct FName& StimTag); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.PlayEmote (Underlying native function: PlayEmote 0xa2a13f4)
	void PlayEmote(struct FPrimaryAssetId*& EmotePrimaryAssetId); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.OverrideSkill (Underlying native function: OverrideSkill 0xa2a1370)
	void OverrideSkill(float& NewSkill); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.OverrideAggressivenessPlayStyle (Underlying native function: OverrideAggressivenessPlayStyle 0xa2a12e4)
	void OverrideAggressivenessPlayStyle(bool& bInIsAggressive); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.OnTargetPawnDestroyed (Underlying native function: OnTargetPawnDestroyed 0xa2a12d0)
	void OnTargetPawnDestroyed(); // (Final | Native | Public)

	// Function /Script/FortniteAI.FortAthenaAIBotController.OnTargetPawnDead (Underlying native function: OnTargetPawnDead 0xa2a1250)
	void OnTargetPawnDead(class AFortPawn*& FortPawn); // (Final | Native | Public)

	// Function /Script/FortniteAI.FortAthenaAIBotController.OnTargetPawnDamaged (Underlying native function: OnTargetPawnDamaged 0xa2a102c)
	void OnTargetPawnDamaged(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Public | HasDefaults)

	// Function /Script/FortniteAI.FortAthenaAIBotController.OnTargetBuildingDestroyed (Underlying native function: OnTargetBuildingDestroyed 0xa2a0f68)
	void OnTargetBuildingDestroyed(class ABuildingActor*& Building, class AAthenaAIController*& AIController); // (Final | Native | Public)

	// Function /Script/FortniteAI.FortAthenaAIBotController.OnTargetActorDestroyed (Underlying native function: OnTargetActorDestroyed 0xa2a0ee8)
	void OnTargetActorDestroyed(class AActor*& DestroyedActor); // (Final | Native | Public)

	// Function /Script/FortniteAI.FortAthenaAIBotController.OnServerMarkerAdded (Underlying native function: OnServerMarkerAdded 0xa2a0e34)
	void OnServerMarkerAdded(struct FFortWorldMarkerData& MarkerData); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteAI.FortAthenaAIBotController.OnSafeZoneUpdated (Underlying native function: OnSafeZoneUpdated 0xa2a0da0)
	void OnSafeZoneUpdated(); // (Final | Native | Public)

	// Function /Script/FortniteAI.FortAthenaAIBotController.OnSafezoneStateChanged (Underlying native function: OnSafezoneStateChanged 0xa2a0db4)
	void OnSafezoneStateChanged(enum EFortSafeZoneState& NewState); // (Final | Native | Public)

	// Function /Script/FortniteAI.FortAthenaAIBotController.OnPossessedPawnReceiveDamage (Underlying native function: OnPossessedPawnReceiveDamage 0xa2a0aa4)
	void OnPossessedPawnReceiveDamage(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Public | HasDefaults)

	// Function /Script/FortniteAI.FortAthenaAIBotController.OnPossesedPawnDied (Underlying native function: OnPossesedPawnDied 0xa2a0870)
	void OnPossesedPawnDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Public | HasDefaults)

	// Function /Script/FortniteAI.FortAthenaAIBotController.OnPerceptionSensed (Underlying native function: OnPerceptionSensed 0xa2a0780)
	void OnPerceptionSensed(class AActor*& SourceActor, struct FAIStimulus& Stim); // (Native | Public)

	// Function /Script/FortniteAI.FortAthenaAIBotController.OnPawnWeaponChanged (Underlying native function: OnPawnWeaponChanged 0xa2a06bc)
	void OnPawnWeaponChanged(class AFortWeapon*& NewWeapon, class AFortWeapon*& OldWeapon); // (Final | Native | Public)

	// Function /Script/FortniteAI.FortAthenaAIBotController.OnPawnDidDamage (Underlying native function: OnPawnDidDamage 0xa2a0440)
	void OnPawnDidDamage(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& HitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Public | HasDefaults)

	// Function /Script/FortniteAI.FortAthenaAIBotController.OnMovementModeChange (Underlying native function: OnMovementModeChange 0xa2a0300)
	void OnMovementModeChange(class ACharacter*& InCharacter, struct TEnumAsByte<EMovementMode>& PrevMovementMode, unsigned char& PreviousCustomMode); // (Final | Native | Public)

	// Function /Script/FortniteAI.FortAthenaAIBotController.OnLaunched (Underlying native function: OnLaunched 0xa2a01e4)
	void OnLaunched(struct FVector& LaunchVelocity, bool& bXYOverride, bool& bZOverride); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.OnKnockbacked (Underlying native function: OnKnockbacked 0xa2a0164)
	void OnKnockbacked(struct FGameplayTag& KnockbackTypeTag); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.OnGamePhaseStepChanged (Underlying native function: OnGamePhaseStepChanged 0xa2a0084)
	void OnGamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteAI.FortAthenaAIBotController.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0xa2a0004)
	void OnGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Public)

	// Function /Script/FortniteAI.FortAthenaAIBotController.OnEndSpectating (Underlying native function: OnEndSpectating 0x71a663c)
	void OnEndSpectating(class AFortPlayerStateZone*& Spectator); // (Final | Native | Public)

	// Function /Script/FortniteAI.FortAthenaAIBotController.OnCurrentHarvestableDestroyed (Underlying native function: OnCurrentHarvestableDestroyed 0xa29fdd8)
	void OnCurrentHarvestableDestroyed(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Protected | HasDefaults)

	// Function /Script/FortniteAI.FortAthenaAIBotController.OnBeginSpectating (Underlying native function: OnBeginSpectating 0x71a663c)
	void OnBeginSpectating(class AFortPlayerStateZone*& Spectator); // (Final | Native | Public)

	// Function /Script/FortniteAI.FortAthenaAIBotController.OnAlertLevelChanged (Has no native function)
	void OnAlertLevelChanged(enum EAlertLevel& OldAlertLevel, enum EAlertLevel& NewAlertLevel); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.FortAthenaAIBotController.OnAgentDBNO (Underlying native function: OnAgentDBNO 0xa29fd10)
	void OnAgentDBNO(class AFortPawn*& InPlayer, bool& bInIsDBNO); // (Final | Native | Public)

	// Function /Script/FortniteAI.FortAthenaAIBotController.NotifyPickupsSpawnedOnDeath (Underlying native function: NotifyPickupsSpawnedOnDeath 0xa29fb68)
	void NotifyPickupsSpawnedOnDeath(struct TArray<class AFortPickup*>& SpawnedPickups, int& SpawnRequestId); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.IsAnAthenaGameParticipant (Underlying native function: IsAnAthenaGameParticipant 0xa29e868)
	bool IsAnAthenaGameParticipant(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAIBotController.GetMarkerComponent (Underlying native function: GetMarkerComponent 0xa29e6e8)
	class UAthenaMarkerComponent* GetMarkerComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAIBotController.GetCurrentThreat (Underlying native function: GetCurrentThreat 0xa29e61c)
	class AActor* GetCurrentThreat(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAIBotController.GetBotOwner (Underlying native function: GetBotOwner 0xa29e604)
	class AActor* GetBotOwner(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaAIBotController.EquipWeaponByTag (Underlying native function: EquipWeaponByTag 0xa29e47c)
	class AFortWeapon* EquipWeaponByTag(struct FGameplayTag& WeaponTag); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.EquipWeapon (Underlying native function: EquipWeapon 0xa29e3ec)
	class AFortWeapon* EquipWeapon(class UFortWorldItem*& Weapon); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.EquipMeleeWeapon (Underlying native function: EquipMeleeWeapon 0xa29e360)
	class AFortWeapon* EquipMeleeWeapon(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.EquipBestWeapon (Underlying native function: EquipBestWeapon 0xa29e33c)
	class AFortWeapon* EquipBestWeapon(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.Cheat_ForceAthenaCosmeticItemInSlot (Underlying native function: Cheat_ForceAthenaCosmeticItemInSlot 0xa29de30)
	void CheatForceAthenaCosmeticItemInSlot(class UAthenaCosmeticItemDefinition*& CosmeticItem, enum EAthenaCustomizationCategory& Slot, int& Index); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteAI.FortAthenaAIBotController.Cheat_ClearForcedCosmeticItems (Underlying native function: Cheat_ClearForcedCosmeticItems 0xa29dde4)
	void CheatClearForcedCosmeticItems(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteAI.FortAthenaAIBotController.ChangeActiveVariantForCosmeticItem (Underlying native function: ChangeActiveVariantForCosmeticItem 0xa29dcec)
	void ChangeActiveVariantForCosmeticItem(struct FName& ItemTemplateToChange, struct FGameplayTag& VariantChannelToChange, struct FGameplayTag& DesiredActiveVariant); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.BlueprintOnBehaviorTreeStarted (Has no native function)
	void BlueprintOnBehaviorTreeStarted(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.FortAthenaAIBotController.AddTargetInfos (Underlying native function: AddTargetInfos 0xa29dab4)
	void AddTargetInfos(struct TArray<class AActor*>& Targets, enum EPerceptionState& PerceptionState, float& ForgetTime, float& ForgetDistance); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaAIBotController.AddTargetInfo (Underlying native function: AddTargetInfo 0xa29d91c)
	void AddTargetInfo(class AActor*& Target, bool& bForceTarget, enum EPerceptionState& PerceptionState, float& ForgetTime, float& ForgetDistance); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

