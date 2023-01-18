// ScriptStruct /Script/FortniteGame.FlyingRidableControlParams
// Size: 0x1c0
struct FFlyingRidableControlParams
{
	struct FScalableFloat AirFriction; // 0x0 (0x28)
	struct FScalableFloat FluidFriction; // 0x28 (0x28)
	struct FScalableFloat MaxSpeed; // 0x50 (0x28)
	struct FScalableFloat MaxAccelerationBoost; // 0x78 (0x28)
	struct FScalableFloat BaseAcceleration; // 0xa0 (0x28)
	struct FScalableFloat BaseAccelerationBoost; // 0xc8 (0x28)
	struct FScalableFloat PitchForMaxBoost; // 0xf0 (0x28)
	struct FScalableFloat PitchForMinBoost; // 0x118 (0x28)
	struct FVector AscendingAcceleration; // 0x140 (0x18)
	struct FVector IdleAcceleration; // 0x158 (0x18)
	struct FScalableFloat MovingTurnRate; // 0x170 (0x28)
	struct FScalableFloat IdleTurnRate; // 0x198 (0x28)
};

