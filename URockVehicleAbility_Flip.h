// Class /Script/RockVehicleRuntime.RockVehicleAbility_Flip
// Size: 0x1f0
class URockVehicleAbility_Flip : public URockVehicleAbility_Physics
{
	unsigned char unreflected_108[0x18]; // 0x108 (0x18) 
	struct FRockScalableFloat Impulse; // 0x120 (0x30)
	struct FRockScalableFloat Torque; // 0x150 (0x30)
	struct FRockScalableFloat Duration; // 0x180 (0x30)
	struct FRockScalableFloat ContactNormalThresholdDegrees; // 0x1b0 (0x30)
	bool bWheelsOnGround; // 0x1e0 (0x1)
	unsigned char padding_1e1[0xf]; // 0x1e1 (0xf)
};

