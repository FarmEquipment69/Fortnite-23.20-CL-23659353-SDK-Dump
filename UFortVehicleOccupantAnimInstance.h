// Class /Script/FortniteGame.FortVehicleOccupantAnimInstance
// Size: 0x810
class UFortVehicleOccupantAnimInstance : public UFortAnimInstance
{
	struct FFortAnimInput_VelocityImpact VelocityImpact; // 0x530 (0xf0)
	struct FFortAnimInput_SocketBasedIKTarget RightHandIKTarget; // 0x620 (0x40)
	struct FFortAnimInput_SocketBasedIKTarget LeftHandIKTarget; // 0x660 (0x40)
	struct FFortAnimInput_VehicleDriverAnimAsset CurrentDriverAnimSet; // 0x6a0 (0xb0)
	class UFortVehicleAnimSet* VehicleAnimSet; // 0x750 (0x8)
	struct FVector ImpactDisplacement; // 0x758 (0x18)
	struct FVector WorldVelocity; // 0x770 (0x18)
	struct FVector2D DriveStartPlayRateSpeedRange; // 0x788 (0x10)
	float Speed; // 0x798 (0x4)
	float DesiredSpeed; // 0x79c (0x4)
	float SlopePitchDegreeAngle; // 0x7a0 (0x4)
	float SlopeRollDegreeAngle; // 0x7a4 (0x4)
	float SteeringAngle; // 0x7a8 (0x4)
	float DriveStartPlayRate; // 0x7ac (0x4)
	float AimYawSmoothed; // 0x7b0 (0x4)
	float AimYawLastFrame; // 0x7b4 (0x4)
	float ReversingSpeedThreshold; // 0x7b8 (0x4)
	float BrakingDeltaThreshold; // 0x7bc (0x4)
	float MovingThreshold; // 0x7c0 (0x4)
	float MovingForwardThreshold; // 0x7c4 (0x4)
	float MovingFastThreshold; // 0x7c8 (0x4)
	float SteeringLeftThreshold; // 0x7cc (0x4)
	float SteeringRightThreshold; // 0x7d0 (0x4)
	float StartAimYawLerpingDeltaThreshold; // 0x7d4 (0x4)
	float StopAimYawLerpingDeltaThreshold; // 0x7d8 (0x4)
	float AimYawSmoothSpeed; // 0x7dc (0x4)
	float PawnToVehicleDeltaYawAngleDegrees; // 0x7e0 (0x4)
	float AimCardDirDeadZoneAngleDegrees; // 0x7e4 (0x4)
	float AimCardDirAngleOffsetDegrees; // 0x7e8 (0x4)
	float AimFWDDeltaAngleDegrees; // 0x7ec (0x4)
	float AimBWDDeltaAngleDegrees; // 0x7f0 (0x4)
	float AimLFTDeltaAngleDegrees; // 0x7f4 (0x4)
	float AimRGTDeltaAngleDegrees; // 0x7f8 (0x4)
	int LastCardDirIndex; // 0x7fc (0x4)
	unsigned char bIsFemale; // 0x800 (0x1)
	unsigned char bIsDriver; // 0x800 (0x1)
	unsigned char bIsFrontPassenger; // 0x800 (0x1)
	unsigned char bIsBackLeftPassenger; // 0x800 (0x1)
	unsigned char bIsBackRightPassenger; // 0x800 (0x1)
	unsigned char bIsBoosting; // 0x800 (0x1)
	unsigned char bIsReversing; // 0x800 (0x1)
	unsigned char bIsBraking; // 0x800 (0x1)
	unsigned char bIsMoving; // 0x801 (0x1)
	unsigned char bIsMovingForward; // 0x801 (0x1)
	unsigned char bIsMovingFast; // 0x801 (0x1)
	unsigned char bIsSteeringRight; // 0x801 (0x1)
	unsigned char bIsSteeringLeft; // 0x801 (0x1)
	unsigned char bIsSmoothingAimYaw; // 0x801 (0x1)
	unsigned char bAimFWD; // 0x801 (0x1)
	unsigned char bAimBWD; // 0x801 (0x1)
	unsigned char bAimLFT; // 0x802 (0x1)
	unsigned char bAimRGT; // 0x802 (0x1)
	unsigned char bEnableLocomotionAdditives; // 0x802 (0x1)
	unsigned char padding_803[0xd]; // 0x803 (0xd)
};

