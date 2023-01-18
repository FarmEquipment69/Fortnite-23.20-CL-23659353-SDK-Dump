// Class /Script/FortniteGame.FortPlayerAnimInstance_FerretDriver
// Size: 0x1e10
class UFortPlayerAnimInstance_FerretDriver : public UFortPlayerAnimInstance
{
	struct FFortAnimInput_FerretVehicle FerretVehicleInput; // 0x1a18 (0xb8)
	struct FFortAnimInput_VelocityImpact VelocityImpact; // 0x1ad0 (0xf0)
	struct FVector ImpactDisplacement; // 0x1bc0 (0x18)
	float AbsSteerAngle; // 0x1bd8 (0x4)
	unsigned char unreflected_1bdc[0x4]; // 0x1bdc (0x4) 
	unsigned char bInAir; // 0x1be0 (0x1)
	unsigned char bOnGround; // 0x1be0 (0x1)
	unsigned char bIsInRollAngleThreshold; // 0x1be0 (0x1)
	unsigned char bIsDriveStarting; // 0x1be0 (0x1)
	unsigned char unreflected_1be1[0x7]; // 0x1be1 (0x7) 
	struct FVector LocalLeftOffset; // 0x1be8 (0x18)
	struct FVector WorldPosLeft; // 0x1c00 (0x18)
	struct FRotator LocalRotLeftOffset; // 0x1c18 (0x18)
	struct FRotator WorldRotLeft; // 0x1c30 (0x18)
	struct FVector LocalRightOffset; // 0x1c48 (0x18)
	struct FVector WorldPosRight; // 0x1c60 (0x18)
	struct FRotator LocalRotRightOffset; // 0x1c78 (0x18)
	struct FRotator WorldRotRight; // 0x1c90 (0x18)
	unsigned char bIsSteeringRotating; // 0x1ca8 (0x1)
	unsigned char bIsStopped; // 0x1ca8 (0x1)
	unsigned char bIsSlowingDown; // 0x1ca8 (0x1)
	unsigned char bIsDrivingFast; // 0x1ca8 (0x1)
	unsigned char bIsTurningRightHard; // 0x1ca8 (0x1)
	unsigned char bIsTurningLeftHard; // 0x1ca8 (0x1)
	unsigned char bIsBraking; // 0x1ca8 (0x1)
	unsigned char bIsBoosting; // 0x1ca9 (0x1)
	unsigned char bIsJumpTrick; // 0x1ca9 (0x1)
	unsigned char unreflected_1caa[0x2]; // 0x1caa (0x2) 
	float JumpPlayRate; // 0x1cac (0x4)
	unsigned char bIsJumpFlipping; // 0x1cb0 (0x1)
	unsigned char bShouldEnableAO; // 0x1cb0 (0x1)
	unsigned char bIsBodyDragging; // 0x1cb0 (0x1)
	unsigned char unreflected_1cb1[0x3]; // 0x1cb1 (0x3) 
	float FallDistanceJumpingThreshold; // 0x1cb4 (0x4)
	float FallDistanceJumpTrickThreshold; // 0x1cb8 (0x4)
	float RollAngleThreshold; // 0x1cbc (0x4)
	float StartSpeedThreshold; // 0x1cc0 (0x4)
	float SlowingSpeedThreshold; // 0x1cc4 (0x4)
	float FastSpeedThreshold; // 0x1cc8 (0x4)
	float BrakingDeltaThreshold; // 0x1ccc (0x4)
	float SteerHardAngleThreshold; // 0x1cd0 (0x4)
	float GroundTraceUpOffset; // 0x1cd4 (0x4)
	float GroundTraceLength; // 0x1cd8 (0x4)
	unsigned char unreflected_1cdc[0x4]; // 0x1cdc (0x4) 
	struct FVector2D JumpPlayRateInRange; // 0x1ce0 (0x10)
	struct FVector2D JumpPlayRateOutRange; // 0x1cf0 (0x10)
	unsigned char bIsJumpingAndNotRolling; // 0x1d00 (0x1)
	unsigned char bIsOnGroundAndNotRolling; // 0x1d00 (0x1)
	unsigned char bIsOnGroundAndBoosting; // 0x1d00 (0x1)
	unsigned char bPlayPivotOnGroundAndNotBoosting; // 0x1d00 (0x1)
	unsigned char unreflected_1d01[0x7]; // 0x1d01 (0x7) 
	struct FVector2D LandStartPosInRange; // 0x1d08 (0x10)
	struct FVector2D LandStartPosOutRange; // 0x1d18 (0x10)
	float LandStartPosition; // 0x1d28 (0x4)
	float DriverAimPitch; // 0x1d2c (0x4)
	float DriverAimYaw; // 0x1d30 (0x4)
	enum EPlaneDirection FerretCardinalDirection; // 0x1d34 (0x1)
	unsigned char unreflected_1d35[0x3]; // 0x1d35 (0x3) 
	float ElevatorDeadZone; // 0x1d38 (0x4)
	float RudderDeadZone; // 0x1d3c (0x4)
	unsigned char bFerretShouldPlayStartTransition; // 0x1d40 (0x1)
	unsigned char bFerretShouldPlayStopTransition; // 0x1d40 (0x1)
	enum EPlaneDirection FerretStopCardinalDirection; // 0x1d41 (0x1)
	enum EPlaneDirection FerretPrePivotCardinalDirection; // 0x1d42 (0x1)
	unsigned char bFerretShouldPlayPivotTransition; // 0x1d43 (0x1)
	unsigned char bIsFerretRotating; // 0x1d43 (0x1)
	unsigned char bIsFerretShooting; // 0x1d43 (0x1)
	float ElevatorRotation; // 0x1d44 (0x4)
	unsigned char bIsRollingRight; // 0x1d48 (0x1)
	unsigned char bIsRollingLeft; // 0x1d48 (0x1)
	unsigned char unreflected_1d49[0x7]; // 0x1d49 (0x7) 
	struct FVector LeftHandLocalTranslateOffset; // 0x1d50 (0x18)
	struct FVector RightHandLocalTranslateOffset; // 0x1d68 (0x18)
	struct FRotator LeftHandLocalRotateOffset; // 0x1d80 (0x18)
	struct FRotator RightHandLocalRotateOffset; // 0x1d98 (0x18)
	struct FVector LeftHandComponentTranslateOffset; // 0x1db0 (0x18)
	struct FVector RightHandComponentTranslateOffset; // 0x1dc8 (0x18)
	struct FRotator LeftHandComponentRotateOffset; // 0x1de0 (0x18)
	struct FRotator RightHandComponentRotateOffset; // 0x1df8 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerAnimInstance_FerretDriver.AnimNotify_JumpEntered (Underlying native function: AnimNotify_JumpEntered 0x8264a14)
	void AnimNotifyJumpEntered(); // (Final | Native | Public)
};
