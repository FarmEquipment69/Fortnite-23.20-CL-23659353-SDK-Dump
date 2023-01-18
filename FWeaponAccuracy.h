// ScriptStruct /Script/FortniteAI.WeaponAccuracy
// Size: 0x738
struct FWeaponAccuracy
{
	struct FScalableFloat MaxTrackingOffsetError; // 0x0 (0x28)
	struct FScalableFloat TargetingMaxTrackingOffsetError; // 0x28 (0x28)
	struct FScalableFloat MaxTrackingDistanceFarError; // 0x50 (0x28)
	struct FScalableFloat TargetingMaxTrackingDistanceFarError; // 0x78 (0x28)
	struct FScalableFloat MaxTrackingDistanceNearError; // 0xa0 (0x28)
	struct FScalableFloat TargetingMaxTrackingDistanceNearError; // 0xc8 (0x28)
	struct FScalableFloat TrackingDistanceNearErrorProbability; // 0xf0 (0x28)
	struct FScalableFloat TargetingActivationProbability; // 0x118 (0x28)
	struct FScalableFloat FiringRestrictedToTargetingActive; // 0x140 (0x28)
	struct FScalableFloat MinimumDistanceForAiming; // 0x168 (0x28)
	struct FScalableFloat MinimumDistanceForPawnAiming; // 0x190 (0x28)
	struct FScalableFloat IdealAttackRange; // 0x1b8 (0x28)
	struct FScalableFloat TargetingIdealAttackRange; // 0x1e0 (0x28)
	struct FScalableFloat MaxAttackRangeFactor; // 0x208 (0x28)
	struct FScalableFloat ShouldAimAtTargetsFeet; // 0x230 (0x28)
	struct FScalableFloat ShouldUseProjectileArcForAiming; // 0x258 (0x28)
	struct FScalableFloat KeepAimingOnSameSideWhileFiring; // 0x280 (0x28)
	struct FScalableFloat MaxTrackingHeightOffsetError; // 0x2a8 (0x28)
	struct FScalableFloat MinRotationInterpSpeed; // 0x2d0 (0x28)
	struct FScalableFloat MaxRotationInterpSpeed; // 0x2f8 (0x28)
	struct FScalableFloat ConsiderProjectileTravelTime; // 0x320 (0x28)
	bool bOverrideAimingCircleSettings; // 0x348 (0x1)
	unsigned char unreflected_349[0x7]; // 0x349 (0x7) 
	struct FAimingCircleSettings AimingCircleSettingsOverride; // 0x350 (0x3e8)
};

