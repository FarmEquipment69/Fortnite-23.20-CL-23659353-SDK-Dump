// Class /Script/FortniteGame.FortPawn
// Size: 0x1af0
class AFortPawn : public AFGF_Character
{
	unsigned char unreflected_680[0x88]; // 0x680 (0x88) 
	unsigned char bUseBaseChanged; // 0x708 (0x1)
	unsigned char bIgnoreNextFallingDamage; // 0x708 (0x1)
	unsigned char bAllowDeathFromFallingDamage; // 0x708 (0x1)
	unsigned char bIsDying; // 0x708 (0x1)
	unsigned char bPlayedDying; // 0x708 (0x1)
	unsigned char bIsHiddenForDeath; // 0x708 (0x1)
	unsigned char bIsKnockedback; // 0x708 (0x1)
	unsigned char bIsStaggered; // 0x709 (0x1)
	unsigned char bCanCapsuleBeUsedForTargeting; // 0x709 (0x1)
	unsigned char bUseLineTestForDamageZoneBoneDetection; // 0x709 (0x1)
	unsigned char bMovingEmote; // 0x709 (0x1)
	unsigned char bMovingEmoteForwardOnly; // 0x709 (0x1)
	unsigned char bMovingEmoteFollowingOnly; // 0x709 (0x1)
	unsigned char bMovingEmoteSkipLandingFX; // 0x70a (0x1)
	unsigned char bIsInvulnerable; // 0x70a (0x1)
	unsigned char bSpotted; // 0x70a (0x1)
	unsigned char bRegisterWithAISight; // 0x70a (0x1)
	unsigned char bRegisterWithAimAssist; // 0x70a (0x1)
	unsigned char bPrimaryInputHeld; // 0x70a (0x1)
	unsigned char bSecondaryInputHeld; // 0x70a (0x1)
	unsigned char bPrimaryInputQueued; // 0x70a (0x1)
	unsigned char bWeaponActivated; // 0x70b (0x1)
	unsigned char bIsInGoop; // 0x70b (0x1)
	unsigned char bReplicatedIsInGoop; // 0x70b (0x1)
	unsigned char bIsSliding; // 0x70b (0x1)
	unsigned char bIsSkating; // 0x70b (0x1)
	unsigned char unreflected_70c[0x4]; // 0x70c (0x4) 
	struct FGameplayTagContainer AdditionalPickupTags; // 0x710 (0x20)
	enum EFortPickupSpawnSource SpawnSourceOverride; // 0x730 (0x1)
	unsigned char bIsSwinging; // 0x731 (0x1)
	unsigned char bIsSynchedAction; // 0x731 (0x1)
	unsigned char bSwingingAttached; // 0x731 (0x1)
	unsigned char unreflected_732[0x6]; // 0x732 (0x6) 
	struct FVector SwingAttachLocation; // 0x738 (0x18)
	float SwingAttachLocationUpdateDistanceThreshold; // 0x750 (0x4)
	unsigned char unreflected_754[0xc]; // 0x754 (0xc) 
	struct FSynchedActionWarpPointInfo_Replicated ReplicatedSynchedActionWarpPointInfo; // 0x760 (0x50)
	unsigned char unreflected_7b0[0x61]; // 0x7b0 (0x61) 
	unsigned char bSkipAnalogJump; // 0x811 (0x1)
	struct TEnumAsByte<ETraceTypeQuery> FootstepTraceTypeQuery; // 0x812 (0x1)
	struct TEnumAsByte<EFortFootstepSurfaceType> FootstepSurfaceType; // 0x813 (0x1)
	unsigned char unreflected_814[0x4]; // 0x814 (0x4) 
	class UFortSoundIndicatorComponent* SoundIndicatorComponent; // 0x818 (0x8)
	unsigned char unreflected_820[0x10]; // 0x820 (0x10) 
	enum EUpdateRateShiftBucket UroShiftBucket; // 0x830 (0x1)
	unsigned char bUpdateMeshComponentUpdateFlagOnServer; // 0x831 (0x1)
	unsigned char bUROCanTieToLODs; // 0x831 (0x1)
	unsigned char bPostProcessNavLocation; // 0x831 (0x1)
	unsigned char bHealthSynced; // 0x831 (0x1)
	unsigned char bWeaponHolstered; // 0x831 (0x1)
	unsigned char bSkipReticleColorTrace; // 0x831 (0x1)
	unsigned char bPrioritizePawnCollisionsOnAbilityTargetSelectionVisibilityTest; // 0x831 (0x1)
	unsigned char bTreatAsPawnForHitMarkers; // 0x832 (0x1)
	unsigned char bDisplayPawnHitMarkersForChildActors; // 0x832 (0x1)
	unsigned char bUsesStats; // 0x832 (0x1)
	unsigned char bAllowBuildingActorTeleport; // 0x832 (0x1)
	unsigned char bIsDBNO; // 0x832 (0x1)
	unsigned char bWasDBNOOnDeath; // 0x832 (0x1)
	unsigned char bCachedIsInAthena; // 0x832 (0x1)
	unsigned char bShouldUseCharacterMovementIdleFastPath; // 0x832 (0x1)
	struct TEnumAsByte<EFortMovementStyle> CurrentMovementStyle; // 0x833 (0x1)
	enum EFortControlRecoveryBehavior ControlRecoveryBehavior; // 0x834 (0x1)
	unsigned char TeleportCounter; // 0x835 (0x1)
	unsigned char unreflected_836[0x2]; // 0x836 (0x2) 
	struct FDataTableRowHandle PawnStatHandle; // 0x838 (0x10)
	float SlidingFriction; // 0x848 (0x4)
	unsigned char bIsSlopeSliding; // 0x84c (0x1)
	unsigned char unreflected_84d[0x1]; // 0x84d (0x1) 
	uint16_t PackedReplicatedSlopeAngles; // 0x84e (0x2)
	float SlidingBrakingDeceleration; // 0x850 (0x4)
	unsigned char unreflected_854[0x4]; // 0x854 (0x4) 
	class UFortStormShieldComponent* StormShieldComponent; // 0x858 (0x8)
	struct FMulticastInlineDelegate OnStormShieldComponentCreated; // 0x860 (0x10)
	enum EFortPawnPushSize PushSize; // 0x870 (0x1)
	unsigned char unreflected_871[0xb]; // 0x871 (0xb) 
	float LastSurfaceTraceTime; // 0x87c (0x4)
	struct FVector LastSurfaceTraceLocation; // 0x880 (0x18)
	unsigned char unreflected_898[0x28]; // 0x898 (0x28) 
	struct FMulticastInlineDelegate OnPawnJumped; // 0x8c0 (0x10)
	unsigned char bIsJumping; // 0x8d0 (0x1)
	unsigned char unreflected_8d1[0x3]; // 0x8d1 (0x3) 
	int PawnUniqueID; // 0x8d4 (0x4)
	class AFortWeapon* CurrentWeapon; // 0x8d8 (0x8)
	class AFortWeapon* PreviousWeapon; // 0x8e0 (0x8)
	struct TArray<class AFortWeapon*> CurrentWeaponList; // 0x8e8 (0x10)
	struct FString PreviousAbilityWeaponNameForTelemetry; // 0x8f8 (0x10)
	unsigned char unreflected_908[0x60]; // 0x908 (0x60) 
	struct FName WeaponHandSocketName; // 0x968 (0x4)
	struct FName LeftHandWeaponHandSocketName; // 0x96c (0x4)
	class AActor* SpawnSpot; // 0x970 (0x8)
	struct FGameplayTagContainer DeathTags; // 0x978 (0x20)
	float SpawnImmunityTime; // 0x998 (0x4)
	unsigned char unreflected_99c[0x4]; // 0x99c (0x4) 
	class AFortWaterBodyActor* CurrentWaterBody; // 0x9a0 (0x8)
	bool bShouldSupportSurfaceSwimming; // 0x9a8 (0x1)
	unsigned char unreflected_9a9[0x7]; // 0x9a9 (0x7) 
	class AFortWaterBodyActor* ReplicatedWaterBody; // 0x9b0 (0x8)
	struct TArray<class AFortPickup*> IncomingPickups; // 0x9b8 (0x10)
	struct TArray<struct FFortPickupEntryData> PickupDirectionData; // 0x9c8 (0x10)
	bool bIsStunned; // 0x9d8 (0x1)
	unsigned char unreflected_9d9[0x7]; // 0x9d9 (0x7) 
	struct TArray<struct FWindVolumeData> WindVolumes; // 0x9e0 (0x10)
	struct FVortexParams VortexParams; // 0x9f0 (0x80)
	unsigned char bIsInVortex; // 0xa70 (0x1)
	unsigned char bReplicatedIsInVortex; // 0xa70 (0x1)
	unsigned char unreflected_a71[0x7]; // 0xa71 (0x7) 
	class AFortSkyTube* CurrentSkyTube; // 0xa78 (0x8)
	class AFortSkyTube* ReplicatedSkyTube; // 0xa80 (0x8)
	struct TArray<class AFortSkyTube*> OverlappedSkyTubes; // 0xa88 (0x10)
	struct FScalableFloat bPrioritizeEarlierTubes; // 0xa98 (0x28)
	struct FMulticastInlineDelegate OnSkyTubeChanged; // 0xac0 (0x10)
	struct FMulticastInlineDelegate OnSearchedContainer; // 0xad0 (0x10)
	int AdditiveCringeCount; // 0xae0 (0x4)
	float AdditiveCringeDuration; // 0xae4 (0x4)
	bool bSupportsDamageNumbersAtHitLocation; // 0xae8 (0x1)
	unsigned char unreflected_ae9[0x7]; // 0xae9 (0x7) 
	struct FVector_NetQuantize PushMomentum; // 0xaf0 (0x18)
	unsigned char unreflected_b08[0x4]; // 0xb08 (0x4) 
	float LocalSpin; // 0xb0c (0x4)
	unsigned char unreflected_b10[0x1]; // 0xb10 (0x1) 
	bool bTurnTransitionActiveAndControllingRotation; // 0xb11 (0x1)
	unsigned char unreflected_b12[0x72]; // 0xb12 (0x72) 
	struct FGameplayCueTag DeathCueTag; // 0xb84 (0x4)
	struct TArray<struct FFortStatManagerTag> DeathStatTags; // 0xb88 (0x10)
	class USkeletalMeshSocket* DeathHitSocket; // 0xb98 (0x8)
	struct FMulticastInlineDelegate OnPlayerStartDBNO; // 0xba0 (0x10)
	struct FMulticastInlineDelegate OnDBNOStateChanged; // 0xbb0 (0x10)
	float DefaultLifespanAfterDeath; // 0xbc0 (0x4)
	float TeamBeaconMaxDist; // 0xbc4 (0x4)
	struct FColor TeamBeaconTextColor; // 0xbc8 (0x4)
	float LastTakeHitTimeTimeout; // 0xbcc (0x4)
	float LastDamagedTime; // 0xbd0 (0x4)
	unsigned char unreflected_bd4[0x4]; // 0xbd4 (0x4) 
	class AFortWeapon* CurrentlyAttachedWeapon; // 0xbd8 (0x8)
	class UPrimitiveComponent* CachedNavFloor; // 0xbe0 (0x8)
	float MaxFootstepDistance; // 0xbe8 (0x4)
	unsigned char unreflected_bec[0x4]; // 0xbec (0x4) 
	class USoundBase* DBNOLandingSound; // 0xbf0 (0x8)
	class USoundBase* DefaultFootstepSound; // 0xbf8 (0x8)
	class USoundBase* DefaultFastFootstepSound; // 0xc00 (0x8)
	class USoundBase* DefaultLandingSound; // 0xc08 (0x8)
	class USoundBase* DefaultHardLandingSound; // 0xc10 (0x8)
	class USoundBase* DefaultJumpSound; // 0xc18 (0x8)
	class UWeaponHitNotifyAudioBank* DefaultHitNotifyAudioBank; // 0xc20 (0x8)
	class UFortSwimmingAudioBank* DefaultSwimmingAudioBank; // 0xc28 (0x8)
	float LineTestForDamageZoneBoneDetectionRadius; // 0xc30 (0x4)
	unsigned char unreflected_c34[0x4]; // 0xc34 (0x4) 
	struct FPawnDamageZones DamageZones[0x5]; // 0xc38 (0x18) (ARRAY) 
	unsigned char DamageZoneActiveBitMask; // 0xcb0 (0x1)
	unsigned char unreflected_cb1[0x3]; // 0xcb1 (0x3) 
	float TargettingZOffset; // 0xcb4 (0x4)
	unsigned char JumpFlashCountPacked; // 0xcb8 (0x1)
	unsigned char LandingFlashCountPacked; // 0xcb9 (0x1)
	unsigned char unreflected_cba[0x6]; // 0xcba (0x6) 
	struct TMap<struct FName, struct FEmoteAudioComponentData> EmoteAudioComps; // 0xcc0 (0x50)
	class USoundAttenuation* FrontEndEmoteAudioAttenuation; // 0xd10 (0x8)
	class USoundAttenuation* InGameEmoteAudioAttenuation; // 0xd18 (0x8)
	class USoundEffectSourcePresetChain* InGameEmoteSoundEffectSoundPresetChain; // 0xd20 (0x8)
	struct TMap<int, class UMeshComponent*> EmoteMeshComps; // 0xd28 (0x50)
	struct TMap<int, class AActor*> EmotePropActors; // 0xd78 (0x50)
	struct TMap<int, class UParticleSystemComponent*> EmoteParticleSystemComps; // 0xdc8 (0x50)
	int EmoteCount; // 0xe18 (0x4)
	float LastEmoteTime; // 0xe1c (0x4)
	float LastEmoteEndTime; // 0xe20 (0x4)
	unsigned char unreflected_e24[0x4]; // 0xe24 (0x4) 
	class UFortItemDefinition* LastEmoteItemDef; // 0xe28 (0x8)
	class UFortItemDefinition* LastReplicatedEmoteExecuted; // 0xe30 (0x8)
	bool bFireBlockedByEmoteCooldown; // 0xe38 (0x1)
	unsigned char unreflected_e39[0x3]; // 0xe39 (0x3) 
	float EmoteToFireCooldownTime; // 0xe3c (0x4)
	float EmoteWalkSpeed; // 0xe40 (0x4)
	unsigned char unreflected_e44[0x4]; // 0xe44 (0x4) 
	struct TArray<class UActorComponent*> DynamicComponents; // 0xe48 (0x10)
	struct TArray<class UFortGameplayModifierItemDefinition*> AdditionalModifierDefinitions; // 0xe58 (0x10)
	struct FMulticastInlineDelegate OnPawnTeleported; // 0xe68 (0x10)
	struct FMulticastInlineDelegate OnPawnLanded; // 0xe78 (0x10)
	struct FMulticastInlineDelegate OnPawnStartedEmote; // 0xe88 (0x10)
	struct FMulticastInlineDelegate OnPawnStoppedEmote; // 0xe98 (0x10)
	struct FMulticastInlineDelegate OnHitPawn; // 0xea8 (0x10)
	struct FMulticastInlineDelegate OnDied; // 0xeb8 (0x10)
	struct FMulticastInlineDelegate OnDeathEffects; // 0xec8 (0x10)
	unsigned char unreflected_ed8[0x30]; // 0xed8 (0x30) 
	struct FMulticastInlineDelegate OnDamaged; // 0xf08 (0x10)
	struct FMulticastInlineDelegate OnDidDamage; // 0xf18 (0x10)
	unsigned char unreflected_f28[0x10]; // 0xf28 (0x10) 
	class UFortEmoteComponent* EmoteComponent; // 0xf38 (0x8)
	class UFortFootstepAudioBank* FootstepBank; // 0xf40 (0x8)
	unsigned char unreflected_f48[0x20]; // 0xf48 (0x20) 
	struct FVector CachedStepSurfaceNormal; // 0xf68 (0x18)
	class UFortFoleyFootstepContext* FoleyFootstepContext; // 0xf80 (0x8)
	class UFortFoleyHitContext* FoleyHitContext; // 0xf88 (0x8)
	struct FMulticastInlineDelegate OnWeaponEquippedDelegate; // 0xf90 (0x10)
	struct FMulticastInlineDelegate OnWeaponUnEquippedDelegate; // 0xfa0 (0x10)
	struct FMulticastInlineDelegate OnWeaponAttachmentChangedDelegate; // 0xfb0 (0x10)
	class UClass* HealthRegenDelayGameplayEffect; // 0xfc0 (0x8)
	class UClass* HealthRegenGameplayEffect; // 0xfc8 (0x8)
	class UClass* ShieldRegenDelayGameplayEffect; // 0xfd0 (0x8)
	class UClass* ShieldRegenGameplayEffect; // 0xfd8 (0x8)
	class UClass* CurrentWeaponAnimLayerOverlayClass; // 0xfe0 (0x8)
	struct FMulticastInlineDelegate OnHolsteredEvent; // 0xfe8 (0x10)
	struct FMulticastInlineDelegate OnUnholsteredEvent; // 0xff8 (0x10)
	unsigned char unreflected_1008[0x18]; // 0x1008 (0x18) 
	int WeaponHolsterCounter; // 0x1020 (0x4)
	unsigned char unreflected_1024[0x4]; // 0x1024 (0x4) 
	struct TArray<struct FName> WeaponHolsterIds; // 0x1028 (0x10)
	float StaySpottedTime; // 0x1038 (0x4)
	struct FName SpottedEvent; // 0x103c (0x4)
	class UFortFeedbackBank* DefaultFeedback; // 0x1040 (0x8)
	struct TArray<class AFortEmitterCameraLensEffectDirectional*> ActiveSoundIndicators; // 0x1048 (0x10)
	class UClass* DefaultSoundTrackingVisual; // 0x1058 (0x8)
	struct FGameplayTagContainer SoundTrackingVisibilityTags; // 0x1060 (0x20)
	struct TMap<enum EFortSoundIndicatorTypes, float> PriorityModifiers; // 0x1080 (0x50)
	struct TArray<struct FFortPawnVocalChord> VocalChords; // 0x10d0 (0x10)
	unsigned char unreflected_10e0[0x58]; // 0x10e0 (0x58) 
	bool bIsDisconnectedPawn; // 0x1138 (0x1)
	unsigned char unreflected_1139[0x3]; // 0x1139 (0x3) 
	struct FActiveGameplayEffectHandle* MaxHealthApplicationHandle; // 0x113c (0x8)
	unsigned char unreflected_1144[0x4]; // 0x1144 (0x4) 
	class UClass* MaxHealthApplicationGameplayEffect; // 0x1148 (0x8)
	class UFortHealthSet* HealthSet; // 0x1150 (0x8)
	class UFortControlResistanceSet* ControlResistanceSet; // 0x1158 (0x8)
	class UFortDamageSet* DamageSet; // 0x1160 (0x8)
	class UFortMovementSet* MovementSet; // 0x1168 (0x8)
	class UFortAdvancedMovementSet* AdvancedMovementSet; // 0x1170 (0x8)
	unsigned char unreflected_1178[0x8]; // 0x1178 (0x8) 
	struct FMulticastInlineDelegate OnAbilityDecisionWindowStackUpdated; // 0x1180 (0x10)
	unsigned char unreflected_1190[0x30]; // 0x1190 (0x30) 
	struct FMulticastInlineDelegate OnAbilityTargetingBlocked; // 0x11c0 (0x10)
	class UFortAbilitySystemComponent* AbilitySystemComponent; // 0x11d0 (0x8)
	struct TArray<struct FFortActiveMontageDecisionWindow> DecisionWindowStack; // 0x11d8 (0x10)
	struct FGameplayTagContainer GameplayTags; // 0x11e8 (0x20)
	struct FText DisplayName; // 0x1208 (0x18)
	struct TArray<struct FDamagerInfo> Damagers; // 0x1220 (0x10)
	struct TArray<struct FDamageDoneSourceInfo> TotalDamageDoneTrackers; // 0x1230 (0x10)
	struct TArray<struct FDamageDoneTargetInfo> TargetDamageDoneTrackers; // 0x1240 (0x10)
	struct TArray<struct FDamageDoneSourceInfo> TotalDamageTakenTrackers; // 0x1250 (0x10)
	struct TArray<struct FDamageDoneTargetInfo> TargetDamageTakenTrackers; // 0x1260 (0x10)
	float DamageDoneLastAtTime; // 0x1270 (0x4)
	float DamageTakenLastAtTime; // 0x1274 (0x4)
	float LastHitTime; // 0x1278 (0x4)
	float TotalPlayerDamageDealt; // 0x127c (0x4)
	class UFortHealthBarIndicator* HealthBarIndicator; // 0x1280 (0x8)
	struct FGameplayTag CurrentCalloutTag; // 0x1288 (0x4)
	unsigned char unreflected_128c[0x4]; // 0x128c (0x4) 
	struct TArray<struct FCalloutEntry> CalloutEntries; // 0x1290 (0x10)
	float HealthBarWidth; // 0x12a0 (0x4)
	float HealthBarHeightMultiplier; // 0x12a4 (0x4)
	unsigned char unreflected_12a8[0x8]; // 0x12a8 (0x8) 
	struct FSlateBrush SpottedBrush; // 0x12b0 (0xc0)
	struct FVector SpottedIconOffset; // 0x1370 (0x18)
	int ClientNonRenderedAnimUpdateRate; // 0x1388 (0x4)
	int MaxEvalRateForInterpolation; // 0x138c (0x4)
	struct TArray<float> AnimUpdateRateVisibleMaxDistanceFactor; // 0x1390 (0x10)
	struct TMap<int, int> LODToFrameSkipMap; // 0x13a0 (0x50)
	unsigned char unreflected_13f0[0x10]; // 0x13f0 (0x10) 
	struct FFortConversationSentence CurrentSentence; // 0x1400 (0xc0)
	unsigned char unreflected_14c0[0x18]; // 0x14c0 (0x18) 
	struct FMulticastInlineDelegate OnPawnHealthChanged; // 0x14d8 (0x10)
	struct FMulticastInlineDelegate OnPawnMaxOvershieldChanged; // 0x14e8 (0x10)
	struct FAthenaBatchedDamageGameplayCues_Shared AccumulatedBatchDataShared; // 0x14f8 (0x78)
	struct FAthenaBatchedDamageGameplayCues_NonShared AccumulatedBatchDataNonShared; // 0x1570 (0x10)
	unsigned char unreflected_1580[0x8]; // 0x1580 (0x8) 
	struct FGameplayCueParameters BatchedGameplayCueParameters; // 0x1588 (0xd0)
	struct FGameplayTagContainer ReplayItemActions; // 0x1658 (0x20)
	unsigned char unreflected_1678[0x20]; // 0x1678 (0x20) 
	struct FGameplayTagContainer HidingVisibilityTags; // 0x1698 (0x20)
	struct FGameplayTagContainer HidingTransitionVisibilityTags; // 0x16b8 (0x20)
	class UPegasusGameEventCollector* PegasusTimelineCollector; // 0x16d8 (0x8)
	class UFortAthenaAILODComponent* AILODComponent; // 0x16e0 (0x8)
	unsigned char unreflected_16e8[0x20]; // 0x16e8 (0x20) 
	struct FClientAILODSettings ClientAILODSettings; // 0x1708 (0x2f0)
	struct FGameplayTag FallbackTag; // 0x19f8 (0x4)
	unsigned char unreflected_19fc[0x4]; // 0x19fc (0x4) 
	struct FString DebugType; // 0x1a00 (0x10)
	struct TMap<uint32_t, struct FRecordedGunshot> RecordedGunshots; // 0x1a10 (0x50)
	unsigned char unreflected_1a60[0x40]; // 0x1a60 (0x40) 
	struct FMulticastInlineDelegate OnPawnComponentAttachedEvent; // 0x1aa0 (0x10)
	unsigned char unreflected_1ab0[0x30]; // 0x1ab0 (0x30) 
	struct TArray<class ABuildingActor*> OverlappingBuildings; // 0x1ae0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortPawn.WillFallFromHeightCauseDamage (Underlying native function: WillFallFromHeightCauseDamage 0x8cf53fc)
	bool WillFallFromHeightCauseDamage(float& FallDistance); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.WasDBNOOnDeath (Underlying native function: WasDBNOOnDeath 0x28071d4)
	bool WasDBNOOnDeath(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.UnlinkAnimLayer (Underlying native function: UnlinkAnimLayer 0x8cf535c)
	void UnlinkAnimLayer(class UClass*& AnimLayer); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.TriggerFeedbackEvent (Underlying native function: TriggerFeedbackEvent 0x8cf5174)
	void TriggerFeedbackEvent(struct FName& EventName, class AFortPawn*& InstigatorPawn, class AFortPawn*& Recipient, float& OverriddenDelay); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.TriggerAnimInputEvent (Underlying native function: TriggerAnimInputEvent 0x18078ac)
	void TriggerAnimInputEvent(class UFortAnimInputEvent*& AnimInputEvent); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.TimeFromJumpApex (Underlying native function: TimeFromJumpApex 0x8cf514c)
	float TimeFromJumpApex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.StopSpinning (Underlying native function: StopSpinning 0x8cf5120)
	void StopSpinning(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.StopPushMomentum (Underlying native function: StopPushMomentum 0x8cf510c)
	void StopPushMomentum(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.StopBatchedLoopingWeaponActivation (Underlying native function: StopBatchedLoopingWeaponActivation 0x8cf50e4)
	void StopBatchedLoopingWeaponActivation(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawn.StartSpinning (Underlying native function: StartSpinning 0x8cf4fd4)
	void StartSpinning(float& Value, bool& bFallingOnly, bool& bAdjustForInputYawScale); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.StartPushMomentum (Underlying native function: StartPushMomentum 0x8cf4ef8)
	void StartPushMomentum(struct FVector& NewPushMomentum, float& Duration); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SpawnSoundLensEffectDirectional (Underlying native function: SpawnSoundLensEffectDirectional 0x8cf4c38)
	class AFortSoundCameraLensEffect* SpawnSoundLensEffectDirectional(class AActor*& TrackedActor, struct FVector& HitInfo, float& MaxAudibleDistance, enum EFortSoundIndicatorTypes& IndicatorType, class AActor*& InstigatingActor, struct FLinearColor& Tint, class UTexture*& OverrideIcon); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SpawnPooledGenericCameraLensEffectDirectional (Underlying native function: SpawnPooledGenericCameraLensEffectDirectional 0x8cf4abc)
	struct TScriptInterface<class ICameraLensEffectInterface> SpawnPooledGenericCameraLensEffectDirectional(class UClass*& LensEffectEmitterClass, class AActor*& DamageDealer, struct FHitResult& HitInfo, bool& bShouldActivate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SpawnPooledCameraLensEffectDirectional (Underlying native function: SpawnPooledCameraLensEffectDirectional 0x8cf4944)
	class AFortEmitterCameraLensEffectDirectional* SpawnPooledCameraLensEffectDirectional(class UClass*& LensEffectEmitterClass, class AActor*& DamageDealer, struct FHitResult& HitInfo, bool& bShouldActivate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SpawnGenericCameraLensEffectDirectional (Underlying native function: SpawnGenericCameraLensEffectDirectional 0x8cf4634)
	struct TScriptInterface<class ICameraLensEffectInterface> SpawnGenericCameraLensEffectDirectional(class UClass*& LensEffectEmitterClass, class AActor*& DamageDealer, struct FHitResult& HitInfo, bool& bDeferSpawn); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SpawnGenericCameraLensEffect (Underlying native function: SpawnGenericCameraLensEffect 0x8cf459c)
	struct TScriptInterface<class ICameraLensEffectInterface> SpawnGenericCameraLensEffect(class UClass*& LensEffectEmitterClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SpawnCameraLensEffectDirectional (Underlying native function: SpawnCameraLensEffectDirectional 0x8cf442c)
	class AFortEmitterCameraLensEffectDirectional* SpawnCameraLensEffectDirectional(class UClass*& LensEffectEmitterClass, class AActor*& DamageDealer, struct FHitResult& HitInfo, bool& bDeferSpawn); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SpawnCameraLensEffect (Underlying native function: SpawnCameraLensEffect 0x8cf4394)
	class AEmitterCameraLensEffectBase* SpawnCameraLensEffect(class UClass*& LensEffectEmitterClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.ShouldDie (Underlying native function: ShouldDie 0x8cf4200)
	bool ShouldDie(float& Damage, class AController*& EventInstigator, class AActor*& DamageCauser); // (BlueprintAuthorityOnly | Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.SetTurnTransitionActiveAndControllingRotation (Underlying native function: SetTurnTransitionActiveAndControllingRotation 0x8cf3ec4)
	void SetTurnTransitionActiveAndControllingRotation(bool& bInControl); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetSpawnSpot (Underlying native function: SetSpawnSpot 0x8cf3e40)
	void SetSpawnSpot(class AActor*& InSpawnSpot); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetSignalInStorm (Underlying native function: SetSignalInStorm 0x8cf3ce8)
	void SetSignalInStorm(float& NewSignalInStormValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetShield (Underlying native function: SetShield 0x8cf3bd4)
	void SetShield(float& NewShieldValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetPawnVisibilityControllerOnly (Underlying native function: SetPawnVisibilityControllerOnly 0x8cf39f0)
	void SetPawnVisibilityControllerOnly(bool& bNewHidden, bool& bPropagateToWeapon); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetPawnVisibility (Underlying native function: SetPawnVisibility 0x8cf3924)
	void SetPawnVisibility(bool& bNewHidden, bool& bPropagateToWeapon); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetPawnAndControlRotation (Underlying native function: SetPawnAndControlRotation 0x8cf3894)
	void SetPawnAndControlRotation(struct FRotator& NewRotation); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetMovementSpeedMultiplier (Underlying native function: SetMovementSpeedMultiplier 0x8cf3694)
	void SetMovementSpeedMultiplier(float& NewMovementSpeedVal); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetMaxSignalInStorm (Underlying native function: SetMaxSignalInStorm 0x8cf3480)
	void SetMaxSignalInStorm(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetMaxShield (Underlying native function: SetMaxShield 0x8cf33fc)
	void SetMaxShield(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetMaxOvershield (Underlying native function: SetMaxOvershield 0x8cf3378)
	void SetMaxOvershield(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetMaxHealth (Underlying native function: SetMaxHealth 0x8cf32f4)
	void SetMaxHealth(float& NewHealthVal); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetIsSkating (Underlying native function: SetIsSkating 0x8cf31c4)
	void SetIsSkating(bool& bNewIsSkating); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetIsKnockedBack (Underlying native function: SetIsKnockedBack 0x8cf312c)
	void SetIsKnockedBack(bool& bKnockback); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetIsInGoop (Underlying native function: SetIsInGoop 0x8cf30ac)
	void SetIsInGoop(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetInVortexWithSpin (Underlying native function: SetInVortexWithSpin 0x8cf2d70)
	void SetInVortexWithSpin(bool& bNewValue, float& UpwardLaunchVelocity, float& GravityFloorAltitude, float& GravityFloorWidth, float& GravityFloorGravityScalar, float& GravityFloorTerminalVelocity, struct FVector& SpinCenter, float& SpinRadius, float& SpinVelocity); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetInVortexVolume (Underlying native function: SetInVortexVolume 0x8cf2a94)
	void SetInVortexVolume(bool& bIsInVortexVolume, float& UpwardLaunchVelocity, struct FTransform& VolumeTransform, float& VolumeThickness, float& GravityScalar, float& VolumeEdgeTerminalVelocity, bool& bCanDeployGlider); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetInVortex (Underlying native function: SetInVortex 0x8cf287c)
	void SetInVortex(bool& bNewValue, float& UpwardLaunchVelocity, float& GravityFloorAltitude, float& GravityFloorWidth, float& GravityFloorGravityScalar, float& GravityFloorTerminalVelocity, bool& bCanDeployGlider); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetHolsterWeapon (Underlying native function: SetHolsterWeapon 0x8cf2724)
	void SetHolsterWeapon(bool& bHolster, bool& bPlayEquipAnim, struct FName& HolsterId, bool& bForce); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetHealth (Underlying native function: SetHealth 0x8cf26a0)
	void SetHealth(float& NewHealthVal); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetGravityMultiplier (Underlying native function: SetGravityMultiplier 0x8cf2618)
	void SetGravityMultiplier(float& NewGravityVal); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetGravityJumpMultipliers (Underlying native function: SetGravityJumpMultipliers 0x8cf248c)
	void SetGravityJumpMultipliers(float& NewGravityVal, float& NewVehicleGravityVal, float& NewJumpZ, float& NewJumpHorizontalAcceleration, float& NewJumpHorizontalVelocity); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetFNameBasedOnHitDirection (Underlying native function: SetFNameBasedOnHitDirection 0x8cf218c)
	void SetFNameBasedOnHitDirection(struct FVector& HitDirection, struct FName& NameResult, struct FName& NameFront, struct FName& NameBack, struct FName& NameLeft, struct FName& NameRight); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetFallingHeight (Underlying native function: SetFallingHeight 0x8cf2370)
	void SetFallingHeight(float& FromHeight); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetCurrentOvershield (Underlying native function: SetCurrentOvershield 0x8cf1dec)
	void SetCurrentOvershield(float& NewShieldValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetControlRecoveryBehavior (Underlying native function: SetControlRecoveryBehavior 0x8cf1cf0)
	void SetControlRecoveryBehavior(enum EFortControlRecoveryBehavior& NewBehavior); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetCommonWaterFXParams (Underlying native function: SetCommonWaterFXParams 0x8cf19dc)
	bool SetCommonWaterFXParams(class UFXSystemComponent*& FXComponent, bool& bUpdateWaveData, bool& bUpdatePlaneData, bool& bUpdateSurfaceData); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetCallout (Underlying native function: SetCallout 0x8cf16e4)
	void SetCallout(struct FGameplayTag& CalloutTagToSet, float& Duration); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.SetAimAssistTargetOverride (Underlying native function: SetAimAssistTargetOverride 0x8cf153c)
	void SetAimAssistTargetOverride(class USceneComponent*& InOverride); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.ServerTeleportNearLocation (Underlying native function: ServerTeleportNearLocation 0x8cf1240)
	void ServerTeleportNearLocation(struct FVector& ActorLocation); // (Net | NetReliable | Native | Event | Public | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortPawn.ServerInternalEquipWeapon (Underlying native function: ServerInternalEquipWeapon 0x8cf11a0)
	void ServerInternalEquipWeapon(class AFortWeapon*& Weap); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPawn.SafeHolsterWeapon (Underlying native function: SafeHolsterWeapon 0x1a1e628)
	void SafeHolsterWeapon(bool& bHolster, bool& bPlayEquipAnim, struct FName& HolsterId, bool& bForce); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.ResetFallingHeight (Underlying native function: ResetFallingHeight 0x8cf1148)
	void ResetFallingHeight(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.RemoveWeaponTraceIgnoreActor (Underlying native function: RemoveWeaponTraceIgnoreActor 0x8cf0fd8)
	void RemoveWeaponTraceIgnoreActor(class AActor*& ActorToRemove); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.RemoveProjectileIgnoreActor (Underlying native function: RemoveProjectileIgnoreActor 0x8cf0e08)
	void RemoveProjectileIgnoreActor(class AActor*& ActorToRemove); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.RemoveNonReplicatedTagToPawn (Underlying native function: RemoveNonReplicatedTagToPawn 0x8cf0d44)
	void RemoveNonReplicatedTagToPawn(struct FGameplayTag& tag); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.RemoveCallout (Underlying native function: RemoveCallout 0x8cf0b48)
	void RemoveCallout(struct FGameplayTag& CalloutTagToRemove); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.RegisterAdditionalGameplayModifiers (Underlying native function: RegisterAdditionalGameplayModifiers 0x8437d58)
	void RegisterAdditionalGameplayModifiers(struct TArray<class UFortGameplayModifierItemDefinition*>& ModifierDefinitions); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.PrototypeCharacterMovement (Underlying native function: PrototypeCharacterMovement 0x8cf0a6c)
	void PrototypeCharacterMovement(struct TEnumAsByte<EMovementMode>& MovementMode, struct FVector& LaunchVelocity); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.PooledNiagaraCameraLensEffectCompleted (Underlying native function: PooledNiagaraCameraLensEffectCompleted 0x8cf09e8)
	void PooledNiagaraCameraLensEffectCompleted(class UNiagaraComponent*& FinishedComponent); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawn.PooledCascadeCameraLensEffectCompleted (Underlying native function: PooledCascadeCameraLensEffectCompleted 0x8cf08c4)
	void PooledCascadeCameraLensEffectCompleted(class UParticleSystemComponent*& FinishedComponent); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawn.PlaySwimmingSound (Underlying native function: PlaySwimmingSound 0x8cf0844)
	void PlaySwimmingSound(struct TEnumAsByte<EFortSwimmingAudioType>& SoundType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.PlaySound (Underlying native function: PlaySound 0x8cf0748)
	void PlaySound(class USoundBase*& sound, float& VolumeMultiplier, float& PitchMultiplier); // (Net | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPawn.PlayLocalAnimMontage (Underlying native function: PlayLocalAnimMontage 0x18627c8)
	float PlayLocalAnimMontage(class UAnimMontage*& NewAnimMontage, float& InPlayRate, struct FName& StartSectionName, bool& bNoBlend); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.PlayFootStepSound (Underlying native function: PlayFootStepSound 0x108f960)
	void PlayFootStepSound(int& FootDown); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.PickUpActor (Underlying native function: PickUpActor 0x8cf067c)
	bool PickUpActor(class AActor*& PickupTarget, class UFortDecoItemDefinition*& PlacementDecoItemDefinition); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.PawnUniqueIDSet (Has no native function)
	void PawnUniqueIDSet(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.PawnStopFire (Underlying native function: PawnStopFire 0x8cf05f8)
	void PawnStopFire(unsigned char& FireModeNum); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.PawnStartFire (Underlying native function: PawnStartFire 0x8cf0574)
	void PawnStartFire(unsigned char& FireModeNum); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.OnWeaponEquipped (Has no native function)
	void OnWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnTeleported (Has no native function)
	void OnTeleported(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnStunned (Has no native function)
	void OnStunned(); // (BlueprintAuthorityOnly | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnSlidingStateChanged (Has no native function)
	void OnSlidingStateChanged(bool& bNewSlidingState); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnRep_WeaponActivated (Underlying native function: OnRep_WeaponActivated 0x2959c44)
	void OnRepWeaponActivated(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_VocalChords (Underlying native function: OnRep_VocalChords 0x113baa0)
	void OnRepVocalChords(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_TeleportCounter (Underlying native function: OnRep_TeleportCounter 0x2a38fd4)
	void OnRepTeleportCounter(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_SynchedActionWarpPointInfo (Underlying native function: OnRep_SynchedActionWarpPointInfo 0x27520f8)
	void OnRepSynchedActionWarpPointInfo(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_StormShieldComponent (Underlying native function: OnRep_StormShieldComponent 0x8cf0268)
	void OnRepStormShieldComponent(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPawn.OnRep_Sentence (Underlying native function: OnRep_Sentence 0x8cf0240)
	void OnRepSentence(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPawn.OnRep_ReplicatedWaterBody (Underlying native function: OnRep_ReplicatedWaterBody 0x26efaac)
	void OnRepReplicatedWaterBody(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPawn.OnRep_ReplicatedSkyTube (Underlying native function: OnRep_ReplicatedSkyTube 0x8cf022c)
	void OnRepReplicatedSkyTube(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_ReplicatedIsInVortex (Underlying native function: OnRep_ReplicatedIsInVortex 0x8cf0218)
	void OnRepReplicatedIsInVortex(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPawn.OnRep_ReplicatedIsInGoop (Underlying native function: OnRep_ReplicatedIsInGoop 0x8cf0204)
	void OnRepReplicatedIsInGoop(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_PushMomentum (Underlying native function: OnRep_PushMomentum 0x8cf01f0)
	void OnRepPushMomentum(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPawn.OnRep_PawnUniqueID (Underlying native function: OnRep_PawnUniqueID 0x23f5c48)
	void OnRepPawnUniqueID(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_MovingEmoteFollowingOnly (Underlying native function: OnRep_MovingEmoteFollowingOnly 0x8cf01d8)
	void OnRepMovingEmoteFollowingOnly(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_MovingEmote (Underlying native function: OnRep_MovingEmote 0x2a07d5c)
	void OnRepMovingEmote(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_LastReplicatedEmoteExecuted (Underlying native function: OnRep_LastReplicatedEmoteExecuted 0x18ddfbc)
	void OnRepLastReplicatedEmoteExecuted(class UFortItemDefinition*& PreviousValue); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_LandingFlashCount (Underlying native function: OnRep_LandingFlashCount 0x160c8d8)
	void OnRepLandingFlashCount(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_JumpFlashCount (Underlying native function: OnRep_JumpFlashCount 0x160c864)
	void OnRepJumpFlashCount(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_IsSynchedAction (Underlying native function: OnRep_IsSynchedAction 0x2256e88)
	void OnRepIsSynchedAction(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_IsSwinging (Underlying native function: OnRep_IsSwinging 0x8cf01ac)
	void OnRepIsSwinging(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPawn.OnRep_IsSlopeSliding (Underlying native function: OnRep_IsSlopeSliding 0xfb0bd0)
	void OnRepIsSlopeSliding(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPawn.OnRep_IsSliding (Underlying native function: OnRep_IsSliding 0x246935c)
	void OnRepIsSliding(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_IsSkating (Underlying native function: OnRep_IsSkating 0x8cf0194)
	void OnRepIsSkating(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_IsKnockedBack (Underlying native function: OnRep_IsKnockedBack 0x8cf017c)
	void OnRepIsKnockedBack(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPawn.OnRep_IsJumping (Underlying native function: OnRep_IsJumping 0x249d084)
	void OnRepIsJumping(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPawn.OnRep_IsDBNO (Underlying native function: OnRep_IsDBNO 0x10a03c8)
	void OnRepIsDBNO(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPawn.OnRep_EmoteWalkSpeed (Underlying native function: OnRep_EmoteWalkSpeed 0x2a9b2a8)
	void OnRepEmoteWalkSpeed(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_DamageZoneActiveBitMask (Underlying native function: OnRep_DamageZoneActiveBitMask 0x8cf010c)
	void OnRepDamageZoneActiveBitMask(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_CurrentWeapon (Underlying native function: OnRep_CurrentWeapon 0x14bf310)
	void OnRepCurrentWeapon(class AFortWeapon*& OldWeapon); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_ClientAILODSettings (Underlying native function: OnRep_ClientAILODSettings 0x20be108)
	void OnRepClientAILODSettings(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPawn.OnRep_bWeaponHolstered (Underlying native function: OnRep_bWeaponHolstered 0x1a1ee38)
	void OnRepbWeaponHolstered(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnRep_bIsInvulnerable (Underlying native function: OnRep_bIsInvulnerable 0x88fab24)
	void OnRepbIsInvulnerable(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.OnOutOfControlResistanceServer (Has no native function)
	void OnOutOfControlResistanceServer(float& ImpactDamageDone, struct FGameplayTagContainer& SourceTags, struct FGameplayEffectContextHandle& EffectContext, class AController*& EffectInstigator, class AActor*& EffectCauser); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnMovementStyleChanged (Has no native function)
	void OnMovementStyleChanged(struct TEnumAsByte<EFortMovementStyle>& PreviousMovementStyle, struct TEnumAsByte<EFortMovementStyle>& NewMovementStyle); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnMontageStarted (Underlying native function: OnMontageStarted 0x11883dc)
	void OnMontageStarted(class UAnimMontage*& Montage); // (Native | Protected)

	// Function /Script/FortniteGame.FortPawn.OnMontageEnded (Underlying native function: OnMontageEnded 0x2097d0c)
	void OnMontageEnded(class UAnimMontage*& Montage, bool& bInterrupted); // (Native | Protected)

	// Function /Script/FortniteGame.FortPawn.OnMontageBlendingOut (Underlying native function: OnMontageBlendingOut 0x1188460)
	void OnMontageBlendingOut(class UAnimMontage*& Montage, bool& bInterrupted); // (Native | Protected)

	// Function /Script/FortniteGame.FortPawn.OnlySpinWhenFalling (Underlying native function: OnlySpinWhenFalling 0x8cf055c)
	bool OnlySpinWhenFalling(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.OnExitedWaterBody (Has no native function)
	void OnExitedWaterBody(class AFortWaterBodyActor*& WaterBody, bool& bIsLastBody); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnEnteredWaterBody (Has no native function)
	void OnEnteredWaterBody(class AFortWaterBodyActor*& WaterBody, bool& bIsFirstBody); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnEndWaterInteraction (Has no native function)
	void OnEndWaterInteraction(struct FVector& PreviousWaterSurfaceLocation, float& WaterDepth); // (Event | Public | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnDisplaySentence (Has no native function)
	void OnDisplaySentence(struct FText& SpeechText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnDisplayHitNotify (Has no native function)
	void OnDisplayHitNotify(float& DamageDealt, bool& bCriticalHit, bool& bFatalHit, bool& bShieldHit, class AActor*& HitActor, struct FGameplayTagContainer& HitTags, struct FVector& HitLocation); // (Event | Public | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnDeathServer (Has no native function)
	void OnDeathServer(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnDeathPlayEffects (Underlying native function: OnDeathPlayEffects 0x1317c84)
	void OnDeathPlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintCosmetic | Native | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnDamageZoneStatusChanged (Has no native function)
	void OnDamageZoneStatusChanged(struct TEnumAsByte<EFortDamageZone>& Zone, bool& bStatus); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnDamageServer (Has no native function)
	void OnDamageServer(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnDamagePlayEffects (Has no native function)
	void OnDamagePlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnClearSentence (Has no native function)
	void OnClearSentence(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnBumpPushedPawn (Has no native function)
	void OnBumpPushedPawn(class AFortPawn*& InstigatedBy, float& PushTimeLeft); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnBuildingHitPlayEffects (Has no native function)
	void OnBuildingHitPlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, struct FGameplayEffectContextHandle& EffectContext, bool& bPlayerPlaced); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnBeginWaterInteraction (Has no native function)
	void OnBeginWaterInteraction(struct FVector& WaterSurfaceLocation, float& WaterDepth); // (Event | Public | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnBaseChanged (Has no native function)
	void OnBaseChanged(class AActor*& NewBase); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnAnimInputEvent (Has no native function)
	void OnAnimInputEvent(class UFortAnimInputEvent*& AnimInputEvent); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPawn.OnAllMontageInstancesEnded (Underlying native function: OnAllMontageInstancesEnded 0x244e110)
	void OnAllMontageInstancesEnded(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPawn.NetMulticast_InvokeGameplayCuesExecuted_WithParams (Underlying native function: NetMulticast_InvokeGameplayCuesExecuted_WithParams 0x8cefd94)
	void NetMulticastInvokeGameplayCuesExecutedWithParams(struct FGameplayTagContainer& GameplayCueTags, struct FPredictionKey& PredictionKey, struct FGameplayCueParameters& GameplayCueParameters); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPawn.NetMulticast_InvokeGameplayCuesExecuted (Underlying native function: NetMulticast_InvokeGameplayCuesExecuted 0x8cefbb0)
	void NetMulticastInvokeGameplayCuesExecuted(struct FGameplayTagContainer& GameplayCueTags, struct FPredictionKey& PredictionKey, struct FGameplayEffectContextHandle& EffectContext); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPawn.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams (Underlying native function: NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams 0x8cef9f4)
	void NetMulticastInvokeGameplayCuesAddedAndWhileActiveWithParams(struct FGameplayTagContainer& GameplayCueTags, struct FPredictionKey& PredictionKey, struct FGameplayCueParameters& GameplayCueParameters); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPawn.NetMulticast_InvokeGameplayCueExecuted_WithParams (Underlying native function: NetMulticast_InvokeGameplayCueExecuted_WithParams 0x21b5710)
	void NetMulticastInvokeGameplayCueExecutedWithParams(struct FGameplayTag& GameplayCueTag, struct FPredictionKey& PredictionKey, struct FGameplayCueParameters& GameplayCueParameters); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPawn.NetMulticast_InvokeGameplayCueExecuted_FromSpec (Underlying native function: NetMulticast_InvokeGameplayCueExecuted_FromSpec 0xe8a008)
	void NetMulticastInvokeGameplayCueExecutedFromSpec(struct FGameplayEffectSpecForRPC& Spec, struct FPredictionKey& PredictionKey); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPawn.NetMulticast_InvokeGameplayCueExecuted (Underlying native function: NetMulticast_InvokeGameplayCueExecuted 0x8cef860)
	void NetMulticastInvokeGameplayCueExecuted(struct FGameplayTag& GameplayCueTag, struct FPredictionKey& PredictionKey, struct FGameplayEffectContextHandle& EffectContext); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPawn.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams (Underlying native function: NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams 0x8cef6f4)
	void NetMulticastInvokeGameplayCueAddedAndWhileActiveWithParams(struct FGameplayTag& GameplayCueTag, struct FPredictionKey& PredictionKey, struct FGameplayCueParameters& GameplayCueParameters); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPawn.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec (Underlying native function: NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec 0x8cef5f4)
	void NetMulticastInvokeGameplayCueAddedAndWhileActiveFromSpec(struct FGameplayEffectSpecForRPC& Spec, struct FPredictionKey& PredictionKey); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPawn.NetMulticast_InvokeGameplayCueAdded_WithParams (Underlying native function: NetMulticast_InvokeGameplayCueAdded_WithParams 0xef2cd4)
	void NetMulticastInvokeGameplayCueAddedWithParams(struct FGameplayTag& GameplayCueTag, struct FPredictionKey& PredictionKey, struct FGameplayCueParameters& Parameters); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPawn.NetMulticast_InvokeGameplayCueAdded (Underlying native function: NetMulticast_InvokeGameplayCueAdded 0x8cef460)
	void NetMulticastInvokeGameplayCueAdded(struct FGameplayTag& GameplayCueTag, struct FPredictionKey& PredictionKey, struct FGameplayEffectContextHandle& EffectContext); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPawn.NetMulticast_Athena_BatchedDamageCues (Underlying native function: NetMulticast_Athena_BatchedDamageCues 0x205d20c)
	void NetMulticastAthenaBatchedDamageCues(struct FAthenaBatchedDamageGameplayCues_Shared& SharedData, struct FAthenaBatchedDamageGameplayCues_NonShared& NonSharedData); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortPawn.MulticastUnlinkAnimLayer (Underlying native function: MulticastUnlinkAnimLayer 0x232c8f8)
	void MulticastUnlinkAnimLayer(class UClass*& AnimLayer); // (Net | NetReliable | Native | Event | NetMulticast | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.MulticastLinkAnimLayer (Underlying native function: MulticastLinkAnimLayer 0x2362c18)
	void MulticastLinkAnimLayer(class UClass*& AnimLayer); // (Net | NetReliable | Native | Event | NetMulticast | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.MovingEmoteStopped (Underlying native function: MovingEmoteStopped 0x26daa0c)
	void MovingEmoteStopped(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.MaxHealthStateChanged (Underlying native function: MaxHealthStateChanged 0x25dec5c)
	void MaxHealthStateChanged(bool& bIsMaxHealth); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.LogChugSplashEvent (Underlying native function: LogChugSplashEvent 0x26daa0c)
	void LogChugSplashEvent(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.LinkAnimLayer (Underlying native function: LinkAnimLayer 0x2bae2bc)
	void LinkAnimLayer(class UClass*& AnimLayer); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.LaunchCharacterJump (Underlying native function: LaunchCharacterJump 0x8cef2b8)
	void LaunchCharacterJump(struct FVector& LaunchVelocity, bool& bXYOverride, bool& bZOverride, bool& bIgnoreFallDamage, bool& bPlayFeedbackEvent); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.KillDisconnectedPawn (Underlying native function: KillDisconnectedPawn 0x8cef2a4)
	void KillDisconnectedPawn(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPawn.IsWeaponHolstered (Underlying native function: IsWeaponHolstered 0x8cef124)
	bool IsWeaponHolstered(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsWeaponHiddenByHolstering (Underlying native function: IsWeaponHiddenByHolstering 0x8cef104)
	bool IsWeaponHiddenByHolstering(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsTurnTransitionActiveAndControllingRotation (Underlying native function: IsTurnTransitionActiveAndControllingRotation 0x8cef0d0)
	bool IsTurnTransitionActiveAndControllingRotation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsSurfaceSwimming (Underlying native function: IsSurfaceSwimming 0x2363a60)
	bool IsSurfaceSwimming(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsStaggered (Underlying native function: IsStaggered 0x8cef0b0)
	bool IsStaggered(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsSpinning (Underlying native function: IsSpinning 0x8cef08c)
	bool IsSpinning(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsSlidingEnabled (Underlying native function: IsSlidingEnabled 0x8cef068)
	bool IsSlidingEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsInVortex (Underlying native function: IsInVortex 0x8ceef2c)
	bool IsInVortex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsInSkyTube (Underlying native function: IsInSkyTube 0x8ceef10)
	bool IsInSkyTube(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsInsideHidingProp (Underlying native function: IsInsideHidingProp 0x8ceef48)
	bool IsInsideHidingProp(bool& bIncludeTransition); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsInGoop (Underlying native function: IsInGoop 0x8ceeef4)
	bool IsInGoop(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsFrontalHit (Underlying native function: IsFrontalHit 0x8ceee3c)
	bool IsFrontalHit(struct FVector& HitDirection); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsForciblyWadingInWater (Underlying native function: IsForciblyWadingInWater 0x8ceee18)
	bool IsForciblyWadingInWater(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsDead (Underlying native function: IsDead 0x28ae810)
	bool IsDead(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsDBNO (Underlying native function: IsDBNO 0x2d00eb8)
	bool IsDBNO(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsAllowChainStun (Underlying native function: IsAllowChainStun 0x8ceedd8)
	bool IsAllowChainStun(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.IsActionInputIgnored (Underlying native function: IsActionInputIgnored 0x8ceedb0)
	bool IsActionInputIgnored(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.InitializeDeathHitSocket (Underlying native function: InitializeDeathHitSocket 0x8ceecc4)
	void InitializeDeathHitSocket(struct FVector& WorldLocation, struct FVector& WorldNormal); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.HideBodyOnDeath (Underlying native function: HideBodyOnDeath 0x8ceec40)
	void HideBodyOnDeath(bool& bDeathAnimationPlayed); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.HasCurrentMontage (Underlying native function: HasCurrentMontage 0x8ceebb8)
	bool HasCurrentMontage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.HandleIsHiddenForDeath (Underlying native function: HandleIsHiddenForDeath 0x1566900)
	void HandleIsHiddenForDeath(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.HandleIsDying (Underlying native function: HandleIsDying 0x25c83ac)
	void HandleIsDying(); // (Native | Public)

	// Function /Script/FortniteGame.FortPawn.GetWaterImmersionDepth (Underlying native function: GetWaterImmersionDepth 0x8cee8e8)
	float GetWaterImmersionDepth(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetTeam (Underlying native function: GetTeam 0x250ace4)
	unsigned char GetTeam(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetTargetingTransform (Underlying native function: GetTargetingTransform 0x8cee7a8)
	struct FTransform GetTargetingTransform(enum EFortAbilityTargetingSource& Source, class UFortGameplayAbility*& SourceAbility); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetSwingingDistanceToGround (Underlying native function: GetSwingingDistanceToGround 0x8cee780)
	float GetSwingingDistanceToGround(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.GetSwingAttachLocation (Underlying native function: GetSwingAttachLocation 0x854580c)
	struct FVector GetSwingAttachLocation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetSurfaceTrackingComponent (Underlying native function: GetSurfaceTrackingComponent 0x8cee75c)
	class UFortSurfaceTrackingComponent* GetSurfaceTrackingComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetSphericalHitDirection (Underlying native function: GetSphericalHitDirection 0x8cee62c)
	void GetSphericalHitDirection(struct FVector& HitDirection, float& Azimuth, float& Elevation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetSlopeSlidingNormal (Underlying native function: GetSlopeSlidingNormal 0x8cee584)
	struct FVector GetSlopeSlidingNormal(); // (Final | Native | Protected | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetSlopeSlidingAngles (Underlying native function: GetSlopeSlidingAngles 0x8cee4ac)
	void GetSlopeSlidingAngles(float& LocalPitch, float& LocalRoll); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetSignalInStorm (Underlying native function: GetSignalInStorm 0x8cee370)
	float GetSignalInStorm(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetShieldPercent (Underlying native function: GetShieldPercent 0x8cee344)
	float GetShieldPercent(); // (Native | Public | Const)

	// Function /Script/FortniteGame.FortPawn.GetShieldOrHealthPercent (Underlying native function: GetShieldOrHealthPercent 0x8cee31c)
	float GetShieldOrHealthPercent(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPawn.GetShield (Underlying native function: GetShield 0x27d37ac)
	float GetShield(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetProjectileIgnoredActors (Underlying native function: GetProjectileIgnoredActors 0x8cee1f4)
	struct TArray<class AActor*> GetProjectileIgnoredActors(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetPendingLaunchVelocity (Underlying native function: GetPendingLaunchVelocity 0x5e3e570)
	struct FVector GetPendingLaunchVelocity(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetPawnMID (Underlying native function: GetPawnMID 0x8cee168)
	class UMaterialInstanceDynamic* GetPawnMID(int& ElementIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.GetOvershieldPercent (Underlying native function: GetOvershieldPercent 0x8cee13c)
	float GetOvershieldPercent(); // (Native | Public | Const)

	// Function /Script/FortniteGame.FortPawn.GetOvershield (Underlying native function: GetOvershield 0x8cee110)
	float GetOvershield(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetMyMovementBaseActor (Underlying native function: GetMyMovementBaseActor 0x8cee0e4)
	class AActor* GetMyMovementBaseActor(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.GetMovementPredictionPosition (Underlying native function: GetMovementPredictionPosition 0x8cedf3c)
	struct FVector GetMovementPredictionPosition(float& PredictionDeltaTime); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetMeleeReticleStrikeAngle (Underlying native function: GetMeleeReticleStrikeAngle 0x8cedeac)
	float GetMeleeReticleStrikeAngle(bool& bPrimaryInput); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetMeleeComboCounter (Underlying native function: GetMeleeComboCounter 0x8cede64)
	int GetMeleeComboCounter(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetMaxSignalInStorm (Underlying native function: GetMaxSignalInStorm 0x8cede38)
	float GetMaxSignalInStorm(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetMaxShield (Underlying native function: GetMaxShield 0x27d3780)
	float GetMaxShield(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetMaxOvershield (Underlying native function: GetMaxOvershield 0x8cede18)
	float GetMaxOvershield(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetMaxHealth (Underlying native function: GetMaxHealth 0x2771bf4)
	float GetMaxHealth(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetMaxDistanceWithoutFallDamage (Underlying native function: GetMaxDistanceWithoutFallDamage 0x8cedde8)
	float GetMaxDistanceWithoutFallDamage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetMaxControlResistance (Underlying native function: GetMaxControlResistance 0x8ceddc8)
	float GetMaxControlResistance(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetLocalSpin (Underlying native function: GetLocalSpin 0x8cedd98)
	float GetLocalSpin(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetKnockbackThreshold (Underlying native function: GetKnockbackThreshold 0x8cedd6c)
	float GetKnockbackThreshold(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetKnockbackMultiplier (Underlying native function: GetKnockbackMultiplier 0x8cedd40)
	float GetKnockbackMultiplier(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetIsSwinging (Underlying native function: GetIsSwinging 0x8cedd24)
	bool GetIsSwinging(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetIsSwingAttached (Underlying native function: GetIsSwingAttached 0x8cedd04)
	bool GetIsSwingAttached(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetIsSlopeSliding (Underlying native function: GetIsSlopeSliding 0x8cedce8)
	bool GetIsSlopeSliding(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetIgnoreFallDamageComponentTag (Underlying native function: GetIgnoreFallDamageComponentTag 0x8cedb78)
	struct FName GetIgnoreFallDamageComponentTag(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetHealthPercent (Underlying native function: GetHealthPercent 0x8cedb4c)
	float GetHealthPercent(); // (Native | Public | Const)

	// Function /Script/FortniteGame.FortPawn.GetHealth (Underlying native function: GetHealth 0x2771c20)
	float GetHealth(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetFootstepSurfaceType (Underlying native function: GetFootstepSurfaceType 0x8ceda28)
	struct TEnumAsByte<EFortFootstepSurfaceType> GetFootstepSurfaceType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetFootstepComponent (Underlying native function: GetFootstepComponent 0x8ceda04)
	class UFortFootstepComponent* GetFootstepComponent(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetFirstValidEmoteAudioComponent (Underlying native function: GetFirstValidEmoteAudioComponent 0x8ced9dc)
	class UAudioComponent* GetFirstValidEmoteAudioComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetEncounterInfo (Underlying native function: GetEncounterInfo 0x8ced9b0)
	class UFortAIEncounterInfo* GetEncounterInfo(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetEmotePropAttachMesh (Underlying native function: GetEmotePropAttachMesh 0x8ced988)
	class USkeletalMeshComponent* GetEmotePropAttachMesh(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.GetEmoteComponent (Underlying native function: GetEmoteComponent 0x8ced970)
	class UFortEmoteComponent* GetEmoteComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetEmoteAudioComponent (Underlying native function: GetEmoteAudioComponent 0x8ced8dc)
	class UAudioComponent* GetEmoteAudioComponent(struct FName& SoundID); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetDefaultTargetingRotation (Underlying native function: GetDefaultTargetingRotation 0x8ced704)
	struct FRotator GetDefaultTargetingRotation(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetDefaultTargetingOrigin (Underlying native function: GetDefaultTargetingOrigin 0x8ced6c8)
	struct FVector GetDefaultTargetingOrigin(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetDamageZone (Underlying native function: GetDamageZone 0x27010b4)
	struct TEnumAsByte<EFortDamageZone> GetDamageZone(struct FHitResult& InHitResult); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetCurrentWeapon (Underlying native function: GetCurrentWeapon 0x27d0154)
	class AFortWeapon* GetCurrentWeapon(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetCurrentWaterBody (Underlying native function: GetCurrentWaterBody 0x238c90c)
	class AFortWaterBodyActor* GetCurrentWaterBody(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetCurrentSkyTube (Underlying native function: GetCurrentSkyTube 0x8ced5c0)
	class AFortSkyTube* GetCurrentSkyTube(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetCurrentSentenceSpeechText (Underlying native function: GetCurrentSentenceSpeechText 0x8ced54c)
	struct FText GetCurrentSentenceSpeechText(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetCurrentOvershield (Underlying native function: GetCurrentOvershield 0x8ced52c)
	float GetCurrentOvershield(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetCurrentMontageSectionTimeLeft (Underlying native function: GetCurrentMontageSectionTimeLeft 0x8ced4f0)
	float GetCurrentMontageSectionTimeLeft(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.GetControlResistance (Underlying native function: GetControlResistance 0x8ced4b8)
	float GetControlResistance(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetControlRecoveryBehavior (Underlying native function: GetControlRecoveryBehavior 0x8ced4a0)
	enum EFortControlRecoveryBehavior GetControlRecoveryBehavior(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetAudioParameterComponent (Underlying native function: GetAudioParameterComponent 0x2455f50)
	class UAudioParameterComponent* GetAudioParameterComponent(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GetAssetSkeletalMeshComponentAttachment (Underlying native function: GetAssetSkeletalMeshComponentAttachment 0x8ced318)
	class USkeletalMeshComponent* GetAssetSkeletalMeshComponentAttachment(struct FName& SocketName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.GetAllEmoteAudioComponents (Underlying native function: GetAllEmoteAudioComponents 0x8ced2a0)
	struct TArray<class UAudioComponent*> GetAllEmoteAudioComponents(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.GameplayCue_InstantDeath (Underlying native function: GameplayCue_InstantDeath 0x22cf12c)
	void GameplayCueInstantDeath(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Native | Protected)

	// Function /Script/FortniteGame.FortPawn.GameplayCue_Damage (Underlying native function: GameplayCue_Damage 0x1732b10)
	void GameplayCueDamage(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.GameplayCue (Underlying native function: GameplayCue 0xef28ac)
	void GameplayCue(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Native | Protected)

	// Function /Script/FortniteGame.FortPawn.ForceKill (Underlying native function: ForceKill 0x8ced140)
	void ForceKill(struct FGameplayTag& DeathReason, class AController*& KillerController, class AActor*& KillerActor); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.ExitSkyTube (Underlying native function: ExitSkyTube 0x8cecfd0)
	void ExitSkyTube(class AFortSkyTube*& SkyTube, bool& bOutIsLastTube); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.EquipWeaponDefinition (Underlying native function: EquipWeaponDefinition 0x8cece64)
	class AFortWeapon* EquipWeaponDefinition(class UFortWeaponItemDefinition*& WeaponData, struct FGuid& ItemEntryGuid, struct FGuid& TrackerGuid, bool& bDisableEquipAnimation); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.EquipBestWeapon (Underlying native function: EquipBestWeapon 0x8cece3c)
	bool EquipBestWeapon(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.EnterSkyTube (Underlying native function: EnterSkyTube 0x8cecd68)
	void EnterSkyTube(class AFortSkyTube*& SkyTube, bool& bOutIsFirstTube); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.EmoteStopped (Underlying native function: EmoteStopped 0x8cecce4)
	void EmoteStopped(class UFortItemDefinition*& MontageItemDef); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.EmoteStarted (Underlying native function: EmoteStarted 0x8cecc60)
	void EmoteStarted(class UFortItemDefinition*& MontageItemDef); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.DoFatalDamage (Underlying native function: DoFatalDamage 0x8cecae4)
	void DoFatalDamage(class UAbilitySystemComponent*& KillerAbilitySystemComponent); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.DetachAssetFromSocket (Underlying native function: DetachAssetFromSocket 0x1e057b4)
	void DetachAssetFromSocket(struct FName& SocketName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.DestroyDynamicComponent (Underlying native function: DestroyDynamicComponent 0x8ceca30)
	bool DestroyDynamicComponent(class UActorComponent*& Component); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.ClientInternalEquipWeapon (Underlying native function: ClientInternalEquipWeapon 0x8cec914)
	void ClientInternalEquipWeapon(class AFortWeapon*& Weap); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.FortPawn.ClearEmoteAudioComponents (Underlying native function: ClearEmoteAudioComponents 0x8cec894)
	void ClearEmoteAudioComponents(class UFortItemDefinition*& EmoteItemDef); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.CanSpawnSoundVisuals (Underlying native function: CanSpawnSoundVisuals 0x8cec6b8)
	bool CanSpawnSoundVisuals(enum EFortSoundIndicatorTypes& IndicatorType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPawn.BroadcastUnlinkAnimLayer (Underlying native function: BroadcastUnlinkAnimLayer 0x8cec3b4)
	void BroadcastUnlinkAnimLayer(class UClass*& AnimLayer); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.BroadcastLinkAnimLayer (Underlying native function: BroadcastLinkAnimLayer 0x8cec330)
	void BroadcastLinkAnimLayer(class UClass*& AnimLayer); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.AttachAssetToSocket (Underlying native function: AttachAssetToSocket 0x1e055dc)
	void AttachAssetToSocket(struct FAssetAttachment& InAttachment); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.ApplyKnockback (Underlying native function: ApplyKnockback 0x8cebedc)
	void ApplyKnockback(float& KnockbackMagnitude, float& KnockbackZAngle, struct FVector& ImpulseDir); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.AnimMontage_LocalSetNextSectionName (Underlying native function: AnimMontage_LocalSetNextSectionName 0x8cebdbc)
	void AnimMontageLocalSetNextSectionName(class UAnimMontage*& AnimMontage, struct FName& SectionName, struct FName& NextSectionName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.AnimMontage_LocalJumpToSectionName (Underlying native function: AnimMontage_LocalJumpToSectionName 0x8cebd30)
	bool AnimMontageLocalJumpToSectionName(struct FName& SectionName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.AnimMontage_LocalJumpToRandomSection (Underlying native function: AnimMontage_LocalJumpToRandomSection 0x8cebd0c)
	int AnimMontageLocalJumpToRandomSection(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.AlignRotationToHitDirection (Underlying native function: AlignRotationToHitDirection 0x8cebc84)
	void AlignRotationToHitDirection(struct FVector& HitDirection); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.AddWeaponTraceIgnoreActor (Underlying native function: AddWeaponTraceIgnoreActor 0x8cebb54)
	void AddWeaponTraceIgnoreActor(class AActor*& ActorToIgnore); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.AddProjectileIgnoreActor (Underlying native function: AddProjectileIgnoreActor 0x8ceb8a4)
	void AddProjectileIgnoreActor(class AActor*& ActorToIgnore); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.AddNonReplicatedTagToPawn (Underlying native function: AddNonReplicatedTagToPawn 0x8ceb7dc)
	void AddNonReplicatedTagToPawn(struct FGameplayTag& tag); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.AddEmoteAudioComponent (Underlying native function: AddEmoteAudioComponent 0x8ceb398)
	void AddEmoteAudioComponent(struct FName& SoundID, class UAudioComponent*& AudioComponent, float& FadeOutTime, bool& bPersistsOverMontages); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawn.AddDynamicComponentByClass (Underlying native function: AddDynamicComponentByClass 0x8ceb088)
	class UActorComponent* AddDynamicComponentByClass(class UClass*& ComponentClass); // (Final | Native | Public | BlueprintCallable)
};

