// Class /Script/FortniteGame.FortPlayerPawn
// Size: 0x4360
class AFortPlayerPawn : public AFortPawn
{
	unsigned char unreflected_1af0[0x40]; // 0x1af0 (0x40) 
	struct FFortAthenaVehicleInputStateReliable VehicleInputStateReliable; // 0x1b30 (0x2)
	unsigned char bIsNearSafeZoneEdge; // 0x1b32 (0x1)
	unsigned char bPlayingSafeZoneEffects; // 0x1b32 (0x1)
	unsigned char bDoSafeZoneCleanup; // 0x1b32 (0x1)
	unsigned char bIsSwimmingAnimLayerLinked; // 0x1b32 (0x1)
	unsigned char bIsSwimmingAnimLayerPendingRemove; // 0x1b32 (0x1)
	unsigned char bIsSprintJump; // 0x1b32 (0x1)
	unsigned char bHasDisableSprintTag; // 0x1b32 (0x1)
	unsigned char bIsTacticalSprinting; // 0x1b32 (0x1)
	unsigned char bDisableSwimSprintCancel; // 0x1b33 (0x1)
	unsigned char bIsWaterJump; // 0x1b33 (0x1)
	unsigned char bIsWaterSprintBoost; // 0x1b33 (0x1)
	unsigned char bIsWaterSprintBoostPending; // 0x1b33 (0x1)
	unsigned char bPlayingPassengerToPassengerAnimation; // 0x1b33 (0x1)
	unsigned char bPlayingDriverToPassengerAnimation; // 0x1b33 (0x1)
	unsigned char bIsTargeting; // 0x1b34 (0x1)
	unsigned char bIsTargetingConsumableThrow; // 0x1b34 (0x1)
	unsigned char bIsSwappingCharacterParts; // 0x1b34 (0x1)
	unsigned char bBalloonMovementActivated; // 0x1b34 (0x1)
	unsigned char bIsScriptedBot; // 0x1b34 (0x1)
	unsigned char bBuildHotfix; // 0x1b34 (0x1)
	unsigned char unreflected_1b35[0x1]; // 0x1b35 (0x1) 
	struct FLightingChannels FortPlayerPawnLightingChannels; // 0x1b36 (0x1)
	unsigned char unreflected_1b37[0x1]; // 0x1b37 (0x1) 
	enum EFortPawnStasisMode StasisMode; // 0x1b38 (0x1)
	unsigned char unreflected_1b39[0x7]; // 0x1b39 (0x7) 
	struct TArray<enum EFortPawnStasisMode> StasisModes; // 0x1b40 (0x10)
	unsigned char unreflected_1b50[0x1]; // 0x1b50 (0x1) 
	struct TEnumAsByte<EFortBuildingState> BuildingState; // 0x1b51 (0x1)
	int8_t AccelerationZPack; // 0x1b52 (0x1)
	unsigned char unreflected_1b53[0x1d]; // 0x1b53 (0x1d) 
	class UCurveFloat* ParachuteDirectionalSpeedMultiplierCurve; // 0x1b70 (0x8)
	class UCurveFloat* SkydivingDirectionalSpeedMultiplierCurve; // 0x1b78 (0x8)
	class UCurveFloat* BallooningDirectionalSpeedMultiplierCurve; // 0x1b80 (0x8)
	class UCurveFloat* DirectionalSpeedMultiplierCurve; // 0x1b88 (0x8)
	float LastCustomizationTimestamp; // 0x1b90 (0x4)
	float MinimumTimeBetweenSteps; // 0x1b94 (0x4)
	float LastStepTime; // 0x1b98 (0x4)
	unsigned char unreflected_1b9c[0x4]; // 0x1b9c (0x4) 
	struct FMulticastInlineDelegate OnFootstepEvent; // 0x1ba0 (0x10)
	struct FMulticastInlineDelegate OnPawnEnterWater; // 0x1bb0 (0x10)
	struct FMulticastInlineDelegate OnPawnExitWater; // 0x1bc0 (0x10)
	unsigned char unreflected_1bd0[0x18]; // 0x1bd0 (0x18) 
	struct FMulticastInlineDelegate OnPawnExitSwinging; // 0x1be8 (0x10)
	float CurrentPawnSquaredSpeedXY; // 0x1bf8 (0x4)
	unsigned char unreflected_1bfc[0x4]; // 0x1bfc (0x4) 
	struct FRotator CurrentPawnVelXYRot; // 0x1c00 (0x18)
	float CurrentPawnSquaredSpeed; // 0x1c18 (0x4)
	bool bIsInWaterVolume; // 0x1c1c (0x1)
	bool bNotifyBlueprintWhenLandscapeTeleporting; // 0x1c1d (0x1)
	unsigned char unreflected_1c1e[0x6]; // 0x1c1e (0x6) 
	unsigned char CachedTeamControllingRC; // 0x1c24 (0x1)
	unsigned char BalloonActiveCount; // 0x1c25 (0x1)
	unsigned char bParachuteDeployFixedVerticalDistance; // 0x1c26 (0x1)
	bool bIsSkydiving; // 0x1c27 (0x1)
	bool bIsParachuteOpen; // 0x1c28 (0x1)
	unsigned char bLocalIsSkydiving; // 0x1c29 (0x1)
	unsigned char bLocalIsParachuteForcedOpen; // 0x1c29 (0x1)
	unsigned char bIsParachuteForcedOpen; // 0x1c29 (0x1)
	unsigned char bIsSkydivingFromBus; // 0x1c29 (0x1)
	unsigned char bIsSkydivingFromLaunchPad; // 0x1c29 (0x1)
	unsigned char bPendingSkydiveLaunch; // 0x1c29 (0x1)
	unsigned char bIsInSlipperyMovement; // 0x1c29 (0x1)
	unsigned char bReplicatedIsInSlipperyMovement; // 0x1c2a (0x1)
	unsigned char bIsBelowAutoDeployTestHeight; // 0x1c2a (0x1)
	unsigned char bIsProxySimulationTimedOut; // 0x1c2a (0x1)
	unsigned char bIsPedestalHero; // 0x1c2a (0x1)
	unsigned char bInGliderRedeploy; // 0x1c2a (0x1)
	unsigned char bLocalInGliderRedeploy; // 0x1c2a (0x1)
	unsigned char bBeingRepossessed; // 0x1c2a (0x1)
	unsigned char bInitAbilitySystemComponentFromPlayerState; // 0x1c2b (0x1)
	unsigned char bStartedInteractSearch; // 0x1c2b (0x1)
	unsigned char bSignificanceLODDirty; // 0x1c2b (0x1)
	unsigned char bIsUsingJetpack; // 0x1c2b (0x1)
	unsigned char bIsPlayingEmote; // 0x1c2b (0x1)
	unsigned char bShowingOverdriveEffect; // 0x1c2b (0x1)
	unsigned char bIsRespawning; // 0x1c2b (0x1)
	unsigned char bIsRespawningInAir; // 0x1c2b (0x1)
	unsigned char bInitializedPostRepPlayerState; // 0x1c2c (0x1)
	unsigned char bHasWaterParticleSystem; // 0x1c2c (0x1)
	unsigned char bCanShowDefaultSkin; // 0x1c2c (0x1)
	unsigned char bDisabledTetheringSupport; // 0x1c2c (0x1)
	unsigned char bIsInFrontEndHologram; // 0x1c2c (0x1)
	unsigned char unreflected_1c2d[0x4f]; // 0x1c2d (0x4f) 
	struct TWeakObjectPtr<class AActor> HeldObject; // 0x1c7c (0x8)
	unsigned char unreflected_1c84[0x14]; // 0x1c84 (0x14) 
	unsigned char bForceMoveRelativeToCameraRotation; // 0x1c98 (0x1)
	unsigned char bIsWaitingForEmoteInteraction; // 0x1c98 (0x1)
	unsigned char bIsEmoteLeader; // 0x1c98 (0x1)
	unsigned char bShouldSyncAnimationWithEmoteLeader; // 0x1c98 (0x1)
	unsigned char bShouldJitterAnimationSyncWithEmoteLeader; // 0x1c98 (0x1)
	unsigned char bDoubleFileEmoteSecondLine; // 0x1c98 (0x1)
	unsigned char bEmoteUsesSecondaryFire; // 0x1c98 (0x1)
	unsigned char bLockGroupEmoteLeaderRotation; // 0x1c98 (0x1)
	unsigned char unreflected_1c99[0x7]; // 0x1c99 (0x7) 
	int EmoteBandLeaderIndex; // 0x1ca0 (0x4)
	unsigned char unreflected_1ca4[0x4]; // 0x1ca4 (0x4) 
	class AFortPlayerPawn* GroupEmoteLookTarget; // 0x1ca8 (0x8)
	class AFortPlayerPawn* GroupEmoteTailTarget; // 0x1cb0 (0x8)
	struct TArray<class AFortPlayerPawn*> GroupEmoteFollowers; // 0x1cb8 (0x10)
	unsigned char unreflected_1cc8[0x5c]; // 0x1cc8 (0x5c) 
	float GroupEmoteAnimOffset; // 0x1d24 (0x4)
	float GroupEmoteLeaderRotationYawOffset; // 0x1d28 (0x4)
	unsigned char unreflected_1d2c[0x4]; // 0x1d2c (0x4) 
	struct FRotator GroupEmoteLookTargetRotationLeader; // 0x1d30 (0x18)
	unsigned char unreflected_1d48[0x18]; // 0x1d48 (0x18) 
	float GroupEmoteMaximumZDifference; // 0x1d60 (0x4)
	unsigned char unreflected_1d64[0x4]; // 0x1d64 (0x4) 
	struct FMulticastInlineDelegate OnGroupEmoteSyncValueChanged; // 0x1d68 (0x10)
	struct FMulticastInlineDelegate OnGroupEmoteFollowerJoined; // 0x1d78 (0x10)
	struct FMulticastInlineDelegate OnGroupEmoteFollowerLeft; // 0x1d88 (0x10)
	struct FMulticastInlineDelegate OnGroupEmoteSecondaryFirePressed; // 0x1d98 (0x10)
	unsigned char GroupEmoteSyncValue; // 0x1da8 (0x1)
	unsigned char GroupEmoteSoundValue; // 0x1da9 (0x1)
	unsigned char GroupEmoteParticleValue; // 0x1daa (0x1)
	unsigned char unreflected_1dab[0x5]; // 0x1dab (0x5) 
	class UAnimMontage* TransformationMontage; // 0x1db0 (0x8)
	float TransformationMontageStartTime; // 0x1db8 (0x4)
	unsigned char unreflected_1dbc[0x5c]; // 0x1dbc (0x5c) 
	class UAnimMontage* CurrentMontagerLeader; // 0x1e18 (0x8)
	class UAnimMontage* CurrentSyncedMontage; // 0x1e20 (0x8)
	unsigned char bCharacterPartsCastIndirectShadows; // 0x1e28 (0x1)
	unsigned char unreflected_1e29[0x1]; // 0x1e29 (0x1) 
	struct TEnumAsByte<EFortCustomGender> CharacterGender; // 0x1e2a (0x1)
	struct TEnumAsByte<EFortCustomBodyType> CharacterBodyType; // 0x1e2b (0x1)
	unsigned char unreflected_1e2c[0x10]; // 0x1e2c (0x10) 
	float JumpLastActivatedTime; // 0x1e3c (0x4)
	struct FVector PreviousPosition; // 0x1e40 (0x18)
	struct FVector PreviousVelocity; // 0x1e58 (0x18)
	unsigned char unreflected_1e70[0x48]; // 0x1e70 (0x48) 
	uint16_t ReplicatedCustomMeshHeightAdjustTarget; // 0x1eb8 (0x2)
	unsigned char unreflected_1eba[0x2]; // 0x1eba (0x2) 
	float UnburrowLaunchXYSpeed; // 0x1ebc (0x4)
	float UnburrowLaunchZSpeed; // 0x1ec0 (0x4)
	unsigned char unreflected_1ec4[0x8c]; // 0x1ec4 (0x8c) 
	unsigned char bIsInAnyStorm; // 0x1f50 (0x1)
	unsigned char bIsInsideSafeZone; // 0x1f50 (0x1)
	unsigned char unreflected_1f51[0xf]; // 0x1f51 (0xf) 
	class UClass* SafeZoneAppliedGE; // 0x1f60 (0x8)
	unsigned char unreflected_1f68[0x28]; // 0x1f68 (0x28) 
	class UClass* DisableSlideGameplayEffectClass; // 0x1f90 (0x8)
	class UClass* SelfReviveGameplayEffect; // 0x1f98 (0x8)
	class UClass* TeammateReviveGameplayEffect; // 0x1fa0 (0x8)
	struct FScalableFloat SetByCallerReviveHealth; // 0x1fa8 (0x28)
	struct FName DBNOInteractionCollisionProfile; // 0x1fd0 (0x4)
	unsigned char unreflected_1fd4[0x4]; // 0x1fd4 (0x4) 
	struct FVector DBNOInteractionBoxExtent; // 0x1fd8 (0x18)
	float DBNODeferTime; // 0x1ff0 (0x4)
	unsigned char unreflected_1ff4[0x4]; // 0x1ff4 (0x4) 
	class UBoxComponent* DBNOInteractCollisionComponent; // 0x1ff8 (0x8)
	struct FGameplayTag EventReviveTag; // 0x2000 (0x4)
	float AggroRangeOverride; // 0x2004 (0x4)
	float SetByCallerReviveSignalInStorm; // 0x2008 (0x4)
	unsigned char unreflected_200c[0x54]; // 0x200c (0x54) 
	struct TArray<struct FGameplayAbilitySpecHandle> StasisAbilityHandles; // 0x2060 (0x10)
	struct TScriptInterface<class IFortArmoredInterface> ArmoredInterface; // 0x2070 (0x10)
	class UBuildingEditModeMetadata* LastBuildingMetadata; // 0x2080 (0x8)
	unsigned char unreflected_2088[0x18]; // 0x2088 (0x18) 
	float SprintCancelTime; // 0x20a0 (0x4)
	unsigned char unreflected_20a4[0x4]; // 0x20a4 (0x4) 
	float WaterSprintBoostAllowedTimer; // 0x20a8 (0x4)
	unsigned char unreflected_20ac[0x88]; // 0x20ac (0x88) 
	bool bHasStartedFloating; // 0x2134 (0x1)
	unsigned char unreflected_2135[0x3]; // 0x2135 (0x3) 
	struct FZiplinePawnState ZiplineState; // 0x2138 (0x48)
	struct FCurveTableRowHandle ZiplineJumpDampening; // 0x2180 (0x10)
	struct FCurveTableRowHandle ZiplineJumpStrength; // 0x2190 (0x10)
	struct FScalableFloat ZiplineJumpActivateDelay; // 0x21a0 (0x28)
	struct FScalableFloat ZiplineRentryProtectionDelay; // 0x21c8 (0x28)
	float ZiplineSocketZOffset; // 0x21f0 (0x4)
	unsigned char unreflected_21f4[0x4]; // 0x21f4 (0x4) 
	struct FMulticastInlineDelegate ZiplineStateChanged; // 0x21f8 (0x10)
	float ZiplineSpeedFactorTarget; // 0x2208 (0x4)
	float ZiplineSpeedFactor; // 0x220c (0x4)
	unsigned char unreflected_2210[0x8]; // 0x2210 (0x8) 
	struct FScalableFloat EnableSwimSprintDiveCooldown; // 0x2218 (0x28)
	struct FScalableFloat SwimSprintDiveCooldown; // 0x2240 (0x28)
	struct FScalableFloat SwimDiveBoostTimeThreshold; // 0x2268 (0x28)
	float ClientSwimDiveInputTime; // 0x2290 (0x4)
	bool bCanPredictJumpApex; // 0x2294 (0x1)
	unsigned char unreflected_2295[0x33]; // 0x2295 (0x33) 
	class UAnimMontage* UnableToPerformActionMontage; // 0x22c8 (0x8)
	class USoundBase* UnableToPerformActionSound; // 0x22d0 (0x8)
	float MoveSoundStimulusBroadcastInterval; // 0x22d8 (0x4)
	unsigned char unreflected_22dc[0xe0]; // 0x22dc (0xe0) 
	float EmoteStartTime; // 0x23bc (0x4)
	float EmoteRandomNum; // 0x23c0 (0x4)
	unsigned char unreflected_23c4[0x14]; // 0x23c4 (0x14) 
	bool bPlayingPassengerToDriverAnimation; // 0x23d8 (0x1)
	unsigned char unreflected_23d9[0x17]; // 0x23d9 (0x17) 
	float VehicleSpeedAtTimeOfJump; // 0x23f0 (0x4)
	unsigned char unreflected_23f4[0x4]; // 0x23f4 (0x4) 
	class AActor* CurrentVehicle; // 0x23f8 (0x8)
	class AFortPlayerControllerGameplay* InteractingPCRep; // 0x2400 (0x8)
	class AActor* VehicleLastTick; // 0x2408 (0x8)
	unsigned char unreflected_2410[0x18]; // 0x2410 (0x18) 
	struct FMulticastInlineDelegate OnVehicleStateChangedEvent; // 0x2428 (0x10)
	struct FMulticastInlineDelegate OnUIGameplayCue; // 0x2438 (0x10)
	struct FMulticastInlineDelegate OnPetAddedOrRemoved; // 0x2448 (0x10)
	class UFortPawnComponent_Tether* TetherComponent; // 0x2458 (0x8)
	float PendingTetherLaunch; // 0x2460 (0x4)
	unsigned char unreflected_2464[0x4c]; // 0x2464 (0x4c) 
	float TetherJumpLastTime; // 0x24b0 (0x4)
	bool bSupportsTetheredMovement; // 0x24b4 (0x1)
	unsigned char unreflected_24b5[0x3]; // 0x24b5 (0x3) 
	class ABuildingGameplayActor* BalloonRope; // 0x24b8 (0x8)
	struct FMulticastInlineDelegate OnPossessedProp; // 0x24c0 (0x10)
	class ABuildingGameplayActorPlayerPropAttachment* PossessedProp; // 0x24d0 (0x8)
	unsigned char unreflected_24d8[0x30]; // 0x24d8 (0x30) 
	int64_t SlopeCameraOffsetFrameCounter; // 0x2508 (0x8)
	struct FVectorRK4SpringInterpolator* SlopeCameraOffsetInterpolator; // 0x2510 (0x8)
	unsigned char unreflected_2518[0x58]; // 0x2518 (0x58) 
	struct FVector LargeBodyTypeTargetingOffset; // 0x2570 (0x18)
	unsigned char unreflected_2588[0xe8]; // 0x2588 (0xe8) 
	class UInputComponent* VehicleInputComponent; // 0x2670 (0x8)
	unsigned char unreflected_2678[0x8]; // 0x2678 (0x8) 
	class UAnimMontage* BluePrintPlaceAnimation; // 0x2680 (0x8)
	class UAnimMontage* BluePrintEditAnimation; // 0x2688 (0x8)
	unsigned char unreflected_2690[0x8]; // 0x2690 (0x8) 
	struct FMulticastInlineDelegate OnStartedInteractSearch; // 0x2698 (0x10)
	struct FMulticastInlineDelegate OnEndedInteractSearch; // 0x26a8 (0x10)
	struct FMulticastInlineDelegate OnAttemptedInstantInteractSearch; // 0x26b8 (0x10)
	struct FName EmoteInteractionCollisionProfile; // 0x26c8 (0x4)
	unsigned char unreflected_26cc[0x4]; // 0x26cc (0x4) 
	struct FVector EmoteInteractionBoxExtent; // 0x26d0 (0x18)
	class UBoxComponent* EmoteInteractCollisionComponent; // 0x26e8 (0x8)
	struct FMulticastInlineDelegate OnPartChanged; // 0x26f0 (0x10)
	unsigned char unreflected_2700[0x30]; // 0x2700 (0x30) 
	class UMaterialInstanceDynamic* BlueprintPaperMID; // 0x2730 (0x8)
	struct FTimeline BlueprintPaperPulseTimeline; // 0x2738 (0x90)
	class UCustomColorComponent* AccessoryColorSwatchHandler[0x7]; // 0x27c8 (0x8) (ARRAY) 
	class UFortHero* Hero; // 0x2800 (0x8)
	struct TWeakObjectPtr<class UFortHeroType> OvrHeroType; // 0x2808 (0x8)
	enum EFortPawnDisplayContext DisplayContext; // 0x2810 (0x1)
	unsigned char unreflected_2811[0x1f]; // 0x2811 (0x1f) 
	class UCustomPlayerComponent* HACKCustomPRIComponent; // 0x2830 (0x8)
	class UCustomCharacterPart* CharacterParts[0x7]; // 0x2838 (0x8) (ARRAY) 
	class UCustomColorSwatch* CharacterColorSwatches[0x2]; // 0x2870 (0x8) (ARRAY) 
	class UCustomColorSwatch* CharacterPartColorSwatches[0x7]; // 0x2880 (0x8) (ARRAY) 
	class UAthenaCharmItemDefinition* CharacterCharms[0x4]; // 0x28b8 (0x8) (ARRAY) 
	struct TArray<class UCustomCharacterPart*> RequiredVariantParts; // 0x28d8 (0x10)
	unsigned char unreflected_28e8[0x8]; // 0x28e8 (0x8) 
	class USkeletalMeshComponentBudgeted* CharacterPartSkeletalMeshComponents[0x7]; // 0x28f0 (0x8) (ARRAY) 
	struct TArray<class AFortPlayerCharm*> CharacterCharmActors; // 0x2928 (0x10)
	int8_t CharacterPartSMHiddenRefCount[0x7]; // 0x2938 (0x1) (ARRAY) 
	unsigned char unreflected_293f[0x9]; // 0x293f (0x9) 
	struct FFortAthenaLoadout BaseCosmeticLoadout; // 0x2948 (0x178)
	struct FFortAthenaLoadout AppliedCosmeticLoadout; // 0x2ac0 (0x178)
	struct TArray<struct FFortAppliedSwapItemAndVariantData> AppliedSwaps; // 0x2c38 (0x10)
	unsigned char unreflected_2c48[0x50]; // 0x2c48 (0x50) 
	struct FFortAthenaLoadout CosmeticLoadout; // 0x2c98 (0x178)
	uint32_t ServerLoadoutChangeSync; // 0x2e10 (0x4)
	unsigned char unreflected_2e14[0x4]; // 0x2e14 (0x4) 
	bool bAllowClientLoadoutChangeSync; // 0x2e18 (0x1)
	unsigned char unreflected_2e19[0x27]; // 0x2e19 (0x27) 
	struct FMulticastInlineDelegate OnMaterialOverrideApplied; // 0x2e40 (0x10)
	struct FMulticastInlineDelegate OnMaterialOverrideCleared; // 0x2e50 (0x10)
	unsigned char unreflected_2e60[0x8]; // 0x2e60 (0x8) 
	struct TArray<struct FFortPawnMaterialOverride> MaterialOverrides; // 0x2e68 (0x10)
	struct TArray<struct FFortPawnMaterialOverride> LocalMaterialOverrides; // 0x2e78 (0x10)
	unsigned char unreflected_2e88[0x10]; // 0x2e88 (0x10) 
	struct TMap<class USceneComponent*, struct FFortPawnMaterialOverrideState> MaterialOverrideStateMap; // 0x2e98 (0x50)
	class UCustomCharacterPart* PreviousCharacterParts[0x7]; // 0x2ee8 (0x8) (ARRAY) 
	class ACustomCharacterPartModifier* CharacterPartModifiers[0x7]; // 0x2f20 (0x8) (ARRAY) 
	struct FFortCharacterPartsRepMontageInfo RepCharPartAnimMontageInfo; // 0x2f58 (0x20)
	struct FFortClientObservedStatArray ClientObservedStats; // 0x2f78 (0x138)
	class UFortPawnSkeletalMeshContext* SkeletalMeshContext; // 0x30b0 (0x8)
	unsigned char unreflected_30b8[0x18]; // 0x30b8 (0x18) 
	class UClass* AnimBPOverride; // 0x30d0 (0x8)
	class UClass* OriginalAnimBP; // 0x30d8 (0x8)
	class USoundBase* OnCrouchStartSound; // 0x30e0 (0x8)
	class USoundBase* OnCrouchEndSound; // 0x30e8 (0x8)
	class UFortFootstepAudioBank* FootstepBankOverride; // 0x30f0 (0x8)
	class UFortFootstepAudioBank* OriginalFootstepBank; // 0x30f8 (0x8)
	int CachedFootStepIndex; // 0x3100 (0x4)
	unsigned char unreflected_3104[0x4]; // 0x3104 (0x4) 
	class UFortWeaponAnimSet* WeaponAnimSetOverride; // 0x3108 (0x8)
	class UFortAnimAssetLocomotion* LocomotionAnimAssetOverride; // 0x3110 (0x8)
	struct TArray<class UClass*> AnimLayersOverride; // 0x3118 (0x10)
	struct TArray<class UClass*> PreviousAnimLayersOverride; // 0x3128 (0x10)
	struct TArray<class AFortPickup*> QueuedAutoPickups; // 0x3138 (0x10)
	struct TArray<struct FIgnoreCollisionActor> IgnoreActors; // 0x3148 (0x10)
	unsigned char unreflected_3158[0x8]; // 0x3158 (0x8) 
	struct FScalableFloat AutoPickupDropRepickupDelay; // 0x3160 (0x28)
	unsigned char unreflected_3188[0x10]; // 0x3188 (0x10) 
	struct FName CarriedObjectAttachmentSocket; // 0x3198 (0x4)
	float PickupSpeedMultiplier; // 0x319c (0x4)
	struct FSlateBrush MiniMapIconBrush; // 0x31a0 (0xc0)
	struct FSlateBrush AboveBelowMiniMapIconBrush; // 0x3260 (0xc0)
	struct FSlateBrush FarOffMiniMapIconBrush; // 0x3320 (0xc0)
	struct FSlateBrush DBNOMiniMapIconBrush; // 0x33e0 (0xc0)
	struct FLinearColor MinimapIconColorSelf; // 0x34a0 (0x10)
	struct FLinearColor MinimapIconColorTeammate; // 0x34b0 (0x10)
	struct FLinearColor MinimapIconColorEnemy; // 0x34c0 (0x10)
	float MaxIndicatorVisibilityDistForEnemies; // 0x34d0 (0x4)
	float MaxIndicatorVisibilityDistForAllies; // 0x34d4 (0x4)
	unsigned char unreflected_34d8[0x80]; // 0x34d8 (0x80) 
	struct FFortDBNOCarryHoisterData DBNOHoisterData; // 0x3558 (0x10)
	class AFortPlayerPawn* DBNOHoistee; // 0x3568 (0x8)
	class UFortWeaponAnimSet* DBNOHoisterAnimSet; // 0x3570 (0x8)
	float ThrowCarriedPlayerStrengthXY; // 0x3578 (0x4)
	float ThrowCarriedPlayerStrengthZ; // 0x357c (0x4)
	float DropCarriedPlayerForwardOffset; // 0x3580 (0x4)
	float DropCarriedPlayerHeightOffset; // 0x3584 (0x4)
	float DropCarriedPlayerTraceHeight; // 0x3588 (0x4)
	bool bAllowDBNOCarry; // 0x358c (0x1)
	bool bAllowDBNOCarryEnemies; // 0x358d (0x1)
	bool bIsBeingDBNOCarried; // 0x358e (0x1)
	bool bIsDBNOCarrying; // 0x358f (0x1)
	bool bRequestedThrowCarriedPlayer; // 0x3590 (0x1)
	unsigned char unreflected_3591[0xf]; // 0x3591 (0xf) 
	struct FMulticastInlineDelegate OnDBNOHoisterChangedDelegate; // 0x35a0 (0x10)
	struct FMulticastInlineDelegate OnRevivedFromDBNODelegate; // 0x35b0 (0x10)
	struct FMulticastInlineDelegate OnNewPlayerState; // 0x35c0 (0x10)
	struct FMulticastInlineDelegate OnAbilitySystemComponentInitialized; // 0x35d0 (0x10)
	struct FMulticastInlineDelegate OnPreInvalidateAbilitySystemComponent; // 0x35e0 (0x10)
	unsigned char unreflected_35f0[0x60]; // 0x35f0 (0x60) 
	struct FMulticastInlineDelegate OnFinishedCharacterCustomization; // 0x3650 (0x10)
	struct FMulticastInlineDelegate OnCrouchInputJustPressed; // 0x3660 (0x10)
	class UFortCustomizationAssetLoader* CustomizationAssetLoader; // 0x3670 (0x8)
	unsigned char unreflected_3678[0x110]; // 0x3678 (0x110) 
	bool bEnableUpdateCharacterCustomizationPostLoad; // 0x3788 (0x1)
	bool bHasCharacterCustomizationPostLoadedOnce; // 0x3789 (0x1)
	bool bHiddenAtStartup; // 0x378a (0x1)
	unsigned char unreflected_378b[0xd]; // 0x378b (0xd) 
	class UParticleSystem* SpawnParticles; // 0x3798 (0x8)
	class USoundBase* SpawnSound; // 0x37a0 (0x8)
	unsigned char unreflected_37a8[0x4]; // 0x37a8 (0x4) 
	unsigned char bIsLocalPlayer; // 0x37ac (0x1)
	unsigned char bDamagedEnemy; // 0x37ac (0x1)
	unsigned char unreflected_37ad[0x1b]; // 0x37ad (0x1b) 
	struct FMulticastInlineDelegate OnDamageComboIncrement; // 0x37c8 (0x10)
	struct FMulticastInlineDelegate OnDamageComboReset; // 0x37d8 (0x10)
	unsigned char unreflected_37e8[0x8]; // 0x37e8 (0x8) 
	uint32_t PlayerStatus; // 0x37f0 (0x4)
	uint16_t AccelerationPack; // 0x37f4 (0x2)
	unsigned char unreflected_37f6[0x2]; // 0x37f6 (0x2) 
	struct FGameplayAbilityRepAnimMontage RepAnimMontageInfo; // 0x37f8 (0x38)
	int RepAnimMontageStartSection; // 0x3830 (0x4)
	unsigned char bNetMovementPrioritized; // 0x3834 (0x1)
	unsigned char unreflected_3835[0x3]; // 0x3835 (0x3) 
	struct FReplicatedMontagePair LandingMontagePair; // 0x3838 (0x20)
	struct FPreviouslyAppliedVariantData PriorVariantData; // 0x3858 (0x88)
	struct TArray<class UFortWorldItemDefinition*> TempWeaponsStack; // 0x38e0 (0x10)
	struct TArray<class UFortAnimNotifyState_RootMotionInterrupt*> RootMotionInterruptNotifyStack; // 0x38f0 (0x10)
	struct TArray<class UAnimMontage*> RootMotionInterruptMontageStack; // 0x3900 (0x10)
	unsigned char unreflected_3910[0x38]; // 0x3910 (0x38) 
	class UFortVisibilityComponent* VisibilityComponent; // 0x3948 (0x8)
	class UPostProcessComponent* BlendablesPostProcessComp; // 0x3950 (0x8)
	unsigned char unreflected_3958[0x4]; // 0x3958 (0x4) 
	unsigned char bUseControllerRotationYawToRestore; // 0x395c (0x1)
	unsigned char unreflected_395d[0x3]; // 0x395d (0x3) 
	struct FMulticastInlineDelegate OnBeginSkydivingEvent; // 0x3960 (0x10)
	struct FMulticastInlineDelegate OnEndSkydivingEvent; // 0x3970 (0x10)
	struct FMulticastInlineDelegate OnBeginParachuteMovementEvent; // 0x3980 (0x10)
	struct FMulticastInlineDelegate OnParachuteSpawned; // 0x3990 (0x10)
	struct FMulticastInlineDelegate OnEndParachuteMovementEvent; // 0x39a0 (0x10)
	struct FMulticastInlineDelegate OnBallooningGravityCeilingChanged; // 0x39b0 (0x10)
	struct FMulticastInlineDelegate OnEnteredAircraft; // 0x39c0 (0x10)
	struct FMulticastInlineDelegate OnStopSliding; // 0x39d0 (0x10)
	struct FMulticastInlineDelegate OnPawnPossessed; // 0x39e0 (0x10)
	struct FMulticastInlineDelegate OnPawnUnpossessed; // 0x39f0 (0x10)
	struct FMulticastInlineDelegate OnEmoteInteracted; // 0x3a00 (0x10)
	struct FMulticastInlineDelegate OnSafeZoneOccupancyChangedEvent; // 0x3a10 (0x10)
	struct FMulticastInlineDelegate OnHeldObjectPickedUp; // 0x3a20 (0x10)
	struct FMulticastInlineDelegate OnHeldObjectDropped; // 0x3a30 (0x10)
	struct TMap<struct TEnumAsByte<EFortCustomMovement>, class UTexture*> CustomMovementIndicators; // 0x3a40 (0x50)
	unsigned char unreflected_3a90[0x10]; // 0x3a90 (0x10) 
	class USoundBase* CurrentGliderOpenSound; // 0x3aa0 (0x8)
	struct TWeakObjectPtr<class UAudioComponent> CurrentGliderOpenAudioComponent; // 0x3aa8 (0x8)
	class USoundBase* CurrentGliderCloseSound; // 0x3ab0 (0x8)
	struct TWeakObjectPtr<class UAudioComponent> CurrentGliderCloseAudioComponent; // 0x3ab8 (0x8)
	unsigned char unreflected_3ac0[0xc]; // 0x3ac0 (0xc) 
	bool bParachuteLockedOpen; // 0x3acc (0x1)
	bool bLocalParachuteLockedOpen; // 0x3acd (0x1)
	unsigned char unreflected_3ace[0x2]; // 0x3ace (0x2) 
	struct FRepFortMeshAttachment AttachmentMesh; // 0x3ad0 (0x10)
	class USkeletalMeshComponentBudgeted* AttachmentMeshComponent; // 0x3ae0 (0x8)
	class UFortPawnScriptedBehavior* BotScriptedBehavior; // 0x3ae8 (0x8)
	unsigned char unreflected_3af0[0x18]; // 0x3af0 (0x18) 
	struct TArray<class AFortWaterBodyActor*> IgnoredWaterBodies; // 0x3b08 (0x10)
	class UFortUnderwaterDamageComponent* UnderwaterDamageComponent; // 0x3b18 (0x8)
	struct FSlipperySlopeParams SlipperySlopeParams; // 0x3b20 (0x230)
	class UAthenaGliderItemDefinition* GliderClass; // 0x3d50 (0x8)
	unsigned char unreflected_3d58[0x10]; // 0x3d58 (0x10) 
	class AFortPlayerPetRepState* PetState; // 0x3d68 (0x8)
	class AFortPlayerPet* CosmeticPetInstance; // 0x3d70 (0x8)
	unsigned char unreflected_3d78[0x10]; // 0x3d78 (0x10) 
	class UFortGliderSpawnComponent* GliderSpawnComponent; // 0x3d88 (0x8)
	class AFortPlayerParachute* ParachuteAttachment; // 0x3d90 (0x8)
	unsigned char unreflected_3d98[0x8]; // 0x3d98 (0x8) 
	struct TArray<class UAthenaGliderItemDefinition*> GliderOverrideStack; // 0x3da0 (0x10)
	unsigned char unreflected_3db0[0x10]; // 0x3db0 (0x10) 
	bool bResetGliderOverrideOnLanding; // 0x3dc0 (0x1)
	unsigned char unreflected_3dc1[0x7]; // 0x3dc1 (0x7) 
	struct FScalableFloat ParachuteDeployTraceForGroundDistance; // 0x3dc8 (0x28)
	struct FScalableFloat LaunchPadParachuteDeployTraceForGroundDistance; // 0x3df0 (0x28)
	struct FScalableFloat LaunchPadParachuteDeployTraceForDownwardSpeed; // 0x3e18 (0x28)
	struct FScalableFloat ParachuteDeployVelocityBlend; // 0x3e40 (0x28)
	float ParachuteCooldownToOpen; // 0x3e68 (0x4)
	float ParachuteCooldownToClose; // 0x3e6c (0x4)
	struct FScalableFloat GliderRedeployAllowedRow; // 0x3e70 (0x28)
	struct FScalableFloat GliderRedeployLateralVelocityMultiplierRow; // 0x3e98 (0x28)
	struct FScalableFloat GliderRedeployHeighLimitRow; // 0x3ec0 (0x28)
	struct FScalableFloat BalloonFallDamageThresholdVelocityZ; // 0x3ee8 (0x28)
	class UClass* PreDrivingAnimBP; // 0x3f10 (0x8)
	class UClass* CurrentVehicleAnimLayerOverlayClass; // 0x3f18 (0x8)
	class UClass* CurrentSwimmingAnimLayerOverlayClass; // 0x3f20 (0x8)
	class UClass* DefaultSwimmingAnimLayerOverlayClass; // 0x3f28 (0x8)
	unsigned char unreflected_3f30[0x8]; // 0x3f30 (0x8) 
	float TimeBeforeSwimmingLayerDeactivated; // 0x3f38 (0x4)
	unsigned char unreflected_3f3c[0x4]; // 0x3f3c (0x4) 
	class UFortLinkedAnimGraphComponent* LinkedAnimGraphComponent; // 0x3f40 (0x8)
	class UFortPlayerAnimationComponent* AnimationComponent; // 0x3f48 (0x8)
	class UAudioComponent* ParachuteAudioLoop; // 0x3f50 (0x8)
	float ParachuteAndSkydiveAudioFadeInTime; // 0x3f58 (0x4)
	float ParachuteAndSkydiveAudioFadeOutTime; // 0x3f5c (0x4)
	class UAudioComponent* SkydiveAudioLoop; // 0x3f60 (0x8)
	class USoundBase* SoundOnParachuteForcedOpen; // 0x3f68 (0x8)
	class USoundBase* SkydivingLoop1P; // 0x3f70 (0x8)
	class USoundBase* SkydivingLoop1PMetaSound; // 0x3f78 (0x8)
	class USoundBase* SkydivingLoop3P; // 0x3f80 (0x8)
	class USoundBase* ParachuteOpenLoop1P; // 0x3f88 (0x8)
	class USoundBase* ParachuteOpenLoop1PMetaSound; // 0x3f90 (0x8)
	class USoundBase* ParachuteOpenLoop3P; // 0x3f98 (0x8)
	class UAudioComponent* SwimmingAudioLoop; // 0x3fa0 (0x8)
	float SwimmingAudioFadeOutTime; // 0x3fa8 (0x4)
	float SwimmingAudioInterpSpeed; // 0x3fac (0x4)
	class USoundBase* SoundOnSwimmingLoop; // 0x3fb0 (0x8)
	unsigned char unreflected_3fb8[0x50]; // 0x3fb8 (0x50) 
	uint32_t RemoteViewData32; // 0x4008 (0x4)
	unsigned char unreflected_400c[0x14]; // 0x400c (0x14) 
	float LastQuickBarSwitchRequestTime; // 0x4020 (0x4)
	float CrouchStartTime; // 0x4024 (0x4)
	float CrouchEndTime; // 0x4028 (0x4)
	float CrouchLerpTime; // 0x402c (0x4)
	float MeleeAbilityCooldown; // 0x4030 (0x4)
	bool bDisallowInterrogation; // 0x4034 (0x1)
	bool bDisallowInterrogationOnNPC; // 0x4035 (0x1)
	bool bDisallowInterrogationCreative; // 0x4036 (0x1)
	unsigned char bHideBodyOnDeathRequested; // 0x4037 (0x1)
	struct TWeakObjectPtr<class AFortRemoteControlledPawnAthena> ControlledRCPawn; // 0x4038 (0x8)
	struct FRotator StoredControlRotation; // 0x4040 (0x18)
	unsigned char unreflected_4058[0x4]; // 0x4058 (0x4) 
	enum EFortFacialAnimTypes FacialTypeOverride; // 0x405c (0x1)
	unsigned char unreflected_405d[0x3]; // 0x405d (0x3) 
	float GhostModeExitStartTime; // 0x4060 (0x4)
	float GhostModeExitDuration; // 0x4064 (0x4)
	unsigned char unreflected_4068[0x138]; // 0x4068 (0x138) 
	struct TMap<struct FName, struct FFortPlayerPawnObjectReference> CachedReferencesByName; // 0x41a0 (0x50)
	bool bFXPlayDustOnMovement; // 0x41f0 (0x1)
	unsigned char unreflected_41f1[0x7]; // 0x41f1 (0x7) 
	class UParticleSystemComponent* PSCPlayerInWater; // 0x41f8 (0x8)
	class UParticleSystemComponent* PSCPlayerInWaterSurfaceSwimming; // 0x4200 (0x8)
	class UNiagaraSystem* NiagaraPlayerInWaterBasicAsset; // 0x4208 (0x8)
	class UNiagaraSystem* NiagaraPlayerInWaterSwimmingAsset; // 0x4210 (0x8)
	class UNiagaraSystem* NiagaraPlayerWaterHandSplashAsset; // 0x4218 (0x8)
	class UNiagaraSystem* NiagaraPlayerWaterFootSplashAsset; // 0x4220 (0x8)
	class UNiagaraSystem* NiagaraPlayerWaterLargePlayerSplashAsset; // 0x4228 (0x8)
	class UNiagaraSystem* NiagaraPlayerWaterBoostAsset; // 0x4230 (0x8)
	struct FName FootSplashLeftSocketName; // 0x4238 (0x4)
	struct FName FootSplashRightSocketName; // 0x423c (0x4)
	class UFXSystemComponent* NiagaraPlayerStandingInWater; // 0x4240 (0x8)
	class UFXSystemComponent* NiagaraPlayerSwimmingInWater; // 0x4248 (0x8)
	class UFXSystemComponent* NiagaraPlayerHandSplashInWater; // 0x4250 (0x8)
	class UFXSystemComponent* NiagaraPlayerFootSplashInWaterLeft; // 0x4258 (0x8)
	class UFXSystemComponent* NiagaraPlayerFootSplashInWaterRight; // 0x4260 (0x8)
	class UFXSystemComponent* NiagaraPlayerJumpSplashInWater; // 0x4268 (0x8)
	class UFXSystemComponent* NiagaraPlayerWaterBoost; // 0x4270 (0x8)
	unsigned char bWaterFootSplashActive; // 0x4278 (0x1)
	unsigned char bEnableWaterInteractionEffects; // 0x4278 (0x1)
	unsigned char unreflected_4279[0x7]; // 0x4279 (0x7) 
	class UAudioComponent* SlidingAudioComp; // 0x4280 (0x8)
	class USoundBase* SlidingIntensitySound3P; // 0x4288 (0x8)
	class USoundBase* SlidingIntensitySound1P; // 0x4290 (0x8)
	float SlideAudioIntensity; // 0x4298 (0x4)
	unsigned char unreflected_429c[0x4]; // 0x429c (0x4) 
	class UParticleSystemComponent* PSCPlayerSlideLand; // 0x42a0 (0x8)
	struct FMulticastInlineDelegate OnActivateAbility; // 0x42a8 (0x10)
	struct FMulticastInlineDelegate OnFiringRangedWeapon; // 0x42b8 (0x10)
	struct FScalableFloat ConsecutiveWeakSpotResourceBonus; // 0x42c8 (0x28)
	struct FScalableFloat LastHitWeakSpotResourceBonus; // 0x42f0 (0x28)
	unsigned char unreflected_4318[0x8]; // 0x4318 (0x8) 
	class UWidget* CustomInteractionWidget; // 0x4320 (0x8)
	unsigned char unreflected_4328[0x18]; // 0x4328 (0x18) 
	class UFortPawnComponent_Convert* ConvertComponent; // 0x4340 (0x8)
	class UFortActorComponent_Affiliation* AffiliationComponent; // 0x4348 (0x8)
	unsigned char unreflected_4350[0x1]; // 0x4350 (0x1) 
	unsigned char bUseViewRotationForCameraOrigin; // 0x4351 (0x1)
	unsigned char bCanUseDefaultPartsOnLateLoad; // 0x4351 (0x1)
	unsigned char padding_4352[0xe]; // 0x4352 (0xe)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerPawn.WhenCosmeticSpecificPartAppliedWithAnyStruct (Underlying native function: WhenCosmeticSpecificPartAppliedWithAnyStruct 0x5e4a5e0)
	void WhenCosmeticSpecificPartAppliedWithAnyStruct(struct FDelegate& Delegate, bool& SkipNullMesh, struct TEnumAsByte<EFortCustomPartType>& PartType, struct FDelegateHandleController& DelegateHandleControllerOut, struct FInstancedStruct& AnyStruct); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.WhenCosmeticSpecificPartApplied (Underlying native function: WhenCosmeticSpecificPartApplied 0x11127b0)
	void WhenCosmeticSpecificPartApplied(struct FDelegate& Delegate, bool& SkipNullMesh, struct TEnumAsByte<EFortCustomPartType>& PartType, struct FDelegateHandleController& DelegateHandleControllerOut); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.WhenCosmeticsAppliedWithAnyStruct (Underlying native function: WhenCosmeticsAppliedWithAnyStruct 0x5e4a820)
	void WhenCosmeticsAppliedWithAnyStruct(struct FDelegate& Delegate, struct FDelegateHandleController& DelegateHandleControllerOut, struct FInstancedStruct& AnyStruct); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.WhenCosmeticsApplied (Underlying native function: WhenCosmeticsApplied 0x8d24780)
	void WhenCosmeticsApplied(struct FDelegate& Delegate, struct FDelegateHandleController& DelegateHandleControllerOut); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.WhenCosmeticPartAppliedWithAnyStruct (Underlying native function: WhenCosmeticPartAppliedWithAnyStruct 0x5e4a3e0)
	void WhenCosmeticPartAppliedWithAnyStruct(struct FDelegate& Delegate, bool& SkipNullMesh, struct FDelegateHandleController& DelegateHandleControllerOut, struct FInstancedStruct& AnyStruct); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.WhenCosmeticPartApplied (Underlying native function: WhenCosmeticPartApplied 0x24c1100)
	void WhenCosmeticPartApplied(struct FDelegate& Delegate, bool& SkipNullMesh, struct FDelegateHandleController& DelegateHandleControllerOut); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.WhenCosmeticMeshAppliedWithAnyStruct (Underlying native function: WhenCosmeticMeshAppliedWithAnyStruct 0x5e4a230)
	void WhenCosmeticMeshAppliedWithAnyStruct(struct FDelegate& Delegate, struct FDelegateHandleController& DelegateHandleControllerOut, struct FInstancedStruct& AnyStruct); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.WhenCosmeticMeshApplied (Underlying native function: WhenCosmeticMeshApplied 0x8d24664)
	void WhenCosmeticMeshApplied(struct FDelegate& Delegate, struct FDelegateHandleController& DelegateHandleControllerOut); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.VerifySkydivingMatchesServer (Underlying native function: VerifySkydivingMatchesServer 0x8d24650)
	void VerifySkydivingMatchesServer(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.UpdatePreviousPositionAndVelocity (Underlying native function: UpdatePreviousPositionAndVelocity 0x24d7454)
	void UpdatePreviousPositionAndVelocity(float& DeltaSeconds, struct FVector& OldLocation, struct FVector& OldVelocity); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.UpdateGameStateModifiedGravity (Underlying native function: UpdateGameStateModifiedGravity 0x71a7128)
	void UpdateGameStateModifiedGravity(float& GravityMultiplier); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.UpdateAimbotDetectionStatus (Underlying native function: UpdateAimbotDetectionStatus 0x8d2463c)
	void UpdateAimbotDetectionStatus(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.UnequipCurrentWeaponById (Underlying native function: UnequipCurrentWeaponById 0x8d24564)
	void UnequipCurrentWeaponById(struct FGuid& WeaponItemGuid, bool& bSetWeaponAttachment); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.UnableToPerformAction (Underlying native function: UnableToPerformAction 0x8d24460)
	void UnableToPerformAction(bool& bPlayMontage, struct FGameplayTagContainer& FailedReason); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.ToggleGender (Underlying native function: ToggleGender 0x26daa0c)
	void ToggleGender(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.ToggleCrouch (Underlying native function: ToggleCrouch 0x8d243e0)
	void ToggleCrouch(bool& bAttemptToSlide); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.ToggleBodyType (Underlying native function: ToggleBodyType 0x26daa0c)
	void ToggleBodyType(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.TemporarilyIgnoreClientMovementErrorChecksAndCorrection (Underlying native function: TemporarilyIgnoreClientMovementErrorChecksAndCorrection 0x8d2435c)
	void TemporarilyIgnoreClientMovementErrorChecksAndCorrection(float& Duration); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SwitchToPreviousPart (Underlying native function: SwitchToPreviousPart 0x8d241f0)
	void SwitchToPreviousPart(struct FString& PartName); // (Final | Exec | Native | Private)

	// Function /Script/FortniteGame.FortPlayerPawn.SwitchToNextPart (Underlying native function: SwitchToNextPart 0x8d241f0)
	void SwitchToNextPart(struct FString& PartName); // (Final | Exec | Native | Private)

	// Function /Script/FortniteGame.FortPlayerPawn.SwapPawnCosmeticItemAndVariant (Underlying native function: SwapPawnCosmeticItemAndVariant 0x8d2406c)
	void SwapPawnCosmeticItemAndVariant(struct FGuid& SwapId, struct TArray<struct FFortSwapItemAndVariantData>& SwapData, bool& bAllowActiveHotswap, enum EFortAppliedSwapItemAndVariantState& ForcedSwapState); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SupportsTetheredMovement (Underlying native function: SupportsTetheredMovement 0x8d24054)
	bool SupportsTetheredMovement(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPlayerPawn.StopItemInteractionAbility (Underlying native function: StopItemInteractionAbility 0x8d23fd0)
	void StopItemInteractionAbility(enum EItemInteractionStatus& ItemInteractionStatus); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.StopFacialAnimationStream (Underlying native function: StopFacialAnimationStream 0x26daa0c)
	void StopFacialAnimationStream(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.StopCarryingPlayer (Underlying native function: StopCarryingPlayer 0x8d23f50)
	void StopCarryingPlayer(bool& bFromAbilityCancel); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.StartGhostModeExit (Underlying native function: StartGhostModeExit 0x8d23e94)
	void StartGhostModeExit(float& InGhostModeExitDuration); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.StartFloating (Underlying native function: StartFloating 0x8d23e30)
	void StartFloating(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.StartedInteractSearch (Underlying native function: StartedInteractSearch 0x8d23f34)
	void StartedInteractSearch(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SpawnNiagaraWaterComponents (Underlying native function: SpawnNiagaraWaterComponents 0x8d23db0)
	void SpawnNiagaraWaterComponents(bool& bRegister); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.ShowTestingPredictiveInput (Underlying native function: ShowTestingPredictiveInput 0x8d23d9c)
	void ShowTestingPredictiveInput(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.ShouldPlayDeathAnimation (Underlying native function: ShouldPlayDeathAnimation 0x8d23d78)
	bool ShouldPlayDeathAnimation(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPlayerPawn.ShouldDriverHaveReticle (Underlying native function: ShouldDriverHaveReticle 0x8d23d54)
	bool ShouldDriverHaveReticle(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.ShouldAllowShadowStanceMaterialsForPartType (Underlying native function: ShouldAllowShadowStanceMaterialsForPartType 0x8d23cc4)
	bool ShouldAllowShadowStanceMaterialsForPartType(struct TEnumAsByte<EFortCustomPartType>& PartType); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.SetWeaponOverrideAnimSet (Underlying native function: SetWeaponOverrideAnimSet 0x8d23c44)
	void SetWeaponOverrideAnimSet(class UFortWeaponAnimSet*& WeaponOverrideAnimSet); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetVehicleOverrideExit (Underlying native function: SetVehicleOverrideExit 0x8d23ba0)
	void SetVehicleOverrideExit(bool& bIgnoreLaunch); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetVectorParamOnOverriddenMaterials (Underlying native function: SetVectorParamOnOverriddenMaterials 0x8d23ad8)
	void SetVectorParamOnOverriddenMaterials(struct FName& ParamName, struct FLinearColor& Value); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetTransformationMontage (Underlying native function: SetTransformationMontage 0x8d238e8)
	void SetTransformationMontage(class UAnimMontage*& CurrentMontage, class UAnimMontage*& FutureMontage, float& StartTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetThrownItemTrajectoryHitResult (Underlying native function: SetThrownItemTrajectoryHitResult 0x8d237d8)
	void SetThrownItemTrajectoryHitResult(struct FHitResult& InHitResult); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetTextureParamOnOverriddenMaterials (Underlying native function: SetTextureParamOnOverriddenMaterials 0x8d23714)
	void SetTextureParamOnOverriddenMaterials(struct FName& ParamName, class UTexture*& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetTetherRopeRodMesh (Underlying native function: SetTetherRopeRodMesh 0x8d23690)
	void SetTetherRopeRodMesh(class USkeletalMesh*& InMesh); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetTetherPawn (Underlying native function: SetTetherPawn 0x8d23610)
	void SetTetherPawn(class APawn*& InTetherPawn); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetStasisMode (Underlying native function: SetStasisMode 0x8d23590)
	void SetStasisMode(enum EFortPawnStasisMode& InStasisMode); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetScalarParamOnOverriddenMaterials (Underlying native function: SetScalarParamOnOverriddenMaterials 0x8d234c8)
	void SetScalarParamOnOverriddenMaterials(struct FName& ParamName, float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetPreviousVelocity (Underlying native function: SetPreviousVelocity 0x8d23440)
	void SetPreviousVelocity(struct FVector& OldVelocity); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetPreviousPosition (Underlying native function: SetPreviousPosition 0x8d233b8)
	void SetPreviousPosition(struct FVector& OldPosition); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetPossessedProp (Underlying native function: SetPossessedProp 0x8d23338)
	void SetPossessedProp(class ABuildingGameplayActorPlayerPropAttachment*& InPossessedProp); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetPetType (Underlying native function: SetPetType 0x8d232b8)
	void SetPetType(class UAthenaPetItemDefinition*& PetToCreate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetPendingTetherLaunch (Underlying native function: SetPendingTetherLaunch 0x8d23234)
	void SetPendingTetherLaunch(float& Amount); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetPendingSkydiveLaunch (Underlying native function: SetPendingSkydiveLaunch 0x8d231b4)
	void SetPendingSkydiveLaunch(bool& bPending); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetNumActiveBalloons (Underlying native function: SetNumActiveBalloons 0x8d23118)
	void SetNumActiveBalloons(int& NewBalloonCount); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetIsWaitingForEmoteInteraction (Underlying native function: SetIsWaitingForEmoteInteraction 0x8d23064)
	void SetIsWaitingForEmoteInteraction(bool& bWaitingForEmoteInteraction); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetIsParachuteForcedOpen (Underlying native function: SetIsParachuteForcedOpen 0x8d22fe0)
	void SetIsParachuteForcedOpen(bool& bNewIsParachuteForcedOpen); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetIsInFrontEndHologram (Underlying native function: SetIsInFrontEndHologram 0x8d22f54)
	void SetIsInFrontEndHologram(bool& bInFrontEndHologram); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetInSlipperyMovement (Underlying native function: SetInSlipperyMovement 0x8d22ed4)
	void SetInSlipperyMovement(bool& bIsSlippery); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetHomeActor (Underlying native function: SetHomeActor 0x8d22e18)
	void SetHomeActor(class AActor*& NewActor); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetFortPlayerPawnLightingChannels (Underlying native function: SetFortPlayerPawnLightingChannels 0x8d22ce4)
	void SetFortPlayerPawnLightingChannels(bool& bChannel0, bool& bChannel1, bool& bChannel2); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetForceMoveRelativeToCameraRotation (Underlying native function: SetForceMoveRelativeToCameraRotation 0x2a85784)
	void SetForceMoveRelativeToCameraRotation(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetFirstPersonCamera (Has no native function)
	void SetFirstPersonCamera(bool& bNewUseFirstPersonCamera); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawn.SetFacialTypeOverride (Underlying native function: SetFacialTypeOverride 0x8d22c58)
	void SetFacialTypeOverride(enum EFortFacialAnimTypes& NewType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetEquippedArmoredInterface (Underlying native function: SetEquippedArmoredInterface 0x8d22bd4)
	void SetEquippedArmoredInterface(struct TScriptInterface<class IFortArmoredInterface>& InInterface); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetCustomMeshHeightAdjustTarget (Underlying native function: SetCustomMeshHeightAdjustTarget 0x8d22ad4)
	void SetCustomMeshHeightAdjustTarget(int& HeightAdjust, int& LerpSpeed); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetCrouch (Underlying native function: SetCrouch 0x8d22a04)
	void SetCrouch(bool& bNewValue, bool& bAttemptToSlide); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetClientObservedStatsFromAnotherPawn (Underlying native function: SetClientObservedStatsFromAnotherPawn 0x71a663c)
	void SetClientObservedStatsFromAnotherPawn(class AFortPlayerPawn*& OtherPawn); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetChuteAction (Underlying native function: SetChuteAction 0x8d22980)
	void SetChuteAction(struct TEnumAsByte<EChuteActions>& InChuteAction); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetCharacterPartVisibility (Underlying native function: SetCharacterPartVisibility 0x2707464)
	bool SetCharacterPartVisibility(struct TEnumAsByte<EFortCustomPartType>& InPartType, bool& bNewVisibility, bool& bPropagateToChildren); // (BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetCanSlide (Underlying native function: SetCanSlide 0x8d228fc)
	void SetCanSlide(bool& bCanSlide); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetBalloonRope (Underlying native function: SetBalloonRope 0x8d2286c)
	void SetBalloonRope(class ABuildingGameplayActor*& InBalloonRope); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetActorHiddenInGameWithTag (Underlying native function: SetActorHiddenInGameWithTag 0x1a200b0)
	void SetActorHiddenInGameWithTag(bool& bNewHidden, struct FGameplayTag& HidePawnGameplayTag, class AActor*& BoundHidingInstigator, bool& bRemoveAllOfThisTag); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.SetActorHiddenInGameWithGameplayEffect (Underlying native function: SetActorHiddenInGameWithGameplayEffect 0x8d22750)
	void SetActorHiddenInGameWithGameplayEffect(bool& bNewHidden, class UClass*& HidePawnGameplayEffectClass, bool& bRemoveAllOfThisTag); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerUpdateVehicleInputStateUnreliable (Underlying native function: ServerUpdateVehicleInputStateUnreliable 0x8d22644)
	void ServerUpdateVehicleInputStateUnreliable(struct FFortAthenaVehicleInputStateUnreliable& ReliableInput, float& Timestamp); // (Net | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerUpdateVehicleInputStateReliable (Underlying native function: ServerUpdateVehicleInputStateReliable 0x8d225c0)
	void ServerUpdateVehicleInputStateReliable(struct FFortAthenaVehicleInputStateReliable& ReliableInput); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerUnmarkRespawned (Underlying native function: ServerUnmarkRespawned 0x1b4b43c)
	void ServerUnmarkRespawned(); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerToggleGender (Underlying native function: ServerToggleGender 0x8505f14)
	void ServerToggleGender(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerToggleBodyType (Underlying native function: ServerToggleBodyType 0x76c3d90)
	void ServerToggleBodyType(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerThrowCarriedPlayer (Underlying native function: ServerThrowCarriedPlayer 0x8d22514)
	void ServerThrowCarriedPlayer(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerStopGliderSwap (Underlying native function: ServerStopGliderSwap 0x8d224fc)
	void ServerStopGliderSwap(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerStartGliderSwap (Underlying native function: ServerStartGliderSwap 0x8d224e4)
	void ServerStartGliderSwap(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerSetAttachment (Underlying native function: ServerSetAttachment 0x8d22448)
	void ServerSetAttachment(struct FRepFortMeshAttachment& Attachment); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerSetAimbotDetection (Underlying native function: ServerSetAimbotDetection 0x8d22398)
	void ServerSetAimbotDetection(bool& bEnableDetection); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerSendZiplineState (Underlying native function: ServerSendZiplineState 0x8d222a4)
	void ServerSendZiplineState(struct FZiplinePawnState& InZiplineState); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerSendAimbotDetectionStatus (Underlying native function: ServerSendAimbotDetectionStatus 0x8d221ec)
	void ServerSendAimbotDetectionStatus(struct TArray<unsigned char>& Payload); // (Net | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerRootMotionInterruptNotifyStopMontage (Underlying native function: ServerRootMotionInterruptNotifyStopMontage 0x8d22168)
	void ServerRootMotionInterruptNotifyStopMontage(class UAnimMontage*& MontageToStop); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerReviveFromDBNO (Underlying native function: ServerReviveFromDBNO 0x8d220e4)
	void ServerReviveFromDBNO(class AController*& EventInstigator); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerRespawnFromDBNO (Underlying native function: ServerRespawnFromDBNO 0x8d220cc)
	void ServerRespawnFromDBNO(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerResetAbilitySystemComponent (Underlying native function: ServerResetAbilitySystemComponent 0x8d220b4)
	void ServerResetAbilitySystemComponent(); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerPlayUnableToPerformActionMontage (Underlying native function: ServerPlayUnableToPerformActionMontage 0x8d2209c)
	void ServerPlayUnableToPerformActionMontage(); // (Net | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerOnExitVehicle (Underlying native function: ServerOnExitVehicle 0x8d21fd8)
	class AFortAthenaVehicle* ServerOnExitVehicle(enum ETryExitVehicleBehavior& ExitForceBehavior, bool& bDestroyVehicleWhenForced); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerInterrogateDBNOPlayer (Underlying native function: ServerInterrogateDBNOPlayer 0x8d21e0c)
	void ServerInterrogateDBNOPlayer(class AFortPlayerPawn*& InDBNOHoistee); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerHoistDBNOPlayer (Underlying native function: ServerHoistDBNOPlayer 0x8d21d88)
	void ServerHoistDBNOPlayer(class AFortPlayerPawn*& InDBNOHoistee); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerHandlePickupInfo (Underlying native function: ServerHandlePickupInfo 0x8d21c14)
	void ServerHandlePickupInfo(class AFortPickup*& PickUp, struct FFortPickupRequestInfo& Params); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerHandlePickup (Underlying native function: ServerHandlePickup 0x8d21ac0)
	void ServerHandlePickup(class AFortPickup*& PickUp, float& InFlyTime, struct FVector& InStartDirection, bool& bPlayPickupSound); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerEquipLastWeaponOrGadget (Underlying native function: ServerEquipLastWeaponOrGadget 0x8d21a3c)
	void ServerEquipLastWeaponOrGadget(bool& bForce); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerEnterStasis (Underlying native function: ServerEnterStasis 0x8d219b8)
	void ServerEnterStasis(enum EFortPawnStasisMode& InStasisMode); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerEmoteSecondaryFirePressed (Underlying native function: ServerEmoteSecondaryFirePressed 0x8d219a0)
	void ServerEmoteSecondaryFirePressed(); // (Net | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerDropCarriedPlayer (Underlying native function: ServerDropCarriedPlayer 0x8d21988)
	void ServerDropCarriedPlayer(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerCyclePart (Underlying native function: ServerCyclePart 0x8d218bc)
	void ServerCyclePart(struct TEnumAsByte<EFortCustomPartType>& Part, bool& bNextPart); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerCycleColorSwatch (Underlying native function: ServerCycleColorSwatch 0x8d217c4)
	void ServerCycleColorSwatch(struct TEnumAsByte<EColorSwatchType>& SwatchType, bool& bNext); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerCycleAccessoryColorSwatch (Underlying native function: ServerCycleAccessoryColorSwatch 0x8d216cc)
	void ServerCycleAccessoryColorSwatch(struct TEnumAsByte<EFortCustomPartType>& Part, bool& bNext); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerChoosePart (Underlying native function: ServerChoosePart 0x8d215e0)
	void ServerChoosePart(struct TEnumAsByte<EFortCustomPartType>& Part, class UCustomCharacterPart*& ChosenCharacterPart); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerPawn.ServerChooseGender (Underlying native function: ServerChooseGender 0x8d21540)
	void ServerChooseGender(struct TEnumAsByte<EFortCustomGender>& Gender); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerPawn.SafeZoneStatusChanged (Has no native function)
	void SafeZoneStatusChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawn.ReviveFromDBNO (Underlying native function: ReviveFromDBNO 0x8d214c0)
	void ReviveFromDBNO(class AController*& EventInstigator); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.RestoreDBNOCollisionAfterDrop (Underlying native function: RestoreDBNOCollisionAfterDrop 0x8d214ac)
	void RestoreDBNOCollisionAfterDrop(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.ResetGameplayAttributes (Underlying native function: ResetGameplayAttributes 0x8d21428)
	void ResetGameplayAttributes(bool& bIgnoreStatClamp); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.ResetClothAndDynamicsMatching (Underlying native function: ResetClothAndDynamicsMatching 0x8d21370)
	void ResetClothAndDynamicsMatching(struct FGameplayTagContainer& MatchingTags); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.ResetClothAndDynamics (Underlying native function: ResetClothAndDynamics 0x8d2135c)
	void ResetClothAndDynamics(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.RemoveStasisMode (Underlying native function: RemoveStasisMode 0x8d212b4)
	void RemoveStasisMode(struct FGameplayTag& InStasisGameplayTag, bool& bRemoveAllOfThisTag); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.RemoveMaterialOverrideLocal (Underlying native function: RemoveMaterialOverrideLocal 0x24e2a00)
	bool RemoveMaterialOverrideLocal(struct FGuid& MaterialOverrideId); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.RemoveMaterialOverride (Underlying native function: RemoveMaterialOverride 0x8d21218)
	bool RemoveMaterialOverride(struct FGuid& MaterialOverrideId); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.RemoveExpiredIgnoredActorsAndCheckForNextTimer (Underlying native function: RemoveExpiredIgnoredActorsAndCheckForNextTimer 0x8d21204)
	void RemoveExpiredIgnoredActorsAndCheckForNextTimer(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.RemoveAttachment (Underlying native function: RemoveAttachment 0x8d211f0)
	void RemoveAttachment(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.RemoveAllDefaultStasisApplications (Underlying native function: RemoveAllDefaultStasisApplications 0x26daa0c)
	void RemoveAllDefaultStasisApplications(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.RemoveAbilityAITarget (Underlying native function: RemoveAbilityAITarget 0x8d20fc4)
	void RemoveAbilityAITarget(class AFortAIPawn*& InTarget); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.RandomizeCharacter (Underlying native function: RandomizeCharacter 0x8d20e4c)
	void RandomizeCharacter(struct FString& GenderString); // (Final | Exec | Native | Private)

	// Function /Script/FortniteGame.FortPlayerPawn.PushWeaponAnimSetOverride (Underlying native function: PushWeaponAnimSetOverride 0x8d20c38)
	void PushWeaponAnimSetOverride(int& Priority, class UFortWeaponAnimSet*& InWeaponAnimSetOverride); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.PushLocomotionAnimSetOverride (Underlying native function: PushLocomotionAnimSetOverride 0x8d20c38)
	void PushLocomotionAnimSetOverride(int& Priority, class UFortAnimAssetLocomotion*& InLocomotionAnimSetOverride); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.PushGliderOverride (Underlying native function: PushGliderOverride 0x71a663c)
	void PushGliderOverride(class UAthenaGliderItemDefinition*& InGliderOverride); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.PushFootstepBankOverride (Underlying native function: PushFootstepBankOverride 0x8d20c38)
	void PushFootstepBankOverride(int& Priority, class UFortFootstepAudioBank*& InFootstepBankOverride); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.PushAnimLayersOverride (Underlying native function: PushAnimLayersOverride 0x8d20cdc)
	void PushAnimLayersOverride(int& Priority, struct TArray<class UClass*>& InAnimLayersOverride); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerPawn.PushAnimBPOverride (Underlying native function: PushAnimBPOverride 0x8d20c38)
	void PushAnimBPOverride(int& Priority, class UClass*& InAnimBPOverride); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.PostResIn (Underlying native function: PostResIn 0x2dae07c)
	void PostResIn(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.PopWeaponAnimSetOverride (Underlying native function: PopWeaponAnimSetOverride 0x8d20c38)
	void PopWeaponAnimSetOverride(int& Priority, class UFortWeaponAnimSet*& InWeaponAnimSetOverride); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.PopLocomotionAnimSetOverride (Underlying native function: PopLocomotionAnimSetOverride 0x8d20c38)
	void PopLocomotionAnimSetOverride(int& Priority, class UFortAnimAssetLocomotion*& InLocomotionAnimSetOverride); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.PopGliderOverride (Underlying native function: PopGliderOverride 0x71a663c)
	void PopGliderOverride(class UAthenaGliderItemDefinition*& InGliderToRemove); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.PopFootstepBankOverride (Underlying native function: PopFootstepBankOverride 0x8d20c38)
	void PopFootstepBankOverride(int& Priority, class UFortFootstepAudioBank*& InFootstepBankOverride); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.PopAnimLayersOverride (Underlying native function: PopAnimLayersOverride 0x8d20cdc)
	void PopAnimLayersOverride(int& Priority, struct TArray<class UClass*>& InAnimLayersOverride); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerPawn.PopAnimBPOverride (Underlying native function: PopAnimBPOverride 0x8d20c38)
	void PopAnimBPOverride(int& Priority, class UClass*& InAnimBPOverride); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.PlayGroupEmote (Underlying native function: PlayGroupEmote 0x71a663c)
	void PlayGroupEmote(class UFortMontageItemDefinitionBase*& EmoteAsset); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.PerformSupplementalKillVolumeSweep (Underlying native function: PerformSupplementalKillVolumeSweep 0x8d20c20)
	void PerformSupplementalKillVolumeSweep(); // (Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.PassengerToPassengerAnimationStopped (Underlying native function: PassengerToPassengerAnimationStopped 0x8d20c08)
	void PassengerToPassengerAnimationStopped(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.PassengerToDriverAnimationStopped (Underlying native function: PassengerToDriverAnimationStopped 0x8d20bf0)
	void PassengerToDriverAnimationStopped(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.OverrideScalarMaterialParameterLocal (Underlying native function: OverrideScalarMaterialParameterLocal 0x8d20b28)
	void OverrideScalarMaterialParameterLocal(struct FName& ParamName, float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.OnWeaponEquippedNative (Underlying native function: OnWeaponEquippedNative 0x1ac3278)
	void OnWeaponEquippedNative(class AFortWeapon*& NewWeapon, class AFortWeapon*& OldWeapon); // (Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.OnTetherStarted (Has no native function)
	void OnTetherStarted(class APawn*& LastTetherPawn); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawn.OnTetherEnded (Has no native function)
	void OnTetherEnded(class APawn*& LastTetherPawn); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawn.OnTetheredExitReleased (Has no native function)
	void OnTetheredExitReleased(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawn.OnTetheredExitPressed (Has no native function)
	void OnTetheredExitPressed(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawn.OnTacticalSprintStarted (Underlying native function: OnTacticalSprintStarted 0x8d20b10)
	void OnTacticalSprintStarted(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.OnTacticalSprintEnded (Underlying native function: OnTacticalSprintEnded 0x8d20af8)
	void OnTacticalSprintEnded(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.OnStartLongInteract (Has no native function)
	void OnStartLongInteract(class AActor*& ReceivingActor, bool& OutbConsumeEvent, bool& OutbSkipSetInteractDuration, bool& OutbSkipStartAnimation, enum EItemInteractionType& OutItemInteractionType); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawn.OnSignificanceLODChanged (Has no native function)
	void OnSignificanceLODChanged(int& NewLOD); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_ZiplineState (Underlying native function: OnRep_ZiplineState 0x223fa9c)
	void OnRepZiplineState(struct FZiplinePawnState& PreviousValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_WaitingForEmoteInteraction (Underlying native function: OnRep_WaitingForEmoteInteraction 0x1457b1c)
	void OnRepWaitingForEmoteInteraction(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_VehicleInputStateReliableForReplay (Underlying native function: OnRep_VehicleInputStateReliableForReplay 0x8d20a70)
	void OnRepVehicleInputStateReliableForReplay(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_UpdateContextTracker (Underlying native function: OnRep_UpdateContextTracker 0x8d20a5c)
	void OnRepUpdateContextTracker(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_StoredControlRotation (Underlying native function: OnRep_StoredControlRotation 0x8d20a44)
	void OnRepStoredControlRotation(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_StasisModes (Underlying native function: OnRep_StasisModes 0x2c08470)
	void OnRepStasisModes(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_StartedInteractSearch (Underlying native function: OnRep_StartedInteractSearch 0x269a974)
	void OnRepStartedInteractSearch(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_ReplicatedIsInSlipperyMovement (Underlying native function: OnRep_ReplicatedIsInSlipperyMovement 0x25cbd44)
	void OnRepReplicatedIsInSlipperyMovement(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_ReplicatedInGliderRedeploy (Underlying native function: OnRep_ReplicatedInGliderRedeploy 0x8d209bc)
	void OnRepReplicatedInGliderRedeploy(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_ReplicatedAnimMontage (Underlying native function: OnRep_ReplicatedAnimMontage 0x118a0e8)
	void OnRepReplicatedAnimMontage(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_RepAnimMontageStartSection (Underlying native function: OnRep_RepAnimMontageStartSection 0x262513c)
	void OnRepRepAnimMontageStartSection(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_PossessedProp (Underlying native function: OnRep_PossessedProp 0x8d20938)
	void OnRepPossessedProp(class ABuildingGameplayActorPlayerPropAttachment*& OldProp); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_ParachuteLockedOpen (Underlying native function: OnRep_ParachuteLockedOpen 0x8d2091c)
	void OnRepParachuteLockedOpen(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_NetMovementPrioritized (Underlying native function: OnRep_NetMovementPrioritized 0x2432c18)
	void OnRepNetMovementPrioritized(bool& bOldNetMovementPrioritized); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_MaterialOverrides (Underlying native function: OnRep_MaterialOverrides 0x8d20908)
	void OnRepMaterialOverrides(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_LockGroupEmoteLeaderRotation (Underlying native function: OnRep_LockGroupEmoteLeaderRotation 0x8d20898)
	void OnRepLockGroupEmoteLeaderRotation(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_IsTargeting (Underlying native function: OnRep_IsTargeting 0x1e7c3a0)
	void OnRepIsTargeting(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_IsTacticalSprinting (Underlying native function: OnRep_IsTacticalSprinting 0x180792c)
	void OnRepIsTacticalSprinting(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_IsSkydivingFromBus (Underlying native function: OnRep_IsSkydivingFromBus 0x2338024)
	void OnRepIsSkydivingFromBus(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_IsSkydiving (Underlying native function: OnRep_IsSkydiving 0x1ac29f4)
	void OnRepIsSkydiving(bool& bPreviousState); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_IsParachuteOpen (Underlying native function: OnRep_IsParachuteOpen 0x1ac2954)
	void OnRepIsParachuteOpen(bool& bPreviousState); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_IsParachuteForcedOpen (Underlying native function: OnRep_IsParachuteForcedOpen 0x263ab74)
	void OnRepIsParachuteForcedOpen(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_IsInWaterVolume (Underlying native function: OnRep_IsInWaterVolume 0x8d208c0)
	void OnRepIsInWaterVolume(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_IsInsideSafeZone (Underlying native function: OnRep_IsInsideSafeZone 0xf9d130)
	void OnRepIsInsideSafeZone(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_IsInAnyStorm (Underlying native function: OnRep_IsInAnyStorm 0x25a3454)
	void OnRepIsInAnyStorm(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_IsEmoteLeader (Underlying native function: OnRep_IsEmoteLeader 0x8d20898)
	void OnRepIsEmoteLeader(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_GroupEmoteSyncValue (Underlying native function: OnRep_GroupEmoteSyncValue 0x8d208ac)
	void OnRepGroupEmoteSyncValue(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_GroupEmoteLookTarget (Underlying native function: OnRep_GroupEmoteLookTarget 0x8d20898)
	void OnRepGroupEmoteLookTarget(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_GliderOverride (Underlying native function: OnRep_GliderOverride 0x8d206c4)
	void OnRepGliderOverride(struct TArray<class UAthenaGliderItemDefinition*>& OldSet); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_FootstepBankOverride (Underlying native function: OnRep_FootstepBankOverride 0x8d20670)
	void OnRepFootstepBankOverride(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_FacialTypeOverride (Underlying native function: OnRep_FacialTypeOverride 0x8d20650)
	void OnRepFacialTypeOverride(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_DBNOHoisterData (Underlying native function: OnRep_DBNOHoisterData 0x1a496f0)
	void OnRepDBNOHoisterData(struct FFortDBNOCarryHoisterData& PreviousDBNOHoisterData); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_DBNOHoistee (Underlying native function: OnRep_DBNOHoistee 0x8d2063c)
	void OnRepDBNOHoistee(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_CustomMeshHeightAdjustTarget (Underlying native function: OnRep_CustomMeshHeightAdjustTarget 0x8d205e0)
	void OnRepCustomMeshHeightAdjustTarget(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_ControlledRCPawn (Underlying native function: OnRep_ControlledRCPawn 0x8d205c8)
	void OnRepControlledRCPawn(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_CharPartAnimMontageInfo (Underlying native function: OnRep_CharPartAnimMontageInfo 0x24177d8)
	void OnRepCharPartAnimMontageInfo(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_bHasStartedFloating (Underlying native function: OnRep_bHasStartedFloating 0x8d20a90)
	void OnRepbHasStartedFloating(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_bDisabledTetheringSupport (Underlying native function: OnRep_bDisabledTetheringSupport 0x2e38f38)
	void OnRepbDisabledTetheringSupport(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_BaseCosmeticLoadout (Underlying native function: OnRep_BaseCosmeticLoadout 0x2427fd8)
	void OnRepBaseCosmeticLoadout(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_AttachmentMesh (Underlying native function: OnRep_AttachmentMesh 0x8d205b4)
	void OnRepAttachmentMesh(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_AppliedSwaps (Underlying native function: OnRep_AppliedSwaps 0x8d205a0)
	void OnRepAppliedSwaps(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_AnimLayersOverride (Underlying native function: OnRep_AnimLayersOverride 0x8d2058c)
	void OnRepAnimLayersOverride(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_AnimBPOverride (Underlying native function: OnRep_AnimBPOverride 0x8d20578)
	void OnRepAnimBPOverride(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_AccelerationZPack (Underlying native function: OnRep_AccelerationZPack 0x1ca01d0)
	void OnRepAccelerationZPack(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRep_AccelerationPack (Underlying native function: OnRep_AccelerationPack 0x1ca0268)
	void OnRepAccelerationPack(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.OnRemoveZiplineFromIgnoreWhenMovingTimerExpired (Underlying native function: OnRemoveZiplineFromIgnoreWhenMovingTimerExpired 0x8d20564)
	void OnRemoveZiplineFromIgnoreWhenMovingTimerExpired(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnPostPhysicsRotation (Underlying native function: OnPostPhysicsRotation 0x8d20490)
	void OnPostPhysicsRotation(class UCharacterMovementComponent*& CharMoveComp, float& DeltaSeconds); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnOpenParachute (Has no native function)
	void OnOpenParachute(bool& bConsumeEvent); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawn.OnLockOnSearchCompleted (Has no native function)
	void OnLockOnSearchCompleted(bool& bConsumeEvent); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawn.OnLocalItemInteractionComplete (Has no native function)
	void OnLocalItemInteractionComplete(class AActor*& ReceivingActor); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawn.OnLandscapeCheckFailedAndTeleported (Has no native function)
	void OnLandscapeCheckFailedAndTeleported(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawn.OnExitedWaterVolume (Has no native function)
	void OnExitedWaterVolume(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawn.OnExitedVehicle (Has no native function)
	void OnExitedVehicle(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawn.OnEnteredWaterVolume (Has no native function)
	void OnEnteredWaterVolume(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawn.OnEnteredVehicle (Has no native function)
	void OnEnteredVehicle(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawn.OnEndWaterSprintBoost (Has no native function)
	void OnEndWaterSprintBoost(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawn.OnEndParachuteMovement (Underlying native function: OnEndParachuteMovement 0x1316b78)
	void OnEndParachuteMovement(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawn.OnCharacterPartsReinitialized (Has no native function)
	void OnCharacterPartsReinitialized(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawn.OnCapsuleBeginOverlap (Underlying native function: OnCapsuleBeginOverlap 0x8d202a4)
	void OnCapsuleBeginOverlap(class UPrimitiveComponent*& OverlappedComp, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerPawn.OnBoundStasisInstigatorDestroyed (Underlying native function: OnBoundStasisInstigatorDestroyed 0x8d20224)
	void OnBoundStasisInstigatorDestroyed(class AActor*& DestroyedActor); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnBoundHidingInstigatorDestroyed (Underlying native function: OnBoundHidingInstigatorDestroyed 0x8d201a4)
	void OnBoundHidingInstigatorDestroyed(class AActor*& DestroyedActor); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.OnBeginWaterSprintBoost (Has no native function)
	void OnBeginWaterSprintBoost(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawn.OnBeginParachuteMovement (Underlying native function: OnBeginParachuteMovement 0x1316d00)
	void OnBeginParachuteMovement(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawn.NotifyTeammateSkydivedFromBus (Has no native function)
	void NotifyTeammateSkydivedFromBus(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawn.MulticastUpdateVehicleInputStateReliable (Underlying native function: MulticastUpdateVehicleInputStateReliable 0x22e5a58)
	void MulticastUpdateVehicleInputStateReliable(struct FFortAthenaVehicleInputStateReliable& ReliableInput); // (Net | NetReliable | Native | Event | NetMulticast | Protected)

	// Function /Script/FortniteGame.FortPlayerPawn.MulticastSetWeaponOverrideAnimSet (Underlying native function: MulticastSetWeaponOverrideAnimSet 0x8d20120)
	void MulticastSetWeaponOverrideAnimSet(class UFortWeaponAnimSet*& WeaponOverrideAnimSet); // (Net | NetReliable | Native | Event | NetMulticast | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.MulticastClearWeaponOverrideAnimSet (Underlying native function: MulticastClearWeaponOverrideAnimSet 0x8cf115c)
	void MulticastClearWeaponOverrideAnimSet(); // (Net | NetReliable | Native | Event | NetMulticast | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.MarkSafe (Underlying native function: MarkSafe 0x8d200a0)
	void MarkSafe(class UClass*& GEtoApply); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.ManualReviveFromDBNO (Underlying native function: ManualReviveFromDBNO 0x71a663c)
	void ManualReviveFromDBNO(class UClass*& ReviveGameplayEffectsOverride); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.LocalThrowCarriedPlayer (Underlying native function: LocalThrowCarriedPlayer 0x8d2008c)
	void LocalThrowCarriedPlayer(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.LocalIsTryingToGetPickup (Underlying native function: LocalIsTryingToGetPickup 0x8d20064)
	bool LocalIsTryingToGetPickup(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.ListCharacterParts (Underlying native function: ListCharacterParts 0x8d1ff10)
	void ListCharacterParts(struct FString& GenderAndOrPartString); // (Final | Exec | Native | Private | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsZiplining (Underlying native function: IsZiplining 0x8d1fef8)
	bool IsZiplining(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsWaterSprintBoosting (Underlying native function: IsWaterSprintBoosting 0x8d1fedc)
	bool IsWaterSprintBoosting(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsWaitingForEmoteInteraction (Underlying native function: IsWaitingForEmoteInteraction 0x8d1fec0)
	bool IsWaitingForEmoteInteraction(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsUsingUmbrella (Underlying native function: IsUsingUmbrella 0x8d1fe98)
	bool IsUsingUmbrella(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsUsingPersonalVehicle (Underlying native function: IsUsingPersonalVehicle 0x8d1fe74)
	bool IsUsingPersonalVehicle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsTethered (Underlying native function: IsTethered 0x8d1fe50)
	bool IsTethered(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsSprinting (Underlying native function: IsSprinting 0x8d1fe2c)
	bool IsSprinting(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsSkydivingFromLaunchPad (Underlying native function: IsSkydivingFromLaunchPad 0x8d1fe0c)
	bool IsSkydivingFromLaunchPad(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsSkydivingFromBus (Underlying native function: IsSkydivingFromBus 0x8d1fdec)
	bool IsSkydivingFromBus(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsSkydiving (Underlying native function: IsSkydiving 0x2432a40)
	bool IsSkydiving(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsRidingOnActor (Underlying native function: IsRidingOnActor 0x8d1fdc8)
	bool IsRidingOnActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsPickupInteractionWhileSkydivingAllowed (Underlying native function: IsPickupInteractionWhileSkydivingAllowed 0x8d1fdac)
	bool IsPickupInteractionWhileSkydivingAllowed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsPassivelySkydiving (Underlying native function: IsPassivelySkydiving 0x8d1fd80)
	bool IsPassivelySkydiving(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsPassengerInVehicle (Underlying native function: IsPassengerInVehicle 0x21f58e4)
	bool IsPassengerInVehicle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsParachuteOpenAndVisible (Underlying native function: IsParachuteOpenAndVisible 0x8d1fd60)
	bool IsParachuteOpenAndVisible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsParachuteOpen (Underlying native function: IsParachuteOpen 0x2384f8c)
	bool IsParachuteOpen(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsParachuteLockedOpen (Underlying native function: IsParachuteLockedOpen 0x8d1fd48)
	bool IsParachuteLockedOpen(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsParachuteForcedOpen (Underlying native function: IsParachuteForcedOpen 0x8d1fd2c)
	bool IsParachuteForcedOpen(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsOperatingTurret (Underlying native function: IsOperatingTurret 0x8d1fd08)
	bool IsOperatingTurret(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsNiagaraSimpleWaterSim (Underlying native function: IsNiagaraSimpleWaterSim 0x8d1fcec)
	bool IsNiagaraSimpleWaterSim(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsNiagaraProceduralWaterSim (Underlying native function: IsNiagaraProceduralWaterSim 0x8d1fcd0)
	bool IsNiagaraProceduralWaterSim(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsMaterialOverrideApplied (Underlying native function: IsMaterialOverrideApplied 0x8d1fbe4)
	bool IsMaterialOverrideApplied(struct FGuid& MaterialOverrideId, bool& bOutIsCurrentOverride); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.IsItemAndVariantSwapActiveById (Underlying native function: IsItemAndVariantSwapActiveById 0x8d1fb08)
	bool IsItemAndVariantSwapActiveById(struct FGuid& SwapId); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsInVehicle (Underlying native function: IsInVehicle 0x2264918)
	bool IsInVehicle(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsInStasisMode (Underlying native function: IsInStasisMode 0x8d1fa7c)
	bool IsInStasisMode(enum EFortPawnStasisMode& InStasisMode); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsInStasis (Underlying native function: IsInStasis 0x8d1fa60)
	bool IsInStasis(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsInSlipperyMovement (Underlying native function: IsInSlipperyMovement 0x8d1fa44)
	bool IsInSlipperyMovement(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsInInteractBlockingVehicle (Underlying native function: IsInInteractBlockingVehicle 0x8d1fa1c)
	bool IsInInteractBlockingVehicle(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsInFrontEndHologram (Underlying native function: IsInFrontEndHologram 0x8d1fa00)
	bool IsInFrontEndHologram(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsInFloatingMovement (Underlying native function: IsInFloatingMovement 0x8d1f9dc)
	bool IsInFloatingMovement(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsInCharacterCustomization (Underlying native function: IsInCharacterCustomization 0x8d1f9c0)
	bool IsInCharacterCustomization(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsImprovedDBNOEnabled (Underlying native function: IsImprovedDBNOEnabled 0x8d1f998)
	bool IsImprovedDBNOEnabled(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsEmoteBlockedByMovement (Underlying native function: IsEmoteBlockedByMovement 0x8d1f974)
	bool IsEmoteBlockedByMovement(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsDrivingVehicle (Underlying native function: IsDrivingVehicle 0x27da410)
	bool IsDrivingVehicle(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsDrivingInteractBlockingVehicle (Underlying native function: IsDrivingInteractBlockingVehicle 0x8d1f950)
	bool IsDrivingInteractBlockingVehicle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsCrouchInputBuffered (Underlying native function: IsCrouchInputBuffered 0x8d1f8fc)
	bool IsCrouchInputBuffered(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsComponentCharacterPartMesh (Underlying native function: IsComponentCharacterPartMesh 0x5e4a150)
	bool IsComponentCharacterPartMesh(class USkeletalMeshComponent*& SkeletalMeshComponent); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsCharacterCustomizationLoadingCompleted (Underlying native function: IsCharacterCustomizationLoadingCompleted 0x8d1f8d8)
	bool IsCharacterCustomizationLoadingCompleted(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsActivelyStrafingInAir (Underlying native function: IsActivelyStrafingInAir 0x8d1f844)
	bool IsActivelyStrafingInAir(bool& bCheckMovementMode); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsActivelySkydivingUpInVortex (Underlying native function: IsActivelySkydivingUpInVortex 0x8d1f820)
	bool IsActivelySkydivingUpInVortex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.IsActivelySkydiving (Underlying native function: IsActivelySkydiving 0x8d1f788)
	bool IsActivelySkydiving(bool& bCheckMovementMode); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.InvokeWaterJumpSplash (Underlying native function: InvokeWaterJumpSplash 0x27f8808)
	void InvokeWaterJumpSplash(struct FVector& SplashPosition, float& SplashScale); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.InvokeWaterHandSplashAttached (Underlying native function: InvokeWaterHandSplashAttached 0x8d1f6c4)
	void InvokeWaterHandSplashAttached(class USceneComponent*& AttachParent, struct FName& AttachSocketName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.InvokeWaterHandSplash (Underlying native function: InvokeWaterHandSplash 0x8d1f63c)
	void InvokeWaterHandSplash(struct FVector& SplashPosition); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.HasStartedFloating (Underlying native function: HasStartedFloating 0x8d1f624)
	bool HasStartedFloating(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.HasRespawnedInAir (Underlying native function: HasRespawnedInAir 0x8d1f5fc)
	bool HasRespawnedInAir(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.HasRecentlyExitedZiplineFromJumping (Underlying native function: HasRecentlyExitedZiplineFromJumping 0x8d1f5d8)
	bool HasRecentlyExitedZiplineFromJumping(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.HasPendingVariantAssets (Underlying native function: HasPendingVariantAssets 0x8d1f5b8)
	bool HasPendingVariantAssets(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.HasControlledRCPawn (Underlying native function: HasControlledRCPawn 0x8d1f54c)
	bool HasControlledRCPawn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.HACK_ApplyCosmetics (Underlying native function: HACK_ApplyCosmetics 0x7239f74)
	void HACKApplyCosmetics(struct FString& ApplyCosmetics); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.GetZiplineSpeedFactorTarget (Underlying native function: GetZiplineSpeedFactorTarget 0x8d1f534)
	float GetZiplineSpeedFactorTarget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetZiplineSpeedFactor (Underlying native function: GetZiplineSpeedFactor 0x8d1f51c)
	float GetZiplineSpeedFactor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetVehicleUInterface (Underlying native function: GetVehicleUInterface 0x2604f1c)
	struct TScriptInterface<class IFortVehicleInterface> GetVehicleUInterface(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetVehicleSeatIndex (Underlying native function: GetVehicleSeatIndex 0x8d1f4f8)
	int GetVehicleSeatIndex(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetVehicleOverrideExit (Underlying native function: GetVehicleOverrideExit 0x8d1f480)
	bool GetVehicleOverrideExit(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.GetVehicleActor (Underlying native function: GetVehicleActor 0x2fc7578)
	class AActor* GetVehicleActor(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetUseViewRotationForCameraOrigin (Underlying native function: GetUseViewRotationForCameraOrigin 0x8d1f464)
	bool GetUseViewRotationForCameraOrigin(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetTransientQuestsComponent (Underlying native function: GetTransientQuestsComponent 0x8d1f410)
	class UFortControllerComponent_TransientQuests* GetTransientQuestsComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetThrownItemTrajectoryHitResult (Underlying native function: GetThrownItemTrajectoryHitResult 0x8d1f354)
	struct FHitResult GetThrownItemTrajectoryHitResult(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetTetherRopeRodMesh (Underlying native function: GetTetherRopeRodMesh 0x8d1f32c)
	class USkeletalMesh* GetTetherRopeRodMesh(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetTetherPawn (Underlying native function: GetTetherPawn 0x8d1f308)
	class APawn* GetTetherPawn(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetStasisModes (Underlying native function: GetStasisModes 0x8d1f298)
	struct TArray<enum EFortPawnStasisMode> GetStasisModes(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetStasisMode (Underlying native function: GetStasisMode 0x8d1f274)
	enum EFortPawnStasisMode GetStasisMode(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetStamina (Underlying native function: GetStamina 0x8d1f24c)
	float GetStamina(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetSkeletalMeshForPartType (Underlying native function: GetSkeletalMeshForPartType 0x8d1f1bc)
	class USkeletalMeshComponent* GetSkeletalMeshForPartType(struct TEnumAsByte<EFortCustomPartType>& PartType); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetSkeletalMeshForCharmType (Underlying native function: GetSkeletalMeshForCharmType 0x8d1f128)
	class USkeletalMeshComponent* GetSkeletalMeshForCharmType(struct TEnumAsByte<EFortCustomCharmType>& CharmType); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetSimulatedAttributeValue (Underlying native function: GetSimulatedAttributeValue 0x8d1eff4)
	float GetSimulatedAttributeValue(struct FGameplayAttribute& Attribute, float& DefaultValue); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetSignificanceLOD (Underlying native function: GetSignificanceLOD 0x280d6a4)
	int GetSignificanceLOD(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetPreviousVelocity (Underlying native function: GetPreviousVelocity 0x8d1efcc)
	struct FVector GetPreviousVelocity(); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.GetPreviousPosition (Underlying native function: GetPreviousPosition 0x8d1efa4)
	struct FVector GetPreviousPosition(); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.GetPossessedProp (Underlying native function: GetPossessedProp 0x8d1ef8c)
	class ABuildingGameplayActorPlayerPropAttachment* GetPossessedProp(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetPendingSkydiveLaunch (Underlying native function: GetPendingSkydiveLaunch 0x8d1ef70)
	bool GetPendingSkydiveLaunch(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetPawnCosmeticLoadout (Underlying native function: GetPawnCosmeticLoadout 0x8d1ee90)
	struct FFortAthenaLoadout GetPawnCosmeticLoadout(bool& bGetBaseLoadout, bool& bWarn); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetNumActiveBalloons (Underlying native function: GetNumActiveBalloons 0x8d1ee78)
	int GetNumActiveBalloons(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetModifierForPartType (Underlying native function: GetModifierForPartType 0x8d1ede8)
	class ACustomCharacterPartModifier* GetModifierForPartType(struct TEnumAsByte<EFortCustomPartType>& PartType); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetMaxStamina (Underlying native function: GetMaxStamina 0x8d1edc0)
	float GetMaxStamina(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetLastWeaponEquippedOnServer (Underlying native function: GetLastWeaponEquippedOnServer 0x8d1ed98)
	class AFortWeapon* GetLastWeaponEquippedOnServer(); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetLastWaterSurfaceInfo (Underlying native function: GetLastWaterSurfaceInfo 0x29931e4)
	void GetLastWaterSurfaceInfo(struct FVector& OutWaterSurfacePosition, struct FVector& OutWaterSurfaceNormal); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPlayerPawn.GetIsHoldingObject (Underlying native function: GetIsHoldingObject 0x8d1ed74)
	bool GetIsHoldingObject(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetHomeActor (Underlying native function: GetHomeActor 0x8d1ecf4)
	class AActor* GetHomeActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetGliderDisplayName (Underlying native function: GetGliderDisplayName 0x8d1ec78)
	struct FText GetGliderDisplayName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetGender (Underlying native function: GetGender 0x8d1eba0)
	void GetGender(bool& IsMale, bool& IsFemale); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetFrontendAnimMontageIdleOverride (Underlying native function: GetFrontendAnimMontageIdleOverride 0x24c3744)
	class UAnimMontage* GetFrontendAnimMontageIdleOverride(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetExtraLives (Underlying native function: GetExtraLives 0x8d1eb7c)
	int GetExtraLives(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetDisplayContext (Underlying native function: GetDisplayContext 0x8d1eb64)
	enum EFortPawnDisplayContext GetDisplayContext(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetDBNOHoister (Underlying native function: GetDBNOHoister 0x8d1eb4c)
	class AFortPlayerPawn* GetDBNOHoister(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetDBNOHoistee (Underlying native function: GetDBNOHoistee 0x8d1eb34)
	class AFortPlayerPawn* GetDBNOHoistee(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetControllingPawn (Underlying native function: GetControllingPawn 0x8d1eb0c)
	class AFortPlayerPawn* GetControllingPawn(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetContrailParticleSystemSoftRef (Underlying native function: GetContrailParticleSystemSoftRef 0x8d1ea68)
	struct TWeakObjectPtr<class UFXSystemAsset> GetContrailParticleSystemSoftRef(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.GetComponentsByClassOnAllPartModifiers (Underlying native function: GetComponentsByClassOnAllPartModifiers 0x8d1e99c)
	struct TArray<class UActorComponent*> GetComponentsByClassOnAllPartModifiers(class UClass*& ComponentClass); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetComponentsByClassForPartType (Underlying native function: GetComponentsByClassForPartType 0x8d1e88c)
	struct TArray<class UActorComponent*> GetComponentsByClassForPartType(class UClass*& ComponentClass, struct TEnumAsByte<EFortCustomPartType>& PartType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetClientObservedStatValue (Underlying native function: GetClientObservedStatValue 0x8d1e78c)
	int GetClientObservedStatValue(struct FName& StatName, int& DefaultValue); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.GetCharacterGender (Underlying native function: GetCharacterGender 0x8d1e768)
	struct TEnumAsByte<EFortCustomGender> GetCharacterGender(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetCharacterCharmActorForCharmType (Underlying native function: GetCharacterCharmActorForCharmType 0x8d1e6d4)
	class AFortPlayerCharm* GetCharacterCharmActorForCharmType(struct TEnumAsByte<EFortCustomCharmType>& CharmType); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetCharacterBodyType (Underlying native function: GetCharacterBodyType 0x8d1e6b0)
	struct TEnumAsByte<EFortCustomBodyType> GetCharacterBodyType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetCachedStepSurfaceNormal (Underlying native function: GetCachedStepSurfaceNormal 0x23682f4)
	struct FVector GetCachedStepSurfaceNormal(); // (Final | BlueprintCosmetic | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetCachedFootstepIndex (Underlying native function: GetCachedFootstepIndex 0x227563c)
	int GetCachedFootstepIndex(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetBuildSpeedModifier (Underlying native function: GetBuildSpeedModifier 0x8d1e688)
	float GetBuildSpeedModifier(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetBuildCostModifier (Underlying native function: GetBuildCostModifier 0x8d1e660)
	float GetBuildCostModifier(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetBaseAimPitchQuantized (Underlying native function: GetBaseAimPitchQuantized 0x8d1e638)
	float GetBaseAimPitchQuantized(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetActiveZipline (Underlying native function: GetActiveZipline 0x8d1e5cc)
	class AFortAthenaZiplineBase* GetActiveZipline(); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetActivePlayerWaterBoostComponent (Underlying native function: GetActivePlayerWaterBoostComponent 0x8d1e5b4)
	class UFXSystemComponent* GetActivePlayerWaterBoostComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetActivePlayerSwimmingComponent (Underlying native function: GetActivePlayerSwimmingComponent 0x8d1e594)
	class UFXSystemComponent* GetActivePlayerSwimmingComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetActivePlayerJumpSplashInWaterComponent (Underlying native function: GetActivePlayerJumpSplashInWaterComponent 0x8d1e57c)
	class UFXSystemComponent* GetActivePlayerJumpSplashInWaterComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetActivePlayerInWaterComponent (Underlying native function: GetActivePlayerInWaterComponent 0x8d1e55c)
	class UFXSystemComponent* GetActivePlayerInWaterComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetActivePlayerHandSplashInWaterComponent (Underlying native function: GetActivePlayerHandSplashInWaterComponent 0x8d1e544)
	class UFXSystemComponent* GetActivePlayerHandSplashInWaterComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetActivePlayerFootSplashInWaterRightComponent (Underlying native function: GetActivePlayerFootSplashInWaterRightComponent 0x8d1e52c)
	class UFXSystemComponent* GetActivePlayerFootSplashInWaterRightComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GetActivePlayerFootSplashInWaterLeftComponent (Underlying native function: GetActivePlayerFootSplashInWaterLeftComponent 0x8d1e514)
	class UFXSystemComponent* GetActivePlayerFootSplashInWaterLeftComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.GatherMetaTags (Underlying native function: GatherMetaTags 0x8d1e460)
	struct FGameplayTagContainer GatherMetaTags(class UAthenaCosmeticItemDefinition*& CosmeticItem); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.ForceOpenParachuteAndOverrideGlider (Underlying native function: ForceOpenParachuteAndOverrideGlider 0x8d1e34c)
	void ForceOpenParachuteAndOverrideGlider(class UAthenaGliderItemDefinition*& InGliderOverride, bool& bResetGliderOverrideOnLanding, bool& bForceIntoGliderRedeploy); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.ForceDetachFromRemoteControlledPawn (Underlying native function: ForceDetachFromRemoteControlledPawn 0x8d1e338)
	void ForceDetachFromRemoteControlledPawn(); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.EndZiplining (Underlying native function: EndZiplining 0x8d1e258)
	void EndZiplining(bool& bFromJump, bool& bReachedEnd); // (Final | 0x00000002 | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.EndSkydiving (Underlying native function: EndSkydiving 0x8d1e240)
	void EndSkydiving(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.EndHovering (Underlying native function: EndHovering 0x8d1e1d0)
	void EndHovering(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.EndGhostModeExit (Underlying native function: EndGhostModeExit 0x8d1e1b4)
	void EndGhostModeExit(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.EndFloating (Underlying native function: EndFloating 0x8d1e140)
	void EndFloating(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.EndedInteractSearch (Underlying native function: EndedInteractSearch 0x8d1e31c)
	void EndedInteractSearch(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.DriverToPassengerAnimationStopped (Underlying native function: DriverToPassengerAnimationStopped 0x8d1e128)
	void DriverToPassengerAnimationStopped(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.DontHandsOnHips (Underlying native function: DontHandsOnHips 0x8d1e100)
	bool DontHandsOnHips(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.DontCrossArms (Underlying native function: DontCrossArms 0x8d1e0d8)
	bool DontCrossArms(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.DisableFaceRotation (Underlying native function: DisableFaceRotation 0x8d1e00c)
	void DisableFaceRotation(float& DurationInSeconds, bool& bSetStasis); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.DisableCosmeticSwap (Underlying native function: DisableCosmeticSwap 0x8d1df7c)
	void DisableCosmeticSwap(struct FGuid& SwapId); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.DestroyBalloonRope (Underlying native function: DestroyBalloonRope 0x8d1df68)
	void DestroyBalloonRope(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.DebugDestroyVehicle (Underlying native function: DebugDestroyVehicle 0x26daa0c)
	void DebugDestroyVehicle(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.ConstructItemSwapClonedFromLoadout (Underlying native function: ConstructItemSwapClonedFromLoadout 0x8d1ddf0)
	void ConstructItemSwapClonedFromLoadout(struct FFortAthenaLoadout& Loadout, class UAthenaCosmeticItemDefinition*& Item, struct FFortSwapItemAndVariantData& SwapData); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.ClientUnequipCurrentWeaponById (Underlying native function: ClientUnequipCurrentWeaponById 0x8d1dd14)
	void ClientUnequipCurrentWeaponById(struct FGuid& WeaponItemGuid, bool& bSetWeaponAttachment); // (Net | NetReliable | Native | Event | Protected | HasDefaults | NetClient)

	// Function /Script/FortniteGame.FortPlayerPawn.ClientResetAbilitySystemComponent (Underlying native function: ClientResetAbilitySystemComponent 0x8d1dcfc)
	void ClientResetAbilitySystemComponent(); // (Net | NetReliable | Native | Event | Public | NetClient | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.ClientNotifyUnableToPerformAction (Underlying native function: ClientNotifyUnableToPerformAction 0x8d1dbf4)
	void ClientNotifyUnableToPerformAction(bool& bPlayMontage, struct FGameplayTagContainer& FailedReason); // (0x00000002 | Net | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerPawn.ClientNotifyAbilityFailed (Underlying native function: ClientNotifyAbilityFailed 0x8d1dafc)
	void ClientNotifyAbilityFailed(class UGameplayAbility*& FailedAbility, struct FGameplayTagContainer& FailedReason); // (Net | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerPawn.ClientExecuteGameplayCueOnSpecificPlayer (Underlying native function: ClientExecuteGameplayCueOnSpecificPlayer 0x8d1da78)
	void ClientExecuteGameplayCueOnSpecificPlayer(struct FGameplayTag& GameplayCueTag); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerPawn.ClientAcknowledgeVehicleInputState (Underlying native function: ClientAcknowledgeVehicleInputState 0x8d1d9f0)
	void ClientAcknowledgeVehicleInputState(float& Timestamp); // (Net | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerPawn.ClearWeaponOverrideAnimSet (Underlying native function: ClearWeaponOverrideAnimSet 0x8d1d958)
	void ClearWeaponOverrideAnimSet(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.ClearScalarMaterialParameterOverrideLocal (Underlying native function: ClearScalarMaterialParameterOverrideLocal 0x8d1d8c4)
	void ClearScalarMaterialParameterOverrideLocal(struct FName& ParamName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.ClearExistingCosmeticPetInstance (Underlying native function: ClearExistingCosmeticPetInstance 0x8d1d8b0)
	void ClearExistingCosmeticPetInstance(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.CheckForUnburrowTeleport (Underlying native function: CheckForUnburrowTeleport 0x8d1d89c)
	void CheckForUnburrowTeleport(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.CanUseInventoryAsDriver (Underlying native function: CanUseInventoryAsDriver 0x8d1d864)
	bool CanUseInventoryAsDriver(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.CanShootFromVehicle (Underlying native function: CanShootFromVehicle 0x8d1d840)
	bool CanShootFromVehicle(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.CanPredictJumpApex (Underlying native function: CanPredictJumpApex 0x8d1d7c0)
	bool CanPredictJumpApex(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.CanInterrogateFromDBNO (Underlying native function: CanInterrogateFromDBNO 0x8d1d72c)
	bool CanInterrogateFromDBNO(class AController*& EventInstigator); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.CancelJumpAbility (Underlying native function: CancelJumpAbility 0x8d1d888)
	void CancelJumpAbility(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.BufferCrouchCommand (Underlying native function: BufferCrouchCommand 0x8d1d708)
	bool BufferCrouchCommand(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.BroadcastSetWeaponOverrideAnimSet (Underlying native function: BroadcastSetWeaponOverrideAnimSet 0x8d1d684)
	void BroadcastSetWeaponOverrideAnimSet(class UFortWeaponAnimSet*& WeaponOverrideAnimSet); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.BroadcastClearWeaponOverrideAnimSet (Underlying native function: BroadcastClearWeaponOverrideAnimSet 0x8d1d66c)
	void BroadcastClearWeaponOverrideAnimSet(); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.BP_GetVehicle (Underlying native function: BP_GetVehicle 0x8d1d418)
	class AFortAthenaVehicle* BPGetVehicle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.BP_ForceOpenParachute (Underlying native function: BP_ForceOpenParachute 0x8d1d404)
	void BPForceOpenParachute(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.BP_ForceLockParachuteOpen (Underlying native function: BP_ForceLockParachuteOpen 0x8d1d378)
	void BPForceLockParachuteOpen(bool& bLocked); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.BP_ApplyMaterialOverrideWithFlags (Underlying native function: BP_ApplyMaterialOverrideWithFlags 0x8d1d17c)
	struct FGuid BPApplyMaterialOverrideWithFlags(struct TWeakObjectPtr<class UMaterialInterface>& Material, struct FFortPawnMaterialOverrideCopiedParameters& MaterialParamsToCopy, float& Priority, int& Flags); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.BP_ApplyMaterialOverrideLocalWithFlags (Underlying native function: BP_ApplyMaterialOverrideLocalWithFlags 0x222f868)
	struct FGuid BPApplyMaterialOverrideLocalWithFlags(struct TWeakObjectPtr<class UMaterialInterface>& Material, struct FFortPawnMaterialOverrideCopiedParameters& MaterialParamsToCopy, float& Priority, int& Flags); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.BlindTestPredictiveInput (Underlying native function: BlindTestPredictiveInput 0x8d1d658)
	void BlindTestPredictiveInput(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPawn.BeginZiplining (Underlying native function: BeginZiplining 0x8d1d560)
	void BeginZiplining(class AFortAthenaZipline*& Zipline, class USceneComponent*& SocketComponent, class UPrimitiveComponent*& InteractComponent); // (Final | 0x00000002 | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.BeginSkydiving (Underlying native function: BeginSkydiving 0x8d1d4e0)
	void BeginSkydiving(bool& bFromBus); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.BeginHovering (Underlying native function: BeginHovering 0x8d1d488)
	void BeginHovering(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.AuthUpdateLockedFloatSliderVariant (Underlying native function: AuthUpdateLockedFloatSliderVariant 0x8d1d0b4)
	void AuthUpdateLockedFloatSliderVariant(class UAthenaCosmeticItemDefinition*& ItemVariantIsUsedFor, struct FGameplayTag& ChannelTag); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerPawn.AttemptInstantInteractSearch (Underlying native function: AttemptInstantInteractSearch 0x8d1d098)
	void AttemptInstantInteractSearch(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.AreFXHiddenForPartComponent (Underlying native function: AreFXHiddenForPartComponent 0x5e4a040)
	bool AreFXHiddenForPartComponent(class USkeletalMeshComponent*& PartMeshComponent); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.AreFXHidden (Underlying native function: AreFXHidden 0x5e4a010)
	bool AreFXHidden(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPawn.ApplyWrapToSaveTheWorldHoverboard (Underlying native function: ApplyWrapToSaveTheWorldHoverboard 0x8d1d068)
	void ApplyWrapToSaveTheWorldHoverboard(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.ApplyMaterialOverrideLocal (Underlying native function: ApplyMaterialOverrideLocal 0x8d1ce14)
	struct FGuid ApplyMaterialOverrideLocal(struct TWeakObjectPtr<class UMaterialInterface>& Material, struct FFortPawnMaterialOverrideCopiedParameters& MaterialParamsToCopy, float& Priority, bool& bHideParticleSystems, bool& bApplyToWeapon); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.ApplyMaterialOverride (Underlying native function: ApplyMaterialOverride 0x8d1cbc0)
	struct FGuid ApplyMaterialOverride(struct TWeakObjectPtr<class UMaterialInterface>& Material, struct FFortPawnMaterialOverrideCopiedParameters& MaterialParamsToCopy, float& Priority, bool& bHideParticleSystems, bool& bApplyToWeapon); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.ApplyCosmeticLoadout (Underlying native function: ApplyCosmeticLoadout 0x8d1cbac)
	void ApplyCosmeticLoadout(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.AnimTrailsSetup (Has no native function)
	void AnimTrailsSetup(class UParticleSystem*& ParticleSystemReference, class UNiagaraSystem*& NiagaraSystemReference, struct FName& FirstSocketName, struct FName& SecondSocketName, float& Width, class UFXSystemComponent*& OverrideParticleComp, struct FName& OverideFirstSocketName, struct FName& OverideSecondSocketName); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawn.AnimTrailsNotify (Has no native function)
	void AnimTrailsNotify(bool& bActive); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawn.AnimTrailsDisable (Has no native function)
	void AnimTrailsDisable(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPawn.AllowPickupInteractionWhileSkydiving (Underlying native function: AllowPickupInteractionWhileSkydiving 0x8d1cb20)
	void AllowPickupInteractionWhileSkydiving(bool& bAllow); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.AITargetDied (Underlying native function: AITargetDied 0x8d1c64c)
	void AITargetDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Protected | HasDefaults)

	// Function /Script/FortniteGame.FortPlayerPawn.AddStasisMode (Underlying native function: AddStasisMode 0x8d1c9cc)
	void AddStasisMode(enum EFortPawnStasisMode& InStasisMode, class AActor*& BoundStasisInstigator, struct FGameplayTag& InStasisGameplayTag, struct FGameplayTagContainer& AllowedActionTags); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.AddIgnoredActor (Underlying native function: AddIgnoredActor 0x27db738)
	void AddIgnoredActor(class AActor*& InActorToIgnore, float& InIgnoreDuration); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.AddAttachment (Underlying native function: AddAttachment 0x8d1c908)
	void AddAttachment(class USkeletalMesh*& Attachment, class UClass*& InAnimBP); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPawn.AddAbilityAITarget (Underlying native function: AddAbilityAITarget 0x8d1c888)
	void AddAbilityAITarget(class AFortAIPawn*& InTarget); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)
};

