// Class /Script/RockVehicleRuntime.RockVehicleAbility_Boost
// Size: 0x170
class URockVehicleAbility_Boost : public URockVehicleAbility_Physics
{
	unsigned char unreflected_108[0x18]; // 0x108 (0x18) 
	struct FRockScalableFloat BoostAccel; // 0x120 (0x30)
	struct FMulticastInlineDelegate OnBoostFailed; // 0x150 (0x10)
	class URockVehicleBoostTank* BoostTank; // 0x160 (0x8)
	bool bHasBoost; // 0x168 (0x1)
	unsigned char padding_169[0x7]; // 0x169 (0x7)
};

