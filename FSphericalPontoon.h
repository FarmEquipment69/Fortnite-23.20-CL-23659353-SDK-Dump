// ScriptStruct /Script/Water.SphericalPontoon
// Size: 0x2d0
struct FSphericalPontoon
{
	struct FName CenterSocket; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FVector RelativeLocation; // 0x8 (0x18)
	float Radius; // 0x20 (0x4)
	bool bFXEnabled; // 0x24 (0x1)
	unsigned char unreflected_25[0x3]; // 0x25 (0x3) 
	struct FVector LocalForce; // 0x28 (0x18)
	struct FVector CenterLocation; // 0x40 (0x18)
	unsigned char unreflected_58[0x8]; // 0x58 (0x8) 
	struct FQuat SocketRotation; // 0x60 (0x20)
	struct FVector Offset; // 0x80 (0x18)
	unsigned char unreflected_98[0x4]; // 0x98 (0x4) 
	float WaterHeight; // 0x9c (0x4)
	float WaterDepth; // 0xa0 (0x4)
	float ImmersionDepth; // 0xa4 (0x4)
	struct FVector WaterPlaneLocation; // 0xa8 (0x18)
	struct FVector WaterPlaneNormal; // 0xc0 (0x18)
	struct FVector WaterSurfacePosition; // 0xd8 (0x18)
	struct FVector WaterVelocity; // 0xf0 (0x18)
	int WaterBodyIndex; // 0x108 (0x4)
	bool bIsInWater; // 0x10c (0x1)
	unsigned char unreflected_10d[0x1ab]; // 0x10d (0x1ab) 
	class UWaterBodyComponent* CurrentWaterBodyComponent; // 0x2b8 (0x8)
	unsigned char padding_2c0[0x10]; // 0x2c0 (0x10)
};

