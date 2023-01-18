// ScriptStruct /Script/FortniteGame.VortexParams
// Size: 0x80
struct FVortexParams
{
	float GravityFloorGravityScalar; // 0x0 (0x4)
	float GravityFloorTerminalVelocity; // 0x4 (0x4)
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FTransform Transform; // 0x10 (0x60)
	float BoundsWidth; // 0x70 (0x4)
	float SpinVelocity; // 0x74 (0x4)
	float SpinRadius; // 0x78 (0x4)
	bool bCanDeployGlider; // 0x7c (0x1)
	unsigned char padding_7d[0x3]; // 0x7d (0x3)
};

