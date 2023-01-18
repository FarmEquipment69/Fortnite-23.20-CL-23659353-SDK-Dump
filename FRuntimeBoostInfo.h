// ScriptStruct /Script/ValetRuntime.RuntimeBoostInfo
// Size: 0x18
struct FRuntimeBoostInfo
{
	unsigned char bCanBoost; // 0x0 (0x1)
	unsigned char bUsesRechargeableBoost; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float BoostPushForce; // 0x4 (0x4)
	float BoostTopSpeedForceMultiplier; // 0x8 (0x4)
	float BoostTopSpeedMultiplier; // 0xc (0x4)
	float RechargeableBoostRateOfRegen; // 0x10 (0x4)
	float RechargeableBoostRateOfUse; // 0x14 (0x4)
};

