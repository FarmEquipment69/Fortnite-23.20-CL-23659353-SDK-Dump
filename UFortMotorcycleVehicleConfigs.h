// Class /Script/MotorcycleRuntime.FortMotorcycleVehicleConfigs
// Size: 0xb30
class UFortMotorcycleVehicleConfigs : public UFortPhysicsVehicleConfigs
{
	struct TArray<struct FMotorcycleWheel> Wheels; // 0x890 (0x10)
	float SpringInterpDamp; // 0x8a0 (0x4)
	float WheelieSpringInterpDamp; // 0x8a4 (0x4)
	float WallPushStiff; // 0x8a8 (0x4)
	float WallPushDamp; // 0x8ac (0x4)
	struct FVector WallPushXTraceOffset; // 0x8b0 (0x18)
	float WallPushForwardTraceLengthScale; // 0x8c8 (0x4)
	float WallPushBackTraceLengthScale; // 0x8cc (0x4)
	float WallPushRightTraceLength; // 0x8d0 (0x4)
	unsigned char unreflected_8d4[0x4]; // 0x8d4 (0x4) 
	struct FVector WallPushRightTraceOffset; // 0x8d8 (0x18)
	float WallPushAngle; // 0x8f0 (0x4)
	bool bUseWallPushTracesForWalls; // 0x8f4 (0x1)
	unsigned char unreflected_8f5[0x3]; // 0x8f5 (0x3) 
	float MaxJumpChargeTime; // 0x8f8 (0x4)
	float MinChargeJumpForce; // 0x8fc (0x4)
	float MaxChargeJumpForce; // 0x900 (0x4)
	float MinJumpForwardAngle; // 0x904 (0x4)
	float MaxJumpForwardAngle; // 0x908 (0x4)
	unsigned char unreflected_90c[0x4]; // 0x90c (0x4) 
	struct FVector JumpForceMinCOMOffset; // 0x910 (0x18)
	struct FVector JumpForceMaxCOMOffset; // 0x928 (0x18)
	float JumpChargeGraceTimeSeconds; // 0x940 (0x4)
	float JumpGraceTimeSeconds; // 0x944 (0x4)
	float LeanAngleScale; // 0x948 (0x4)
	float LeanStiff; // 0x94c (0x4)
	float LeanDamp; // 0x950 (0x4)
	float LeanStrength; // 0x954 (0x4)
	float SlideCatchupForceTime; // 0x958 (0x4)
	float SlideCatchupSpeed; // 0x95c (0x4)
	float SlideCatchupPushForce; // 0x960 (0x4)
	float AutoAirPitchAngle; // 0x964 (0x4)
	float MinSteeringAngleForModifiedFriction; // 0x968 (0x4)
	float MinSpeedForModifiedFriction; // 0x96c (0x4)
	float MinSteeringAngleToConsiderTractionLost; // 0x970 (0x4)
	float FrictionRatioToConsiderTractionLost; // 0x974 (0x4)
	float WheeliePitchStiffMin; // 0x978 (0x4)
	float WheeliePitchStiffMax; // 0x97c (0x4)
	float WheeliePitchDampMin; // 0x980 (0x4)
	float WheeliePitchDampMax; // 0x984 (0x4)
	float WheeliePitchAngleMin; // 0x988 (0x4)
	float WheeliePitchAngleMax; // 0x98c (0x4)
	float StoppiePitchAngle; // 0x990 (0x4)
	float StoppiePitchStiff; // 0x994 (0x4)
	float StoppiePitchDamp; // 0x998 (0x4)
	float WheelieRampSeconds; // 0x99c (0x4)
	float WheelieFailPitchAngle; // 0x9a0 (0x4)
	float WheelieRecoveryRate; // 0x9a4 (0x4)
	float WheelieFailRecoveryRate; // 0x9a8 (0x4)
	float WheelieMinStartSpeed; // 0x9ac (0x4)
	float StoppieMinStopSpeed; // 0x9b0 (0x4)
	float WheelieSteerFactor; // 0x9b4 (0x4)
	float StoppieSteerFactor; // 0x9b8 (0x4)
	float TrickTimeToBoost; // 0x9bc (0x4)
	float WheelieSteerAlphaThreshold; // 0x9c0 (0x4)
	float WheelieGroundBufferTime; // 0x9c4 (0x4)
	float StoppieGroundBufferTime; // 0x9c8 (0x4)
	float WheelieSpringLengthExponent; // 0x9cc (0x4)
	float WheelieWheelOffsetLerpMultiplier; // 0x9d0 (0x4)
	float WheelieBrakeFactor; // 0x9d4 (0x4)
	float StoppieTurnInPlaceSpeed; // 0x9d8 (0x4)
	float StoppieTurnInPlaceSpeedIce; // 0x9dc (0x4)
	float MinSpeedKmhForMaxStoppie; // 0x9e0 (0x4)
	float StoppieTurnAngleExponent; // 0x9e4 (0x4)
	float StoppieMaxTurnAngle; // 0x9e8 (0x4)
	float WheelieTireTractionMultiplierMin; // 0x9ec (0x4)
	float WheelieCameraMinStraightFactor; // 0x9f0 (0x4)
	float MaxLeanAccel; // 0x9f4 (0x4)
	float CruiseControlForwardAlpha; // 0x9f8 (0x4)
	float InventoryModeSpeedKmh; // 0x9fc (0x4)
	float CruiseControlDisengageSpeedKmh; // 0xa00 (0x4)
	float PowerSlideFrontFrictionMultiplier; // 0xa04 (0x4)
	float PowerSlideRearFrictionMultiplier; // 0xa08 (0x4)
	float PowerSlideRoadFrontFrictionMultiplier; // 0xa0c (0x4)
	float PowerSlideRoadRearFrictionMultiplier; // 0xa10 (0x4)
	float PowerSlideDirtFrontFrictionMultiplier; // 0xa14 (0x4)
	float PowerSlideDirtRearFrictionMultiplier; // 0xa18 (0x4)
	float PowerSlideGrassFrontFrictionMultiplier; // 0xa1c (0x4)
	float PowerSlideGrassRearFrictionMultiplier; // 0xa20 (0x4)
	float PowerSlideSnowFrontFrictionMultiplier; // 0xa24 (0x4)
	float PowerSlideSnowRearFrictionMultiplier; // 0xa28 (0x4)
	float PowerSlideIceFrontFrictionMultiplier; // 0xa2c (0x4)
	float PowerSlideIceRearFrictionMultiplier; // 0xa30 (0x4)
	float PowerSlideFactor; // 0xa34 (0x4)
	float PowerSlideDampFactor; // 0xa38 (0x4)
	float FrictionDampFactor; // 0xa3c (0x4)
	float PowerSlideLeanAngleScale; // 0xa40 (0x4)
	float PowerslideInputWindow; // 0xa44 (0x4)
	float ShootingMinSpeedSteeringAngle; // 0xa48 (0x4)
	float ShootingMaxSpeedSteeringAngle; // 0xa4c (0x4)
	float InventoryModeCameraYawConstraint; // 0xa50 (0x4)
	float BoostTopSpeedMultiplier; // 0xa54 (0x4)
	float BoostPushForceMultiplier; // 0xa58 (0x4)
	float BoostMinPushForce; // 0xa5c (0x4)
	float BoostSteeringMultiplier; // 0xa60 (0x4)
	float TrickBoostDuration; // 0xa64 (0x4)
	bool bPlayHolsterAnimsOnClient; // 0xa68 (0x1)
	unsigned char unreflected_a69[0x3]; // 0xa69 (0x3) 
	float FrontWheelSteeringFactor; // 0xa6c (0x4)
	float FrontWheelRotationAcceleration; // 0xa70 (0x4)
	float PassengerInventoryCooldown; // 0xa74 (0x4)
	float DriverInventoryCooldown; // 0xa78 (0x4)
	unsigned char unreflected_a7c[0x4]; // 0xa7c (0x4) 
	struct TSet<struct FName> BoostAttackShapes; // 0xa80 (0x50)
	float CameraAssistStrengthMax; // 0xad0 (0x4)
	float CameraAssistStrengthMin; // 0xad4 (0x4)
	float CameraAssistStrengthRecovery; // 0xad8 (0x4)
	float CameraAssistInterpSpeed; // 0xadc (0x4)
	float AirTrickIncrementInterval; // 0xae0 (0x4)
	float AirTrickFeedStartTime; // 0xae4 (0x4)
	float AirTrickPitchMultiplier; // 0xae8 (0x4)
	float AirTrickYawMultiplier; // 0xaec (0x4)
	float PoppedTireTractionScalarFront; // 0xaf0 (0x4)
	float PoppedTireTractionScalarRear; // 0xaf4 (0x4)
	float PoppedTireTractionScalarBoth; // 0xaf8 (0x4)
	unsigned char unreflected_afc[0x4]; // 0xafc (0x4) 
	struct FScalableFloat TopSpeedKmh; // 0xb00 (0x28)
	unsigned char padding_b28[0x8]; // 0xb28 (0x8)
};

