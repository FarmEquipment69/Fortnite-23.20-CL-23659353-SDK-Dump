// Class /Script/FortniteGame.FortPlayerAnimInstance
// Size: 0x1a20
class UFortPlayerAnimInstance : public UFortAnimInstance
{
	unsigned char unreflected_530[0x8]; // 0x530 (0x8) 
	struct FFortLinkedAnimGraphsData LinkedAnimGraphsData; // 0x538 (0x38)
	float DeltaTime; // 0x570 (0x4)
	unsigned char unreflected_574[0x4]; // 0x574 (0x4) 
	class AFortPlayerPawn* FortPlayerPawn; // 0x578 (0x8)
	enum EFortPlayerAnimBodyType AnimBodyType; // 0x580 (0x1)
	struct TEnumAsByte<EFortCustomGender> Gender; // 0x581 (0x1)
	unsigned char unreflected_582[0x2]; // 0x582 (0x2) 
	float FallAnimDuration; // 0x584 (0x4)
	float FallPlayRate; // 0x588 (0x4)
	unsigned char unreflected_58c[0x4]; // 0x58c (0x4) 
	class AFortPlayerPawnAthena* FortPlayerPawnAthena; // 0x590 (0x8)
	struct FFortAnimInput_SpeedWarping SpeedWarping; // 0x598 (0x30)
	float JogStartSpeedWarpingAlpha; // 0x5c8 (0x4)
	unsigned char unreflected_5cc[0x4]; // 0x5cc (0x4) 
	struct FFortAnimInput_SpeedWarping JogStartSpeedWarping; // 0x5d0 (0x30)
	struct FFortAnimInput_CommonVehicle* CommonVehicleInput; // 0x600 (0x8)
	struct FFortAnimInput_CommonWeapon CommonWeaponInput; // 0x608 (0x2)
	unsigned char unreflected_60a[0x6]; // 0x60a (0x6) 
	struct FFortAnimInput_DBNOCarried DBNOCarriedInput; // 0x610 (0xf8)
	struct FFortAnimInput_RandomizeMontageSection RandomizeMontageSectionInput; // 0x708 (0x18)
	struct FFortAnimInput_SlopeInfo SlopeInfoInput; // 0x720 (0x60)
	struct FFortAnimInput_TransitionProperties TransitionPropertiesInput; // 0x780 (0x1)
	unsigned char unreflected_781[0x3]; // 0x781 (0x3) 
	float DBNOTurnPlayRate; // 0x784 (0x4)
	float DBNOTurnPlayRateAbs; // 0x788 (0x4)
	unsigned char unreflected_78c[0x4]; // 0x78c (0x4) 
	struct FFortAnimInput_TurnInPlace TurnInPlaceInput; // 0x790 (0x78)
	struct FVector EmoteAnimOffset; // 0x808 (0x18)
	struct FFortAnimInput_AdjustedAim AdjustedAimBase; // 0x820 (0x23c)
	struct FFortAnimInput_AdjustedAim AdjustedAimAthena; // 0xa5c (0x23c)
	struct FFortAnimInput_AdjustedAim AdjustedAim; // 0xc98 (0x23c)
	unsigned char unreflected_ed4[0x4]; // 0xed4 (0x4) 
	struct FFortAnimInput_SpringGlider SpringGlider; // 0xed8 (0xc0)
	struct FFortAnimInput_HandIK HandIKInput; // 0xf98 (0x1c)
	float ADSToNonADSBlendTime; // 0xfb4 (0x4)
	float NonADSToADSBlendTime; // 0xfb8 (0x4)
	float BlendOutOfWallBlockTime; // 0xfbc (0x4)
	float BlendOutOfWallBlockTimeRemaining; // 0xfc0 (0x4)
	float HandIKRetargetingWeight; // 0xfc4 (0x4)
	float RightHandIKAlpha; // 0xfc8 (0x4)
	float LeftHandIKAlpha; // 0xfcc (0x4)
	float LeftHandFKAlpha; // 0xfd0 (0x4)
	float LegIKAlpha; // 0xfd4 (0x4)
	float OneHandedTransitionHackAlpha; // 0xfd8 (0x4)
	unsigned char unreflected_fdc[0x4]; // 0xfdc (0x4) 
	struct FFortAnimInput_Skydiving Skydiving; // 0xfe0 (0x78)
	float FreeFallAimPitch; // 0x1058 (0x4)
	bool bIsSlopeSliding; // 0x105c (0x1)
	unsigned char unreflected_105d[0x3]; // 0x105d (0x3) 
	float SlopeSlidingPitch; // 0x1060 (0x4)
	float SlopeSlidingRoll; // 0x1064 (0x4)
	float JumpAdditiveLayerAlpha; // 0x1068 (0x4)
	struct FCachedAnimStateData JumpAdditiveLayerPassthrough; // 0x106c (0x14)
	float JumpAdditiveLeanAlpha; // 0x1080 (0x4)
	float DisableRightArmAdditiveCurveAlpha; // 0x1084 (0x4)
	float DisableArmsHeadAdditiveCurveAlpha; // 0x1088 (0x4)
	float DisableIKRootAdditiveCurveAlpha; // 0x108c (0x4)
	float DisableUpperBodyAdditiveMeshSpaceCurveAlpha; // 0x1090 (0x4)
	unsigned char unreflected_1094[0x4]; // 0x1094 (0x4) 
	struct FFortAnimInput_PlayerAnimAsset CurrentAnimSet; // 0x1098 (0x200)
	struct FFortAnimInput_PlayerGliderAnimAsset CurrentGliderAnimSet; // 0x1298 (0x268)
	struct FFortAnimInput_WeaponAdditiveAnimAsset CurrentWeaponAdditiveAnimSet; // 0x1500 (0x30)
	struct FFortAnimSetLocomotion CurrentLocomotionAnimSet; // 0x1530 (0xf8)
	struct FFortAnimSetTacticalState CurrentTacticalStateAnimSet; // 0x1628 (0x30)
	struct TArray<struct FName> BonesHiddenByAnimSet; // 0x1658 (0x10)
	float AimPitchAdjustment; // 0x1668 (0x4)
	float AimYawAdjustment; // 0x166c (0x4)
	float PlayMeleeAttackAO; // 0x1670 (0x4)
	unsigned char unreflected_1674[0xc]; // 0x1674 (0xc) 
	struct FTransform LastFramePawnTransform; // 0x1680 (0x60)
	float MaxAimYawAdjustment; // 0x16e0 (0x4)
	float MaxPitch; // 0x16e4 (0x4)
	float MaxYaw; // 0x16e8 (0x4)
	float ReticleAimDistance; // 0x16ec (0x4)
	float AimAdjustmentInterpSpeed; // 0x16f0 (0x4)
	unsigned char unreflected_16f4[0x4]; // 0x16f4 (0x4) 
	struct FVector SlopeWarpingFloorOffset; // 0x16f8 (0x18)
	class UAnimSequence* ConsumableOffsetPose; // 0x1710 (0x8)
	class UAnimSequence* MissingCosmeticUpperBodyOverride; // 0x1718 (0x8)
	class UAnimSequence* MissingCosmeticLowerBodyOverride; // 0x1720 (0x8)
	class UAnimSequence* MissingCosmeticLowerBodyInMotionOverride; // 0x1728 (0x8)
	unsigned char bEnableMissingCosmeticOverride; // 0x1730 (0x1)
	unsigned char bAimWeaponTowardsReticle; // 0x1730 (0x1)
	unsigned char bDebugWeaponAiming; // 0x1730 (0x1)
	unsigned char bCachedPawnTransform; // 0x1730 (0x1)
	unsigned char bHasValidWeaponMuzzleSocket; // 0x1730 (0x1)
	unsigned char bShouldUseCrouchUpperBodySlot; // 0x1730 (0x1)
	unsigned char bShouldUseCrouchInPlaceAdditiveSlot; // 0x1730 (0x1)
	unsigned char bUseCustomFloorOffset; // 0x1730 (0x1)
	unsigned char bIsOnGround; // 0x1731 (0x1)
	unsigned char bIsTargeting; // 0x1731 (0x1)
	unsigned char bIsTargetingConsumableThrow; // 0x1731 (0x1)
	unsigned char bPlayUpperBodyTargeting; // 0x1731 (0x1)
	unsigned char bPlayingRootMotion; // 0x1731 (0x1)
	unsigned char bIsStunned; // 0x1731 (0x1)
	unsigned char bIsMontagePlaying; // 0x1731 (0x1)
	unsigned char bIsPlayingMeleeAnim; // 0x1731 (0x1)
	unsigned char bRecentlyFiredAbility; // 0x1732 (0x1)
	unsigned char bDisableUpperBodySlotOnLowerBodyInIdle; // 0x1732 (0x1)
	unsigned char bWasRelaxedLevel1; // 0x1732 (0x1)
	unsigned char bTempIsRelaxedLevel1; // 0x1732 (0x1)
	unsigned char bIsCrouching; // 0x1732 (0x1)
	unsigned char bIsCrouchMoving; // 0x1732 (0x1)
	unsigned char bIsCrouchSprinting; // 0x1732 (0x1)
	unsigned char bIsSurfaceSwimming; // 0x1732 (0x1)
	unsigned char bIsDiveJumping; // 0x1733 (0x1)
	unsigned char bSwimmingIsWaterLanding; // 0x1733 (0x1)
	unsigned char bSwimmingHasReachedJumpBottom; // 0x1733 (0x1)
	unsigned char bSwimmingHeadUnderWaterDuringWaterLand; // 0x1733 (0x1)
	unsigned char bSwimmingJumpInitiatedFromWater; // 0x1733 (0x1)
	unsigned char bIsSprinting; // 0x1733 (0x1)
	unsigned char bIsAccelerating2D; // 0x1733 (0x1)
	unsigned char bIsMoving2D; // 0x1733 (0x1)
	unsigned char bWasMoving2D; // 0x1734 (0x1)
	unsigned char bIsAboveMinimumLocomotionSpeed; // 0x1734 (0x1)
	unsigned char bIsBackpedaling; // 0x1734 (0x1)
	unsigned char bShouldWalkRightFootFwd; // 0x1734 (0x1)
	unsigned char bShouldPlayJogStartTransition; // 0x1734 (0x1)
	unsigned char bShouldPlayJogStopTransition; // 0x1734 (0x1)
	unsigned char bShouldPlayJogPivotTransition; // 0x1734 (0x1)
	unsigned char bStartTransitionActive; // 0x1734 (0x1)
	unsigned char bStopTransitionActive; // 0x1735 (0x1)
	unsigned char bPivotTransitionActive; // 0x1735 (0x1)
	unsigned char bShouldPlayPostPivotTransition; // 0x1735 (0x1)
	unsigned char bShouldEarlyOutStartState; // 0x1735 (0x1)
	unsigned char bShouldEarlyOutStopState; // 0x1735 (0x1)
	unsigned char bShouldEarlyOutPivotState; // 0x1735 (0x1)
	unsigned char bSkipJumpStart; // 0x1735 (0x1)
	unsigned char bExitLanding; // 0x1735 (0x1)
	unsigned char bIsDBNO; // 0x1736 (0x1)
	unsigned char bIsBeingInterrogated; // 0x1736 (0x1)
	unsigned char bIsUsingJetpack; // 0x1736 (0x1)
	bool bGoopJumpExecuted; // 0x1737 (0x1)
	unsigned char bIsUsingRemoteControlPawn; // 0x1738 (0x1)
	unsigned char bIsInVehicle; // 0x1738 (0x1)
	unsigned char bIsValetDriver; // 0x1738 (0x1)
	unsigned char bIsValetPassenger; // 0x1738 (0x1)
	unsigned char bIsInShoppingCart; // 0x1738 (0x1)
	unsigned char bIsInCannon; // 0x1738 (0x1)
	unsigned char bIsFiredFromCannon; // 0x1738 (0x1)
	unsigned char bIsDBNOCarrying; // 0x1738 (0x1)
	unsigned char bIsDBNOCarried; // 0x1739 (0x1)
	unsigned char bIsFemale; // 0x1739 (0x1)
	unsigned char bIsHidingInProp; // 0x1739 (0x1)
	unsigned char bStopJogDoOnceTriggered; // 0x1739 (0x1)
	unsigned char bStartJogDoOnceTriggered; // 0x1739 (0x1)
	unsigned char bPivotTransitionDoOnceTriggered; // 0x1739 (0x1)
	unsigned char bPostPivotTransitionDoOnceTriggered; // 0x1739 (0x1)
	unsigned char bIsBalloonInAir; // 0x1739 (0x1)
	unsigned char bHasBalloons; // 0x173a (0x1)
	unsigned char bIsGhost; // 0x173a (0x1)
	unsigned char bHasIcyFeet; // 0x173a (0x1)
	unsigned char bIsMovingAndInMotionEmote; // 0x173a (0x1)
	unsigned char bIsPlayingEmote; // 0x173a (0x1)
	unsigned char unreflected_173b[0x1]; // 0x173b (0x1) 
	float FullBodyToUpperBodyInMotionBlendTime; // 0x173c (0x4)
	unsigned char bUseUpperBodyInMotionSlot; // 0x1740 (0x1)
	unsigned char bIsGrappleRopeActive; // 0x1740 (0x1)
	unsigned char bHasSourcePoseOverride; // 0x1740 (0x1)
	unsigned char unreflected_1741[0x3]; // 0x1741 (0x3) 
	float FullBodyInAirFallTimeThreshold; // 0x1744 (0x4)
	float FullBodyInAirLowerBodyWeight; // 0x1748 (0x4)
	float TargetingWeight; // 0x174c (0x4)
	float MeleeTwistCurveValue; // 0x1750 (0x4)
	float JumpUpperBodyBlendWeight; // 0x1754 (0x4)
	float RightArmMaskWeight; // 0x1758 (0x4)
	float LeftArmMaskWeight; // 0x175c (0x4)
	float UpperBodyNoAdditivesMaskWeight; // 0x1760 (0x4)
	float FullBodyAimOffsetAlpha; // 0x1764 (0x4)
	float LocomotionAdditiveAlpha; // 0x1768 (0x4)
	float BaseLocomotionAdditiveAlpha; // 0x176c (0x4)
	float LocalAccelYawAngle; // 0x1770 (0x4)
	float MaxSpeed; // 0x1774 (0x4)
	float VelocityZ; // 0x1778 (0x4)
	float Speed2D; // 0x177c (0x4)
	float RidingSpeed2D; // 0x1780 (0x4)
	float LocalVelocityYawAngle; // 0x1784 (0x4)
	float LocalVelocityYawAngleMinusJogBlendSpaceRotation; // 0x1788 (0x4)
	float LocalVelocityYawAngleMinusMeleeTwist; // 0x178c (0x4)
	float LocalAccelVelocityYawDelta; // 0x1790 (0x4)
	float SpeedAdjustedPlayrate; // 0x1794 (0x4)
	float LeanAdditiveAlpha; // 0x1798 (0x4)
	float LeanAngle; // 0x179c (0x4)
	float SprintYawAngle; // 0x17a0 (0x4)
	float StartStateRotationMultiplier; // 0x17a4 (0x4)
	float StartAnimDeltaAngleNorth; // 0x17a8 (0x4)
	float StartAnimDeltaAngleEast; // 0x17ac (0x4)
	float StartAnimDeltaAngleSouth; // 0x17b0 (0x4)
	float StartAnimDeltaAngleWest; // 0x17b4 (0x4)
	float StopStateRotationMultiplier; // 0x17b8 (0x4)
	float StopAnimDeltaAngle; // 0x17bc (0x4)
	float JogPrePivotTimer; // 0x17c0 (0x4)
	float PrePivotAnimDeltaAngle; // 0x17c4 (0x4)
	float PostPivotAnimDeltaAngle; // 0x17c8 (0x4)
	float TransitionPlayRate; // 0x17cc (0x4)
	float YawDeltaCurrentTick; // 0x17d0 (0x4)
	float YawDeltaLastTick; // 0x17d4 (0x4)
	float YawDeltaSmoothed; // 0x17d8 (0x4)
	float AbsYawDeltaSmoothed; // 0x17dc (0x4)
	float PawnToVehicleDeltaYawAngleDegrees; // 0x17e0 (0x4)
	float SavedWeaponAbilityLastFireTime; // 0x17e4 (0x4)
	float SwimmingImmersionDepth; // 0x17e8 (0x4)
	unsigned char unreflected_17ec[0x4]; // 0x17ec (0x4) 
	struct FVector WorldAcceleration; // 0x17f0 (0x18)
	struct FVector LocalAcceleration; // 0x1808 (0x18)
	struct FVector WorldVelocity; // 0x1820 (0x18)
	struct FVector LocalVelocity; // 0x1838 (0x18)
	struct FVector ActorSpaceVelocityDirPreTurn; // 0x1850 (0x18)
	struct FRotator ActorRotationLastTick; // 0x1868 (0x18)
	struct TEnumAsByte<EFortWeaponCoreAnimation> WeaponCoreAnim; // 0x1880 (0x1)
	struct TEnumAsByte<EFortWeaponCoreAnimation> WeaponCoreAnimForEmptyHands; // 0x1881 (0x1)
	unsigned char unreflected_1882[0x6]; // 0x1882 (0x6) 
	class UFortWeaponAnimSet* DefaultWeaponAnimSet; // 0x1888 (0x8)
	struct FFortPlayerAnimAssets DefaultAnimAssets; // 0x1890 (0x20)
	struct FFortPlayerAnimAssets HeavyWeaponAnimAssets; // 0x18b0 (0x20)
	class UFortWeaponAnimSet* WeaponAnimSet; // 0x18d0 (0x8)
	class UFortAnimAssetLocomotion* WeaponLocomotionAnimAsset; // 0x18d8 (0x8)
	class UFortAnimAssetTacticalState* WeaponTacticalAnimAsset; // 0x18e0 (0x8)
	class UFortWeaponAnimSet* WeaponOverrideAnimSet; // 0x18e8 (0x8)
	class UFortWeaponAdditiveAnimSet* WeaponAdditiveAnimSet; // 0x18f0 (0x8)
	class UFortWeaponAnimSet* WeaponAnimSetForEmptyHands; // 0x18f8 (0x8)
	struct TWeakObjectPtr<class UFortPlayerGliderAnimSet> CurrentGliderAnimSetDataAsset; // 0x1900 (0x8)
	enum EFortCardinalDirection PreviousFrameLocomotionCardinalDirection; // 0x1908 (0x1)
	enum EFortCardinalDirection LocomotionCardinalDirection; // 0x1909 (0x1)
	enum EFortCardinalDirection StartTransitionInitialDirection; // 0x190a (0x1)
	enum EFortCardinalDirection StopCardinalDirection; // 0x190b (0x1)
	enum EFortCardinalDirection PrePivotCardinalDirection; // 0x190c (0x1)
	enum EFortCardinalDirection PostPivotCardinalDirection; // 0x190d (0x1)
	unsigned char unreflected_190e[0x2]; // 0x190e (0x2) 
	float JumpUpperBodyBlendSpeed; // 0x1910 (0x4)
	float AuthoredCrouchSprintSpeed; // 0x1914 (0x4)
	float AuthoredCrouchWalkSpeed; // 0x1918 (0x4)
	float AuthoredCrouchJogSpeed; // 0x191c (0x4)
	float AuthoredSprintSpeed; // 0x1920 (0x4)
	float AuthoredWalkSpeed; // 0x1924 (0x4)
	float AuthoredJogBwdSpeed; // 0x1928 (0x4)
	float AuthoredJogFwdSpeed; // 0x192c (0x4)
	float AuthoredJogStrafeSpeed; // 0x1930 (0x4)
	float LeanFadeInSpeed; // 0x1934 (0x4)
	float LeanFadeOutSpeed; // 0x1938 (0x4)
	unsigned char bIsShieldUp; // 0x193c (0x1)
	unsigned char bIsJumpBoosting; // 0x193c (0x1)
	unsigned char bEnableAimOffsets; // 0x193c (0x1)
	unsigned char bShouldProcessFullAnimUpdate; // 0x193c (0x1)
	unsigned char bIsInAir; // 0x193c (0x1)
	unsigned char bEnterLanding; // 0x193c (0x1)
	unsigned char bIsWaterJump; // 0x193c (0x1)
	unsigned char bPlayWeaponInspect; // 0x193c (0x1)
	unsigned char bInterruptWeaponInspect; // 0x193d (0x1)
	unsigned char bInterruptWeaponInspectNoBlend; // 0x193d (0x1)
	unsigned char bPlayRelaxedEntry; // 0x193d (0x1)
	unsigned char bIsGrapplerActive; // 0x193d (0x1)
	unsigned char bSwimmingIsWaterPaddlingToSurface; // 0x193d (0x1)
	unsigned char bIsRelaxedLevel1AndNotJumpingFromWater; // 0x193d (0x1)
	unsigned char bIsRelaxedLevel2AndNotJumpingFromWater; // 0x193d (0x1)
	unsigned char bSwimIdleNoiseBlendTrigger; // 0x193d (0x1)
	unsigned char bIsMeleeGuarding; // 0x193e (0x1)
	unsigned char bIsMeleeDeflecting; // 0x193e (0x1)
	unsigned char bUsingUncleBrolly; // 0x193e (0x1)
	unsigned char bIsPlayingForwardMotionAnim; // 0x193e (0x1)
	unsigned char bIsPatrolling; // 0x193e (0x1)
	unsigned char unreflected_193f[0x1]; // 0x193f (0x1) 
	struct FName HeadTrackingReticleSocketName; // 0x1940 (0x4)
	float HeadTrackingReticleInterpSpeed; // 0x1944 (0x4)
	struct FRotator HeadTrackingReticleAdjustment; // 0x1948 (0x18)
	struct FGameplayTagAnimations GameplayTagAnimations; // 0x1960 (0x10)
	struct FVector StandardIdlePelvisOffset; // 0x1970 (0x18)
	struct FVector LargeFemaleIdlePelvisOffset; // 0x1988 (0x18)
	struct FVector IdlePelvisOffset; // 0x19a0 (0x18)
	float IdlePelvisOffsetAlpha; // 0x19b8 (0x4)
	int PawnLOD; // 0x19bc (0x4)
	float WeaponInspectDelayTimeRemaining; // 0x19c0 (0x4)
	float MinDelayBetweenWeaponInspects; // 0x19c4 (0x4)
	float DisabledFullBodySprintTimeRemaining; // 0x19c8 (0x4)
	unsigned char bIsFullBodySprintTransitionDisabled; // 0x19cc (0x1)
	unsigned char bParaGlideOpenGlider; // 0x19cc (0x1)
	unsigned char bIsTacticalSprint; // 0x19cc (0x1)
	unsigned char bIsTacticalJump; // 0x19cc (0x1)
	unsigned char bIsTacticalInAir; // 0x19cc (0x1)
	unsigned char bIsNormalJump; // 0x19cc (0x1)
	unsigned char bIsNormalFall; // 0x19cc (0x1)
	unsigned char bIsDoorBashExit; // 0x19cc (0x1)
	unsigned char bIsInWater; // 0x19cd (0x1)
	unsigned char bIsHurdleFall; // 0x19cd (0x1)
	unsigned char unreflected_19ce[0x2]; // 0x19ce (0x2) 
	int bPoseDebugIndex; // 0x19d0 (0x4)
	unsigned char bUsePoseDebug; // 0x19d4 (0x1)
	unsigned char bWantsGliderAnimAssetUpdate; // 0x19d4 (0x1)
	unsigned char bTransitionFullBodySprinting; // 0x19d4 (0x1)
	unsigned char bTransitionFullBodyTacticalSprint; // 0x19d4 (0x1)
	unsigned char bTransitionSwimmingFullBodySprinting; // 0x19d4 (0x1)
	unsigned char bTransitionNewFallAditiveNewFallLandAdditive; // 0x19d4 (0x1)
	unsigned char bTransitionFullBodyStunned; // 0x19d4 (0x1)
	unsigned char bTransitionFullBodyDBNOMove; // 0x19d4 (0x1)
	unsigned char bTransitionFullBodyDBNOTurn; // 0x19d5 (0x1)
	unsigned char bEarlyOutLowerbodyTurns; // 0x19d5 (0x1)
	unsigned char bTransitionLowerBodyShuffle; // 0x19d5 (0x1)
	unsigned char bTransitionLowerBodyMovement; // 0x19d5 (0x1)
	unsigned char bTransitionLocomotionAdditiveCrouchTurning; // 0x19d5 (0x1)
	unsigned char bLocomotionIdlestoTurns; // 0x19d5 (0x1)
	unsigned char bTransitionSprintingtoConduit; // 0x19d5 (0x1)
	unsigned char bTransitionDBNOSwimIdletoDBNOSwimTurn; // 0x19d5 (0x1)
	unsigned char bTransitionSwimJumpSurfaceLooptoSwimJumpSurfaceEnd; // 0x19d6 (0x1)
	unsigned char bTransitionSwimJumpSurfaceLooptoIdleAdditive; // 0x19d6 (0x1)
	unsigned char bTransitionNewJumpLoopAdditivetoNewFallAdditive; // 0x19d6 (0x1)
	unsigned char bIsUmbrellaFailing; // 0x19d6 (0x1)
	unsigned char bEnableEmptyHands; // 0x19d6 (0x1)
	unsigned char bHideWeaponForEmptyHands; // 0x19d6 (0x1)
	unsigned char bSupressJogStartAdditiveForLiveEvent; // 0x19d6 (0x1)
	unsigned char bUseFullBodyJumpAdditivesLinkedGraph; // 0x19d6 (0x1)
	unsigned char bUseFullBodyStateLinkedGraph; // 0x19d7 (0x1)
	unsigned char bIsWalking; // 0x19d7 (0x1)
	unsigned char bIsRiding; // 0x19d7 (0x1)
	unsigned char bUseLocomotionPrototype; // 0x19d7 (0x1)
	unsigned char bUseFacialCurves; // 0x19d7 (0x1)
	unsigned char bLinkedDebugGraphActive; // 0x19d7 (0x1)
	unsigned char unreflected_19d8[0x38]; // 0x19d8 (0x38) 
	bool bWasFallingLastTick; // 0x1a10 (0x1)
	unsigned char padding_1a11[0xf]; // 0x1a11 (0xf)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerAnimInstance.UpdateTacticalSprint (Underlying native function: UpdateTacticalSprint 0x8246bb4)
	void UpdateTacticalSprint(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerAnimInstance.SetIsPatrolling (Underlying native function: SetIsPatrolling 0x82468f8)
	void SetIsPatrolling(bool& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerAnimInstance.OnPlayMontageFromGameplayTagQuery (Has no native function)
	void OnPlayMontageFromGameplayTagQuery(struct FGameplayTagQuery& MatchingQuery, class UAnimMontage*& MontagePlaying); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerAnimInstance.HandleBeginSkydiving (Underlying native function: HandleBeginSkydiving 0x26221f0)
	void HandleBeginSkydiving(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerAnimInstance.GetRelativeAngle (Underlying native function: GetRelativeAngle 0x8246358)
	float GetRelativeAngle(float& MovementAngle, enum EFortCardinalDirection& Direction, bool& bMirrorBackside); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerAnimInstance.FindEmoteToPlay (Underlying native function: FindEmoteToPlay 0x8245c74)
	class UAnimMontage* FindEmoteToPlay(class AFortPlayerController*& FortPlayerController, struct TEnumAsByte<EFortCustomBodyType>& InBodyType, struct TEnumAsByte<EFortCustomGender>& InGender); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerAnimInstance.AnimNotify_StopFireFX (Underlying native function: AnimNotify_StopFireFX 0x82458c0)
	void AnimNotifyStopFireFX(class UAnimNotify*& Notify); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerAnimInstance.AnimNotify_SkydiveAdditiveEnd (Underlying native function: AnimNotify_SkydiveAdditiveEnd 0x8245818)
	void AnimNotifySkydiveAdditiveEnd(class UAnimNotify*& Notify); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerAnimInstance.AnimNotify_PlayWeaponInspect (Underlying native function: AnimNotify_PlayWeaponInspect 0x2d7d574)
	void AnimNotifyPlayWeaponInspect(class UAnimNotify*& Notify); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerAnimInstance.AnimNotify_PlaySecondaryFireFX (Underlying native function: AnimNotify_PlaySecondaryFireFX 0x8245778)
	void AnimNotifyPlaySecondaryFireFX(class UAnimNotify*& Notify); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerAnimInstance.AnimNotify_PlayFireFX (Underlying native function: AnimNotify_PlayFireFX 0x28c5f58)
	void AnimNotifyPlayFireFX(class UAnimNotify*& Notify); // (Final | Native | Public)
};
