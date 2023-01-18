// Class /Script/FortniteGame.FortPlayerPawnAthena
// Size: 0x5260
class AFortPlayerPawnAthena : public AFortPlayerPawn
{
	unsigned char unreflected_4360[0x18]; // 0x4360 (0x18) 
	struct FMulticastInlineDelegate OnInteractionFailedCallback; // 0x4378 (0x10)
	class AActor* ItemInteractionActor; // 0x4388 (0x8)
	unsigned char unreflected_4390[0x10]; // 0x4390 (0x10) 
	struct FVector PreviousVelocityXY; // 0x43a0 (0x18)
	class USoundBase* OnReviveSound; // 0x43b8 (0x8)
	float ReviveFromDBNOTime; // 0x43c0 (0x4)
	float DBNOStartTime; // 0x43c4 (0x4)
	float DBNOInvulnerableTime; // 0x43c8 (0x4)
	float ConvertFromDBNOTime; // 0x43cc (0x4)
	float ServerWorldTimeRevivalTime; // 0x43d0 (0x4)
	unsigned char unreflected_43d4[0xc]; // 0x43d4 (0xc) 
	bool bWasCrouchedBeforeDBNO; // 0x43e0 (0x1)
	unsigned char unreflected_43e1[0x3]; // 0x43e1 (0x3) 
	struct FName ItemSpecialActorID; // 0x43e4 (0x4)
	struct FGameplayTag ItemSpecialActorCategoryTag; // 0x43e8 (0x4)
	unsigned char unreflected_43ec[0x4]; // 0x43ec (0x4) 
	float BecameSpecialActorTime; // 0x43f0 (0x4)
	bool bPlaytestWithNoMouse; // 0x43f4 (0x1)
	unsigned char unreflected_43f5[0x7]; // 0x43f5 (0x7) 
	float CapsuleRadiusAthena; // 0x43fc (0x4)
	float CapsuleHalfHeightAthena; // 0x4400 (0x4)
	unsigned char unreflected_4404[0x4]; // 0x4404 (0x4) 
	double MeshHeightAdjustAthena; // 0x4408 (0x8)
	class UParticleSystem* LandEmitterTemplate; // 0x4410 (0x8)
	class UFortPawnComponent_CustomDepth* CustomDepthComponent; // 0x4418 (0x8)
	struct FGameplayTagContainer IgnoreLandGhostModeTags; // 0x4420 (0x20)
	class UParticleSystem* LandWindEmitterTemplate; // 0x4440 (0x8)
	struct FVector LandFXLocationOffset; // 0x4448 (0x18)
	float LandFXRotateYawMaxDegrees; // 0x4460 (0x4)
	float LandFXMaxDrawDistance; // 0x4464 (0x4)
	float LandForceIntensityVelocityZFactor; // 0x4468 (0x4)
	float MinLandForceIntensity; // 0x446c (0x4)
	float MaxLandForceIntensity; // 0x4470 (0x4)
	float MinLandForceDuration; // 0x4474 (0x4)
	float MaxLandForceDuration; // 0x4478 (0x4)
	float LandFXCoolDownTime; // 0x447c (0x4)
	float LandFXPawnRecentRenderTolerance; // 0x4480 (0x4)
	unsigned char unreflected_4484[0x14]; // 0x4484 (0x14) 
	bool bShouldPawnInstantDie; // 0x4498 (0x1)
	bool bShouldPawnDBNODisplayOnKillFeed; // 0x4499 (0x1)
	bool bShouldPawnDeathDisplayOnKillFeed; // 0x449a (0x1)
	bool bShouldPawnLeaveEliminationIndicator; // 0x449b (0x1)
	bool bShouldPawnAwardPoints; // 0x449c (0x1)
	bool bShouldTriggerDeathAnalytics; // 0x449d (0x1)
	bool bShouldDropItemsOnDeath; // 0x449e (0x1)
	bool bShouldSkipMovementFullSimulation; // 0x449f (0x1)
	unsigned char bEnableGroundInteractionEffects; // 0x44a0 (0x1)
	unsigned char unreflected_44a1[0x3]; // 0x44a1 (0x3) 
	struct FFortPlayerAthenaAttributeReplicationProxy AttributeReplicationProxy; // 0x44a4 (0x18)
	struct FFortPlayerAthenaGravityAttributeReplicationProxy GravityAttributeReplicationProxy; // 0x44bc (0x10)
	unsigned char unreflected_44cc[0x4]; // 0x44cc (0x4) 
	struct FGameplayAbilityRepAnimMontage ReplayRepAnimMontageInfo; // 0x44d0 (0x38)
	unsigned char unreflected_4508[0x8]; // 0x4508 (0x8) 
	struct FMinimalGameplayCueReplicationProxy SimulatedProxyActiveGameplayCues; // 0x4510 (0x2d0)
	struct FMinimalGameplayCueReplicationProxy SimulatedProxyMinimalReplicationGameplayCues; // 0x47e0 (0x2d0)
	struct FMinimalReplicationTagCountMap FastReplicationMinimalReplicationTags; // 0x4ab0 (0x60)
	unsigned char unreflected_4b10[0x8]; // 0x4b10 (0x8) 
	class UTexture2D* CurrentQuickChatIcon; // 0x4b18 (0x8)
	unsigned char unreflected_4b20[0x1f6]; // 0x4b20 (0x1f6) 
	bool bADSWhileNotOnGround; // 0x4d16 (0x1)
	unsigned char unreflected_4d17[0x1]; // 0x4d17 (0x1) 
	class USoundBase* DefaultCrouchedFootstepSound; // 0x4d18 (0x8)
	class USoundBase* DefaultCrouchSprintFootstepSound; // 0x4d20 (0x8)
	struct FMulticastInlineDelegate OnFortPlayerDied; // 0x4d28 (0x10)
	struct FMulticastInlineDelegate OnFortDeathCause; // 0x4d38 (0x10)
	struct FMulticastInlineDelegate OnFortPlayerHitByVehicle; // 0x4d48 (0x10)
	class APawn* KillerForSpectatorRotation; // 0x4d58 (0x8)
	unsigned char unreflected_4d60[0x1]; // 0x4d60 (0x1) 
	bool bDelaySimProxyCollisionInAircraftPhase; // 0x4d61 (0x1)
	unsigned char unreflected_4d62[0x2]; // 0x4d62 (0x2) 
	float TimeToDelaySkydiveCollision; // 0x4d64 (0x4)
	float PositionCaptureIntervalForDistanceTraveledAccumulation; // 0x4d68 (0x4)
	unsigned char unreflected_4d6c[0x14]; // 0x4d6c (0x14) 
	float SkydiveAudioMovementVolumeInterpSpeed; // 0x4d80 (0x4)
	unsigned char unreflected_4d84[0xc]; // 0x4d84 (0xc) 
	float SkydiveAudioForwardDotInterpSpeed; // 0x4d90 (0x4)
	float SkydiveAudioRightDotInterpSpeed; // 0x4d94 (0x4)
	unsigned char unreflected_4d98[0x4]; // 0x4d98 (0x4) 
	struct FFortEffectDistanceQuality DamageFXSignificance; // 0x4d9c (0x18)
	unsigned char unreflected_4db4[0x14]; // 0x4db4 (0x14) 
	class UClass* ScreenEffectHealthDamage; // 0x4dc8 (0x8)
	class UClass* ScreenEffectShieldDamage; // 0x4dd0 (0x8)
	class UAnimMontage* AdditiveHitReactsMontage; // 0x4dd8 (0x8)
	struct FGameplayTagContainer DamageTagsToNotDisplayDirectionDamage; // 0x4de0 (0x20)
	struct FGameplayTagContainer DamageTagsToNotAddCameraShake; // 0x4e00 (0x20)
	struct FGameplayTagContainer WeaponTagsToNotPlayCircleAndStreakFX; // 0x4e20 (0x20)
	struct FMulticastInlineDelegate OnPlayerLootedContainer; // 0x4e40 (0x10)
	unsigned char unreflected_4e50[0x20]; // 0x4e50 (0x20) 
	bool bIsPlayerPawnReady; // 0x4e70 (0x1)
	unsigned char unreflected_4e71[0x7]; // 0x4e71 (0x7) 
	struct FVector LastFiredLocation; // 0x4e78 (0x18)
	struct FVector LastFiredDirection; // 0x4e90 (0x18)
	float LastFiredTime; // 0x4ea8 (0x4)
	unsigned char unreflected_4eac[0x14]; // 0x4eac (0x14) 
	class UDataTable* PrototypeShootingModel; // 0x4ec0 (0x8)
	class AController* FallInstigator; // 0x4ec8 (0x8)
	struct FGameplayTagContainer FallDamageTags; // 0x4ed0 (0x20)
	class ABuildingSMActor* LastFloorBeforeFalling; // 0x4ef0 (0x8)
	float LastFallDistance; // 0x4ef8 (0x4)
	float SkydiveDebugTimer; // 0x4efc (0x4)
	float MeleeCombatSlowSpeedMultiplier; // 0x4f00 (0x4)
	float MeleeCombatSlowDuration; // 0x4f04 (0x4)
	struct FAthenaPawnReplayData EncryptedPawnReplayData; // 0x4f08 (0x30)
	class UAudioComponent* InAirAudioComp; // 0x4f38 (0x8)
	class UParticleSystemComponent* PSCPlayerWalkLand; // 0x4f40 (0x8)
	class UParticleSystemComponent* PSCPlayerRunLand; // 0x4f48 (0x8)
	class UParticleSystemComponent* PSCHitDamage; // 0x4f50 (0x8)
	unsigned char unreflected_4f58[0x8]; // 0x4f58 (0x8) 
	class UFortContrailsComponent* ContrailsComponent; // 0x4f60 (0x8)
	unsigned char unreflected_4f68[0x20]; // 0x4f68 (0x20) 
	struct TArray<class UFortMobileInteractionComponent*> MobileInteractionComponents; // 0x4f88 (0x10)
	struct FLinearColor MinimapIconColorFiftyFiftyPlayer; // 0x4f98 (0x10)
	float MaxIndicatorVisibilityDistForReplays; // 0x4fa8 (0x4)
	unsigned char unreflected_4fac[0x4]; // 0x4fac (0x4) 
	class UAudioComponent* ConsumableUseAudio; // 0x4fb0 (0x8)
	float InAirAudioParameterValue; // 0x4fb8 (0x4)
	float InAirAudioFallDistanceThreshold; // 0x4fbc (0x4)
	unsigned char unreflected_4fc0[0x4]; // 0x4fc0 (0x4) 
	float WalkDustActivateSpeed; // 0x4fc4 (0x4)
	unsigned char unreflected_4fc8[0x4]; // 0x4fc8 (0x4) 
	float WalkDustResetSpeed; // 0x4fcc (0x4)
	unsigned char unreflected_4fd0[0x4]; // 0x4fd0 (0x4) 
	float RunParticleActivateSpeed; // 0x4fd4 (0x4)
	unsigned char unreflected_4fd8[0x10]; // 0x4fd8 (0x10) 
	float LastHealthPostProcessWeight; // 0x4fe8 (0x4)
	float HealthPostProcessStartTime; // 0x4fec (0x4)
	float HealthPostProcessMuteTime; // 0x4ff0 (0x4)
	unsigned char unreflected_4ff4[0x5c]; // 0x4ff4 (0x5c) 
	bool bIsCreativeGhostModeActivated; // 0x5050 (0x1)
	bool bIsCreativeModeratorModeActivated; // 0x5051 (0x1)
	unsigned char unreflected_5052[0x2e]; // 0x5052 (0x2e) 
	class UFortSkinWeightOverrideManager* SkinWeightManager; // 0x5080 (0x8)
	unsigned char unreflected_5088[0x38]; // 0x5088 (0x38) 
	struct FGameplayTagContainer InvulnerabilityTags; // 0x50c0 (0x20)
	class UUnicornAthenaPawnSampler* UnicornPawnSampler; // 0x50e0 (0x8)
	struct FMarkedActorDisplayInfo MarkerDisplay; // 0x50e8 (0x98)
	unsigned char unreflected_5180[0x10]; // 0x5180 (0x10) 
	class UForceFeedbackEffect* DamageForceFeedback; // 0x5190 (0x8)
	class UClass* DamageCameraShakeClass; // 0x5198 (0x8)
	struct FGameplayTagContainer DamageTagsExcludedFromCameraShake; // 0x51a0 (0x20)
	unsigned char unreflected_51c0[0x18]; // 0x51c0 (0x18) 
	int UpdateSharedReplicationWhileAttachedCount; // 0x51d8 (0x4)
	float BPRotationSpeedWhenTurnedOffByAnim; // 0x51dc (0x4)
	float BPRotationSpeedOnDetach; // 0x51e0 (0x4)
	float BPMaxRotationSpeedWhenAttached; // 0x51e4 (0x4)
	float BPTimeToReachMaxRotationSpeed; // 0x51e8 (0x4)
	float BPAddedRotationInfluenceFromForwardVectorOnAttach; // 0x51ec (0x4)
	struct FRotator YawNegative90; // 0x51f0 (0x18)
	struct FString CallerIDupdatemeshrotation; // 0x5208 (0x10)
	float AttachPointNormalizeTolerance; // 0x5218 (0x4)
	float ForwardProjectedNormalizeTolerance; // 0x521c (0x4)
	class ABuildingGameplayActor* SwingingAttachBGA; // 0x5220 (0x8)
	struct FVector SwingingRightVec; // 0x5228 (0x18)
	float SwingingLastAttachTime; // 0x5240 (0x4)
	bool bSwingingShouldRotateMesh; // 0x5244 (0x1)
	bool bSwingingUseProgrammaticRotation; // 0x5245 (0x1)
	bool bImprovedDBNOEnabled; // 0x5246 (0x1)
	unsigned char DBNORevivingActorsCount; // 0x5247 (0x1)
	unsigned char padding_5248[0x18]; // 0x5248 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerPawnAthena.TurnOnCollisionAfterSkydiveDelay (Underlying native function: TurnOnCollisionAfterSkydiveDelay 0x83fdb78)
	void TurnOnCollisionAfterSkydiveDelay(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.TeleportToSkyDive (Underlying native function: TeleportToSkyDive 0x83fdaf4)
	void TeleportToSkyDive(float& HeightAboveGround); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SwingingUpdateMeshRotation (Underlying native function: SwingingUpdateMeshRotation 0x83fd8ec)
	void SwingingUpdateMeshRotation(float& DeltaTime); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.Swinging_VectorToAttachPoint (Underlying native function: Swinging_VectorToAttachPoint 0x83fd970)
	struct FVector SwingingVectorToAttachPoint(struct FString& CallerID); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.StopConsumableUseAudio (Underlying native function: StopConsumableUseAudio 0x83fd8d8)
	void StopConsumableUseAudio(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.StartConsumableUseAudio (Underlying native function: StartConsumableUseAudio 0x83fd824)
	void StartConsumableUseAudio(class USoundBase*& sound); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetUpdateSharedReplicationWhileAttached (Underlying native function: SetUpdateSharedReplicationWhileAttached 0x83fd60c)
	void SetUpdateSharedReplicationWhileAttached(bool& bNewValue); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetShouldSkipMovementFullSimulation (Underlying native function: SetShouldSkipMovementFullSimulation 0x83fd58c)
	void SetShouldSkipMovementFullSimulation(bool& bInShouldSkipMovementFullSimulation); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetShouldDropItemsOnDeath (Underlying native function: SetShouldDropItemsOnDeath 0x83fd50c)
	void SetShouldDropItemsOnDeath(bool& bInShouldDropItemsOnDeath); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetMeshHeightAdjustAthena (Underlying native function: SetMeshHeightAdjustAthena 0x83fd408)
	void SetMeshHeightAdjustAthena(double& HeightAdjust); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetIsSignificantForSpecialEventSequence (Underlying native function: SetIsSignificantForSpecialEventSequence 0x83fd384)
	void SetIsSignificantForSpecialEventSequence(bool& bIsSignificant); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetImprovedDBNO (Underlying native function: SetImprovedDBNO 0x83fd2f4)
	void SetImprovedDBNO(bool& bEnable); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetFallInstigator (Underlying native function: SetFallInstigator 0x83fd1f4)
	void SetFallInstigator(class AController*& NewFallInstigator, struct FGameplayTagContainer& NewFallingDamageTags); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetEnableRenderCustomDepth (Underlying native function: SetEnableRenderCustomDepth 0x83fd174)
	void SetEnableRenderCustomDepth(bool& bInEnableRenderCustomDepth); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetDamageCameraShakeClass (Underlying native function: SetDamageCameraShakeClass 0x83fd0f4)
	void SetDamageCameraShakeClass(class UClass*& NewValue); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetCharacterBodyVisibilityForPossession (Underlying native function: SetCharacterBodyVisibilityForPossession 0x83fcfbc)
	bool SetCharacterBodyVisibilityForPossession(bool& bVisible); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetCapsuleRadiusAthena (Underlying native function: SetCapsuleRadiusAthena 0x83fcf1c)
	void SetCapsuleRadiusAthena(float& Radius); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetCapsuleHalfHeightAthena (Underlying native function: SetCapsuleHalfHeightAthena 0x83fce7c)
	void SetCapsuleHalfHeightAthena(float& HalfHeight); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.SetBushEnabled (Underlying native function: SetBushEnabled 0x71a6cc4)
	void SetBushEnabled(bool& bEnableBush); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.ServerSuicide (Underlying native function: ServerSuicide 0x83fcd00)
	void ServerSuicide(bool& bSuppressResurrectionChip, int& MatchPlacement); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.ServerSetInteractingItem (Underlying native function: ServerSetInteractingItem 0x83fcc08)
	void ServerSetInteractingItem(class AActor*& InteractingItem, bool& bClearInteraction); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.ServerForceImmediateLandscapeCheck (Underlying native function: ServerForceImmediateLandscapeCheck 0x83fcbf0)
	void ServerForceImmediateLandscapeCheck(); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.ServerCreativeToggleInvulnerable (Underlying native function: ServerCreativeToggleInvulnerable 0x83fcba4)
	void ServerCreativeToggleInvulnerable(); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.ServerCreativeToggleGhost (Underlying native function: ServerCreativeToggleGhost 0x83fcaf4)
	void ServerCreativeToggleGhost(bool& bEnableOnly); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.RemoveDBNORevivingActor (Underlying native function: RemoveDBNORevivingActor 0x83fba2c)
	unsigned char RemoveDBNORevivingActor(class AActor*& RevivingActorToRemove); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnSuccessfulBuildingEdit (Has no native function)
	void OnSuccessfulBuildingEdit(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnSpawnImmunityTimeReset (Has no native function)
	void OnSpawnImmunityTimeReset(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnSignificantTick (Has no native function)
	void OnSignificantTick(float& Significance); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnResInDuringWarmup (Has no native function)
	void OnResInDuringWarmup(); // (0x00000002 | BlueprintCosmetic | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnRep_ReplayRepAnimMontageInfo (Underlying native function: OnRep_ReplayRepAnimMontageInfo 0x118afd4)
	void OnRepReplayRepAnimMontageInfo(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnRep_MeshHeightAdjustAthena (Underlying native function: OnRep_MeshHeightAdjustAthena 0x26933c4)
	void OnRepMeshHeightAdjustAthena(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnRep_ImprovedDBNOEnabled (Underlying native function: OnRep_ImprovedDBNOEnabled 0x83fc660)
	void OnRepImprovedDBNOEnabled(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnRep_GravityAttributeReplicationProxy (Underlying native function: OnRep_GravityAttributeReplicationProxy 0x207b054)
	void OnRepGravityAttributeReplicationProxy(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnRep_CapsuleRadiusAthena (Underlying native function: OnRep_CapsuleRadiusAthena 0x27b39c0)
	void OnRepCapsuleRadiusAthena(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnRep_CapsuleHalfHeightAthena (Underlying native function: OnRep_CapsuleHalfHeightAthena 0x27b3a20)
	void OnRepCapsuleHalfHeightAthena(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnRep_bIsCreativeModeratorModeActivated (Underlying native function: OnRep_bIsCreativeModeratorModeActivated 0x83fc780)
	void OnRepbIsCreativeModeratorModeActivated(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnRep_bIsCreativeGhostModeActivated (Underlying native function: OnRep_bIsCreativeGhostModeActivated 0x83fc758)
	void OnRepbIsCreativeGhostModeActivated(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnRep_AttributeProxy (Underlying native function: OnRep_AttributeProxy 0xf9c234)
	void OnRepAttributeProxy(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnReceivedStormSurgeDamage (Has no native function)
	void OnReceivedStormSurgeDamage(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnOutsideSafeZonePhaseChanged (Has no native function)
	void OnOutsideSafeZonePhaseChanged(int& SafeZonePhase); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnLeftReplayRelevancy (Has no native function)
	void OnLeftReplayRelevancy(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnEnteredReplayRelevancy (Has no native function)
	void OnEnteredReplayRelevancy(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnCreativeStopInvulnerable (Has no native function)
	void OnCreativeStopInvulnerable(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnCreativeStopGhost (Has no native function)
	void OnCreativeStopGhost(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnCreativeStartInvulnerable (Has no native function)
	void OnCreativeStartInvulnerable(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnCreativeStartGhost (Has no native function)
	void OnCreativeStartGhost(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnCreativeModeratorModeDeactivate (Has no native function)
	void OnCreativeModeratorModeDeactivate(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.OnCreativeModeratorModeActivate (Has no native function)
	void OnCreativeModeratorModeActivate(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.NetMulticast_SuccessfulBuildingEdit (Underlying native function: NetMulticast_SuccessfulBuildingEdit 0x2b78ce8)
	void NetMulticastSuccessfulBuildingEdit(); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.MeleeCombatBlocked (Underlying native function: MeleeCombatBlocked 0x83fc440)
	void MeleeCombatBlocked(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.MeleeCombatActivated (Underlying native function: MeleeCombatActivated 0x83fc3c8)
	void MeleeCombatActivated(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.LocalIsTryingToEnterVehicle (Underlying native function: LocalIsTryingToEnterVehicle 0x83fc3a0)
	bool LocalIsTryingToEnterVehicle(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.LandscapeCheck (Underlying native function: LandscapeCheck 0x83fc38c)
	void LandscapeCheck(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.IsPlayingMinigame (Underlying native function: IsPlayingMinigame 0x83fc34c)
	bool IsPlayingMinigame(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.IsBackpackEquipped (Underlying native function: IsBackpackEquipped 0x83fc2a4)
	bool IsBackpackEquipped(enum EBackpackType& BackpackType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.GoToHUBIslandIfOutOfBounds (Has no native function)
	void GoToHUBIslandIfOutOfBounds(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.GetReviveFromDBNOTime (Underlying native function: GetReviveFromDBNOTime 0x83fc124)
	float GetReviveFromDBNOTime(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.GetNumberOfDBNORevivingActors (Underlying native function: GetNumberOfDBNORevivingActors 0x83fc10c)
	unsigned char GetNumberOfDBNORevivingActors(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.GetDefaultReviveFromDBNOTime (Underlying native function: GetDefaultReviveFromDBNOTime 0x83fc0cc)
	float GetDefaultReviveFromDBNOTime(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.GetCurrentVoiceAmplitude (Underlying native function: GetCurrentVoiceAmplitude 0x7238fb0)
	float GetCurrentVoiceAmplitude(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.GetAdditiveHitReactsMontage (Underlying native function: GetAdditiveHitReactsMontage 0x2bef4a0)
	class UAnimMontage* GetAdditiveHitReactsMontage(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.GameplayCue_PinkOatmeal_MeatPizza_PossessProp (Underlying native function: GameplayCue_PinkOatmeal_MeatPizza_PossessProp 0x83fbf48)
	void GameplayCuePinkOatmealMeatPizzaPossessProp(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.GameplayCue_Creative_PossessProp (Underlying native function: GameplayCue_Creative_PossessProp 0x83fbf48)
	void GameplayCueCreativePossessProp(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.GamePhaseStepChanged (Underlying native function: GamePhaseStepChanged 0x158cd98)
	void GamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.ForceReviveFromDBNO (Underlying native function: ForceReviveFromDBNO 0x71a663c)
	void ForceReviveFromDBNO(class AController*& EventInstigator); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.FastSharedReplication (Underlying native function: FastSharedReplication 0x1184a84)
	void FastSharedReplication(struct FSharedRepMovement& SharedRepMovement); // (Final | Net | Native | Event | NetMulticast | Private)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.CreativeToggleInvulnerable (Underlying native function: CreativeToggleInvulnerable 0x83fbf14)
	void CreativeToggleInvulnerable(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.CreativeToggleGhost (Underlying native function: CreativeToggleGhost 0x83fbe94)
	void CreativeToggleGhost(bool& bEnableOnly); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.ClientSetGravityJumpMultipliers (Underlying native function: ClientSetGravityJumpMultipliers 0x83fbd08)
	void ClientSetGravityJumpMultipliers(float& NewGravityVal, float& NewVehicleGravityVal, float& NewJumpZ, float& NewJumpHorizontalAcceleration, float& NewJumpHorizontalVelocity); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.CanPlayerCreateInCurrentVolume (Underlying native function: CanPlayerCreateInCurrentVolume 0x83fbad0)
	bool CanPlayerCreateInCurrentVolume(class AFortVolume*& OutCurrentVolume); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.CancelMeleeCombatSlow (Underlying native function: CancelMeleeCombatSlow 0x83fbb68)
	void CancelMeleeCombatSlow(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.BushStateChanged (Has no native function)
	void BushStateChanged(bool& bNewBushState); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.AddDBNORevivingActor (Underlying native function: AddDBNORevivingActor 0x83fba2c)
	unsigned char AddDBNORevivingActor(class AActor*& RevivingActorToAdd); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawnAthena.AddComponentToPawnHighlightSet (Underlying native function: AddComponentToPawnHighlightSet 0x83fb9ac)
	void AddComponentToPawnHighlightSet(class UPrimitiveComponent*& PrimitiveComponent); // (Final | Native | Public | BlueprintCallable)
};

