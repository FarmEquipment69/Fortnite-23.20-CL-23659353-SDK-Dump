// Class /Script/RockVehicleRuntime.RockVehicleAbility_Jump
// Size: 0x1e0
class URockVehicleAbility_Jump : public URockVehicleAbility_Physics
{
	unsigned char unreflected_108[0x18]; // 0x108 (0x18) 
	struct FRockScalableFloat JumpVelocity; // 0x120 (0x30)
	struct FRockScalableFloat JumpAccel; // 0x150 (0x30)
	struct FRockScalableFloat MinJumpSeconds; // 0x180 (0x30)
	struct FRockScalableFloat MaxJumpSeconds; // 0x1b0 (0x30)
};

