// Class /Script/RockVehicleRuntime.RockVehicleAbility_Dodge
// Size: 0x438
class URockVehicleAbility_Dodge : public URockVehicleAbility_Physics
{
	unsigned char unreflected_108[0x18]; // 0x108 (0x18) 
	struct FRockDodgeImpulse ForwardImpulse; // 0x120 (0x60)
	struct FRockDodgeImpulse BackwardImpulse; // 0x180 (0x60)
	struct FRockDodgeImpulse SideImpulse; // 0x1e0 (0x60)
	struct FRockScalableFloat MinTimeAfterJump; // 0x240 (0x30)
	struct FRockScalableFloat MinTorqueTime; // 0x270 (0x30)
	struct FRockScalableFloat MaxTorqueTime; // 0x2a0 (0x30)
	struct FRockScalableFloat ForwardTorque; // 0x2d0 (0x30)
	struct FRockScalableFloat SideTorque; // 0x300 (0x30)
	struct FRockScalableFloat ZLiftTime; // 0x330 (0x30)
	struct FRockScalableFloat ZLiftAccel; // 0x360 (0x30)
	struct FRockScalableFloat ZDampingTime; // 0x390 (0x30)
	struct FRockScalableFloat ZDamping; // 0x3c0 (0x30)
	struct FRockScalableFloat InputThreshold; // 0x3f0 (0x30)
	struct FVector2D DodgeInput; // 0x420 (0x10)
	bool bWheelsOnGround; // 0x430 (0x1)
	unsigned char padding_431[0x7]; // 0x431 (0x7)
};

