// ScriptStruct /Script/AIModule.EnvOverlapData
// Size: 0x30
struct FEnvOverlapData
{
	float ExtentX; // 0x0 (0x4)
	float ExtentY; // 0x4 (0x4)
	float ExtentZ; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FVector ShapeOffset; // 0x10 (0x18)
	struct TEnumAsByte<ECollisionChannel> OverlapChannel; // 0x28 (0x1)
	struct TEnumAsByte<EEnvOverlapShape> OverlapShape; // 0x29 (0x1)
	unsigned char unreflected_2a[0x2]; // 0x2a (0x2) 
	unsigned char bOnlyBlockingHits; // 0x2c (0x1)
	unsigned char bOverlapComplex; // 0x2c (0x1)
	unsigned char bSkipOverlapQuerier; // 0x2c (0x1)
	unsigned char padding_2d[0x3]; // 0x2d (0x3)
};

