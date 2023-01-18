// BlueprintGeneratedClass /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C
// Size: 0x5f11
class APlayerPawn_Athena_C : public APlayerPawn_Athena_Generic_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x5640 (0x8)
	class UChildActorComponent* PhysicalRimlight; // 0x5648 (0x8)
	class UFortContrailsComponent* FortContrails; // 0x5650 (0x8)
	class UFortUnderwaterDamageComponent* FortUnderwaterDamage; // 0x5658 (0x8)
	float Timeline0BlendWeightA4943458400C3662DB243099F9EAC7E8; // 0x5660 (0x4)
	struct TEnumAsByte<ETimelineDirection> Timeline0DirectionA4943458400C3662DB243099F9EAC7E8; // 0x5664 (0x1)
	unsigned char unreflected_5665[0x3]; // 0x5665 (0x3) 
	class UTimelineComponent* Timeline0; // 0x5668 (0x8)
	class USkeletalMeshComponent* TargetHead; // 0x5670 (0x8)
	class USkeletalMeshComponent* TargetBody; // 0x5678 (0x8)
	struct TArray<class UMaterialInterface*> PawnHeadMaterials0; // 0x5680 (0x10)
	struct TArray<class UMaterialInterface*> PawnBodyMaterials0; // 0x5690 (0x10)
	struct FGameplayTagContainer TCFlakVest; // 0x56a0 (0x20)
	struct FGameplayEventData EventData; // 0x56c0 (0xb0)
	struct FGameplayTag EventSpawnEffect; // 0x5770 (0x4)
	bool IsMale; // 0x5774 (0x1)
	unsigned char unreflected_5775[0x3]; // 0x5775 (0x3) 
	class AFortWeapon* MenuGoingCommandowWeapon; // 0x5778 (0x8)
	class USoundBase* SafeZonePassThroughSound; // 0x5780 (0x8)
	bool bHasBeenOutsideSafeZone; // 0x5788 (0x1)
	unsigned char unreflected_5789[0x3]; // 0x5789 (0x3) 
	struct FLinearColor ThreatColor; // 0x578c (0x10)
	unsigned char unreflected_579c[0x4]; // 0x579c (0x4) 
	class USoundBase* PlayerKilledSound; // 0x57a0 (0x8)
	class UParticleSystemComponent* WindDebrisParticles; // 0x57a8 (0x8)
	class UParticleSystemComponent* FallingRainParticles; // 0x57b0 (0x8)
	class UParticleSystemComponent* StormAuraParticles; // 0x57b8 (0x8)
	struct FVector LightningSpawnLocation; // 0x57c0 (0x18)
	double LightningIntensityMin; // 0x57d8 (0x8)
	double LightningIntensityMax; // 0x57e0 (0x8)
	class AActor* SafeZoneActor; // 0x57e8 (0x8)
	double LightningIntensity; // 0x57f0 (0x8)
	class UPointLightComponent* RandomLightningLight; // 0x57f8 (0x8)
	double LightningTimelinePlaySpeedMin; // 0x5800 (0x8)
	double LightningTimelinePlaySpeedMax; // 0x5808 (0x8)
	double LightningFlashDiameter; // 0x5810 (0x8)
	double LightningFlashHeight; // 0x5818 (0x8)
	double LightningFlashRepeatDelayMin; // 0x5820 (0x8)
	double LightningFlashRepeatDelayMax; // 0x5828 (0x8)
	class AEmitterCameraLensEffectBase* RainCameraLensParticles; // 0x5830 (0x8)
	double ChanceOfLightningMesh; // 0x5838 (0x8)
	bool ShowInvulnerableVisuals; // 0x5840 (0x1)
	unsigned char unreflected_5841[0x7]; // 0x5841 (0x7) 
	class UAudioComponent* StormAudioLoopInst; // 0x5848 (0x8)
	double StormAudioVolume; // 0x5850 (0x8)
	class UAudioComponent* FallingAudioLoopInst; // 0x5858 (0x8)
	bool bIsPlayingFallingSound; // 0x5860 (0x1)
	unsigned char unreflected_5861[0x7]; // 0x5861 (0x7) 
	double PlayerAttributesSpeedWalk; // 0x5868 (0x8)
	double PlayerAttributesSpeedRun; // 0x5870 (0x8)
	double PlayerAttributesSpeedSprint; // 0x5878 (0x8)
	int MaxTrailsLOD; // 0x5880 (0x4)
	unsigned char unreflected_5884[0x4]; // 0x5884 (0x4) 
	class UPostProcessComponent* MobilePostProcess; // 0x5888 (0x8)
	bool bIsOutsideSafeZoneCached; // 0x5890 (0x1)
	unsigned char unreflected_5891[0x7]; // 0x5891 (0x7) 
	struct TArray<class UMaterialInstanceDynamic*> ResOutMaterials; // 0x5898 (0x10)
	class ADuplicateResOutMesh_C* RezInFXActor; // 0x58a8 (0x8)
	bool bQueueRezIn; // 0x58b0 (0x1)
	unsigned char unreflected_58b1[0x7]; // 0x58b1 (0x7) 
	class ADuplicateResOutMesh_C* RezOutFXActor; // 0x58b8 (0x8)
	bool bQueueRezOut; // 0x58c0 (0x1)
	bool bWasEverInWarmUp; // 0x58c1 (0x1)
	bool bStormAudioCleanedUp; // 0x58c2 (0x1)
	unsigned char unreflected_58c3[0xd]; // 0x58c3 (0xd) 
	struct FTransform BoxLocalTransform; // 0x58d0 (0x60)
	double BoundsRadius; // 0x5930 (0x8)
	class UPointLightComponent* TeleportationPointLight; // 0x5938 (0x8)
	double MaxLightIntensity; // 0x5940 (0x8)
	struct FName SocketMeshTop; // 0x5948 (0x4)
	struct FName SocketMeshBot; // 0x594c (0x4)
	struct FName MIDParamTransition; // 0x5950 (0x4)
	struct FName MIDParamDissolvePercent; // 0x5954 (0x4)
	struct FName MIDParamDissolveDirection; // 0x5958 (0x4)
	struct FName MIDParamDissolveBaseLoc; // 0x595c (0x4)
	struct FName MIDParamDissolveDistance; // 0x5960 (0x4)
	struct FName MIDParamDissolveFirstSpawn; // 0x5964 (0x4)
	class UMaterialInterface* MatCharacterDissolve; // 0x5968 (0x8)
	struct TArray<class UMaterialInstanceDynamic*> DissolveMIDs; // 0x5970 (0x10)
	bool bUseNewTeleportFX; // 0x5980 (0x1)
	unsigned char unreflected_5981[0x3]; // 0x5981 (0x3) 
	struct FGameplayTag OutsideSafeZoneGameplayCueTag; // 0x5984 (0x4)
	int SafeZonePhase; // 0x5988 (0x4)
	int WhichSafeZoneTag; // 0x598c (0x4)
	bool bOutsideSafeZoneGameplayCueActive; // 0x5990 (0x1)
	unsigned char unreflected_5991[0x7]; // 0x5991 (0x7) 
	struct FScalableFloat SafeZoneDamageScalableFloat; // 0x5998 (0x28)
	bool bFrontendPartyInProgress; // 0x59c0 (0x1)
	bool bLockOnInteractionComplete; // 0x59c1 (0x1)
	unsigned char unreflected_59c2[0x6]; // 0x59c2 (0x6) 
	struct FMulticastInlineDelegate ResIn; // 0x59c8 (0x10)
	struct FMulticastInlineDelegate ResOut; // 0x59d8 (0x10)
	struct FMulticastInlineDelegate SwingRight; // 0x59e8 (0x10)
	struct FMulticastInlineDelegate SwingLeft; // 0x59f8 (0x10)
	bool bSkeletalArrayReady; // 0x5a08 (0x1)
	unsigned char unreflected_5a09[0x3]; // 0x5a09 (0x3) 
	int CurDissolveSetupAttempt; // 0x5a0c (0x4)
	class USoundBase* DBNOEnterSound; // 0x5a10 (0x8)
	struct FMulticastInlineDelegate onFadeToWhiteTeleported; // 0x5a18 (0x10)
	bool IsAshton; // 0x5a28 (0x1)
	unsigned char unreflected_5a29[0x7]; // 0x5a29 (0x7) 
	class UParticleSystemComponent* Ashton; // 0x5a30 (0x8)
	struct FMulticastInlineDelegate SwingRightEnd; // 0x5a38 (0x10)
	struct FMulticastInlineDelegate SwingLeftEnd; // 0x5a48 (0x10)
	struct FGameplayTag PhoneGhostCue; // 0x5a58 (0x4)
	struct FGameplayTag WhiteoutCue; // 0x5a5c (0x4)
	struct FGameplayTag OutsideSafeZoneCue; // 0x5a60 (0x4)
	struct FGameplayTag OutsideSafeZone2Cue; // 0x5a64 (0x4)
	struct FGameplayTag OutsideSafeZone3Cue; // 0x5a68 (0x4)
	bool PlayRespawnFXOnSpawn; // 0x5a6c (0x1)
	unsigned char unreflected_5a6d[0x3]; // 0x5a6d (0x3) 
	class AFortPlayerPawnAthena* PlayerPawnAthena; // 0x5a70 (0x8)
	struct FMulticastInlineDelegate SwingRight2; // 0x5a78 (0x10)
	struct FMulticastInlineDelegate SwingLeft2; // 0x5a88 (0x10)
	bool TestProceduralWaterInIsolation; // 0x5a98 (0x1)
	bool NewVar0; // 0x5a99 (0x1)
	bool IsFirstWaterBody; // 0x5a9a (0x1)
	bool IsLastWaterBody; // 0x5a9b (0x1)
	unsigned char unreflected_5a9c[0x4]; // 0x5a9c (0x4) 
	double AccumulatedNormalizedDiveSpeed; // 0x5aa0 (0x8)
	struct FGameplayTag WaterSprintBoostTag; // 0x5aa8 (0x4)
	unsigned char unreflected_5aac[0x4]; // 0x5aac (0x4) 
	struct FMulticastInlineDelegate CCPMisHiddenInProp; // 0x5ab0 (0x10)
	struct TMap<class UObject*, struct FPawnHighlight> PawnHighlights; // 0x5ac0 (0x50)
	class UObject* CurrentHighlightSource; // 0x5b10 (0x8)
	double CurrentHighlightPriority; // 0x5b18 (0x8)
	struct FPawnHighlight InvulnerableHighlight; // 0x5b20 (0x30)
	bool IsGalileo; // 0x5b50 (0x1)
	unsigned char unreflected_5b51[0x7]; // 0x5b51 (0x7) 
	struct FScalableFloat HotFixSnow; // 0x5b58 (0x28)
	struct TSet<struct FName> NoSnowPlaylists; // 0x5b80 (0x50)
	struct FGameplayTag GalileoPlaylistTag; // 0x5bd0 (0x4)
	unsigned char unreflected_5bd4[0x4]; // 0x5bd4 (0x4) 
	struct TArray<class UMaterialInstanceDynamic*> WeaponMIDs; // 0x5bd8 (0x10)
	int AmountOfTimesToAttemptRestoreMats; // 0x5be8 (0x4)
	struct FGameplayTag TCPawnAthenaNPC; // 0x5bec (0x4)
	double HitGlowBrightnessScalar; // 0x5bf0 (0x8)
	struct TArray<class UMaterialInterface*> CurrentWeaponMaterials; // 0x5bf8 (0x10)
	struct TArray<class USkeletalMeshComponent*> CurrentWeaponMeshes; // 0x5c08 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> WeaponDissolveMIDs; // 0x5c18 (0x10)
	double HitGlowBrightnessScalarMobile; // 0x5c28 (0x8)
	struct FGameplayTag TCPawnAthenaDecoy; // 0x5c30 (0x4)
	unsigned char unreflected_5c34[0x4]; // 0x5c34 (0x4) 
	double ScaleRate; // 0x5c38 (0x8)
	struct FGameplayTagContainer TetherQuestTag; // 0x5c40 (0x20)
	struct FName FirefliesTag; // 0x5c60 (0x4)
	unsigned char unreflected_5c64[0xc]; // 0x5c64 (0xc) 
	struct FTransform RightSideRimTransform; // 0x5c70 (0x60)
	class USpotLightComponent* RightSideRimLight; // 0x5cd0 (0x8)
	double RimlightShadowBias; // 0x5cd8 (0x8)
	double RimLightAttenuationRadius; // 0x5ce0 (0x8)
	double RimLightIntensity; // 0x5ce8 (0x8)
	struct FRotator PlayerAimRotation; // 0x5cf0 (0x18)
	struct FScalableFloat ControlRotationReplicationTickRate; // 0x5d08 (0x28)
	struct FGameplayTag EliminationRezSequenceGC; // 0x5d30 (0x4)
	struct FGameplayTag CreativeRespawnTeleportationGC; // 0x5d34 (0x4)
	struct FGameplayTag TeleportInGC; // 0x5d38 (0x4)
	unsigned char unreflected_5d3c[0x4]; // 0x5d3c (0x4) 
	double RimlightDistanceFromCamera; // 0x5d40 (0x8)
	double RimlightOffsetFromCamera; // 0x5d48 (0x8)
	struct FLinearColor RimLightColorNight; // 0x5d50 (0x10)
	struct FLinearColor RimLightColorDay; // 0x5d60 (0x10)
	struct FGameplayTag PhoneModeratorModeGameplayCue; // 0x5d70 (0x4)
	struct FGameplayTag PhoneInvulnerableGameplayCue; // 0x5d74 (0x4)
	bool SwingingHandsUp; // 0x5d78 (0x1)
	bool SwingingLockedToHip; // 0x5d79 (0x1)
	unsigned char unreflected_5d7a[0x6]; // 0x5d7a (0x6) 
	double InputDragCoefficient; // 0x5d80 (0x8)
	bool ToggleSwingNativized; // 0x5d88 (0x1)
	unsigned char unreflected_5d89[0x7]; // 0x5d89 (0x7) 
	class UAudioComponent* SwingingSound; // 0x5d90 (0x8)
	class UCurveFloat* SwingingReelingInCurve; // 0x5d98 (0x8)
	class UCurveFloat* SwingingNotReelingInCurve; // 0x5da0 (0x8)
	struct FVector SwingingOriginalVecToTarget; // 0x5da8 (0x18)
	bool SwingingReelingIn; // 0x5dc0 (0x1)
	unsigned char unreflected_5dc1[0x7]; // 0x5dc1 (0x7) 
	double SwingingGoalLength; // 0x5dc8 (0x8)
	class UCurveFloat* SwingingReelingTimeCurve; // 0x5dd0 (0x8)
	bool SwingingColliderBigger; // 0x5dd8 (0x1)
	unsigned char unreflected_5dd9[0x7]; // 0x5dd9 (0x7) 
	struct TArray<struct FAudioParameter> SoundParams; // 0x5de0 (0x10)
	bool SwingingUseNewRotationAlgorithm; // 0x5df0 (0x1)
	unsigned char unreflected_5df1[0x7]; // 0x5df1 (0x7) 
	struct FVector AttachedWallInverseNormal; // 0x5df8 (0x18)
	double WallCheckDistance; // 0x5e10 (0x8)
	struct FVector VelocityOnSlideStart; // 0x5e18 (0x18)
	double SlideStartTime; // 0x5e30 (0x8)
	double MaxSlideTime; // 0x5e38 (0x8)
	class UCurveVector* WallSlidingVelocityMultiplierCurve; // 0x5e40 (0x8)
	class UCurveFloat* WallSlidingAddedDownwardVelocityMultiplierCurve; // 0x5e48 (0x8)
	double WallSlidingAddedDownwardVelocityMax; // 0x5e50 (0x8)
	struct FVector AttachedWallNormal; // 0x5e58 (0x18)
	struct FVector WallSlidingVelocity; // 0x5e70 (0x18)
	double DesiredDistanceToAttachedWall; // 0x5e88 (0x8)
	double MinGroundSlopeToLeaveAttachedWall; // 0x5e90 (0x8)
	struct FFortGameplayAbilityMontageInfo OverrideSearchMontageInfo; // 0x5e98 (0x58)
	struct FMulticastInlineDelegate DisplayHitNotify; // 0x5ef0 (0x10)
	bool IsHiddingCharacterParrts; // 0x5f00 (0x1)
	unsigned char unreflected_5f01[0x7]; // 0x5f01 (0x7) 
	double RimlightMultiplier; // 0x5f08 (0x8)
	bool RimlightEnabled; // 0x5f10 (0x1)

	/* Functions */

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.GoToHUBIslandIfOutOfBounds (Has no native function)
	void GoToHUBIslandIfOutOfBounds(bool& CallFuncIsBattleLabModePlaylistReturnValue, class APlayerController*& CallFuncGetPlayerControllerReturnValue, class AFortPlayerControllerAthena*& K2NodeDynamicCastAsFortPlayerControllerAthena, bool& K2NodeDynamicCastbSuccess, class AFortMinigame*& CallFuncGetMinigameReturnValue, bool& CallFuncIsValidReturnValue); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.GetRightAxis (Has no native function)
	void GetRightAxis(double& ReturnValue, float& CallFuncGetInputAxisValueReturnValue, float& CallFuncGetInputAxisValueReturnValue1, double& CallFuncAddDoubleDoubleReturnValue, double& CallFuncAddDoubleDoubleBImplicitCast, double& CallFuncAddDoubleDoubleAImplicitCast); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.GetForwardAxis (Has no native function)
	void GetForwardAxis(double& ReturnValue, float& CallFuncGetInputAxisValueReturnValue, float& CallFuncGetInputAxisValueReturnValue1, double& CallFuncAddDoubleDoubleReturnValue, double& CallFuncAddDoubleDoubleBImplicitCast, double& CallFuncAddDoubleDoubleAImplicitCast); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.AttemptToSetRimLight (Has no native function)
	void AttemptToSetRimLight(class APhysicalRimlight_C*& K2NodeDynamicCastAsPhysicalRimlight, bool& K2NodeDynamicCastbSuccess, bool& CallFuncArrayIsValidIndexReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.GetPawnIsInLocalSquad (Has no native function)
	void GetPawnIsInLocalSquad(bool& IsInLocalSquad, unsigned char& ThisPawnSquadID, class APawn*& CallFuncGetPlayerPawnReturnValue, class AFortPlayerState*& CallFuncAttemptGetPlayerStateForPawnReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, class AFortPlayerStateAthena*& K2NodeDynamicCastAsFortPlayerStateAthena, bool& K2NodeDynamicCastbSuccess1, class AFortPlayerState*& CallFuncAttemptGetPlayerStateForPawnReturnValue1, unsigned char& CallFuncGetSquadIdReturnValue, class AFortPlayerStateAthena*& K2NodeDynamicCastAsFortPlayerStateAthena1, bool& K2NodeDynamicCastbSuccess2, unsigned char& CallFuncGetSquadIdReturnValue1, bool& CallFuncEqualEqualByteByteReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.Swinging_AttachLocation (Has no native function)
	void SwingingAttachLocation(struct FVector& Location, bool& AttachPointExists, struct FVector& CallFuncK2GetActorLocationReturnValue, bool& CallFuncIsValidReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.Swinging_ResetMeshTransform (Has no native function)
	void SwingingResetMeshTransform(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.Swinging_SetJumpHeight (Has no native function)
	void SwingingSetJumpHeight(double& JumpZVelocity, class UFortMovementComp_Character*& K2NodeDynamicCastAsFortMovementCompCharacter, bool& K2NodeDynamicCastbSuccess); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.IsSwingGrounded (Has no native function)
	void IsSwingGrounded(bool& IsSwingingGrounded, class AController*& CallFuncGetControllerReturnValue, class UFortControllerComponent_Swinging*& CallFuncGetComponentByClassReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsSwingingGroundedReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.SwingingVectorToAttachPoint (Has no native function)
	struct FVector SwingingVectorToAttachPoint(struct FString& callerID); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.Swinging_StopReelingIn (Has no native function)
	void SwingingStopReelingIn(class UFortMovementComp_Character*& K2NodeDynamicCastAsFortMovementCompCharacter, bool& K2NodeDynamicCastbSuccess); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.Swinging_StartReelingIn (Has no native function)
	void SwingingStartReelingIn(class UFortMovementComp_Character*& K2NodeDynamicCastAsFortMovementCompCharacter, bool& K2NodeDynamicCastbSuccess); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.Swing_GetStartPoint (Has no native function)
	struct FVector SwingGetStartPoint(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.IsSwingAttached (Has no native function)
	void IsSwingAttached(bool& IsSwingAttached, class AController*& CallFuncGetControllerReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, class UFortControllerComponent_Swinging*& CallFuncGetComponentByClassReturnValue, bool& CallFuncIsSwingAttachedReturnValue, bool& CallFuncBooleanANDReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.SwingDetached (Has no native function)
	void SwingDetached(class AController*& CallFuncGetControllerReturnValue, class UFortControllerComponent_Swinging*& CallFuncGetComponentByClassReturnValue, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.SwingAttached (Has no native function)
	void SwingAttached(struct FVector& AttachLocation, class AActor*& AttachedActor, class AController*& CallFuncGetControllerReturnValue, class UFortControllerComponent_Swinging*& CallFuncGetComponentByClassReturnValue, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.IsSwinging (Has no native function)
	void IsSwinging(bool& IsSwinging, class AController*& CallFuncGetControllerReturnValue, class UFortControllerComponent_Swinging*& CallFuncGetComponentByClassReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsInSwingingMovementReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.Swinging_CheckGrounded (Has no native function)
	void SwingingCheckGrounded(bool& Grounded, struct FVector& HitNormal, double& Distance, struct TArray<class AActor*>& TempobjectVariable, struct FVector& CallFuncK2GetComponentLocationReturnValue, float& CallFuncGetScaledCapsuleRadiusReturnValue, float& CallFuncGetScaledCapsuleHalfHeightReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, struct FVector& CallFuncMakeVectorReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, struct FHitResult& CallFuncSphereTraceSingleByProfileOutHit, bool& CallFuncSphereTraceSingleByProfileReturnValue, bool& CallFuncBreakHitResultbBlockingHit, bool& CallFuncBreakHitResultbInitialOverlap, float& CallFuncBreakHitResultTime, float& CallFuncBreakHitResultDistance, struct FVector& CallFuncBreakHitResultLocation, struct FVector& CallFuncBreakHitResultImpactPoint, struct FVector& CallFuncBreakHitResultNormal, struct FVector& CallFuncBreakHitResultImpactNormal, class UPhysicalMaterial*& CallFuncBreakHitResultPhysMat, class AActor*& CallFuncBreakHitResultHitActor, class UPrimitiveComponent*& CallFuncBreakHitResultHitComponent, struct FName& CallFuncBreakHitResultHitBoneName, struct FName& CallFuncBreakHitResultBoneName, int& CallFuncBreakHitResultHitItem, int& CallFuncBreakHitResultElementIndex, int& CallFuncBreakHitResultFaceIndex, struct FVector& CallFuncBreakHitResultTraceStart, struct FVector& CallFuncBreakHitResultTraceEnd, struct FVector& CallFuncSelectVectorReturnValue, double& K2NodeFunctionResultDistanceImplicitCast, double& CallFuncMultiplyDoubleDoubleAImplicitCast); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.K2_UpdateCustomMovement (Has no native function)
	void K2UpdateCustomMovement(float& DeltaTime, class UCharacterMovementComponent*& MovementComponent, double& DT); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnRep_PlayerAimRotation (Has no native function)
	void OnRepPlayerAimRotation(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.GetAimPoint (Has no native function)
	void GetAimPoint(struct FRotator& ControlRotation, struct FRotator& CallFuncGetControlRotationReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.PawnIsDecoy (Has no native function)
	bool PawnIsDecoy(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.PawnIsNPC (Has no native function)
	bool PawnIsNPC(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSkeletalMeshComponentsFromWeaponObject (Has no native function)
	void RemoveSkeletalMeshComponentsFromWeaponObject(class AFortWeapon*& WeaponObject, int& ComponentIndexOffset, int& TempintVariable, bool& CallFuncIsValidReturnValue, int& CallFuncAddIntIntReturnValue, struct TArray<class USkeletalMeshComponentBudgeted*>& CallFuncGetWeaponMeshesWeaponMeshes, int& TempintLoopCounterVariable, int& CallFuncArrayLengthReturnValue, int& CallFuncAddIntIntReturnValue1, bool& CallFuncLessIntIntReturnValue, int& TempintArrayIndexVariable, class UMaterialInterface*& TempwildcardVariable, class USkeletalMeshComponentBudgeted*& CallFuncArrayGetItem, int& CallFuncGetNumMaterialsReturnValue, int& CallFuncSubtractIntIntReturnValue, bool& CallFuncLessEqualIntIntReturnValue, int& CallFuncArrayLengthReturnValue1, bool& CallFuncConvIntToBoolReturnValue, int& CallFuncAddIntIntReturnValue2, int& CallFuncAddIntIntReturnValue3, class UMaterialInterface*& CallFuncArrayGetItem1, bool& CallFuncArrayIsValidIndexReturnValue, bool& CallFuncArrayRemoveItemReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.AddSkeletalMeshComponentsFromWeaponObject (Has no native function)
	void AddSkeletalMeshComponentsFromWeaponObject(class AFortWeapon*& WeaponObject, class UMaterialInterface*& TempobjectVariable, bool& CallFuncIsValidReturnValue, struct TArray<class USkeletalMeshComponentBudgeted*>& CallFuncGetWeaponMeshesWeaponMeshes, int& CallFuncArrayLengthReturnValue, int& TempintArrayIndexVariable, bool& TempboolVariable, class USkeletalMeshComponentBudgeted*& CallFuncArrayGetItem, struct TArray<class UMaterialInterface*>& CallFuncGetMaterialsReturnValue, bool& CallFuncPawnIsNPCReturnValue, class UMaterialInterface*& K2NodeSelectDefault, bool& CallFuncSetupDissolveFxReturnValue, int& CallFuncArrayAddUniqueReturnValue, int& TempintLoopCounterVariable, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.GalileoMaterialSetup (Has no native function)
	void GalileoMaterialSetup(int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& CallFuncArrayLengthReturnValue, class UMaterialInstanceDynamic*& CallFuncArrayGetItem, bool& CallFuncLessIntIntReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.Get Highest Priority Highlight (Has no native function)
	void GetHighestPriorityHighlight(class UObject*& Source, struct FPawnHighlight& TopPriority, class UObject*& BestSource, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, struct FPawnHighlight& CallFuncMapFindValue, bool& CallFuncMapFindReturnValue, struct TArray<class UObject*>& CallFuncMapKeysKeys, class UObject*& CallFuncArrayGetItem, struct FPawnHighlight& CallFuncMapFindValue1, bool& CallFuncMapFindReturnValue1, struct FPawnHighlight& CallFuncMapFindValue2, bool& CallFuncMapFindReturnValue2, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, bool& CallFuncGreaterEqualDoubleDoubleReturnValue, double& CallFuncGreaterEqualDoubleDoubleBImplicitCast, double& CallFuncGreaterEqualDoubleDoubleAImplicitCast); // (Private | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.Highlight Pawn from Source (Has no native function)
	void HighlightPawnfromSource(class UObject*& Source, struct FPawnHighlight& Highlight, bool& OnlyUpdateIfCurrent, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncEqualEqualObjectObjectReturnValue, bool& CallFuncGreaterEqualDoubleDoubleReturnValue, struct FPawnHighlight& CallFuncMapFindValue, bool& CallFuncMapFindReturnValue, double& CallFuncGreaterEqualDoubleDoubleAImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.Remove Pawn Highlight from Source (Has no native function)
	void RemovePawnHighlightfromSource(class UObject*& Source, class UObject*& CallFuncGetHighestPriorityHighlightSource, struct FPawnHighlight& CallFuncGetHighestPriorityHighlightTopPriority, bool& CallFuncEqualEqualObjectObjectReturnValue, bool& CallFuncMapRemoveReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.ApplyPawnHighlight (Has no native function)
	void ApplyPawnHighlight(class UObject*& Source, struct FPawnHighlight& HitGlow, double& CallFuncAddDoubleDoubleReturnValue, int& TempintLoopCounterVariable, int& TempintArrayIndexVariable, int& CallFuncAddIntIntReturnValue, int& CallFuncArrayLengthReturnValue, class UMaterialInstanceDynamic*& CallFuncArrayGetItem, bool& CallFuncLessIntIntReturnValue, double& K2NodeVariableSetCurrentHighlightPriorityImplicitCast, double& CallFuncAddDoubleDoubleAImplicitCast, float& CallFuncSetScalarParameterValueValueImplicitCast); // (Private | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnRep_PlayRespawnFXOnSpawn (Has no native function)
	void OnRepPlayRespawnFXOnSpawn(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.LockonSearchCompleteTimedOut (Has no native function)
	void LockonSearchCompleteTimedOut(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnLockOnSearchCompleted (Has no native function)
	void OnLockOnSearchCompleted(bool& bConsumeEvent, struct FTimerHandle*& CallFuncK2SetTimerReturnValue); // (Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.SetPartyInProgress (Has no native function)
	void SetPartyInProgress(bool& bIsPartyInProgress); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.CleanUpTeleportationFXLight (Has no native function)
	void CleanUpTeleportationFXLight(bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.RestoreCharacterMats (Has no native function)
	void RestoreCharacterMats(bool& bFullyCompleted, int& CurrentReplacementIndex, int& Itr, int& TempintLoopCounterVariable, class UMaterialInstanceDynamic*& TempwildcardVariable, int& CallFuncAddIntIntReturnValue, int& TempintLoopCounterVariable1, int& CallFuncAddIntIntReturnValue1, int& TempintArrayIndexVariable, int& TempintArrayIndexVariable1, class UMaterialInstanceDynamic*& CallFuncArrayGetItem, bool& CallFuncArrayIsValidIndexReturnValue, int& CallFuncAddIntIntReturnValue2, class USkeletalMeshComponent*& CallFuncArrayGetItem1, struct TArray<class UMaterialInterface*>& CallFuncGetMaterialsReturnValue, int& CallFuncArrayLengthReturnValue, int& CallFuncArrayLengthReturnValue1, bool& CallFuncLessIntIntReturnValue, bool& CallFuncLessIntIntReturnValue1, int& CallFuncArrayLengthReturnValue2, int& CallFuncAddIntIntReturnValue3); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.SetPetHidden (Has no native function)
	void SetPetHidden(bool& NewHidden, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.SetupDissolveFx (Has no native function)
	void SetupDissolveFx(bool& TempboolVariable, class UMaterialInterface*& TempobjectVariable, bool& CallFuncPawnIsNPCReturnValue, class UMaterialInterface*& K2NodeSelectDefault, bool& CallFuncSetupDissolveFxReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.CleanupDissolveFX (Has no native function)
	void CleanupDissolveFX(bool& TempboolVariable, class UMaterialInterface*& TempobjectVariable, bool& CallFuncPawnIsNPCReturnValue, class UMaterialInterface*& K2NodeSelectDefault); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.UpdateDissolveFx (Has no native function)
	void UpdateDissolveFx(double& ScalarTransition, double& ScalarZHeight, double& ScalarLightIntensity, float& CallFuncUpdateDissolveFxTransitionImplicitCast, float& CallFuncUpdateDissolveFxTransitionImplicitCast1, float& CallFuncUpdateDissolveFxZHeightImplicitCast, float& CallFuncUpdateDissolveFxZHeightImplicitCast1, float& CallFuncUpdateDissolveFxLightIntensityImplicitCast, float& CallFuncUpdateDissolveFxLightIntensityImplicitCast1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.SpawnTeleportationLight (Has no native function)
	void SpawnTeleportationLight(bool& CallFuncPawnIsNPCReturnValue, struct FTransform& CallFuncMakeTransformReturnValue, bool& CallFuncIsValidReturnValue, class UPointLightComponent*& CallFuncAddComponentReturnValue, bool& CallFuncIsMobilePlatformReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.FindBounds (Has no native function)
	void FindBounds(bool& bGunTrue, struct FVector& CallFuncGetActorBoundsOrigin, struct FVector& CallFuncGetActorBoundsBoxExtent, struct FVector& CallFuncBreakTransformLocation, struct FRotator& CallFuncBreakTransformRotation, struct FVector& CallFuncBreakTransformScale, struct FVector& CallFuncMultiplyVectorVectorReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, struct FTransform& CallFuncMakeTransformReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, struct FVector& CallFuncMakeVectorReturnValue, struct FTransform& CallFuncMakeTransformReturnValue1, struct FVector& CallFuncBreakTransformLocation1, struct FRotator& CallFuncBreakTransformRotation1, struct FVector& CallFuncBreakTransformScale1, double& CallFuncVSizeReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.QueueTeleportOut (Has no native function)
	void QueueTeleportOut(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.QueueTeleportIn (Has no native function)
	void QueueTeleportIn(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnStartLongInteract (Has no native function)
	void OnStartLongInteract(class AActor*& ReceivingActor, bool& OutbConsumeEvent, bool& OutbSkipSetInteractDuration, bool& OutbSkipStartAnimation, enum EItemInteractionType& OutItemInteractionType, bool& CallFuncActorHasTagReturnValue, bool& CallFuncActorHasTagReturnValue1, class AFortPlayerPawnAthena*& K2NodeDynamicCastAsFortPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess, struct FGameplayTag& CallFuncMakeLiteralGameplayTagReturnValue, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, bool& CallFuncIsValidReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue); // (Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.InWarmup (Has no native function)
	void InWarmup(bool& bInWarmup, class AGameStateBase*& CallFuncGetGameStateReturnValue, class AAthena_GameState_C*& K2NodeDynamicCastAsAthenaGameState, bool& K2NodeDynamicCastbSuccess, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncEqualEqualByteByteReturnValue1, bool& CallFuncBooleanORReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.StopLoopingAudio (Has no native function)
	void StopLoopingAudio(bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.EnableWaterAudio (Has no native function)
	void EnableWaterAudio(bool& IsEnteringWater, class USoundBase*& TempobjectVariable, class USoundBase*& TempobjectVariable1, bool& TempboolVariable, class USoundBase*& TempobjectVariable2, class USoundBase*& TempobjectVariable3, bool& TempboolVariable1, struct FVector& CallFuncGetVelocityReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, double& CallFuncVSizeReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, double& CallFuncMapRangeClampedReturnValue, bool& CallFuncIsLocallyControlledReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue1, struct FVector& CallFuncAddVectorVectorReturnValue1, class USoundBase*& K2NodeSelectDefault, double& CallFuncSelectFloatReturnValue, bool& CallFuncIsLocallyControlledReturnValue1, class UAudioComponent*& CallFuncSpawnSoundAtLocationReturnValue, struct TScriptInterface<class IAudioParameterControllerInterface>& CallFuncSetFloatParameterselfCastInput, class USoundBase*& K2NodeSelectDefault1, float& CallFuncSetFloatParameterInFloatImplicitCast, float& CallFuncSpawnSoundAtLocationVolumeMultiplierImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.GetLocationInCircle_XY (Has no native function)
	void GetLocationInCircleXY(struct FVector& LocationLocalSpace, struct FVector& CallFuncMakeVectorReturnValue, double& CallFuncRandomFloatReturnValue, double& CallFuncGetPIReturnValue, double& CallFuncRandomFloatInRangeReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, double& CallFuncLerpReturnValue, double& CallFuncCosReturnValue, double& CallFuncSinReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue1, double& CallFuncMultiplyDoubleDoubleReturnValue2, struct FVector& CallFuncMakeVectorReturnValue1, struct FVector& CallFuncVLerpReturnValue, float& CallFuncVLerpAlphaImplicitCast); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(struct FFortPlayerPawnStats& CallFuncGetDataTableRowFromNameOutRow, bool& CallFuncGetDataTableRowFromNameReturnValue, double& K2NodeVariableSetPlayerAttributesSpeedWalkImplicitCast, double& K2NodeVariableSetPlayerAttributesSpeedRunImplicitCast, double& K2NodeVariableSetPlayerAttributesSpeedSprintImplicitCast); // (Event | Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.Timeline_0__FinishedFunc (Has no native function)
	void Timeline0FinishedFunc(); // (BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.Timeline_0__UpdateFunc (Has no native function)
	void Timeline0UpdateFunc(); // (BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnReady_978607004CDEB137CACF38831BECEF40 (Has no native function)
	void OnReady978607004CDEB137CACF38831BECEF40(class AFortGameStateAthena*& GameState, class UFortPlaylist*& Playlist, struct FGameplayTagContainer& PlaylistContextTags); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.ReceivePossessed (Has no native function)
	void ReceivePossessed(class AController*& NewController); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveDestroyed (Has no native function)
	void ReceiveDestroyed(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.SafeZoneStatusChanged (Has no native function)
	void SafeZoneStatusChanged(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Equipping (Has no native function)
	void GameplayCueAthenaEquipping(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnDeathPlayEffects (Has no native function)
	void OnDeathPlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Player.BeingRevivedFromDBNO (Has no native function)
	void GameplayCueAthenaPlayerBeingRevivedFromDBNO(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveStormFX (Has no native function)
	void RemoveStormFX(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2 (Has no native function)
	void GameplayCueAbilitiesActivationGenericHarvestBuffTier2(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.DBNOResurrect (Has no native function)
	void GameplayCueAbilitiesActivationDBNOResurrect(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredWaterVolume (Has no native function)
	void OnEnteredWaterVolume(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnExitedWaterVolume (Has no native function)
	void OnExitedWaterVolume(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1 (Has no native function)
	void GameplayCueAbilitiesActivationGenericHarvestBuffTier1(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.NotifyTeammateSkydivedFromBus (Has no native function)
	void NotifyTeammateSkydivedFromBus(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveEndPlay (Has no native function)
	void ReceiveEndPlay(struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnLeftReplayRelevancy (Has no native function)
	void OnLeftReplayRelevancy(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredReplayRelevancy (Has no native function)
	void OnEnteredReplayRelevancy(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnCharacterCustomizationCompleted (Has no native function)
	void OnCharacterCustomizationCompleted(class AFortPlayerPawn*& Pawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnResInDuringWarmup (Has no native function)
	void OnResInDuringWarmup(); // (BlueprintCosmetic | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.AddStormFX (Has no native function)
	void AddStormFX(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.SetSafeZonePhaseAndGameplayCueTag (Has no native function)
	void SetSafeZonePhaseAndGameplayCueTag(int& InSafeZonePhase, bool& bSpawnGameplayCue); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.SetSafeZoneTagWhenChanged (Has no native function)
	void SetSafeZoneTagWhenChanged(int& NewWhichSafeZoneTag, struct FGameplayTag& GameplayTag, bool& bSpawnGameplayCue); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnOutsideSafeZonePhaseChanged (Has no native function)
	void OnOutsideSafeZonePhaseChanged(int& SafeZonePhase); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSafeZoneGameplayCue (Has no native function)
	void RemoveSafeZoneGameplayCue(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnReceivedStormSurgeDamage (Has no native function)
	void OnReceivedStormSurgeDamage(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingLeft (Has no native function)
	void MeleeSwingLeft(bool& FirstLeft); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingRight (Has no native function)
	void MeleeSwingRight(bool& FirstRight); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.DBNOEnter (Has no native function)
	void GameplayCueAbilitiesActivationDBNOEnter(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.ActivateInvincibleVisuals (Has no native function)
	void ActivateInvincibleVisuals(double& Duration); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Reloading (Has no native function)
	void GameplayCueAthenaReloading(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.TeleportInNSeconds (Has no native function)
	void TeleportInNSeconds(double& SecondsTillTeleport, struct FVector& DestLocation, struct FRotator& DestRotation); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.ClientRunSnowGC (Has no native function)
	void ClientRunSnowGC(bool& Instant); // (Net | NetClient | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.WhiteoutAndTeleport (Has no native function)
	void WhiteoutAndTeleport(struct FVector& DestLocation, struct FRotator& DestRotation, bool& Instant, double& Gravity); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Boost (Has no native function)
	void GameplayCueAthenaBoost(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStopGhost (Has no native function)
	void OnCreativeStopGhost(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStartGhost (Has no native function)
	void OnCreativeStartGhost(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingLeft_End (Has no native function)
	void MeleeSwingLeftEnd(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingRight_End (Has no native function)
	void MeleeSwingRightEnd(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.AddSafeZoneGameplayCue (Has no native function)
	void AddSafeZoneGameplayCue(); // (Net | NetClient | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSafeZoneGameplayCueServerToClient (Has no native function)
	void RemoveSafeZoneGameplayCueServerToClient(); // (Net | NetClient | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnSuccessfulBuildingEdit (Has no native function)
	void OnSuccessfulBuildingEdit(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.Play Respawn FX (Has no native function)
	void PlayRespawnFX(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnSpawnImmunityTimeReset (Has no native function)
	void OnSpawnImmunityTimeReset(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredWaterBody (Has no native function)
	void OnEnteredWaterBody(class AFortWaterBodyActor*& WaterBody, bool& bIsFirstBody); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnExitedWaterBody (Has no native function)
	void OnExitedWaterBody(class AFortWaterBodyActor*& WaterBody, bool& bIsLastBody); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.K2_OnMovementModeChanged (Has no native function)
	void K2OnMovementModeChanged(struct TEnumAsByte<EMovementMode>& PrevMovementMode, struct TEnumAsByte<EMovementMode>& NewMovementMode, unsigned char& PrevCustomMode, unsigned char& NewCustomMode); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnBeginWaterSprintBoost (Has no native function)
	void OnBeginWaterSprintBoost(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.isHiddingInProp (Has no native function)
	void isHiddingInProp(bool& IsHidden); // (Net | NetReliable | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnLandscapeCheckFailedAndTeleported (Has no native function)
	void OnLandscapeCheckFailedAndTeleported(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.ScalePlayerUp (Has no native function)
	void ScalePlayerUp(); // (Net | NetReliable | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.ScalePlayerDown (Has no native function)
	void ScalePlayerDown(); // (Net | NetReliable | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetheredExitPressed (Has no native function)
	void OnTetheredExitPressed(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetheredExitReleased (Has no native function)
	void OnTetheredExitReleased(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetherStarted (Has no native function)
	void OnTetherStarted(class APawn*& LastTetherPawn); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetherEnded (Has no native function)
	void OnTetherEnded(class APawn*& LastTetherPawn); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.StartAImRotationTick (Has no native function)
	void StartAImRotationTick(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.EndRotationTick (Has no native function)
	void EndRotationTick(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.ReplicateAimRotation (Has no native function)
	void ReplicateAimRotation(struct FRotator& PlayerAimRotation); // (Net | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.AimTick (Has no native function)
	void AimTick(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Damage (Has no native function)
	void GameplayCueDamage(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Healing (Has no native function)
	void GameplayCueHealing(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Damage.Shielded (Has no native function)
	void GameplayCueDamageShielded(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Shield.PotionConsumed (Has no native function)
	void GameplayCueShieldPotionConsumed(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.SetupColdTag (Has no native function)
	void SetupColdTag(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.ApplyColdTag (Has no native function)
	void ApplyColdTag(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.ApplyColdTag_Retry (Has no native function)
	void ApplyColdTagRetry(class UFortAbilitySystemComponent*& AbilitySystemComponent, class AFortPlayerPawn*& AffectedPawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeModeratorModeActivate (Has no native function)
	void OnCreativeModeratorModeActivate(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeModeratorModeDeactivate (Has no native function)
	void OnCreativeModeratorModeDeactivate(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStartInvulnerable (Has no native function)
	void OnCreativeStartInvulnerable(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStopInvulnerable (Has no native function)
	void OnCreativeStopInvulnerable(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.AddHighlightFromSource (Has no native function)
	void AddHighlightFromSource(class UObject*& Source, struct FPawnHighlight& Highlight, bool& OnlyUpdateIfCurrent); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveHighlightFromSource (Has no native function)
	void RemoveHighlightFromSource(class UObject*& Source); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveHit (Has no native function)
	void ReceiveHit(class UPrimitiveComponent*& MyComp, class AActor*& Other, class UPrimitiveComponent*& OtherComp, bool& bSelfMoved, struct FVector& HitLocation, struct FVector& HitNormal, struct FVector& NormalImpulse, struct FHitResult& Hit); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnDisplayHitNotify (Has no native function)
	void OnDisplayHitNotify(float& DamageDealt, bool& bCriticalHit, bool& bFatalHit, bool& bShieldHit, class AActor*& HitActor, struct FGameplayTagContainer& HitTags, struct FVector& HitLocation); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.Hide Character Parts (Has no native function)
	void HideCharacterParts(bool& IsHidden); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.OnPart (Has no native function)
	void OnPart(class AFortPlayerPawn*& Pawn, class UCustomCharacterPart*& Part, class USkeletalMeshComponent*& MeshPart, struct TEnumAsByte<EFortCustomPartType>& PartType); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.ExecuteUbergraph_PlayerPawn_Athena (Has no native function)
	void ExecuteUbergraphPlayerPawnAthena(int& EntryPoint, struct FTimerHandle*& CallFuncK2SetTimerReturnValue, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType7, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters7, double& TemprealVariable, bool& K2NodeSwitchEnumCmpSuccess, bool& CallFuncIsMobilePlatformReturnValue, bool& CallFuncIsMobilePlatformReturnValue1, bool& CallFuncHasAuthorityReturnValue, bool& CallFuncIsLocallyControlledReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncIsLocallyControlledReturnValue1, bool& CallFuncBooleanANDReturnValue1, struct TEnumAsByte<EEndPlayReason>& K2NodeEventEndPlayReason, struct FRotator& CallFuncK2GetComponentRotationReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAttachedReturnValue, struct FVector& CallFuncK2GetComponentLocationReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue, bool& CallFuncNotEqualBoolBoolReturnValue, class AFortPlayerPawn*& K2NodeCustomEventPawn1, struct FDelegate& K2NodeCreateDelegateOutputDelegate, double& TemprealVariable1, bool& TempboolVariable, struct FVector& CallFuncK2GetComponentLocationReturnValue1, class AGameStateBase*& CallFuncGetGameStateReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue1, class AFortGameStateAthena*& K2NodeDynamicCastAsFortGameStateAthena, bool& K2NodeDynamicCastbSuccess, int& CallFuncGetSafeZonePhaseReturnValue, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue, int& K2NodeCustomEventInSafeZonePhase, bool& K2NodeCustomEventbSpawnGameplayCue1, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, int& K2NodeCustomEventNewWhichSafeZoneTag, struct FGameplayTag& K2NodeCustomEventGameplayTag, bool& K2NodeCustomEventbSpawnGameplayCue, int& K2NodeEventSafeZonePhase, bool& CallFuncNotEqualIntIntReturnValue, bool& K2NodeEventFirstLeft, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue1, class UParticleSystemComponent*& CallFuncSpawnEmitterAttachedReturnValue1, bool& K2NodeEventFirstRight, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType6, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters6, struct FVector& CallFuncK2GetActorLocationReturnValue, bool& K2NodeSwitchEnumCmpSuccess1, int& TempintArrayIndexVariable, double& K2NodeCustomEventDuration, unsigned char& CallFuncGetActorTeamReturnValue, struct TEnumAsByte<EFortTeamAffiliation>& CallFuncGetTeamAffiliationToLocalPlayerReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& K2NodeSwitchEnumCmpSuccess2, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue1, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType8, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters8, float& CallFuncBreakGameplayCueParametersNormalizedMagnitude, float& CallFuncBreakGameplayCueParametersRawMagnitude, struct FGameplayEffectContextHandle& CallFuncBreakGameplayCueParametersEffectContext, struct FGameplayTag& CallFuncBreakGameplayCueParametersMatchedTagName, struct FGameplayTag& CallFuncBreakGameplayCueParametersOriginalTag, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedSourceTags, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedTargetTags, struct FVector& CallFuncBreakGameplayCueParametersLocation, struct FVector& CallFuncBreakGameplayCueParametersNormal, class AActor*& CallFuncBreakGameplayCueParametersInstigator, class AActor*& CallFuncBreakGameplayCueParametersEffectCauser, class UObject*& CallFuncBreakGameplayCueParametersSourceObject, class UPhysicalMaterial*& CallFuncBreakGameplayCueParametersPhysicalMaterial, int& CallFuncBreakGameplayCueParametersGameplayEffectLevel, int& CallFuncBreakGameplayCueParametersAbilityLevel, class USceneComponent*& CallFuncBreakGameplayCueParametersTargetAttachComponent, bool& CallFuncBreakGameplayCueParametersbReplicateLocationWhenUsingMinimalRepProxy, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType9, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters9, bool& K2NodeSwitchEnumCmpSuccess3, class APlayerController*& CallFuncGetLocalViewingPlayerControllerReturnValue, class AFortPlayerControllerSpectating*& K2NodeDynamicCastAsFortPlayerControllerSpectating, bool& K2NodeDynamicCastbSuccess1, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType10, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters10, bool& CallFuncIsLocallyControlledReturnValue2, bool& CallFuncIsLocallyControlledReturnValue3, class APlayerController*& CallFuncGetLocalViewingPlayerControllerReturnValue1, class AFortPlayerControllerSpectating*& K2NodeDynamicCastAsFortPlayerControllerSpectating1, bool& K2NodeDynamicCastbSuccess2, float& K2NodeEventDamage, struct FGameplayTagContainer& K2NodeEventDamageTags, struct FVector& K2NodeEventMomentum, struct FHitResult& K2NodeEventHitInfo, class AFortPawn*& K2NodeEventInstigatedBy, class AActor*& K2NodeEventDamageCauser, struct FGameplayEffectContextHandle& K2NodeEventEffectContext, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType5, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters5, double& K2NodeCustomEventSecondsTillTeleport, struct FVector& K2NodeCustomEventDestLocation1, struct FRotator& K2NodeCustomEventDestRotation1, bool& K2NodeCustomEventInstant1, struct FVector& K2NodeCustomEventDestLocation, struct FRotator& K2NodeCustomEventDestRotation, bool& K2NodeCustomEventInstant, double& K2NodeCustomEventGravity, bool& CallFuncEqualEqualDoubleDoubleReturnValue, double& K2NodeSelectDefault, bool& CallFuncEqualEqualDoubleDoubleReturnValue1, bool& CallFuncK2TeleportToReturnValue, float& CallFuncConvBoolToFloatReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue2, bool& CallFuncIsLocallyControlledReturnValue4, class APlayerController*& CallFuncGetLocalViewingPlayerControllerReturnValue2, class AFortPlayerControllerSpectating*& K2NodeDynamicCastAsFortPlayerControllerSpectating2, bool& K2NodeDynamicCastbSuccess3, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType11, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters11, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType4, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters4, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAllMatchingGameplayTagsTagContainerInterfaceCastInput, bool& CallFuncHasAllMatchingGameplayTagsReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue, bool& CallFuncIsValidReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue3, struct FVector& CallFuncK2GetComponentLocationReturnValue2, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& CallFuncArrayLengthReturnValue, class APlayerController*& CallFuncGetLocalViewingPlayerControllerReturnValue3, bool& CallFuncGreaterIntIntReturnValue, class AFortPlayerControllerSpectating*& K2NodeDynamicCastAsFortPlayerControllerSpectating3, bool& K2NodeDynamicCastbSuccess4, struct TScriptInterface<class IFortVehicleInterface>& CallFuncGetVehicleUInterfaceReturnValue, class AFortPlayerPawn*& CallFuncGetDriverReturnValue, class UObject*& CallFuncConvInterfaceToObjectReturnValue, class AActor*& CallFuncGetVehicleActorPtrConstReturnValue, bool& CallFuncIsValidReturnValue1, class AFortCharacterVehicle*& K2NodeDynamicCastAsFortCharacterVehicle, bool& K2NodeDynamicCastbSuccess5, bool& CallFuncIsLocallyControlledReturnValue5, bool& CallFuncEqualEqualObjectObjectReturnValue, float& CallFuncConvIntToFloatReturnValue, float& CallFuncGetValueAtLevelReturnValue, class AFortWaterBodyActor*& K2NodeEventWaterBody1, bool& K2NodeEventbIsFirstBody, bool& CallFuncLessDoubleDoubleReturnValue, bool& CallFuncLessEqualDoubleDoubleReturnValue, class AFortWaterBodyActor*& K2NodeEventWaterBody, bool& K2NodeEventbIsLastBody, struct TEnumAsByte<EMovementMode>& K2NodeEventPrevMovementMode, struct TEnumAsByte<EMovementMode>& K2NodeEventNewMovementMode, unsigned char& K2NodeEventPrevCustomMode, unsigned char& K2NodeEventNewCustomMode, bool& CallFuncIsSurfaceSwimmingReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncIsDedicatedServerReturnValue, float& CallFuncGetNumericCVarOutValue, bool& CallFuncGetNumericCVarReturnValue, bool& CallFuncIsValidReturnValue2, bool& CallFuncEqualEqualDoubleDoubleReturnValue2, bool& CallFuncIsInVehicleReturnValue, bool& CallFuncIsInAthenaReturnValue, bool& CallFuncIsDedicatedServerReturnValue1, bool& TempboolIsClosedVariable, bool& TempboolHasBeenInitdVariable, class AGameStateBase*& CallFuncGetGameStateReturnValue1, class AFortGameStateAthena*& K2NodeDynamicCastAsFortGameStateAthena1, bool& K2NodeDynamicCastbSuccess6, bool& CallFuncIsStormCNReturnValue, struct FVector& CallFuncGetLastWaterSurfaceInfoOutWaterSurfacePosition, struct FVector& CallFuncGetLastWaterSurfaceInfoOutWaterSurfaceNormal, struct FGameplayEventData& K2NodeMakeStructGameplayEventData, float& CallFuncGetWaterImmersionDepthReturnValue, double& CallFuncMapRangeClampedReturnValue, class AFortWaterBodyActor*& CallFuncGetCurrentWaterBodyReturnValue, class UFortMovementComp_Character*& K2NodeDynamicCastAsFortMovementCompCharacter, bool& K2NodeDynamicCastbSuccess7, bool& CallFuncIsValidReturnValue3, bool& CallFuncIsMovingOnGroundReturnValue, bool& CallFuncBooleanANDReturnValue2, struct FVector& CallFuncGetWaterSurfaceLocationReturnValue, class AController*& K2NodeEventNewController, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue4, bool& CallFuncIsLocallyControlledReturnValue6, bool& K2NodeCustomEventisHidden1, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue1, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue1, struct FVector& CallFuncMultiplyVectorFloatReturnValue, struct FVector& CallFuncDivideVectorFloatReturnValue, class APawn*& K2NodeEventLastTetherPawn1, class APawn*& K2NodeEventLastTetherPawn, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue2, class UFortQuestManager*& CallFuncGetQuestManagerReturnValue, class APawn*& CallFuncGetTetherPawnReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& K2NodeDynamicCastAsGameplayTagAssetInterface, bool& K2NodeDynamicCastbSuccess8, struct FGameplayTagContainer& CallFuncGetOwnedGameplayTagsTagContainer, struct FGameplayEventData& K2NodeMakeStructGameplayEventData1, struct FRotator& CallFuncGetControlRotationReturnValue, struct FRotator& K2NodeCustomEventPlayerAimRotation, struct FTimerHandle*& CallFuncK2SetTimerReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegateHandleController& CallFuncWhenCosmeticPartAppliedDelegateHandleControllerOut, float& CallFuncGetValueAtLevelReturnValue1, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue5, struct FTimerHandle*& CallFuncK2SetTimerReturnValue2, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue6, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue7, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue8, bool& TempboolHasBeenInitdVariable1, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType3, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters3, bool& TempboolIsClosedVariable1, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType2, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters2, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType1, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters1, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue2, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue2, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue3, bool& CallFuncIsValidReturnValue4, struct FTransform& TempstructVariable, class UPostProcessComponent*& CallFuncAddComponentReturnValue, bool& CallFuncEqualEqualByteByteReturnValue1, class UFortAbilitySystemComponent*& K2NodeCustomEventAbilitySystemComponent, class AFortPlayerPawn*& K2NodeCustomEventAffectedPawn, class UFortAsyncAction_CurrentPlaylistReady*& CallFuncPlaylistDataReadyAsyncReturnValue, class AFortGameStateAthena*& TempobjectVariable, bool& CallFuncIsValidReturnValue5, bool& CallFuncIsDedicatedServerReturnValue2, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue9, class UFortPlaylist*& TempobjectVariable1, struct FGameplayTagContainer& TempstructVariable1, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue10, class AFortGameStateAthena*& K2NodeCustomEventGameState, class UFortPlaylist*& K2NodeCustomEventPlaylist, struct FGameplayTagContainer& K2NodeCustomEventPlaylistContextTags, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, bool& TempboolHasBeenInitdVariable2, class UFortAnimInputEvent*& CallFuncCreateAnimInputEventReturnValue, class UFortAnimInputEvent*& CallFuncCreateAnimInputEventReturnValue1, class UFortAnimInputEvent*& CallFuncCreateAnimInputEventReturnValue2, class UFortAnimInputEvent*& CallFuncCreateAnimInputEventReturnValue3, bool& CallFuncIsDedicatedServerReturnValue3, bool& TempboolWhetherthegateiscurrentlyopenorcloseVariable, class UObject*& K2NodeEventSource1, struct FPawnHighlight& K2NodeEventHighlight, bool& K2NodeEventOnlyUpdateIfCurrent, class UObject*& K2NodeEventSource, class UPrimitiveComponent*& K2NodeEventMyComp, class AActor*& K2NodeEventOther, class UPrimitiveComponent*& K2NodeEventOtherComp, bool& K2NodeEventbSelfMoved, struct FVector& K2NodeEventHitLocation1, struct FVector& K2NodeEventHitNormal, struct FVector& K2NodeEventNormalImpulse, struct FHitResult& K2NodeEventHit, bool& TempboolIsClosedVariable2, bool& CallFuncGetPawnIsInLocalSquadIsInLocalSquad, float& K2NodeEventDamageDealt, bool& K2NodeEventbCriticalHit, bool& K2NodeEventbFatalHit, bool& K2NodeEventbShieldHit, class AActor*& K2NodeEventHitActor, struct FGameplayTagContainer& K2NodeEventHitTags, struct FVector& K2NodeEventHitLocation, bool& K2NodeCustomEventisHidden, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, struct FGameplayTagContainer& TempstructVariable2, bool& CallFuncIsDedicatedServerReturnValue4, class AFortPlayerPawn*& K2NodeCustomEventPawn, class UCustomCharacterPart*& K2NodeCustomEventPart, class USkeletalMeshComponent*& K2NodeCustomEventMeshPart, struct TEnumAsByte<EFortCustomPartType>& K2NodeCustomEventPartType, bool& CallFuncIsValidReturnValue6, struct TArray<class USceneComponent*>& CallFuncGetChildrenComponentsChildren, class USceneComponent*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue1, bool& CallFuncLessIntIntReturnValue, class AActor*& CallFuncGetOwnerReturnValue, bool& CallFuncIsValidReturnValue7, bool& CallFuncComponentHasTagReturnValue, float& CallFuncRetriggerableDelayDurationImplicitCast, double& CallFuncActivateInvincibleVisualsDurationImplicitCast, float& CallFuncRetriggerableDelayDurationImplicitCast1, float& CallFuncDelayDurationImplicitCast, double& CallFuncActivateInvincibleVisualsDurationImplicitCast1, double& CallFuncLessEqualDoubleDoubleAImplicitCast, double& CallFuncLessDoubleDoubleAImplicitCast, double& CallFuncEqualEqualDoubleDoubleAImplicitCast, double& CallFuncMapRangeClampedValueImplicitCast, float& CallFuncInvokeWaterJumpSplashSplashScaleImplicitCast, double& K2NodeCallDelegateDamageImplicitCast); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.DisplayHitNotify__DelegateSignature (Has no native function)
	void DisplayHitNotifyDelegateSignature(double& Damage, bool& Critical, bool& Fatal, bool& Shield, class AActor*& HitPawn, struct FVector& HitLocation, struct FGameplayTagContainer& Tags); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.CCPM_isHiddenInProp__DelegateSignature (Has no native function)
	void CCPMisHiddenInPropDelegateSignature(bool& IsHidden); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeft2__DelegateSignature (Has no native function)
	void SwingLeft2DelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRight2__DelegateSignature (Has no native function)
	void SwingRight2DelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeftEnd__DelegateSignature (Has no native function)
	void SwingLeftEndDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRightEnd__DelegateSignature (Has no native function)
	void SwingRightEndDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.onFadeToWhiteTeleported__DelegateSignature (Has no native function)
	void onFadeToWhiteTeleportedDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeft__DelegateSignature (Has no native function)
	void SwingLeftDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRight__DelegateSignature (Has no native function)
	void SwingRightDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.ResOut__DelegateSignature (Has no native function)
	void ResOutDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C.ResIn__DelegateSignature (Has no native function)
	void ResInDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

