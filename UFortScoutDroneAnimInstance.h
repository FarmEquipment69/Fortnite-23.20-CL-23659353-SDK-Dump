// Class /Script/ScoutDroneRuntime.FortScoutDroneAnimInstance
// Size: 0x630
class UFortScoutDroneAnimInstance : public UFortBaseAnimInstance
{
	class UFortScoutDroneMovementComponent* FortScoutDroneMovementComponent; // 0x430 (0x8)
	double YawDeltaLastTick; // 0x438 (0x8)
	struct FRotator ActorCurrentRotationTick; // 0x440 (0x18)
	double YawDeltaCurrentTick; // 0x458 (0x8)
	struct FRotator ActorRotationLastTick; // 0x460 (0x18)
	bool IsFlying; // 0x478 (0x1)
	unsigned char unreflected_479[0x7]; // 0x479 (0x7) 
	double CurrentVelocity; // 0x480 (0x8)
	double LastVelocity; // 0x488 (0x8)
	double Velocity; // 0x490 (0x8)
	double ForwardInputAlpha; // 0x498 (0x8)
	double StrafeInputAlpha; // 0x4a0 (0x8)
	struct FRotator DroneRotation; // 0x4a8 (0x18)
	double Acceleration; // 0x4c0 (0x8)
	class AFortScoutDrone* ScoutDrone; // 0x4c8 (0x8)
	bool IsBoosting; // 0x4d0 (0x1)
	bool IsDiving; // 0x4d1 (0x1)
	unsigned char unreflected_4d2[0x6]; // 0x4d2 (0x6) 
	double AimPitch; // 0x4d8 (0x8)
	double NegativeAimPitch; // 0x4e0 (0x8)
	struct FRotator FinalFanRotationL; // 0x4e8 (0x18)
	struct FRotator FinalFanRotationR; // 0x500 (0x18)
	double FanIdleSpeed; // 0x518 (0x8)
	double FanAuthoredSpeed; // 0x520 (0x8)
	double FanIdleAuthoredSpeed; // 0x528 (0x8)
	double FanBwdSpeed; // 0x530 (0x8)
	double FanFwdSpeed; // 0x538 (0x8)
	double TurnNoiseAlpha; // 0x540 (0x8)
	double LeanAlpha; // 0x548 (0x8)
	double TurnAlpha; // 0x550 (0x8)
	bool IsColliding; // 0x558 (0x1)
	bool IsFlyingBwd; // 0x559 (0x1)
	bool ShouldExitFromFlying; // 0x55a (0x1)
	bool ShouldExitFromDiving; // 0x55b (0x1)
	bool EarlyIntoLoop; // 0x55c (0x1)
	unsigned char unreflected_55d[0x3]; // 0x55d (0x3) 
	double AccelerationZ; // 0x560 (0x8)
	bool IsLeftStrafe; // 0x568 (0x1)
	bool WasStrafing; // 0x569 (0x1)
	unsigned char unreflected_56a[0x6]; // 0x56a (0x6) 
	double GroundDistance; // 0x570 (0x8)
	bool HasDivingConditionBeenMet; // 0x578 (0x1)
	bool IsItemAttached; // 0x579 (0x1)
	bool IsPlayerAttached; // 0x57a (0x1)
	unsigned char unreflected_57b[0x5]; // 0x57b (0x5) 
	double FlapTime; // 0x580 (0x8)
	int FlapRandomPick; // 0x588 (0x4)
	bool IsFlapSmall; // 0x58c (0x1)
	unsigned char unreflected_58d[0x3]; // 0x58d (0x3) 
	int FlapRandomMaxRange; // 0x590 (0x4)
	unsigned char unreflected_594[0x4]; // 0x594 (0x4) 
	double FlapSmallTimeThreshold; // 0x598 (0x8)
	double FlapBigTimeThreshold; // 0x5a0 (0x8)
	double FlapSmallResetDelayDuration; // 0x5a8 (0x8)
	double FlapBigResetDelayDuration; // 0x5b0 (0x8)
	bool IsFlapBig; // 0x5b8 (0x1)
	unsigned char unreflected_5b9[0x7]; // 0x5b9 (0x7) 
	double VerticalInputAlpha; // 0x5c0 (0x8)
	bool WasVerticalUp; // 0x5c8 (0x1)
	bool IsFlyingVerticalUp; // 0x5c9 (0x1)
	bool ShouldExitFromBoostOutro; // 0x5ca (0x1)
	bool HasSpawned; // 0x5cb (0x1)
	bool ShouldExitFromSpawning; // 0x5cc (0x1)
	bool ShouldAllowTransition; // 0x5cd (0x1)
	bool StateRuleFromBoostOutroToFlying; // 0x5ce (0x1)
	bool WasBoosting; // 0x5cf (0x1)
	struct FScalableFloat SpeedBoostForceBoostVelocity; // 0x5d0 (0x28)
	struct FScalableFloat SpeedBoostMaxSpeedIncrease; // 0x5f8 (0x28)
	bool IsFlappingTime; // 0x620 (0x1)
	unsigned char padding_621[0xf]; // 0x621 (0xf)
};

