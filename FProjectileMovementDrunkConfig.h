// ScriptStruct /Script/FortniteGame.ProjectileMovementDrunkConfig
// Size: 0x50
struct FProjectileMovementDrunkConfig
{
	class UCurveFloat* DrunkSpeedScaleCurve; // 0x0 (0x8)
	class UCurveFloat* DrunkGravityScaleCurve; // 0x8 (0x8)
	float InitialDelay; // 0x10 (0x4)
	float Duration; // 0x14 (0x4)
	float DirectionChangeRate; // 0x18 (0x4)
	float TurnAngle; // 0x1c (0x4)
	float MinPitch; // 0x20 (0x4)
	float TurnAngleClamp; // 0x24 (0x4)
	float HomingLookaheadDist; // 0x28 (0x4)
	float HomingTurnAngleBlendOut; // 0x2c (0x4)
	float HomingDrunkDuration; // 0x30 (0x4)
	float HomingRandomTargetPositionRadius; // 0x34 (0x4)
	float HomingPassedTargetSlackTime; // 0x38 (0x4)
	float HomingDrunkBlendOutRange; // 0x3c (0x4)
	float HomingDrunkBlendOutTimeThreshold; // 0x40 (0x4)
	float HomingDrunkBlendOutTime; // 0x44 (0x4)
	float HomingDrunkBlendOutTurnSpeed; // 0x48 (0x4)
	float HomingAimPointMaxRange; // 0x4c (0x4)
};

