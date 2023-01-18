// ScriptStruct /Script/FortniteAI.DigestedWeaponAccuracy
// Size: 0x320
struct FDigestedWeaponAccuracy
{
	struct FScalableFloat TrackingOffsetError; // 0x0 (0x28)
	struct FScalableFloat TargetingTrackingOffsetError; // 0x28 (0x28)
	struct FScalableFloat TrackingDistanceFarError; // 0x50 (0x28)
	struct FScalableFloat TargetingTrackingDistanceFarError; // 0x78 (0x28)
	struct FScalableFloat TrackingDistanceNearError; // 0xa0 (0x28)
	struct FScalableFloat TargetingTrackingDistanceNearError; // 0xc8 (0x28)
	struct FScalableFloat TrackingDistanceNearErrorProbability; // 0xf0 (0x28)
	struct FScalableFloat TargetingActivationProbability; // 0x118 (0x28)
	struct FScalableFloat FiringRestrictedToTargetingActive; // 0x140 (0x28)
	float MinimumDistanceForAiming; // 0x168 (0x4)
	float MinimumDistanceForPawnAiming; // 0x16c (0x4)
	float IdealAttackRange; // 0x170 (0x4)
	float TargetingIdealAttackRange; // 0x174 (0x4)
	float MaxAttackRange; // 0x178 (0x4)
	float ChanceToAimAtTargetsFeet; // 0x17c (0x4)
	struct FScalableFloat ShouldUseProjectileArcForAiming; // 0x180 (0x28)
	bool bKeepAimingOnSameSideWhileFiring; // 0x1a8 (0x1)
	unsigned char unreflected_1a9[0x3]; // 0x1a9 (0x3) 
	float MaxTrackingHeightOffsetError; // 0x1ac (0x4)
	float MinRotationInterpSpeed; // 0x1b0 (0x4)
	float MaxRotationInterpSpeed; // 0x1b4 (0x4)
	bool bOverrideAimingCircleSettings; // 0x1b8 (0x1)
	bool bConsiderProjectileTravelTime; // 0x1b9 (0x1)
	unsigned char unreflected_1ba[0x6]; // 0x1ba (0x6) 
	struct FDigestedAimingCircleSettings AimingCircleSettingsOverride; // 0x1c0 (0x160)
};

