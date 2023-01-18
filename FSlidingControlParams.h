// ScriptStruct /Script/FortniteGame.SlidingControlParams
// Size: 0x640
struct FSlidingControlParams
{
	struct FScalableFloat MinAnalogSpeed; // 0x0 (0x28)
	struct FScalableFloat BrakingDeceleration; // 0x28 (0x28)
	struct FScalableFloat WalkableFloorAngle; // 0x50 (0x28)
	struct FScalableFloat SlidingIsEnabled; // 0x78 (0x28)
	struct FScalableFloat MinSpeedToStartSliding; // 0xa0 (0x28)
	struct FScalableFloat UphillSlideStartBoost; // 0xc8 (0x28)
	struct FScalableFloat LevelSlideStartBoost; // 0xf0 (0x28)
	struct FScalableFloat DownhillSlideStartBoost; // 0x118 (0x28)
	struct FScalableFloat MaxSlidingSlopeAngle; // 0x140 (0x28)
	struct FScalableFloat UphillGroundFrictionMultiplier; // 0x168 (0x28)
	struct FScalableFloat LevelGroundFrictionMultiplier; // 0x190 (0x28)
	struct FScalableFloat DownhillGroundFrictionMultiplier; // 0x1b8 (0x28)
	struct FScalableFloat MaxForwardSlidingSpeed; // 0x1e0 (0x28)
	struct FScalableFloat MaxLateralSlidingSpeed; // 0x208 (0x28)
	struct FScalableFloat MinForwardSlidingSpeed; // 0x230 (0x28)
	struct FScalableFloat MaxForwardSlidingAcceleration; // 0x258 (0x28)
	struct FScalableFloat MaxLateralSlidingAcceleration; // 0x280 (0x28)
	struct FScalableFloat MaxBackwardSlidingAcceleration; // 0x2a8 (0x28)
	struct FScalableFloat SlidingFatigueDuration; // 0x2d0 (0x28)
	struct FScalableFloat SlidingFatigueMultiplier; // 0x2f8 (0x28)
	struct FScalableFloat EnterSlideFromFallInputBuffer; // 0x320 (0x28)
	struct FScalableFloat CrouchCooldownAfterSlideDuration; // 0x348 (0x28)
	bool bUncrouchAfterSlidingIfMoving; // 0x370 (0x1)
	unsigned char unreflected_371[0x3]; // 0x371 (0x3) 
	float MinAccelerationSlidingAngle; // 0x374 (0x4)
	struct FScalableFloat MinAngleForAdditionalMomentum; // 0x378 (0x28)
	struct FScalableFloat MinAdditionalMomentum; // 0x3a0 (0x28)
	struct FScalableFloat MaxAdditionalMomentum; // 0x3c8 (0x28)
	bool bClampMaximumSpeedToEntryDirection; // 0x3f0 (0x1)
	bool bUsePhysicsSlidingDownSlopeImpulsion; // 0x3f1 (0x1)
	unsigned char unreflected_3f2[0x6]; // 0x3f2 (0x6) 
	struct FScalableFloat FallingGracePeriod; // 0x3f8 (0x28)
	struct FScalableFloat LandingVelocityReductionRatio; // 0x420 (0x28)
	bool UseAccelerationRotateVelocity; // 0x448 (0x1)
	unsigned char unreflected_449[0x7]; // 0x449 (0x7) 
	struct FScalableFloat MaxRotationAngleOnAcceleration; // 0x450 (0x28)
	struct FScalableFloat RotationAngleSpeedOnAcceleration; // 0x478 (0x28)
	struct FScalableFloat SlopeUpAddedFrictionAngle; // 0x4a0 (0x28)
	struct FScalableFloat SlopeUpAddedFrictionValue; // 0x4c8 (0x28)
	struct FScalableFloat SlidingVerticalVelocityConvertedOnLanding; // 0x4f0 (0x28)
	class UCurveFloat* SlidingLandingSpeedTransferRatioCurve; // 0x518 (0x8)
	struct FScalableFloat SlidingUseSlopeAngleForVerticalVelocityTransferRatio; // 0x520 (0x28)
	class UCurveFloat* SlidingSpeedAddedFrictionCurve; // 0x548 (0x8)
	struct FScalableFloat SlidingRentryFromJumpPenalty; // 0x550 (0x28)
	struct FScalableFloat JumpSlideCapsuleRadiusDetectionRange; // 0x578 (0x28)
	struct FScalableFloat JumpSlideCapsuleHeightClearanceCoefficient; // 0x5a0 (0x28)
	struct FScalableFloat JumpSlideAllowedSurfaceAngleDeviation; // 0x5c8 (0x28)
	struct FScalableFloat MinSpeedToStartJumpSliding; // 0x5f0 (0x28)
	struct FScalableFloat JumpSlideSweepHeightShrinkCoefficient; // 0x618 (0x28)
};
