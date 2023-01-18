// ScriptStruct /Script/Engine.StreamingSourceShape
// Size: 0x48
struct FStreamingSourceShape
{
	bool bUseGridLoadingRange; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float LoadingRangeScale; // 0x4 (0x4)
	float Radius; // 0x8 (0x4)
	bool bIsSector; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	float SectorAngle; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FVector Location; // 0x18 (0x18)
	struct FRotator Rotation; // 0x30 (0x18)
};

