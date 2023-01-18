// Class /Script/FortniteGame.FortAthenaVehicle
// Size: 0x1950
class AFortAthenaVehicle : public AFortPhysicsPawn
{
	unsigned char unreflected_480[0x68]; // 0x480 (0x68) 
	struct FPredictionReplicationProxy_AP NetPredictionProxyAP; // 0x4e8 (0x18)
	struct FPredictionReplicationProxy_SP NetPredictionProxySP; // 0x500 (0x18)
	struct TWeakObjectPtr<class UAthenaItemWrapDefinition> SoftOverrideItemWrap; // 0x518 (0x28)
	class UAthenaItemWrapDefinition* OverrideItemWrap; // 0x540 (0x8)
	struct FMulticastInlineDelegate OnSpringCompressionDelegate; // 0x548 (0x10)
	struct TSet<class AFortPlayerPawnAthena*> PlayersBasedOnVehicle; // 0x558 (0x50)
	unsigned char unreflected_5a8[0x20]; // 0x5a8 (0x20) 
	struct FMulticastInlineDelegate OnSleepStateChangedDelegate; // 0x5c8 (0x10)
	struct FWaterSurfaceInfo WaterSurfaceDataCache; // 0x5d8 (0x68)
	unsigned char unreflected_640[0x10]; // 0x640 (0x10) 
	struct TWeakObjectPtr<class AController> LastDamageInstigator; // 0x650 (0x8)
	struct TWeakObjectPtr<class AController> LastOutOfHealthInstigator; // 0x658 (0x8)
	struct TWeakObjectPtr<class AActor> LastOutOfHealthDamageCauser; // 0x660 (0x8)
	class USplineComponent* BoundsXYSplineComponent; // 0x668 (0x8)
	class USkeletalMeshComponentBudgeted* SkeletalMesh; // 0x670 (0x8)
	unsigned char unreflected_678[0x28]; // 0x678 (0x28) 
	int CustomDepthStencilValue; // 0x6a0 (0x4)
	int CustomDepthStencilValueForHighlightedVehicle; // 0x6a4 (0x4)
	unsigned char SquadId; // 0x6a8 (0x1)
	unsigned char TeamId; // 0x6a9 (0x1)
	struct TEnumAsByte<EVehicleInitialOverlapBehavior> InitialOverlapBehavior; // 0x6aa (0x1)
	unsigned char bDisableUpdateForcedDebugInput; // 0x6ab (0x1)
	unsigned char bDisableUpdateAutoRun; // 0x6ab (0x1)
	unsigned char bDisableUpdateHonk; // 0x6ab (0x1)
	unsigned char bDisableUpdateIgnoredBuildingActors; // 0x6ab (0x1)
	unsigned char bDisableUpdateIngoredPawnsForDamage; // 0x6ab (0x1)
	unsigned char bDisableUpdateSafeTeleport; // 0x6ab (0x1)
	unsigned char bUseForceHeading; // 0x6ab (0x1)
	unsigned char bDestroyOnLastExit; // 0x6ac (0x1)
	unsigned char bShowDamageNumbers; // 0x6ac (0x1)
	unsigned char bShowDamageNumbersAtImpactLocation; // 0x6ac (0x1)
	unsigned char bPlayDamageAudio; // 0x6ac (0x1)
	unsigned char bShowVehicleHealthBarOnPlayerHUD; // 0x6ac (0x1)
	unsigned char bDestroyBuildingSMActorOnForceExit; // 0x6ac (0x1)
	unsigned char bIgnoreAllFallingDamage; // 0x6ac (0x1)
	unsigned char bIgnoreNextFallingDamage; // 0x6ac (0x1)
	unsigned char bShouldClearFallDamageImmunityForPawnsOnExit; // 0x6ad (0x1)
	unsigned char bIsBraking; // 0x6ad (0x1)
	unsigned char bPlayedDying; // 0x6ad (0x1)
	unsigned char bForceDeath; // 0x6ad (0x1)
	unsigned char bPlayInstantDeathEffects; // 0x6ad (0x1)
	unsigned char bHasDriver; // 0x6ad (0x1)
	unsigned char bHasPassengers; // 0x6ad (0x1)
	unsigned char bCanSleepWhileNotTouchingAnything; // 0x6ad (0x1)
	unsigned char bIsTouchingAnything; // 0x6ae (0x1)
	unsigned char bIsInWater; // 0x6ae (0x1)
	unsigned char bIsInWaterBody; // 0x6ae (0x1)
	unsigned char bIsOverlappingWaterBody; // 0x6ae (0x1)
	unsigned char bIsFullyInWaterBody; // 0x6ae (0x1)
	unsigned char bCanDriveOnIncline; // 0x6ae (0x1)
	unsigned char bCanCoastOnIncline; // 0x6ae (0x1)
	unsigned char bWheelsOnGround; // 0x6ae (0x1)
	unsigned char bAnyWheelsOnGround; // 0x6af (0x1)
	unsigned char bIsTouchingDrivableGround; // 0x6af (0x1)
	unsigned char bIsTouchingGroundWithoutWheels; // 0x6af (0x1)
	unsigned char bPossiblyTouchingTop; // 0x6af (0x1)
	unsigned char unreflected_6b0[0x2]; // 0x6b0 (0x2) 
	unsigned char bUseGravity; // 0x6b2 (0x1)
	unsigned char bAllowInteractBetweenFortVolumes; // 0x6b2 (0x1)
	unsigned char bCanPassengerPawnsTakeDamage; // 0x6b2 (0x1)
	unsigned char bServerIsInUndergroundVolume; // 0x6b3 (0x1)
	unsigned char bEnableCurieMaterial; // 0x6b3 (0x1)
	unsigned char bEnforceTeamRestrictionForMiniGame; // 0x6b3 (0x1)
	unsigned char bEnforceMinigameClassRestriction; // 0x6b3 (0x1)
	unsigned char bUseCustomDepthStencilValue; // 0x6b3 (0x1)
	unsigned char bStencilEnabled; // 0x6b3 (0x1)
	unsigned char bCachedSquadRestrictionEnabled; // 0x6b3 (0x1)
	unsigned char bEnforceTeamRestriction; // 0x6b4 (0x1)
	unsigned char unreflected_6b5[0x3]; // 0x6b5 (0x3) 
	int MinigameClassID; // 0x6b8 (0x4)
	unsigned char unreflected_6bc[0x4]; // 0x6bc (0x4) 
	struct FMulticastInlineDelegate OnPawnEnteredVehicleAtSeat; // 0x6c0 (0x10)
	struct FMulticastInlineDelegate OnPawnEnteredVehicleSeat; // 0x6d0 (0x10)
	struct FMulticastInlineDelegate OnPawnExitedVehicleSeat; // 0x6e0 (0x10)
	struct FMulticastInlineDelegate OnPawnExitedVehicleFromSeat; // 0x6f0 (0x10)
	struct FMulticastInlineDelegate OnPawnFinishEnteringVehicle; // 0x700 (0x10)
	struct FMulticastInlineDelegate OnVehicleHornEvent; // 0x710 (0x10)
	struct FMulticastInlineDelegate OnVehicleOwnerChanged; // 0x720 (0x10)
	unsigned char bWaitingForSleep; // 0x730 (0x1)
	unsigned char bAttemptAsyncOrientationCorrection; // 0x730 (0x1)
	unsigned char bIsAsyncCorrectingOrientation; // 0x730 (0x1)
	unsigned char bAlwaysCreateNavComponent; // 0x731 (0x1)
	unsigned char bAllowInteractBetweenFortVolumesRuntime; // 0x731 (0x1)
	unsigned char bTricksEnabled; // 0x731 (0x1)
	unsigned char unreflected_732[0x6]; // 0x732 (0x6) 
	float FireDamageTickTimer; // 0x738 (0x4)
	float CurrentFOV; // 0x73c (0x4)
	struct FGameplayTagContainer FireEnvDamageTags; // 0x740 (0x20)
	struct FGameplayTagContainer PawnIgnoreBumpTags; // 0x760 (0x20)
	class USlateBrushAsset* DriverReticleBrush; // 0x780 (0x8)
	struct FGameplayTagContainer AppliedVehicleModTags; // 0x788 (0x20)
	class UFortVehicleModCollectedData* CollectedVehicleModData; // 0x7a8 (0x8)
	unsigned char unreflected_7b0[0x4]; // 0x7b0 (0x4) 
	float WaterEffectsVehicleMaxSpeedKmh; // 0x7b4 (0x4)
	class UNiagaraSystem* WaterEffectsAsset; // 0x7b8 (0x8)
	class UNiagaraComponent* WaterEffectsComponent; // 0x7c0 (0x8)
	unsigned char unreflected_7c8[0x8]; // 0x7c8 (0x8) 
	struct FGameplayTagContainer GameplayTags; // 0x7d0 (0x20)
	struct TSet<struct FIgnoredPawn> PawnsToIgnoreForDamge; // 0x7f0 (0x50)
	struct TArray<class AFortPawn*> PawnsToIgnoreForCollision; // 0x840 (0x10)
	struct TArray<class AFortPawn*> IgnoredPawnsPendingTeleport; // 0x850 (0x10)
	float LastPropImpactImpulseTime; // 0x860 (0x4)
	unsigned char unreflected_864[0x4]; // 0x864 (0x4) 
	struct TArray<struct FPredictedDestroyedBuilding> PredictedDestroyedBuildings; // 0x868 (0x10)
	struct TArray<class UBuildingEditModeMetadata*> WallsVehicleCanDestroy; // 0x878 (0x10)
	struct TArray<class UBuildingEditModeMetadata*> WallsVehicleCannotDestroyWhenBoosting; // 0x888 (0x10)
	struct TArray<class UClass*> BuildingPropClassesVehicleCanDestroy; // 0x898 (0x10)
	struct TArray<class UClass*> BuildingPropClassesVehicleCannotDestroyWhenBoosting; // 0x8a8 (0x10)
	struct TArray<struct TScriptInterface<class IVehicleSeatInputHookProvider>> SeatInputProviders; // 0x8b8 (0x10)
	struct FFortAthenaVehicleInputState EmptyDriverInputState; // 0x8c8 (0x40)
	struct FVector AverageSpringNormal; // 0x908 (0x18)
	float TopSpeedCurrentMultiplier; // 0x920 (0x4)
	float PushForceCurrentMultiplier; // 0x924 (0x4)
	struct FVector2D LastStickInput; // 0x928 (0x10)
	unsigned char unreflected_938[0x10]; // 0x938 (0x10) 
	float SteeringAngle; // 0x948 (0x4)
	unsigned char unreflected_94c[0x24]; // 0x94c (0x24) 
	float FrontLateralFrictionRuntimeMultiplier; // 0x970 (0x4)
	float RearLateralFrictionRuntimeMultiplier; // 0x974 (0x4)
	struct FVector LocalRearFrictionPt; // 0x978 (0x18)
	struct FVector LocalFrontFrictionPt; // 0x990 (0x18)
	float FrontMassRatio; // 0x9a8 (0x4)
	float RearMassRatio; // 0x9ac (0x4)
	unsigned char unreflected_9b0[0x20]; // 0x9b0 (0x20) 
	float TotalBrakingDelta; // 0x9d0 (0x4)
	unsigned char unreflected_9d4[0x69]; // 0x9d4 (0x69) 
	struct TEnumAsByte<EPhysicalSurface> PrimarySurfaceType; // 0xa3d (0x1)
	struct TEnumAsByte<EFortBaseWeaponDamage> WeaponResponseType; // 0xa3e (0x1)
	unsigned char VTDMode; // 0xa3f (0x1)
	unsigned char unreflected_a40[0x3]; // 0xa40 (0x3) 
	struct TEnumAsByte<EPhysicalSurface> SurfaceTypeVehicleOn; // 0xa43 (0x1)
	unsigned char unreflected_a44[0x14]; // 0xa44 (0x14) 
	int ForcedMaterialVariantIndex; // 0xa58 (0x4)
	unsigned char unreflected_a5c[0x4]; // 0xa5c (0x4) 
	struct FFortRechargingActionTimer FuelCharge; // 0xa60 (0xd8)
	struct FMulticastInlineDelegate OnRechargeableFuelAboveThreshold; // 0xb38 (0x10)
	struct FMulticastInlineDelegate OnRechargeableFuelBelowThreshold; // 0xb48 (0x10)
	struct FMulticastInlineDelegate OnOutOfRechargeableFuel; // 0xb58 (0x10)
	struct FMulticastInlineDelegate OnNotOutOfRechargeableFuel; // 0xb68 (0x10)
	struct FMulticastInlineDelegate OnMountedWeaponFiredEvent; // 0xb78 (0x10)
	unsigned char unreflected_b88[0x4]; // 0xb88 (0x4) 
	float SeatSwitchCooldown; // 0xb8c (0x4)
	struct FGameplayTagContainer VehicleTags; // 0xb90 (0x20)
	struct TArray<struct FVehicleSpringInfo> Springs; // 0xbb0 (0x10)
	struct FSpringGroundTriangle GroundTriangle; // 0xbc0 (0xc)
	unsigned char unreflected_bcc[0x4]; // 0xbcc (0x4) 
	struct TArray<struct FSMVehicleGear> Gears; // 0xbd0 (0x10)
	struct TArray<struct FSMVehicleGear> SprintGears; // 0xbe0 (0x10)
	struct TArray<struct FSMVehicleGear> ReverseGears; // 0xbf0 (0x10)
	float ForwardDrivingAntiGravityScaler; // 0xc00 (0x4)
	float CameraSpaceForwardDistanceOffset; // 0xc04 (0x4)
	unsigned char unreflected_c08[0x4]; // 0xc08 (0x4) 
	float CameraAssistStrength; // 0xc0c (0x4)
	float CameraAssistRampUp; // 0xc10 (0x4)
	bool bAllowAutoCamera; // 0xc14 (0x1)
	unsigned char unreflected_c15[0x3]; // 0xc15 (0x3) 
	float TimeToAutoCamera; // 0xc18 (0x4)
	float MinSpeedForAutoCamera; // 0xc1c (0x4)
	float CameraAssistBaseHeight; // 0xc20 (0x4)
	float CameraAssistUpHillScaler; // 0xc24 (0x4)
	float CameraAssistSteerScaler; // 0xc28 (0x4)
	float CameraAssistForwardScale; // 0xc2c (0x4)
	float AngleDegreesThresholdFromCurrentCameraToTarget; // 0xc30 (0x4)
	float CameraFOVOffset; // 0xc34 (0x4)
	class UClass* TetheredCamera; // 0xc38 (0x8)
	unsigned char unreflected_c40[0x30]; // 0xc40 (0x30) 
	class UClass* PlayerCollisionGameplayEffect; // 0xc70 (0x8)
	class UPrimitiveComponent* OverlapComponent; // 0xc78 (0x8)
	class UPrimitiveComponent* WaterOverlapComponent; // 0xc80 (0x8)
	unsigned char unreflected_c88[0x4]; // 0xc88 (0x4) 
	float WaterLevel; // 0xc8c (0x4)
	int WaterOverlapCount; // 0xc90 (0x4)
	float VehicleMinHorSpeedToDamage; // 0xc94 (0x4)
	float VehicleMaxHorSpeedToDamage; // 0xc98 (0x4)
	float VehicleMinHorSpeedDamage; // 0xc9c (0x4)
	float VehicleMaxHorSpeedDamage; // 0xca0 (0x4)
	float TargetingZOffset; // 0xca4 (0x4)
	float BrakeAboveTopSpeedDelta; // 0xca8 (0x4)
	float TimeToIdleBrake; // 0xcac (0x4)
	float DragCoefficient; // 0xcb0 (0x4)
	float PrimaryCameraPitchConstraint; // 0xcb4 (0x4)
	float PrimaryCameraYawConstraint; // 0xcb8 (0x4)
	float CachedSpeed; // 0xcbc (0x4)
	struct FName MainBodyCollision; // 0xcc0 (0x4)
	unsigned char unreflected_cc4[0x4]; // 0xcc4 (0x4) 
	struct FVector TestInitialLinearVelocity; // 0xcc8 (0x18)
	struct FVector TestInitialAngularVelocity; // 0xce0 (0x18)
	struct FHitResult LookAheadHit; // 0xcf8 (0xe0)
	class UFortVehicleTrickSet* TrickSet; // 0xdd8 (0x8)
	struct FName PushForceSocket; // 0xde0 (0x4)
	struct FName FrontWheelsSocket; // 0xde4 (0x4)
	struct FName RearWheelSockets; // 0xde8 (0x4)
	unsigned char unreflected_dec[0x4]; // 0xdec (0x4) 
	class UWeaponHitNotifyAudioBank* DefaultHitNotifyAudioBank; // 0xdf0 (0x8)
	struct FMulticastInlineDelegate OnHandleOutOfHealthDelegate; // 0xdf8 (0x10)
	struct FMulticastInlineDelegate OnHealthChanged; // 0xe08 (0x10)
	unsigned char unreflected_e18[0x18]; // 0xe18 (0x18) 
	struct FMulticastInlineDelegate OnDamageablePartHealthChanged; // 0xe30 (0x10)
	struct FName BulletCollisionComponentTag; // 0xe40 (0x4)
	unsigned char unreflected_e44[0x4]; // 0xe44 (0x4) 
	class UClass* GEDamagePassengersOnDeath; // 0xe48 (0x8)
	struct FMulticastInlineDelegate OnVehicleSquadChanged; // 0xe50 (0x10)
	float LifespanAfterDeath; // 0xe60 (0x4)
	float LastDamagedTime; // 0xe64 (0x4)
	struct TArray<struct FSeatTransitionMontage> SeatTransitions; // 0xe68 (0x10)
	unsigned char unreflected_e78[0x30]; // 0xe78 (0x30) 
	struct FMulticastInlineDelegate OnVehicleEnteredWaterBody; // 0xea8 (0x10)
	struct FMulticastInlineDelegate OnVehicleExitedWaterBody; // 0xeb8 (0x10)
	struct FVehicleRuntimeModifiers RuntimeModifiedProperties; // 0xec8 (0x18)
	struct TArray<class ABuildingActor*> LocallyIgnoredBuildingActors; // 0xee0 (0x10)
	struct FVector PreviousBuildingQueryPosition; // 0xef0 (0x18)
	float ImpulseResponseMultiplier; // 0xf08 (0x4)
	float ImpulseResponseZBias; // 0xf0c (0x4)
	unsigned char unreflected_f10[0x28]; // 0xf10 (0x28) 
	struct FTimerHandle* WaterSubmergedTimerHandle; // 0xf38 (0x8)
	unsigned char unreflected_f40[0x20]; // 0xf40 (0x20) 
	class USoundEffectSourcePresetChain* EmoteAudioSourcePresetChain; // 0xf60 (0x8)
	class USoundAttenuation* EmoteAudioAttenuation; // 0xf68 (0x8)
	struct FMarkedActorDisplayInfo MarkerDisplay; // 0xf70 (0x98)
	struct FMulticastInlineDelegate OnSurfaceTypeVehicleIsOnChangedDelegate; // 0x1008 (0x10)
	class UFortAbilitySet* StartupAbilitySet; // 0x1018 (0x8)
	class UFortVehicleSeatComponent* VehicleSeatComponent; // 0x1020 (0x8)
	class UFortVehicleInteractionOverrideComponent* VehicleInteractionOverrideComponent; // 0x1028 (0x8)
	class UFortSkyTubePhysicsComponent* SkyTubePhysicsComponent; // 0x1030 (0x8)
	class UFortVehiclePontoonsComponent* PontoonsComponent; // 0x1038 (0x8)
	class UFortAthenaTrackableAIObjectComponent* TrackableAIObjectComponent; // 0x1040 (0x8)
	struct TArray<struct FAthenaCarPlayerSlot> PlayerSlots; // 0x1048 (0x10)
	struct TArray<struct FAthenaCarPlayerSlot> PlayerSlotsBackup; // 0x1058 (0x10)
	struct TArray<struct FAthenaCarPlayerSlotUnreplicated*> PlayerSlotsUnreplicated; // 0x1068 (0x10)
	class UFortVehicleMovementSet* VehicleMovementSet; // 0x1078 (0x8)
	struct FReplicatedAthenaVehicleAttributes VehicleAttributes; // 0x1080 (0x20)
	class UFortVehiclePhysicsCollisionDamageComponent* CachedVehiclePhysicsCollisionDamageComponent; // 0x10a0 (0x8)
	class UFortVehicleFuelComponent* CachedFuelComponent; // 0x10a8 (0x8)
	struct TArray<struct FText> ReasonsWhyCantContainPlayers; // 0x10b0 (0x10)
	struct TArray<class ABuildingActor*> IgnoredBuildingActors; // 0x10c0 (0x10)
	struct TArray<struct FVehicleDamageablePart> DamageableParts; // 0x10d0 (0x10)
	struct TArray<struct FVehicleToggleablePart*> ToggledParts; // 0x10e0 (0x10)
	unsigned char unreflected_10f0[0x268]; // 0x10f0 (0x268) 
	struct FVehicleTargetOrientation CorrectTargetOrientation; // 0x1358 (0x48)
	class UClass* CameraModeClass; // 0x13a0 (0x8)
	class UClass* DrivingAnimClass; // 0x13a8 (0x8)
	class UClass* DriverAnimLayerOverlayClass; // 0x13b0 (0x8)
	class UClass* PassengerAnimLayerOverlayClass; // 0x13b8 (0x8)
	class UFortVehicleAnimSet* AnimSet; // 0x13c0 (0x8)
	unsigned char unreflected_13c8[0x138]; // 0x13c8 (0x138) 
	struct FFortAttributeInitializationKey* AttributeInitKey; // 0x1500 (0x8)
	class UFortAbilitySystemComponent* AbilitySystemComponent; // 0x1508 (0x8)
	class UFortHealthSet* HealthSet; // 0x1510 (0x8)
	class UFortAthenaImpulseResponseSet* ImpulseResponseSet; // 0x1518 (0x8)
	class UFortDamageSet* DamageSet; // 0x1520 (0x8)
	class UFortHealthBarIndicator* HealthBarIndicator; // 0x1528 (0x8)
	struct FVehicleCosmeticInfo VehicleCosmeticInfo; // 0x1530 (0x38)
	unsigned char unreflected_1568[0x18]; // 0x1568 (0x18) 
	class UFortVehicleNavModifierComponent* NavModifierComponent; // 0x1580 (0x8)
	bool bShouldSleepAtSpawn; // 0x1588 (0x1)
	bool bSpawnedSleepLockActive; // 0x1589 (0x1)
	unsigned char unreflected_158a[0x2]; // 0x158a (0x2) 
	uint32_t ForceKinematicOnClientCount; // 0x158c (0x4)
	class AActor* ImpactInstigator; // 0x1590 (0x8)
	unsigned char unreflected_1598[0x58]; // 0x1598 (0x58) 
	float NormalizedRPM; // 0x15f0 (0x4)
	unsigned char unreflected_15f4[0x4]; // 0x15f4 (0x4) 
	struct TArray<struct FVehicleSpecificUIDetails> CustomUI; // 0x15f8 (0x10)
	struct TArray<struct FActiveVehicleUI> ActiveCustomUI; // 0x1608 (0x10)
	struct TArray<struct FVehicleSpecificUIDetails> MobileCustomUI; // 0x1618 (0x10)
	unsigned char unreflected_1628[0x8]; // 0x1628 (0x8) 
	struct FMulticastInlineDelegate OnModAppliedOnClientDelegate; // 0x1630 (0x10)
	struct FGameplayTag AlwaysDamageVehiclesWithTag; // 0x1640 (0x4)
	unsigned char unreflected_1644[0x4]; // 0x1644 (0x4) 
	struct FTireInfo BaseTireInfo; // 0x1648 (0x1d0)
	class UPrimitiveComponent* CurrentOverlapComponent; // 0x1818 (0x8)
	class UClass* VehicleConfigsClass; // 0x1820 (0x8)
	class UFortPhysicsVehicleConfigs* FortPhysicsVehicleConfigs; // 0x1828 (0x8)
	unsigned char unreflected_1830[0x4]; // 0x1830 (0x4) 
	bool bBoosting; // 0x1834 (0x1)
	unsigned char unreflected_1835[0x3]; // 0x1835 (0x3) 
	float BoostEndTime; // 0x1838 (0x4)
	unsigned char unreflected_183c[0x4]; // 0x183c (0x4) 
	struct FMulticastInlineDelegate OnBoostStartedDelegate; // 0x1840 (0x10)
	struct FMulticastInlineDelegate OnBoostFinishedDelegate; // 0x1850 (0x10)
	class UFortSoundIndicatorComponent* SoundIndicatorComponent; // 0x1860 (0x8)
	bool bShouldDealDamage; // 0x1868 (0x1)
	unsigned char unreflected_1869[0x7]; // 0x1869 (0x7) 
	class UNiagaraComponent* NativeCompLowFuelSputter; // 0x1870 (0x8)
	class UNiagaraSystem* NativeSysLowFuelSputter; // 0x1878 (0x8)
	struct FMulticastInlineDelegate OnOutOfFuelDelegate; // 0x1880 (0x10)
	struct FMulticastInlineDelegate OnGainedFuelDelegate; // 0x1890 (0x10)
	struct FMulticastInlineDelegate OnLowFuelDelegate; // 0x18a0 (0x10)
	int DebugDestroyLogCount; // 0x18b0 (0x4)
	float ServerCriticalHealth; // 0x18b4 (0x4)
	float HealthZeroTime; // 0x18b8 (0x4)
	unsigned char bExploded; // 0x18bc (0x1)
	unsigned char bPendingDeath; // 0x18bc (0x1)
	unsigned char bOnFire; // 0x18bc (0x1)
	unsigned char unreflected_18bd[0x3]; // 0x18bd (0x3) 
	struct FMulticastInlineDelegate OnStartCriticalHealth; // 0x18c0 (0x10)
	struct FMulticastInlineDelegate OnExplode; // 0x18d0 (0x10)
	unsigned char unreflected_18e0[0x18]; // 0x18e0 (0x18) 
	bool bOnRoad; // 0x18f8 (0x1)
	bool bOnLandscape; // 0x18f9 (0x1)
	bool bOnDirt; // 0x18fa (0x1)
	bool bOnGrass; // 0x18fb (0x1)
	bool bOnIce; // 0x18fc (0x1)
	bool bOnSnow; // 0x18fd (0x1)
	bool bOnVehicle; // 0x18fe (0x1)
	unsigned char unreflected_18ff[0x1]; // 0x18ff (0x1) 
	struct TArray<enum ETireSurfaces> TireSurfaces; // 0x1900 (0x10)
	struct FMulticastInlineDelegate OnTirePoppedDelegate; // 0x1910 (0x10)
	float LastPopTireTime; // 0x1920 (0x4)
	unsigned char unreflected_1924[0x4]; // 0x1924 (0x4) 
	struct TArray<enum ETireStates> TireStates; // 0x1928 (0x10)
	float RimScrapeDamageTimer; // 0x1938 (0x4)
	unsigned char padding_193c[0x14]; // 0x193c (0x14)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaVehicle.WheelsOnGround (Underlying native function: WheelsOnGround 0x2f5d83c)
	bool WheelsOnGround(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.WeaponFired (Has no native function)
	void WeaponFired(class UFortVehicleSeatWeaponComponent*& WeaponComponent, float& Overheat); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.WakeUpOnGroundDied (Underlying native function: WakeUpOnGroundDied 0x830b500)
	void WakeUpOnGroundDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Public | HasDefaults)

	// Function /Script/FortniteGame.FortAthenaVehicle.WakeUp (Underlying native function: WakeUp 0x109ebf0)
	void WakeUp(); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.VehicleIsInSkyTube (Underlying native function: VehicleIsInSkyTube 0x830b4d0)
	bool VehicleIsInSkyTube(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.UseOrExitReleasedFromSeat (Underlying native function: UseOrExitReleasedFromSeat 0x830b44c)
	void UseOrExitReleasedFromSeat(int& FromSeatIndex); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaVehicle.UseOrExitPressedFromSeat (Underlying native function: UseOrExitPressedFromSeat 0x830b3c8)
	void UseOrExitPressedFromSeat(int& FromSeatIndex); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaVehicle.UpdateClientWithVehicleTestInput (Underlying native function: UpdateClientWithVehicleTestInput 0x830b2d8)
	void UpdateClientWithVehicleTestInput(struct FVector& LinearVelocity, struct FVector& AngularVelocity); // (0x00000002 | Net | NetReliable | Native | Event | NetMulticast | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetWaterDestructionDelay (Underlying native function: SetWaterDestructionDelay 0x830ac84)
	void SetWaterDestructionDelay(float& NewWaterDestructionDelay); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetVehicleStencilHighlighted (Underlying native function: SetVehicleStencilHighlighted 0x830ab88)
	static bool SetVehicleStencilHighlighted(class AActor*& PotentialVehicle, bool& bHighlighted, int& StencilValueOverride); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetUnoccupiedAutoDestroy (Underlying native function: SetUnoccupiedAutoDestroy 0x830aafc)
	void SetUnoccupiedAutoDestroy(float& UnoccupiedTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetSupportCosmeticWrap (Underlying native function: SetSupportCosmeticWrap 0x830aa78)
	void SetSupportCosmeticWrap(bool& bNewSupportCosmeticWrap); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetStaticPhysics (Underlying native function: SetStaticPhysics 0x830a9f8)
	void SetStaticPhysics(bool& bStatic); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetSpringEnabled (Underlying native function: SetSpringEnabled 0x830a930)
	void SetSpringEnabled(int& SpringIndex, bool& bEnabled); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetShouldSleepAtSpawn (Underlying native function: SetShouldSleepAtSpawn 0x830a8b0)
	void SetShouldSleepAtSpawn(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetShouldDealDamage (Underlying native function: SetShouldDealDamage 0x830a830)
	void SetShouldDealDamage(bool& bNewValue); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetShootingCone (Underlying native function: SetShootingCone 0x830a750)
	void SetShootingCone(int& SeatIdx, struct FAthenaVehicleShootingCone*& InCone); // (0x00000002 | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetPropDestructionParams (Underlying native function: SetPropDestructionParams 0x22999a0)
	void SetPropDestructionParams(struct TArray<class UClass*>& InBuildingPropClassesVehicleCanDestroy, struct TArray<class UClass*>& InBuildingPropClassesVehicleCannotDestroyWhenBoosting, struct TArray<class UBuildingEditModeMetadata*>& InWallsVehicleCanDestroy, struct TArray<class UBuildingEditModeMetadata*>& InWallsVehicleCannotDestroyWhenBoosting); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetOnFire (Underlying native function: SetOnFire 0x830a6d0)
	void SetOnFire(bool& bNewValue); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetNormalizedAudioRPM (Underlying native function: SetNormalizedAudioRPM 0x830a648)
	void SetNormalizedAudioRPM(float& NewValue); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetMinigameTeamID (Underlying native function: SetMinigameTeamID 0x830a5c8)
	void SetMinigameTeamID(unsigned char& NewTeamID); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetMinigameClassID (Underlying native function: SetMinigameClassID 0x830a548)
	void SetMinigameClassID(int& NewClassID); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetImpulseResponseZBias (Underlying native function: SetImpulseResponseZBias 0x830a444)
	void SetImpulseResponseZBias(float& ZBias); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetImpulseResponseMultiplier (Underlying native function: SetImpulseResponseMultiplier 0x830a3bc)
	void SetImpulseResponseMultiplier(float& Multiplier); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetIgnoreNextFallingDamage (Underlying native function: SetIgnoreNextFallingDamage 0x830a334)
	void SetIgnoreNextFallingDamage(bool& bInIgnoreNextFallingDamage); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetIgnoreAllFallingDamage (Underlying native function: SetIgnoreAllFallingDamage 0x830a2ac)
	void SetIgnoreAllFallingDamage(bool& InIgnoreAllFallingDamage); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetHealthPercent (Underlying native function: SetHealthPercent 0x830a220)
	void SetHealthPercent(float& Percent); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetForceInfiniteFuel (Underlying native function: SetForceInfiniteFuel 0x830a19c)
	void SetForceInfiniteFuel(bool& bNewForceInfiniteFuel); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetEnforceTeamRestriction (Underlying native function: SetEnforceTeamRestriction 0x830a11c)
	void SetEnforceTeamRestriction(bool& bNewEnforceTeamRestriction); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetEnforceMinigameClassRestriction (Underlying native function: SetEnforceMinigameClassRestriction 0x830a068)
	void SetEnforceMinigameClassRestriction(bool& bNewEnforceClassRestriction); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetDyingPhysics (Underlying native function: SetDyingPhysics 0x830a050)
	void SetDyingPhysics(); // (0x00000002 | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetCurrentFocusedSocketLocation (Underlying native function: SetCurrentFocusedSocketLocation 0x8309fc8)
	void SetCurrentFocusedSocketLocation(int& SeatIndex); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetAllowInteractionBetweenFortVolumes (Underlying native function: SetAllowInteractionBetweenFortVolumes 0x8309f40)
	void SetAllowInteractionBetweenFortVolumes(bool& bInteractBetweenVolumes); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetActorBase (Underlying native function: SetActorBase 0x8309e74)
	void SetActorBase(class AActor*& InActorBase, int& SeatIndex); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.ServerUsingRiftPortal (Underlying native function: ServerUsingRiftPortal 0x8309df0)
	void ServerUsingRiftPortal(class AActor*& RiftPortal); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortAthenaVehicle.ServerStartFire (Underlying native function: ServerStartFire 0x8309d6c)
	void ServerStartFire(unsigned char& FireModeNum); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortAthenaVehicle.ServerSetIgnoreNextFallingDamage (Underlying native function: ServerSetIgnoreNextFallingDamage 0x8309ce8)
	void ServerSetIgnoreNextFallingDamage(bool& InIgnoreNextFallingDamage); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortAthenaVehicle.ServerSetIgnoreAllFallingDamage (Underlying native function: ServerSetIgnoreAllFallingDamage 0x8309c64)
	void ServerSetIgnoreAllFallingDamage(bool& InIgnoreAllFallingDamage); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortAthenaVehicle.ServerSetDestructionInfo (Underlying native function: ServerSetDestructionInfo 0x8309b04)
	void ServerSetDestructionInfo(float& InSelfDestructTime, float& InMaxTimeZeroHealth, float& InMaxTimeSelfDestructCleanup, float& InMaxTimeExplosion); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.ServerReceiveInputCmd (Underlying native function: ServerReceiveInputCmd 0x8309a2c)
	void ServerReceiveInputCmd(int& ClientFrameNumber, struct TArray<unsigned char>& Data); // (0x00000002 | Net | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortAthenaVehicle.ServerOnAttemptInteract (Underlying native function: ServerOnAttemptInteract 0x8309954)
	bool ServerOnAttemptInteract(struct FInteractionType& InteractType); // (0x00000002 | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaVehicle.SeatIsTurret (Underlying native function: SeatIsTurret 0x8309808)
	bool SeatIsTurret(int& SeatIndex); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.ResetTrick (Underlying native function: ResetTrick 0x83097e8)
	void ResetTrick(); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.ResetHasContact (Underlying native function: ResetHasContact 0x83097d0)
	void ResetHasContact(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaVehicle.RequestReliablePhysicsUpdate (Underlying native function: RequestReliablePhysicsUpdate 0x83097b8)
	void RequestReliablePhysicsUpdate(); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortAthenaVehicle.RepairDamageablePart (Underlying native function: RepairDamageablePart 0x830970c)
	void RepairDamageablePart(struct FName& ShapeName, float& NewHealthPercent); // (Final | BlueprintAuthorityOnly | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.RepairAllDamageableParts (Underlying native function: RepairAllDamageableParts 0x8309684)
	void RepairAllDamageableParts(float& NewHealthPercent); // (0x00000002 | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.RemoveReasonWhyCantContainPlayers (Underlying native function: RemoveReasonWhyCantContainPlayers 0x83095b4)
	bool RemoveReasonWhyCantContainPlayers(struct FText& TextToRemove); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.RemoveObjectToIgnoreForShocks (Underlying native function: RemoveObjectToIgnoreForShocks 0x5c8ae90)
	bool RemoveObjectToIgnoreForShocks(class AActor*& Actor); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.RemoveIgnoredPawnForDamage (Underlying native function: RemoveIgnoredPawnForDamage 0x8309530)
	void RemoveIgnoredPawnForDamage(class AFortPawn*& IgnoredPawn); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.ReleaseVehicleControlledExternalyInternal (Underlying native function: ReleaseVehicleControlledExternalyInternal 0x830951c)
	void ReleaseVehicleControlledExternalyInternal(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaVehicle.RearLateralFrictionHasReachedMax (Underlying native function: RearLateralFrictionHasReachedMax 0x8309504)
	bool RearLateralFrictionHasReachedMax(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.PlayerIsTryingToReverse (Underlying native function: PlayerIsTryingToReverse 0x2454dfc)
	bool PlayerIsTryingToReverse(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.PawnHitByVehicle (Underlying native function: PawnHitByVehicle 0x83092e4)
	void PawnHitByVehicle(class AFortPawn*& Pawn, struct FVector& ImpactPoint, struct FVector& ImpactNormal, struct FVector& LaunchVector); // (0x00000002 | Native | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OverridePontoonRadiusOnServer (Underlying native function: OverridePontoonRadiusOnServer 0x830921c)
	void OverridePontoonRadiusOnServer(int& PontoonIndex, float& NewRadius); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.OverrideCurrentWrap (Underlying native function: OverrideCurrentWrap 0x8309194)
	void OverrideCurrentWrap(class UAthenaItemWrapDefinition*& LoadedWrap); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnWaterTooDeep (Underlying native function: OnWaterTooDeep 0x2444858)
	void OnWaterTooDeep(); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnSurfaceTypeVehicleIsOnChanged (Has no native function)
	void OnSurfaceTypeVehicleIsOnChanged(struct TEnumAsByte<EPhysicalSurface>& SurfaceTypeVehicleIsOn); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnStopTick (Has no native function)
	void OnStopTick(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnStartTick (Has no native function)
	void OnStartTick(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnStartFire (Has no native function)
	void OnStartFire(unsigned char& FireModeNum); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnSleepStateChanged (Has no native function)
	void OnSleepStateChanged(bool& bAwake); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnSignificanceLODChanged (Has no native function)
	void OnSignificanceLODChanged(int& NewLOD); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnSetVehicleFxMaterial (Has no native function)
	void OnSetVehicleFxMaterial(struct FGameplayTag& FxTag, class UMaterialInterface*& FxMaterial); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnSetVehicleFx (Has no native function)
	void OnSetVehicleFx(struct FGameplayTag& FxTag, class UFXSystemAsset*& FxSystem); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnSetSeatCollision (Has no native function)
	void OnSetSeatCollision(int& SeatIndex, bool& bOccupied); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRimScrapeDamage (Has no native function)
	void OnRimScrapeDamage(int& TireIndex); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_VehicleAttributes (Underlying native function: OnRep_VehicleAttributes 0x1a23f04)
	void OnRepVehicleAttributes(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_ToggleableParts (Underlying native function: OnRep_ToggleableParts 0x8309104)
	void OnRepToggleableParts(struct TArray<struct FVehicleToggleablePart*>& PrevToggleableParts); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_Tires (Underlying native function: OnRep_Tires 0x23f4d4c)
	void OnRepTires(struct TArray<enum ETireStates>& PrevTireStates); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_SurfaceTypeVehicleOn (Underlying native function: OnRep_SurfaceTypeVehicleOn 0x2254a4c)
	void OnRepSurfaceTypeVehicleOn(struct TEnumAsByte<EPhysicalSurface>& PreviousSurfaceOn); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_SpawnedSleepLockActive (Underlying native function: OnRep_SpawnedSleepLockActive 0x83090f0)
	void OnRepSpawnedSleepLockActive(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_PendingDeath (Underlying native function: OnRep_PendingDeath 0x83090dc)
	void OnRepPendingDeath(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_OverrideWrap (Underlying native function: OnRep_OverrideWrap 0x83090c0)
	void OnRepOverrideWrap(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_OnFire (Underlying native function: OnRep_OnFire 0x830906c)
	void OnRepOnFire(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_NetPrediction_SP (Underlying native function: OnRep_NetPrediction_SP 0x8308ff8)
	void OnRepNetPredictionSP(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_NetPrediction_AP (Underlying native function: OnRep_NetPrediction_AP 0x8308f98)
	void OnRepNetPredictionAP(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_IgnoredBuildingActors (Underlying native function: OnRep_IgnoredBuildingActors 0x1b4c39c)
	void OnRepIgnoredBuildingActors(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_HealthSet (Underlying native function: OnRep_HealthSet 0x26daa0c)
	void OnRepHealthSet(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_ForceKinematicOnClientCount (Underlying native function: OnRep_ForceKinematicOnClientCount 0x26daa0c)
	void OnRepForceKinematicOnClientCount(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_Exploded (Underlying native function: OnRep_Exploded 0x8308f84)
	void OnRepExploded(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_DamageableParts (Underlying native function: OnRep_DamageableParts 0x15688b4)
	void OnRepDamageableParts(struct TArray<struct FVehicleDamageablePart>& PrevDamageableParts); // (Final | 0x00000002 | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_CorrectTargetOrientation (Underlying native function: OnRep_CorrectTargetOrientation 0x2b78f64)
	void OnRepCorrectTargetOrientation(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_AbilitySystemComponent (Underlying native function: OnRep_AbilitySystemComponent 0x26daa0c)
	void OnRepAbilitySystemComponent(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnPrimitiveComponentWake (Underlying native function: OnPrimitiveComponentWake 0x8308ebc)
	void OnPrimitiveComponentWake(class UPrimitiveComponent*& WakingComponent, struct FName& BoneName); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnPrimitiveComponentSleep (Underlying native function: OnPrimitiveComponentSleep 0xfad558)
	void OnPrimitiveComponentSleep(class UPrimitiveComponent*& WakingComponent, struct FName& BoneName); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnPoppedTire (Underlying native function: OnPoppedTire 0x8308df4)
	void OnPoppedTire(int& TireIndex, bool& bFakeTire); // (0x00000002 | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnPawnExitVehicle (Underlying native function: OnPawnExitVehicle 0x8308d2c)
	void OnPawnExitVehicle(class AFortPlayerPawn*& PlayerPawn, struct FName& ExitSocketName); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnPawnEnterVehicle (Has no native function)
	void OnPawnEnterVehicle(class AFortPlayerPawn*& PlayerPawn, int& SeatIdx); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnModAppliedOnClient (Has no native function)
	void OnModAppliedOnClient(struct FGameplayTag& ModTag); // (0x00000002 | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnIsSprintingChanged (Has no native function)
	void OnIsSprintingChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnImpactDamageApplied (Has no native function)
	void OnImpactDamageApplied(float& Damage, struct FVector& ImpactNormal); // (Event | Public | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnHonk (Has no native function)
	void OnHonk(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnHoldExitStopped (Has no native function)
	void OnHoldExitStopped(class AFortPawn*& ExitingPawn); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnHoldExitStarted (Has no native function)
	void OnHoldExitStarted(class AFortPawn*& ExitingPawn, float& ExitDuration); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnHitBuildingActor (Has no native function)
	void OnHitBuildingActor(struct FHitResult& HitResult, float& ModifiedDamageToApply); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnHealed (Has no native function)
	void OnHealed(float& Heal, struct FGameplayTagContainer& HealTags, struct FGameplayEffectContextHandle& EffectContext, class AController*& EventInstigator, class AActor*& HealCauser); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnGearShiftUp (Has no native function)
	void OnGearShiftUp(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnGearShiftDown (Has no native function)
	void OnGearShiftDown(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnFuelTouchedFire (Has no native function)
	void OnFuelTouchedFire(class AActor*& SourceActor); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnFireStop (Has no native function)
	void OnFireStop(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnFireStart (Has no native function)
	void OnFireStart(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnExitRoad (Has no native function)
	void OnExitRoad(); // (0x00000002 | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnExitOverlap (Underlying native function: OnExitOverlap 0x25fa9dc)
	void OnExitOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnExitLandscape (Has no native function)
	void OnExitLandscape(); // (0x00000002 | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnExitedWaterVolume (Has no native function)
	void OnExitedWaterVolume(struct FVector& WaterSurfacePoint); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnExitedWaterBody (Has no native function)
	void OnExitedWaterBody(class AFortWaterBodyActor*& WaterBody); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnEnterOverlap (Underlying native function: OnEnterOverlap 0x8308998)
	void OnEnterOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnEnterLandscape (Has no native function)
	void OnEnterLandscape(); // (0x00000002 | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnEnteredWaterVolume (Has no native function)
	void OnEnteredWaterVolume(struct FVector& WaterSurfacePoint); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnEnteredWaterBody (Has no native function)
	void OnEnteredWaterBody(class AFortWaterBodyActor*& WaterBody); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnEnteredRoad (Has no native function)
	void OnEnteredRoad(); // (0x00000002 | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnDeathPlayEffects (Has no native function)
	void OnDeathPlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (0x00000002 | BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnDamagePlayEffects (Has no native function)
	void OnDamagePlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnDamaged (Has no native function)
	void OnDamaged(float& Damage, struct FGameplayTagContainer& DamageTags, struct FGameplayEffectContextHandle& EffectContext, class AController*& EventInstigator, class AActor*& DamageCauser); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnCollisionHitEffects (Has no native function)
	void OnCollisionHitEffects(struct FVector& HitLocation, struct FVector& HitNormalImpulse, struct FVector& HitFrictionImpulse, struct FVector& HitNormal, class AActor*& HitActor, struct TEnumAsByte<EPhysicalSurface>& HitSurfaceType); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnCollisionHitDamageEffects (Has no native function)
	void OnCollisionHitDamageEffects(float& DamageTaken); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.MulticastVehicleInputStateUnreliable (Underlying native function: MulticastVehicleInputStateUnreliable 0x1186404)
	void MulticastVehicleInputStateUnreliable(struct FFortAthenaVehicleInputStateUnreliable& InputState, class AFortPlayerPawn*& Pawn); // (0x00000002 | Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortAthenaVehicle.ModifyIncomingDamage (Underlying native function: ModifyIncomingDamage 0x8308738)
	float ModifyIncomingDamage(float& Damage, struct FGameplayTagContainer& InTags, struct FGameplayEffectContextHandle& EffectContext, class AController*& EventInstigator, class AActor*& DamageCauser); // (0x00000002 | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaVehicle.ManageSpeedDamageMutlipliers (Underlying native function: ManageSpeedDamageMutlipliers 0x8308724)
	void ManageSpeedDamageMutlipliers(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaVehicle.K2_ApplyCosmeticWrap (Has no native function)
	void K2ApplyCosmeticWrap(class UAthenaItemWrapDefinition*& LoadedWrap); // (0x00000002 | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsSquadRestricted (Underlying native function: IsSquadRestricted 0x830867c)
	bool IsSquadRestricted(class AFortPlayerPawnAthena*& InteractingPawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsSprinting (Underlying native function: IsSprinting 0x8308654)
	bool IsSprinting(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsSlowEnoughToInteract (Underlying native function: IsSlowEnoughToInteract 0x830862c)
	bool IsSlowEnoughToInteract(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsScrapingSidesOrTop (Underlying native function: IsScrapingSidesOrTop 0x8308604)
	bool IsScrapingSidesOrTop(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsRechargeableFuelBelowThreshold (Underlying native function: IsRechargeableFuelBelowThreshold 0x83085e0)
	bool IsRechargeableFuelBelowThreshold(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsPendingDeath (Underlying native function: IsPendingDeath 0x830855c)
	bool IsPendingDeath(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsOverlappingWaterBody (Underlying native function: IsOverlappingWaterBody 0x8308534)
	bool IsOverlappingWaterBody(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsOutOfRechargeableFuel (Underlying native function: IsOutOfRechargeableFuel 0x8308508)
	bool IsOutOfRechargeableFuel(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsOnFire (Underlying native function: IsOnFire 0x83084ec)
	bool IsOnFire(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsMagnetizedForSkyTubes (Underlying native function: IsMagnetizedForSkyTubes 0x83084a8)
	bool IsMagnetizedForSkyTubes(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsJumping (Underlying native function: IsJumping 0x82e3a4c)
	bool IsJumping(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsInWaterBody (Underlying native function: IsInWaterBody 0x2a3154c)
	bool IsInWaterBody(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsInWater (Underlying native function: IsInWater 0x156aac8)
	bool IsInWater(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsInSkyTube (Underlying native function: IsInSkyTube 0x8308480)
	bool IsInSkyTube(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsInReverseGear (Underlying native function: IsInReverseGear 0x8308458)
	bool IsInReverseGear(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsInAir (Underlying native function: IsInAir 0x8308428)
	bool IsInAir(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsHonking (Underlying native function: IsHonking 0x8308400)
	bool IsHonking(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsEnforcingTeamRestriction (Underlying native function: IsEnforcingTeamRestriction 0x83083e4)
	bool IsEnforcingTeamRestriction(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsEnforcingMinigameClassRestriction (Underlying native function: IsEnforcingMinigameClassRestriction 0x83083c8)
	bool IsEnforcingMinigameClassRestriction(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsDriverSplitScreen (Underlying native function: IsDriverSplitScreen 0x830833c)
	bool IsDriverSplitScreen(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsDriverMinigameTeamRestricted (Underlying native function: IsDriverMinigameTeamRestricted 0x28184d4)
	bool IsDriverMinigameTeamRestricted(class AFortPlayerPawn*& PlayerPawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsCriticalHealth (Underlying native function: IsCriticalHealth 0x83082f8)
	bool IsCriticalHealth(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsCorrectingOrientation (Underlying native function: IsCorrectingOrientation 0x83082d0)
	bool IsCorrectingOrientation(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsCameraControlledRotation (Underlying native function: IsCameraControlledRotation 0x8308278)
	bool IsCameraControlledRotation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsBraking (Underlying native function: IsBraking 0x8308250)
	bool IsBraking(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsAsleep (Underlying native function: IsAsleep 0x2968360)
	bool IsAsleep(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsAirControlling (Underlying native function: IsAirControlling 0x8308208)
	bool IsAirControlling(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.HasExploded (Underlying native function: HasExploded 0x27b90bc)
	bool HasExploded(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.HasEverContainedPlayers (Underlying native function: HasEverContainedPlayers 0x83081d8)
	bool HasEverContainedPlayers(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.HasDriver (Underlying native function: HasDriver 0x287524c)
	bool HasDriver(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.HasConstraints (Underlying native function: HasConstraints 0x83081b4)
	bool HasConstraints(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.HandleOutOfFuel (Underlying native function: HandleOutOfFuel 0x830819c)
	void HandleOutOfFuel(); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortAthenaVehicle.HandleLowFuel (Underlying native function: HandleLowFuel 0x8308148)
	void HandleLowFuel(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaVehicle.HandleFuelChanged (Underlying native function: HandleFuelChanged 0x2205984)
	void HandleFuelChanged(float& NewFuelPercent, float& OldFuelPercent); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaVehicle.GunOverheat (Has no native function)
	void GunOverheat(class UFortVehicleSeatWeaponComponent*& WeaponComponent); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetWaterLevel (Underlying native function: GetWaterLevel 0x8308130)
	float GetWaterLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetVehicleVelocity (Underlying native function: GetVehicleVelocity 0x1349e70)
	struct FVector GetVehicleVelocity(); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetTotalSpeedKmh (Underlying native function: GetTotalSpeedKmh 0x1349e44)
	float GetTotalSpeedKmh(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetTireState (Underlying native function: GetTireState 0x2586458)
	bool GetTireState(int& TireIndex); // (Final | 0x00000002 | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetSteeringAngle (Underlying native function: GetSteeringAngle 0x8308118)
	float GetSteeringAngle(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetStandingFiringOffsetForSeat (Underlying native function: GetStandingFiringOffsetForSeat 0x8308058)
	struct FVector GetStandingFiringOffsetForSeat(int& SeatIdx); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetSpringLengthRatio (Underlying native function: GetSpringLengthRatio 0x8307fc8)
	float GetSpringLengthRatio(int& SpringIdx); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetSignificanceLOD (Underlying native function: GetSignificanceLOD 0x8307fa0)
	int GetSignificanceLOD(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetShootingCone (Underlying native function: GetShootingCone 0x8307d48)
	bool GetShootingCone(int& SeatIdx, struct FTransform& OutConeTM, struct FAthenaVehicleShootingCone*& OutCone); // (0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetSelfDestructDelay (Underlying native function: GetSelfDestructDelay 0x8307d1c)
	float GetSelfDestructDelay(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetSelfDestructCleanupDelay (Underlying native function: GetSelfDestructCleanupDelay 0x8307cf0)
	float GetSelfDestructCleanupDelay(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetSeatSwitchCooldown (Underlying native function: GetSeatSwitchCooldown 0x8307c58)
	float GetSeatSwitchCooldown(int& SeatIndex); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetPreviousLinearVelocity (Underlying native function: GetPreviousLinearVelocity 0x8307c30)
	struct FVector GetPreviousLinearVelocity(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetPreviousLinearAcceleration (Underlying native function: GetPreviousLinearAcceleration 0x8307c08)
	struct FVector GetPreviousLinearAcceleration(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetPontoonRadius (Underlying native function: GetPontoonRadius 0x8307b74)
	float GetPontoonRadius(int& PontoonIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetPawnAtSeat (Underlying native function: GetPawnAtSeat 0x8307ae0)
	class AFortPlayerPawn* GetPawnAtSeat(int& SeatIdx); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetNormalizedAudioRPM (Underlying native function: GetNormalizedAudioRPM 0x8307ab4)
	float GetNormalizedAudioRPM(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetMinigameTeamID (Underlying native function: GetMinigameTeamID 0x83079cc)
	unsigned char GetMinigameTeamID(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetMinigameClassID (Underlying native function: GetMinigameClassID 0x83079b4)
	int GetMinigameClassID(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetMaxZeroHealthTime (Underlying native function: GetMaxZeroHealthTime 0x8307988)
	float GetMaxZeroHealthTime(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetMaxHealth (Underlying native function: GetMaxHealth 0x14613b0)
	float GetMaxHealth(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetIndicatorRelativeOffset (Underlying native function: GetIndicatorRelativeOffset 0x8307944)
	struct FVector GetIndicatorRelativeOffset(); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetHealth (Underlying native function: GetHealth 0x146206c)
	float GetHealth(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetExplosionDelay (Underlying native function: GetExplosionDelay 0x8307918)
	float GetExplosionDelay(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetDriver (Underlying native function: GetDriver 0x83078e8)
	class AFortPlayerPawn* GetDriver(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetDisplayName (Underlying native function: GetDisplayName 0x830786c)
	struct FString GetDisplayName(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetDesiredForwardVelocityDelta (Underlying native function: GetDesiredForwardVelocityDelta 0x8307840)
	float GetDesiredForwardVelocityDelta(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetDesiredForwardVelocity (Underlying native function: GetDesiredForwardVelocity 0x8307814)
	float GetDesiredForwardVelocity(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetDesiredForwardSpeedKmh (Underlying native function: GetDesiredForwardSpeedKmh 0x83077e8)
	float GetDesiredForwardSpeedKmh(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetCurrentRuntimeProperties (Underlying native function: GetCurrentRuntimeProperties 0x8307768)
	struct FVehicleRuntimeModifiers GetCurrentRuntimeProperties(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetCurrentGear (Underlying native function: GetCurrentGear 0x8307748)
	int GetCurrentGear(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetCurrentFOV (Underlying native function: GetCurrentFOV 0x83076f0)
	float GetCurrentFOV(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetCurrentForwardVelocity (Underlying native function: GetCurrentForwardVelocity 0x830771c)
	float GetCurrentForwardVelocity(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetCurrentBrakeForce (Underlying native function: GetCurrentBrakeForce 0x8307654)
	float GetCurrentBrakeForce(float& ForwardSpeedKmh); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetCrouchingFiringOffsetForSeat (Underlying native function: GetCrouchingFiringOffsetForSeat 0x83075ac)
	struct FVector GetCrouchingFiringOffsetForSeat(int& SeatIdx); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetBrakingDelta (Underlying native function: GetBrakingDelta 0x83074ec)
	float GetBrakingDelta(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetAllNonDriverPassengers (Underlying native function: GetAllNonDriverPassengers 0x8307448)
	struct TArray<class AFortPlayerPawn*> GetAllNonDriverPassengers(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetAccelerationAlpha (Underlying native function: GetAccelerationAlpha 0x134ab34)
	float GetAccelerationAlpha(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GameplayCue_Damage (Underlying native function: GameplayCue_Damage 0x230bb98)
	void GameplayCueDamage(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.GamepadUseOrExitReleasedFromSeat (Underlying native function: GamepadUseOrExitReleasedFromSeat 0x83073c4)
	void GamepadUseOrExitReleasedFromSeat(int& FromSeatIndex); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaVehicle.GamepadUseOrExitPressedFromSeat (Underlying native function: GamepadUseOrExitPressedFromSeat 0x8307340)
	void GamepadUseOrExitPressedFromSeat(int& FromSeatIndex); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaVehicle.ForceSeatSinglePawn (Underlying native function: ForceSeatSinglePawn 0x8307278)
	bool ForceSeatSinglePawn(class AFortPlayerPawn*& PawnToSeat, int& SeatIndex); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.ForceSeatPawns (Underlying native function: ForceSeatPawns 0x83071c4)
	void ForceSeatPawns(struct TArray<class AFortPlayerPawn*>& PawnsToSeat); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.FindSeatIndex (Underlying native function: FindSeatIndex 0x830712c)
	int FindSeatIndex(class AFortPlayerPawn*& PlayerPawn); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.EnableVehicleStencil (Underlying native function: EnableVehicleStencil 0x8306f20)
	static void EnableVehicleStencil(class AActor*& PotentialVehicle, bool& bEnable, bool& bHighlighted, int& StencilValueOverride); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.EjectSeat (Underlying native function: EjectSeat 0x8306e8c)
	bool EjectSeat(int& SeatIndex); // (0x00000002 | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.EjectPlayerPawn (Underlying native function: EjectPlayerPawn 0x8306df4)
	bool EjectPlayerPawn(class AFortPlayerPawn*& InPlayerPawn); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.EjectAllPlayers (Underlying native function: EjectAllPlayers 0x8306dd4)
	void EjectAllPlayers(); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.DisableTrickCredit (Underlying native function: DisableTrickCredit 0x8306d48)
	void DisableTrickCredit(float& Duration); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.DestroyVehicle (Underlying native function: DestroyVehicle 0x8306d2c)
	void DestroyVehicle(); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.DestroyAllDamageableParts (Underlying native function: DestroyAllDamageableParts 0x26daa0c)
	void DestroyAllDamageableParts(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.DemagnetizeFromSkyTube (Underlying native function: DemagnetizeFromSkyTube 0xfb0bd0)
	void DemagnetizeFromSkyTube(); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.DebugDrawImpactBucket (Underlying native function: DebugDrawImpactBucket 0x8306c00)
	void DebugDrawImpactBucket(struct FVector& Location, struct FVector& ImpactVector, struct FColor& Color); // (0x00000002 | Net | NetReliable | Native | Event | Protected | HasDefaults | NetClient)

	// Function /Script/FortniteGame.FortAthenaVehicle.ContainsPlayers (Underlying native function: ContainsPlayers 0x8306bd0)
	bool ContainsPlayers(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.ClientTeleportVehicleToLoc (Underlying native function: ClientTeleportVehicleToLoc 0x8306b50)
	void ClientTeleportVehicleToLoc(struct FVector& TeleportLocation); // (0x00000002 | Net | NetReliable | Native | Event | Public | HasDefaults | NetClient)

	// Function /Script/FortniteGame.FortAthenaVehicle.ClientIsDriver (Underlying native function: ClientIsDriver 0x8306b20)
	bool ClientIsDriver(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.ClientBroadcastAbilityImpactAtLocation (Underlying native function: ClientBroadcastAbilityImpactAtLocation 0x830690c)
	void ClientBroadcastAbilityImpactAtLocation(class UObject*& WorldContextObject, class USoundBase*& InSound, class UObject*& InInstigator, struct FVector& Velocity, float& Radius, struct FName& tag, bool& bSubtractLocalNoise); // (0x00000002 | Net | NetReliable | Native | Event | Public | HasDefaults | NetClient)

	// Function /Script/FortniteGame.FortAthenaVehicle.CanTeleport (Underlying native function: CanTeleport 0x83068c8)
	bool CanTeleport(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.CanShootFromSeat (Underlying native function: CanShootFromSeat 0x8306834)
	bool CanShootFromSeat(int& SeatIndex); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.CanForcePawnToSeat (Underlying native function: CanForcePawnToSeat 0x830676c)
	bool CanForcePawnToSeat(class AFortPlayerPawn*& PawnToSeat, int& SeatIndex); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.CanDriveOnIncline (Underlying native function: CanDriveOnIncline 0x8306750)
	bool CanDriveOnIncline(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.CanCorrectOrientation (Underlying native function: CanCorrectOrientation 0x83066bc)
	bool CanCorrectOrientation(class AFortPawn*& FP); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.CanContainPlayers (Underlying native function: CanContainPlayers 0x830668c)
	bool CanContainPlayers(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.CanAntigravityOnIncline (Underlying native function: CanAntigravityOnIncline 0x8306670)
	bool CanAntigravityOnIncline(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.BroadcastResetWaterIdleTimeEmpty (Underlying native function: BroadcastResetWaterIdleTimeEmpty 0x2485ec0)
	void BroadcastResetWaterIdleTimeEmpty(); // (0x00000002 | Net | NetReliable | Native | Event | NetMulticast | Protected)

	// Function /Script/FortniteGame.FortAthenaVehicle.BreakSpawnedSleepLock (Underlying native function: BreakSpawnedSleepLock 0x26daa0c)
	void BreakSpawnedSleepLock(); // (Final | BlueprintAuthorityOnly | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.BP_OnSpringCompression (Has no native function)
	void BPOnSpringCompression(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.BP_OnLowFuel (Has no native function)
	void BPOnLowFuel(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.BP_OnGainedFuel (Has no native function)
	void BPOnGainedFuel(float& NewPercent); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.BP_OnEmptyFuel (Has no native function)
	void BPOnEmptyFuel(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.BP_OnBoostStarted (Has no native function)
	void BPOnBoostStarted(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.BP_OnBoostFinished (Has no native function)
	void BPOnBoostFinished(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.BP_CanInteract (Underlying native function: BP_CanInteract 0x8306350)
	bool BPCanInteract(class AController*& InController); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.BlocksBuilding (Underlying native function: BlocksBuilding 0x83063e4)
	bool BlocksBuilding(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.ApplyMaterialAndUseWrapIfPossible (Underlying native function: ApplyMaterialAndUseWrapIfPossible 0x1b4fa0c)
	class UMaterialInstanceDynamic* ApplyMaterialAndUseWrapIfPossible(class UMaterialInterface*& MaterialToUse, int& SlotIndex, bool& bAlwaysCreateMID); // (0x00000002 | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.AnyWheelsOnGround (Underlying native function: AnyWheelsOnGround 0x8306328)
	bool AnyWheelsOnGround(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.AllowInteractionBetweenFortVolume (Underlying native function: AllowInteractionBetweenFortVolume 0x83062f8)
	bool AllowInteractionBetweenFortVolume(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.AddReasonWhyCantContainPlayers (Underlying native function: AddReasonWhyCantContainPlayers 0x8306238)
	void AddReasonWhyCantContainPlayers(struct FText& TextToAdd); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.AddObjectToIgnoreForShocks (Underlying native function: AddObjectToIgnoreForShocks 0x5c8ad80)
	bool AddObjectToIgnoreForShocks(class AActor*& Actor); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

