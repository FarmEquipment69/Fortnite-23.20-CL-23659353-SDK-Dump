// ScriptStruct /Script/RockVehicleRuntime.RockVehicleAbilityInContinuous_AutoUpright
// Size: 0x50
struct FRockVehicleAbilityInContinuous_AutoUpright : FRockVehicleAbilityInContinuous
{
	int LastWorldContactFrame; // 0x40 (0x4)
	bool bWheelsOnGround; // 0x44 (0x1)
	bool bAnyWheelsOnGround; // 0x45 (0x1)
	bool bDodgeActive; // 0x46 (0x1)
	bool bBodyContact; // 0x47 (0x1)
	float TimeSinceLastBodyContact; // 0x48 (0x4)
	unsigned char padding_4c[0x4]; // 0x4c (0x4)
};

