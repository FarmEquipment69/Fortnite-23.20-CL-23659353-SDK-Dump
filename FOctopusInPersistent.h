// ScriptStruct /Script/FortniteGame.OctopusInPersistent
// Size: 0x300
struct FOctopusInPersistent : FFortVehicleInPersistent
{
	class UFortOctopusVehicleConfigs* FortOctopusVehicleConfigs; // 0x188 (0x8)
	struct TArray<struct FSphericalDriveContact> CachedContactPoints; // 0x190 (0x10)
	unsigned char unreflected_1a0[0x118]; // 0x1a0 (0x118) 
	float BoostForce; // 0x2b8 (0x4)
	float MaxVerticalBoostForce; // 0x2bc (0x4)
	float BoostSpeedKmh; // 0x2c0 (0x4)
	unsigned char unreflected_2c4[0x4]; // 0x2c4 (0x4) 
	struct FVector TowhookAimDir; // 0x2c8 (0x18)
	unsigned char padding_2e0[0x20]; // 0x2e0 (0x20)
};

