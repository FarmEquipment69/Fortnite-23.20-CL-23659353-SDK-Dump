// ScriptStruct /Script/FortniteGame.FortVehicleDerived
// Size: 0x70
struct FFortVehicleDerived
{
	struct TArray<struct FSpringConfig> Springs; // 0x8 (0x10)
	struct TArray<struct FGearConfig> InternalGears; // 0x18 (0x10)
	struct TArray<struct FGearConfig> InternalSprintGears; // 0x28 (0x10)
	struct FVector LocalFrontFrictionPt; // 0x38 (0x18)
	struct FVector LocalRearFrictionPt; // 0x50 (0x18)
	float FrontMassRatio; // 0x68 (0x4)
	float RearMassRatio; // 0x6c (0x4)
};

