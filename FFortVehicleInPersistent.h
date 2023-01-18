// ScriptStruct /Script/FortniteGame.FortVehicleInPersistent
// Size: 0x188
struct FFortVehicleInPersistent
{
	class UFortPhysicsVehicleConfigs* FortPhysicsVehicleConfigs; // 0x8 (0x8)
	unsigned char bUseForceHeading; // 0x10 (0x1)
	unsigned char unreflected_11[0x1f]; // 0x11 (0x1f) 
	unsigned char bHasDriver; // 0x30 (0x1)
	unsigned char bHasPassengers; // 0x30 (0x1)
	unsigned char bIsTouchingAnything; // 0x30 (0x1)
	unsigned char bAttemptAsyncOrientationCorrection; // 0x30 (0x1)
	unsigned char bUseGravity; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	float WaterLevel; // 0x34 (0x4)
	struct FVector LocalFrontFrictionPt; // 0x38 (0x18)
	struct FVector LocalRearFrictionPt; // 0x50 (0x18)
	float FrontMassRatio; // 0x68 (0x4)
	float RearMassRatio; // 0x6c (0x4)
	float TopSpeedCurrentMultiplier; // 0x70 (0x4)
	struct FReplicatedAthenaVehicleAttributes VehicleAttributes; // 0x74 (0x20)
	unsigned char unreflected_94[0xe4]; // 0x94 (0xe4) 
	struct TArray<enum ETireStates> TireStates; // 0x178 (0x10)
};

