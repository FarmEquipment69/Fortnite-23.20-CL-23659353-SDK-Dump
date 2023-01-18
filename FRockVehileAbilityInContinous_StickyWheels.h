// ScriptStruct /Script/RockVehicleRuntime.RockVehileAbilityInContinous_StickyWheels
// Size: 0x60
struct FRockVehileAbilityInContinous_StickyWheels : FRockVehicleAbilityInContinuous
{
	struct FVector ContactNormal; // 0x40 (0x18)
	float Scale; // 0x58 (0x4)
	bool bAnyWheelsOnGround; // 0x5c (0x1)
	unsigned char padding_5d[0x3]; // 0x5d (0x3)
};

