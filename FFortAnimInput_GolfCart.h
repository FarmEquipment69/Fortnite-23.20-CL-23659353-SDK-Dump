// ScriptStruct /Script/FortniteGame.FortAnimInput_GolfCart
// Size: 0x68
struct FFortAnimInput_GolfCart
{
	unsigned char bIsUsingGolfCart; // 0x0 (0x1)
	unsigned char bIsDriver; // 0x0 (0x1)
	unsigned char bIsFrontPassenger; // 0x0 (0x1)
	unsigned char bIsBackLeftPassenger; // 0x0 (0x1)
	unsigned char bIsBackRightPassenger; // 0x0 (0x1)
	unsigned char bIsFrontPassengerAndLeaning; // 0x0 (0x1)
	unsigned char bIsBackPassengerAndLeaning; // 0x0 (0x1)
	unsigned char bIsDrifting; // 0x0 (0x1)
	unsigned char bIsBoosting; // 0x1 (0x1)
	unsigned char bIsEBraking; // 0x1 (0x1)
	unsigned char bIsReversing; // 0x1 (0x1)
	unsigned char bIsBraking; // 0x1 (0x1)
	unsigned char bIsMoving; // 0x1 (0x1)
	unsigned char bIsMovingForward; // 0x1 (0x1)
	unsigned char bIsPowerSliding; // 0x1 (0x1)
	unsigned char bIsLeaning; // 0x1 (0x1)
	unsigned char bIsLeaningOrBouncing; // 0x2 (0x1)
	unsigned char bIsBounceCrouching; // 0x2 (0x1)
	unsigned char bIsBounceCrouched; // 0x2 (0x1)
	unsigned char bIsBounceJumping; // 0x2 (0x1)
	unsigned char bIsBounceRecoiling; // 0x2 (0x1)
	unsigned char bIsSteeringRight; // 0x2 (0x1)
	unsigned char bIsSteeringLeft; // 0x2 (0x1)
	unsigned char unreflected_3[0x1]; // 0x3 (0x1) 
	float RunForwardAlpha; // 0x4 (0x4)
	float BounceCompression; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FVector LeanPosition; // 0x10 (0x18)
	float LeanPositionX; // 0x28 (0x4)
	float LeanPositionY; // 0x2c (0x4)
	float LeanPositionZ; // 0x30 (0x4)
	unsigned char bAimFWD; // 0x34 (0x1)
	unsigned char bAimBWD; // 0x34 (0x1)
	unsigned char bAimLFT; // 0x34 (0x1)
	unsigned char bAimRGT; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	float PawnToVehicleDeltaYawAngleDegrees; // 0x38 (0x4)
	float AimCardDirDeadZoneAngleDegrees; // 0x3c (0x4)
	float AimCardDirAngleOffsetDegrees; // 0x40 (0x4)
	int LastCardDirIndex; // 0x44 (0x4)
	float AimFWDDeltaAngleDegrees; // 0x48 (0x4)
	float AimBWDDeltaAngleDegrees; // 0x4c (0x4)
	float AimLFTDeltaAngleDegrees; // 0x50 (0x4)
	float AimRGTDeltaAngleDegrees; // 0x54 (0x4)
	float SlopePitchDegreeAngle; // 0x58 (0x4)
	float SlopeRollDegreeAngle; // 0x5c (0x4)
	float SteerAngle; // 0x60 (0x4)
	unsigned char padding_64[0x4]; // 0x64 (0x4)
};

