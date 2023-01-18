// ScriptStruct /Script/ValetRuntime.DagwoodRuntimeModifiers
// Size: 0x70
struct FDagwoodRuntimeModifiers
{
	struct FRuntimeBoostInfo BoostInfo; // 0x0 (0x18)
	struct FRuntimeFuelInfo FuelInfo; // 0x18 (0xc)
	struct FRuntimeSpringsInfo SpringsInfo; // 0x24 (0x20)
	bool bDamageFriendlyVehicles; // 0x44 (0x1)
	bool bDamageOtherVehicles; // 0x45 (0x1)
	bool bDamageOwnVehicle; // 0x46 (0x1)
	bool bDamageAllowedFromOtherVehicle; // 0x47 (0x1)
	float GravityMultiplier; // 0x48 (0x4)
	float MaxInclineAngle; // 0x4c (0x4)
	float MaxTiltAngle; // 0x50 (0x4)
	unsigned char unreflected_54[0x4]; // 0x54 (0x4) 
	struct TArray<struct FRuntimeGearInfo> GearInfos; // 0x58 (0x10)
	struct FGameplayTag TireModTag; // 0x68 (0x4)
	unsigned char TireModVersion; // 0x6c (0x1)
	bool bTireModAdjustsPosition; // 0x6d (0x1)
	unsigned char DataVersion; // 0x6e (0x1)
	unsigned char padding_6f[0x1]; // 0x6f (0x1)
};

