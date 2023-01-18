// ScriptStruct /Script/RockVehicleRuntime.RockVehicleAbilityInPersistent_AirControl
// Size: 0x40
struct FRockVehicleAbilityInPersistent_AirControl : FRockVehicleAbilityInPersistent
{
	struct FVector TorqueAccel; // 0x8 (0x18)
	struct FVector TorqueDamping; // 0x20 (0x18)
	float DisableForDodgeTime; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};

