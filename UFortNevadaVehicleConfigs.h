// Class /Script/NevadaRuntime.FortNevadaVehicleConfigs
// Size: 0xd38
class UFortNevadaVehicleConfigs : public UFortPhysicsVehicleConfigs
{
	struct FNevadaMoveModeConfig BaseMovement; // 0x890 (0x14)
	struct FNevadaMoveModeConfig BoostMovement; // 0x8a4 (0x14)
	struct FNevadaMoveModeConfig ChargingMovement; // 0x8b8 (0x14)
	struct FDampedSpringConfig UprightSpringForce; // 0x8cc (0xc)
	float DebaseLaunchspeed; // 0x8d8 (0x4)
	float MaxHeight; // 0x8dc (0x4)
	float MinHeight; // 0x8e0 (0x4)
	float OnEnterPitchAlpha; // 0x8e4 (0x4)
	float FallDamageHeightBuffer; // 0x8e8 (0x4)
	float TurningForce; // 0x8ec (0x4)
	float ThrustRotationAlpha; // 0x8f0 (0x4)
	float PitchDrag; // 0x8f4 (0x4)
	float YawDrag; // 0x8f8 (0x4)
	float RollDrag; // 0x8fc (0x4)
	float BoostThrustDuration; // 0x900 (0x4)
	float BoostDragDuration; // 0x904 (0x4)
	int NumBoostCharges; // 0x908 (0x4)
	float BoostChargeDuration; // 0x90c (0x4)
	float BoostChargeDelay; // 0x910 (0x4)
	float BoostDragFinishSpeed; // 0x914 (0x4)
	float TractorBeamRadius; // 0x918 (0x4)
	float TractorBeamWithTargetRadius; // 0x91c (0x4)
	struct FScalableFloat TractorBeamSweepLength; // 0x920 (0x28)
	struct FScalableFloat TractorBeamChargeTime; // 0x948 (0x28)
	struct FScalableFloat TractorBeamDurationTime; // 0x970 (0x28)
	struct FScalableFloat TractorBeamTossImpulseStrengthForward; // 0x998 (0x28)
	struct FScalableFloat TractorBeamTossImpulseStrengthUpward; // 0x9c0 (0x28)
	float TractorBeamShutdownTime; // 0x9e8 (0x4)
	unsigned char unreflected_9ec[0x4]; // 0x9ec (0x4) 
	struct FScalableFloat TractorBeamTurnOffDamage; // 0x9f0 (0x28)
	struct FScalableFloat AllowTractorBeamAIPawns; // 0xa18 (0x28)
	float TractorBeamBreakForceMagnitude; // 0xa40 (0x4)
	unsigned char unreflected_a44[0x4]; // 0xa44 (0x4) 
	struct FScalableFloat TractorBeamActive; // 0xa48 (0x28)
	struct FScalableFloat TractorBeamCooldown; // 0xa70 (0x28)
	struct FScalableFloat TractorBeamDisruptionCooldown; // 0xa98 (0x28)
	struct FName TractorBeamSocket; // 0xac0 (0x4)
	unsigned char unreflected_ac4[0x4]; // 0xac4 (0x4) 
	struct FVector TractorBeamAttachPositionOffset; // 0xac8 (0x18)
	struct FRigidBodyErrorCorrection TractorBeamTargetOverridenErrorCorrection; // 0xae0 (0x34)
	float VictimPitchDrag; // 0xb14 (0x4)
	float VictimYawDrag; // 0xb18 (0x4)
	float VictimRollDrag; // 0xb1c (0x4)
	struct FDampedSpringConfig TractorBeamVictimUprightForce; // 0xb20 (0xc)
	int NumReboots; // 0xb2c (0x4)
	int NumRebootsDefault; // 0xb30 (0x4)
	float MaxCrashingTime; // 0xb34 (0x4)
	float MaxCrashingScrapingTime; // 0xb38 (0x4)
	float MaxCrashingTimeSpentNotMoving; // 0xb3c (0x4)
	float SpeedThresholdForCrashed; // 0xb40 (0x4)
	unsigned char unreflected_b44[0x4]; // 0xb44 (0x4) 
	struct FScalableFloat RebootDuration; // 0xb48 (0x28)
	struct FScalableFloat RebootDelay; // 0xb70 (0x28)
	float LandingTraceRange; // 0xb98 (0x4)
	float DesiredLandingDistance; // 0xb9c (0x4)
	float LandingDelayMax; // 0xba0 (0x4)
	float LandingDelayMin; // 0xba4 (0x4)
	float HeightForMinLandingDelay; // 0xba8 (0x4)
	float HeightForMaxLandingDelay; // 0xbac (0x4)
	float LandingPitchAlphaMax; // 0xbb0 (0x4)
	float LandingPitchAlphaMin; // 0xbb4 (0x4)
	float DriverSeatRotationAnimBlendSpeed; // 0xbb8 (0x4)
	float CrashingDesiredUpLerpFactor; // 0xbbc (0x4)
	float CrashedLinearDrag; // 0xbc0 (0x4)
	float LandedDragCoef; // 0xbc4 (0x4)
	float LandedDragCoef2; // 0xbc8 (0x4)
	float LandedMaxDragSpeed; // 0xbcc (0x4)
	float CrashedAngularDragMultiplier; // 0xbd0 (0x4)
	float BoostFOV; // 0xbd4 (0x4)
	float ExtraTraceInteractRange; // 0xbd8 (0x4)
	float AntiGravityMult; // 0xbdc (0x4)
	float InitialLiftDuration; // 0xbe0 (0x4)
	unsigned char unreflected_be4[0x4]; // 0xbe4 (0x4) 
	struct FScalableFloat BatteryCostDuringFlight; // 0xbe8 (0x28)
	struct FScalableFloat BatteryRegenDelay; // 0xc10 (0x28)
	struct FScalableFloat BatteryRegenTickRate; // 0xc38 (0x28)
	struct FScalableFloat BatteryRegenAmount; // 0xc60 (0x28)
	struct FScalableFloat MaxBattery; // 0xc88 (0x28)
	struct FScalableFloat MinBatteryForFlight; // 0xcb0 (0x28)
	struct TArray<struct FName> CockpitShapeNames; // 0xcd8 (0x10)
	struct FScalableFloat CockpitDamageMult; // 0xce8 (0x28)
	struct FScalableFloat CockpitHealth; // 0xd10 (0x28)
};
