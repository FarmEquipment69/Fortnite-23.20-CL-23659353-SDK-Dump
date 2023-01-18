// Class /Script/RockVehicleRuntime.RockVehicleAbility_Supersonic
// Size: 0x178
class URockVehicleAbility_Supersonic : public URockVehicleAbility
{
	struct FMulticastInlineDelegate OnTrailsActivate; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnTrailsDeactivate; // 0xc0 (0x10)
	struct FRockScalableFloat TurnOffTime; // 0xd0 (0x30)
	struct FRockScalableFloat TurnOnTime; // 0x100 (0x30)
	bool bUseTurnOnTimeRequirement; // 0x130 (0x1)
	unsigned char unreflected_131[0x7]; // 0x131 (0x7) 
	struct FRockScalableFloat TurnOffSpeedBuffer; // 0x138 (0x30)
	float TimeBelowSupersonic; // 0x168 (0x4)
	float WorldTimeSupersonicExceeded; // 0x16c (0x4)
	unsigned char padding_170[0x8]; // 0x170 (0x8)
};

