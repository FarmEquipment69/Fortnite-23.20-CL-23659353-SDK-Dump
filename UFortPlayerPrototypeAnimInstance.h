// Class /Script/FortniteGame.FortPlayerPrototypeAnimInstance
// Size: 0x1680
class UFortPlayerPrototypeAnimInstance : public UFortBaseLayerAnimInstance
{
	float VelocityLerpAlpha; // 0x440 (0x4)
	unsigned char unreflected_444[0x4]; // 0x444 (0x4) 
	struct FVector PawnVelocity; // 0x448 (0x18)
	float MinSpeed2DThreshold; // 0x460 (0x4)
	float PawnSpeed2D; // 0x464 (0x4)
	float PawnVelocityZ; // 0x468 (0x4)
	float PawnMovementDirectionAzimuth; // 0x46c (0x4)
	struct FRotator PawnRotationRate; // 0x470 (0x18)
	struct FRotator PawnDeltaRotation; // 0x488 (0x18)
	struct FRotator PawnLastRotation; // 0x4a0 (0x18)
	struct FVector PawnLastLocation; // 0x4b8 (0x18)
	bool bIsJumping; // 0x4d0 (0x1)
	bool bIsFalling; // 0x4d1 (0x1)
	bool bSwingingLayerLinked; // 0x4d2 (0x1)
	bool bShouldPredictLanding; // 0x4d3 (0x1)
	bool bLandingPredicted; // 0x4d4 (0x1)
	unsigned char unreflected_4d5[0x3]; // 0x4d5 (0x3) 
	float PredictedFallTimeLeft; // 0x4d8 (0x4)
	float FallLookAheadSubStepping; // 0x4dc (0x4)
	int FallLookAheadMaxIterations; // 0x4e0 (0x4)
	bool bDebugLandPrediction; // 0x4e4 (0x1)
	bool bRecordJumpPositions; // 0x4e5 (0x1)
	unsigned char unreflected_4e6[0x2]; // 0x4e6 (0x2) 
	float AimPitch; // 0x4e8 (0x4)
	float AimYaw; // 0x4ec (0x4)
	float TimeForRecentlyFired; // 0x4f0 (0x4)
	float TimeToReachRelaxedLevel1; // 0x4f4 (0x4)
	float TimeToReachRelaxedLevel2; // 0x4f8 (0x4)
	float MinTimeAfterFiredBeforeWallRelaxed; // 0x4fc (0x4)
	bool bRecentlyFired; // 0x500 (0x1)
	bool bIsRelaxedLevel1; // 0x501 (0x1)
	bool bIsRelaxedLevel2; // 0x502 (0x1)
	bool bIsWeaponLoweredNearWall; // 0x503 (0x1)
	bool bExitedRelaxedThisUpdate; // 0x504 (0x1)
	unsigned char bClothEnabled; // 0x505 (0x1)
	unsigned char bAnimDynamicsEnabled; // 0x505 (0x1)
	unsigned char bRigidBodyEnabled; // 0x505 (0x1)
	bool bIsInGoop; // 0x506 (0x1)
	bool bIsBeingRidden; // 0x507 (0x1)
	bool bIsSliding; // 0x508 (0x1)
	bool bIsKneeSliding; // 0x509 (0x1)
	bool bIsBaseballSliding; // 0x50a (0x1)
	unsigned char unreflected_50b[0x1]; // 0x50b (0x1) 
	float DeltaTime; // 0x50c (0x4)
	class AFortPlayerPawn* FortPlayerPawn; // 0x510 (0x8)
	enum EFortPlayerAnimBodyType AnimBodyType; // 0x518 (0x1)
	struct TEnumAsByte<EFortCustomGender> Gender; // 0x519 (0x1)
	unsigned char unreflected_51a[0x2]; // 0x51a (0x2) 
	float FallAnimDuration; // 0x51c (0x4)
	float FallPlayRate; // 0x520 (0x4)
	unsigned char unreflected_524[0x4]; // 0x524 (0x4) 
	class AFortPlayerPawnAthena* FortPlayerPawnAthena; // 0x528 (0x8)
	struct FFortAnimInput_SpeedWarping SpeedWarping; // 0x530 (0x30)
	float JogStartSpeedWarpingAlpha; // 0x560 (0x4)
	unsigned char unreflected_564[0x4]; // 0x564 (0x4) 
	struct FFortAnimInput_SpeedWarping JogStartSpeedWarping; // 0x568 (0x30)
	struct FFortAnimInput_Zipline ZiplineInput; // 0x598 (0x38)
	struct FFortAnimInput_JackalVehicle JackalVehicleInput; // 0x5d0 (0x240)
	struct FFortAnimInput_CommonVehicle* CommonVehicleInput; // 0x810 (0x8)
	struct FFortAnimInput_CommonWeapon CommonWeaponInput; // 0x818 (0x2)
	unsigned char unreflected_81a[0x6]; // 0x81a (0x6) 
	struct FFortAnimInput_DBNOCarried DBNOCarriedInput; // 0x820 (0xf8)
	struct FFortAnimInput_SlopeInfo SlopeInfoInput; // 0x918 (0x60)
	struct FFortAnimInput_TransitionProperties TransitionPropertiesInput; // 0x978 (0x1)
	unsigned char unreflected_979[0x3]; // 0x979 (0x3) 
	float DBNOTurnPlayRate; // 0x97c (0x4)
	float DBNOTurnPlayRateAbs; // 0x980 (0x4)
	unsigned char unreflected_984[0x4]; // 0x984 (0x4) 
	struct FFortAnimInput_TurnInPlace TurnInPlaceInput; // 0x988 (0x78)
	struct FVector EmoteAnimOffset; // 0xa00 (0x18)
	struct FFortAnimInput_AdjustedAim AdjustedAim; // 0xa18 (0x23c)
	unsigned char unreflected_c54[0x4]; // 0xc54 (0x4) 
	struct FFortAnimInput_SpringGlider SpringGlider; // 0xc58 (0xc0)
	struct FFortAnimInput_HandIK HandIKInput; // 0xd18 (0x1c)
	float ADSToNonADSBlendTime; // 0xd34 (0x4)
	float NonADSToADSBlendTime; // 0xd38 (0x4)
	float BlendOutOfWallBlockTime; // 0xd3c (0x4)
	float BlendOutOfWallBlockTimeRemaining; // 0xd40 (0x4)
	float HandIKRetargetingWeight; // 0xd44 (0x4)
	float RightHandIKAlpha; // 0xd48 (0x4)
	float LeftHandIKAlpha; // 0xd4c (0x4)
	float LeftHandFKAlpha; // 0xd50 (0x4)
	float LegIKAlpha; // 0xd54 (0x4)
	float OneHandedTransitionHackAlpha; // 0xd58 (0x4)
	unsigned char unreflected_d5c[0x4]; // 0xd5c (0x4) 
	struct FFortAnimInput_Skydiving Skydiving; // 0xd60 (0x78)
	float FreeFallAimPitch; // 0xdd8 (0x4)
	bool bIsSlopeSliding; // 0xddc (0x1)
	unsigned char unreflected_ddd[0x3]; // 0xddd (0x3) 
	float SlopeSlidingPitch; // 0xde0 (0x4)
	float SlopeSlidingRoll; // 0xde4 (0x4)
	float JumpAdditiveLayerAlpha; // 0xde8 (0x4)
	float JumpAdditiveLeanAlpha; // 0xdec (0x4)
	float DisableRightArmAdditiveCurveAlpha; // 0xdf0 (0x4)
	float DisableArmsHeadAdditiveCurveAlpha; // 0xdf4 (0x4)
	float DisableIKRootAdditiveCurveAlpha; // 0xdf8 (0x4)
	float DisableUpperBodyAdditiveMeshSpaceCurveAlpha; // 0xdfc (0x4)
	struct FFortAnimInput_PlayerAnimAsset CurrentAnimSet; // 0xe00 (0x200)
	struct FFortAnimInput_PlayerGliderAnimAsset CurrentGliderAnimSet; // 0x1000 (0x268)
	struct FFortAnimInput_WeaponAdditiveAnimAsset CurrentWeaponAdditiveAnimSet; // 0x1268 (0x30)
	struct FFortAnimSetLocomotion CurrentLocomotionAnimSet; // 0x1298 (0xf8)
	struct FFortAnimSetTacticalState CurrentTacticalStateAnimSet; // 0x1390 (0x30)
	struct TArray<struct FName> BonesHiddenByAnimSet; // 0x13c0 (0x10)
	float PlayMeleeAttackAO; // 0x13d0 (0x4)
	float MaxAimYawAdjustment; // 0x13d4 (0x4)
	float MaxPitch; // 0x13d8 (0x4)
	float MaxYaw; // 0x13dc (0x4)
	float ReticleAimDistance; // 0x13e0 (0x4)
	float AimAdjustmentInterpSpeed; // 0x13e4 (0x4)
	struct FVector SlopeWarpingFloorOffset; // 0x13e8 (0x18)
	struct FName WeaponAimingFreezeCurveName; // 0x1400 (0x4)
	unsigned char unreflected_1404[0x4]; // 0x1404 (0x4) 
	class UAnimSequence* ConsumableOffsetPose; // 0x1408 (0x8)
	class UAnimSequence* MissingCosmeticUpperBodyOverride; // 0x1410 (0x8)
	class UAnimSequence* MissingCosmeticLowerBodyOverride; // 0x1418 (0x8)
	class UAnimSequence* MissingCosmeticLowerBodyInMotionOverride; // 0x1420 (0x8)
	unsigned char bEnableMissingCosmeticOverride; // 0x1428 (0x1)
	unsigned char bAimWeaponTowardsReticle; // 0x1428 (0x1)
	unsigned char bDebugWeaponAiming; // 0x1428 (0x1)
	unsigned char bShouldUseCrouchUpperBodySlot; // 0x1428 (0x1)
	unsigned char bShouldUseCrouchInPlaceAdditiveSlot; // 0x1428 (0x1)
	unsigned char bUseCustomFloorOffset; // 0x1428 (0x1)
	unsigned char bIsOnGround; // 0x1428 (0x1)
	unsigned char bIsTargeting; // 0x1428 (0x1)
	unsigned char bIsTargetingConsumableThrow; // 0x1429 (0x1)
	unsigned char bPlayUpperBodyTargeting; // 0x1429 (0x1)
	unsigned char bPlayingRootMotion; // 0x1429 (0x1)
	unsigned char bIsStunned; // 0x1429 (0x1)
	unsigned char bIsMontagePlaying; // 0x1429 (0x1)
	unsigned char bIsPlayingMeleeAnim; // 0x1429 (0x1)
	unsigned char bRecentlyFiredAbility; // 0x1429 (0x1)
	unsigned char bDisableUpperBodySlotOnLowerBodyInIdle; // 0x1429 (0x1)
	unsigned char bWasRelaxedLevel1; // 0x142a (0x1)
	unsigned char bTempIsRelaxedLevel1; // 0x142a (0x1)
	unsigned char bIsCrouching; // 0x142a (0x1)
	unsigned char bIsCrouchMoving; // 0x142a (0x1)
	unsigned char bIsCrouchSprinting; // 0x142a (0x1)
	unsigned char bIsSurfaceSwimming; // 0x142a (0x1)
	unsigned char bIsInTetheredMovement; // 0x142a (0x1)
	unsigned char bIsDiveJumping; // 0x142a (0x1)
	unsigned char bSwimmingIsWaterLanding; // 0x142b (0x1)
	unsigned char bSwimmingHasReachedJumpBottom; // 0x142b (0x1)
	unsigned char bSwimmingHeadUnderWaterDuringWaterLand; // 0x142b (0x1)
	unsigned char bSwimmingJumpInitiatedFromWater; // 0x142b (0x1)
	unsigned char bIsSprinting; // 0x142b (0x1)
	unsigned char bIsAccelerating2D; // 0x142b (0x1)
	unsigned char bIsMoving2D; // 0x142b (0x1)
	unsigned char bWasMoving2D; // 0x142b (0x1)
	unsigned char bIsAboveMinimumLocomotionSpeed; // 0x142c (0x1)
	unsigned char bIsBackpedaling; // 0x142c (0x1)
	unsigned char bShouldWalkRightFootFwd; // 0x142c (0x1)
	unsigned char bShouldPlayJogStartTransition; // 0x142c (0x1)
	unsigned char bShouldPlayJogStopTransition; // 0x142c (0x1)
	unsigned char bShouldPlayJogPivotTransition; // 0x142c (0x1)
	unsigned char bStartTransitionActive; // 0x142c (0x1)
	unsigned char bStopTransitionActive; // 0x142c (0x1)
	unsigned char bPivotTransitionActive; // 0x142d (0x1)
	unsigned char bShouldPlayPostPivotTransition; // 0x142d (0x1)
	unsigned char bShouldEarlyOutStartState; // 0x142d (0x1)
	unsigned char bShouldEarlyOutStopState; // 0x142d (0x1)
	unsigned char bShouldEarlyOutPivotState; // 0x142d (0x1)
	unsigned char bSkipJumpStart; // 0x142d (0x1)
	unsigned char bIsDBNO; // 0x142d (0x1)
	unsigned char bIsBeingInterrogated; // 0x142d (0x1)
	unsigned char bIsUsingJetpack; // 0x142e (0x1)
	bool bGoopJumpExecuted; // 0x142f (0x1)
	unsigned char bIsUsingRemoteControlPawn; // 0x1430 (0x1)
	unsigned char bIsInVehicle; // 0x1430 (0x1)
	unsigned char bIsValetDriver; // 0x1430 (0x1)
	unsigned char bIsValetPassenger; // 0x1430 (0x1)
	unsigned char bIsInShoppingCart; // 0x1430 (0x1)
	unsigned char bIsInCannon; // 0x1430 (0x1)
	unsigned char bIsFiredFromCannon; // 0x1430 (0x1)
	unsigned char bIsDBNOCarrying; // 0x1430 (0x1)
	unsigned char bIsDBNOCarried; // 0x1431 (0x1)
	unsigned char bIsFemale; // 0x1431 (0x1)
	unsigned char bIsHidingInProp; // 0x1431 (0x1)
	unsigned char bIsBalloonInAir; // 0x1431 (0x1)
	unsigned char bHasBalloons; // 0x1431 (0x1)
	unsigned char bIsGhost; // 0x1431 (0x1)
	unsigned char bHasIcyFeet; // 0x1431 (0x1)
	unsigned char bIsMovingAndInMotionEmote; // 0x1431 (0x1)
	unsigned char bIsPlayingEmote; // 0x1432 (0x1)
	unsigned char bIsGrappleRopeActive; // 0x1432 (0x1)
	unsigned char bHasSourcePoseOverride; // 0x1432 (0x1)
	unsigned char unreflected_1433[0x1]; // 0x1433 (0x1) 
	float FullBodyInAirFallTimeThreshold; // 0x1434 (0x4)
	float FullBodyInAirLowerBodyWeight; // 0x1438 (0x4)
	float TargetingWeight; // 0x143c (0x4)
	float MeleeTwistCurveValue; // 0x1440 (0x4)
	float JumpUpperBodyBlendWeight; // 0x1444 (0x4)
	float RightArmMaskWeight; // 0x1448 (0x4)
	float LeftArmMaskWeight; // 0x144c (0x4)
	float UpperBodyNoAdditivesMaskWeight; // 0x1450 (0x4)
	float FullBodyAimOffsetAlpha; // 0x1454 (0x4)
	float LocomotionAdditiveAlpha; // 0x1458 (0x4)
	float LocalAccelYawAngle; // 0x145c (0x4)
	float MaxSpeed; // 0x1460 (0x4)
	float VelocityZ; // 0x1464 (0x4)
	float Speed2D; // 0x1468 (0x4)
	float RidingSpeed2D; // 0x146c (0x4)
	float LocalVelocityYawAngle; // 0x1470 (0x4)
	float LocalVelocityYawAngleMinusJogBlendSpaceRotation; // 0x1474 (0x4)
	float LocalVelocityYawAngleMinusMeleeTwist; // 0x1478 (0x4)
	float LocalAccelVelocityYawDelta; // 0x147c (0x4)
	float SpeedAdjustedPlayrate; // 0x1480 (0x4)
	float LeanAdditiveAlpha; // 0x1484 (0x4)
	float LeanAngle; // 0x1488 (0x4)
	float SprintYawAngle; // 0x148c (0x4)
	float StartStateRotationMultiplier; // 0x1490 (0x4)
	float StartAnimDeltaAngleNorth; // 0x1494 (0x4)
	float StartAnimDeltaAngleEast; // 0x1498 (0x4)
	float StartAnimDeltaAngleSouth; // 0x149c (0x4)
	float StartAnimDeltaAngleWest; // 0x14a0 (0x4)
	float StopStateRotationMultiplier; // 0x14a4 (0x4)
	float StopAnimDeltaAngle; // 0x14a8 (0x4)
	float JogPrePivotTimer; // 0x14ac (0x4)
	float PrePivotAnimDeltaAngle; // 0x14b0 (0x4)
	float PostPivotAnimDeltaAngle; // 0x14b4 (0x4)
	float TransitionPlayRate; // 0x14b8 (0x4)
	float YawDeltaCurrentTick; // 0x14bc (0x4)
	float YawDeltaLastTick; // 0x14c0 (0x4)
	float YawDeltaSmoothed; // 0x14c4 (0x4)
	float AbsYawDeltaSmoothed; // 0x14c8 (0x4)
	float PawnToVehicleDeltaYawAngleDegrees; // 0x14cc (0x4)
	float SavedWeaponAbilityLastFireTime; // 0x14d0 (0x4)
	float SwimmingImmersionDepth; // 0x14d4 (0x4)
	struct FVector WorldAcceleration; // 0x14d8 (0x18)
	struct FVector LocalAcceleration; // 0x14f0 (0x18)
	struct FVector WorldVelocity; // 0x1508 (0x18)
	struct FVector LocalVelocity; // 0x1520 (0x18)
	struct FVector ActorSpaceVelocityDirPreTurn; // 0x1538 (0x18)
	struct FRotator ActorRotationLastTick; // 0x1550 (0x18)
	struct TEnumAsByte<EFortWeaponCoreAnimation> WeaponCoreAnim; // 0x1568 (0x1)
	struct TEnumAsByte<EFortWeaponCoreAnimation> WeaponCoreAnimForEmptyHands; // 0x1569 (0x1)
	unsigned char unreflected_156a[0x6]; // 0x156a (0x6) 
	class UFortWeaponAnimSet* WeaponAnimSet; // 0x1570 (0x8)
	class UFortWeaponAnimSet* WeaponOverrideAnimSet; // 0x1578 (0x8)
	class UFortWeaponAdditiveAnimSet* WeaponAdditiveAnimSet; // 0x1580 (0x8)
	class UFortWeaponAnimSet* WeaponAnimSetForEmptyHands; // 0x1588 (0x8)
	struct TWeakObjectPtr<class UFortPlayerGliderAnimSet> CurrentGliderAnimSetDataAsset; // 0x1590 (0x8)
	enum EFortCardinalDirection LocomotionCardinalDirection; // 0x1598 (0x1)
	enum EFortCardinalDirection StartTransitionInitialDirection; // 0x1599 (0x1)
	enum EFortCardinalDirection StopCardinalDirection; // 0x159a (0x1)
	enum EFortCardinalDirection PrePivotCardinalDirection; // 0x159b (0x1)
	enum EFortCardinalDirection PostPivotCardinalDirection; // 0x159c (0x1)
	unsigned char unreflected_159d[0x3]; // 0x159d (0x3) 
	float JumpUpperBodyBlendSpeed; // 0x15a0 (0x4)
	float AuthoredCrouchSprintSpeed; // 0x15a4 (0x4)
	float AuthoredCrouchWalkSpeed; // 0x15a8 (0x4)
	float AuthoredCrouchJogSpeed; // 0x15ac (0x4)
	float AuthoredSprintSpeed; // 0x15b0 (0x4)
	float AuthoredWalkSpeed; // 0x15b4 (0x4)
	float AuthoredJogBwdSpeed; // 0x15b8 (0x4)
	float AuthoredJogFwdSpeed; // 0x15bc (0x4)
	float AuthoredJogStrafeSpeed; // 0x15c0 (0x4)
	float LeanFadeInSpeed; // 0x15c4 (0x4)
	float LeanFadeOutSpeed; // 0x15c8 (0x4)
	unsigned char bIsShieldUp; // 0x15cc (0x1)
	unsigned char bIsJumpBoosting; // 0x15cc (0x1)
	unsigned char bEnableAimOffsets; // 0x15cc (0x1)
	unsigned char bShouldProcessFullAnimUpdate; // 0x15cc (0x1)
	unsigned char bIsWaterJump; // 0x15cc (0x1)
	unsigned char bPlayWeaponInspect; // 0x15cc (0x1)
	unsigned char bInterruptWeaponInspect; // 0x15cc (0x1)
	unsigned char bInterruptWeaponInspectNoBlend; // 0x15cc (0x1)
	unsigned char bPlayRelaxedEntry; // 0x15cd (0x1)
	unsigned char bIsGrapplerActive; // 0x15cd (0x1)
	unsigned char bSwimmingIsWaterPaddlingToSurface; // 0x15cd (0x1)
	unsigned char bIsRelaxedLevel1AndNotJumpingFromWater; // 0x15cd (0x1)
	unsigned char bIsRelaxedLevel2AndNotJumpingFromWater; // 0x15cd (0x1)
	unsigned char bSwimIdleNoiseBlendTrigger; // 0x15cd (0x1)
	unsigned char bIsMeleeGuarding; // 0x15cd (0x1)
	unsigned char bIsMeleeDeflecting; // 0x15cd (0x1)
	unsigned char bUsingUncleBrolly; // 0x15ce (0x1)
	unsigned char bIsPlayingForwardMotionAnim; // 0x15ce (0x1)
	unsigned char unreflected_15cf[0x1]; // 0x15cf (0x1) 
	struct FName HeadTrackingReticleSocketName; // 0x15d0 (0x4)
	float HeadTrackingReticleInterpSpeed; // 0x15d4 (0x4)
	struct FRotator HeadTrackingReticleAdjustment; // 0x15d8 (0x18)
	struct FGameplayTagAnimations GameplayTagAnimations; // 0x15f0 (0x10)
	struct FVector StandardIdlePelvisOffset; // 0x1600 (0x18)
	struct FVector LargeFemaleIdlePelvisOffset; // 0x1618 (0x18)
	struct FVector IdlePelvisOffset; // 0x1630 (0x18)
	float IdlePelvisOffsetAlpha; // 0x1648 (0x4)
	float WeaponInspectDelayTimeRemaining; // 0x164c (0x4)
	float MinDelayBetweenWeaponInspects; // 0x1650 (0x4)
	unsigned char bParaGlideOpenGlider; // 0x1654 (0x1)
	unsigned char bIsTacticalSprint; // 0x1654 (0x1)
	unsigned char bIsTacticalJump; // 0x1654 (0x1)
	unsigned char bIsTacticalInAir; // 0x1654 (0x1)
	unsigned char bIsNormalJump; // 0x1654 (0x1)
	unsigned char bIsNormalFall; // 0x1654 (0x1)
	unsigned char bIsDoorBashExit; // 0x1654 (0x1)
	unsigned char bIsInWater; // 0x1654 (0x1)
	unsigned char bIsHurdleFall; // 0x1655 (0x1)
	unsigned char unreflected_1656[0x2]; // 0x1656 (0x2) 
	int bPoseDebugIndex; // 0x1658 (0x4)
	unsigned char bUsePoseDebug; // 0x165c (0x1)
	unsigned char bWantsGliderAnimAssetUpdate; // 0x165c (0x1)
	unsigned char bTransitionFullBodySprinting; // 0x165c (0x1)
	unsigned char bTransitionSwimmingFullBodySprinting; // 0x165c (0x1)
	unsigned char bTransitionNewFallAditiveNewFallLandAdditive; // 0x165c (0x1)
	unsigned char bTransitionFullBodyStunned; // 0x165c (0x1)
	unsigned char bTransitionFullBodyDBNOMove; // 0x165c (0x1)
	unsigned char bTransitionFullBodyDBNOTurn; // 0x165c (0x1)
	unsigned char bEarlyOutLowerbodyTurns; // 0x165d (0x1)
	unsigned char bTransitionLowerBodyShuffle; // 0x165d (0x1)
	unsigned char bTransitionLowerBodyMovement; // 0x165d (0x1)
	unsigned char bTransitionLocomotionAdditiveCrouchTurning; // 0x165d (0x1)
	unsigned char bLocomotionIdlestoTurns; // 0x165d (0x1)
	unsigned char bTransitionSprintingtoConduit; // 0x165d (0x1)
	unsigned char bTransitionDBNOSwimIdletoDBNOSwimTurn; // 0x165d (0x1)
	unsigned char bTransitionSwimJumpSurfaceLooptoSwimJumpSurfaceEnd; // 0x165d (0x1)
	unsigned char bTransitionSwimJumpSurfaceLooptoIdleAdditive; // 0x165e (0x1)
	unsigned char bTransitionNewJumpLoopAdditivetoNewFallAdditive; // 0x165e (0x1)
	unsigned char bIsUmbrellaFailing; // 0x165e (0x1)
	unsigned char bEnableEmptyHands; // 0x165e (0x1)
	unsigned char bHideWeaponForEmptyHands; // 0x165e (0x1)
	unsigned char bSupressJogStartAdditiveForLiveEvent; // 0x165e (0x1)
	unsigned char bUseFullBodyJumpAdditivesLinkedGraph; // 0x165e (0x1)
	unsigned char bUseFullBodyStateLinkedGraph; // 0x165e (0x1)
	unsigned char bIsWalking; // 0x165f (0x1)
	unsigned char bIsRiding; // 0x165f (0x1)
	unsigned char bUseLocomotionPrototype; // 0x165f (0x1)
	unsigned char bUseFacialCurves; // 0x165f (0x1)
	struct FVector RagdollInitialImpactThrowVelocity; // 0x1660 (0x18)
	unsigned char bLinkedDebugGraphActive; // 0x1678 (0x1)
	unsigned char padding_1679[0x7]; // 0x1679 (0x7)
};
