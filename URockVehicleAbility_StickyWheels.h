// Class /Script/RockVehicleRuntime.RockVehicleAbility_StickyWheels
// Size: 0x1a0
class URockVehicleAbility_StickyWheels : public URockVehicleAbility_Physics
{
	unsigned char unreflected_108[0x18]; // 0x108 (0x18) 
	struct FRockScalableFloat StickyForceScaleGround; // 0x120 (0x30)
	struct FRockScalableFloat StickyForceScaleWall; // 0x150 (0x30)
	struct FVector ContactNormal; // 0x180 (0x18)
	float Scale; // 0x198 (0x4)
	bool bAnyWheelsOnGround; // 0x19c (0x1)
	unsigned char padding_19d[0x3]; // 0x19d (0x3)
};

