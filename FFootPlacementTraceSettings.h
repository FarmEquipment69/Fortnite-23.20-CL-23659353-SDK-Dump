// ScriptStruct /Script/AnimationWarpingRuntime.FootPlacementTraceSettings
// Size: 0x1c
struct FFootPlacementTraceSettings
{
	float StartOffset; // 0x0 (0x4)
	float EndOffset; // 0x4 (0x4)
	float SweepRadius; // 0x8 (0x4)
	struct TEnumAsByte<ETraceTypeQuery> ComplexTraceChannel; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	float MaxGroundPenetration; // 0x10 (0x4)
	float SimpleCollisionInfluence; // 0x14 (0x4)
	struct TEnumAsByte<ETraceTypeQuery> SimpleTraceChannel; // 0x18 (0x1)
	bool bEnabled; // 0x19 (0x1)
	unsigned char padding_1a[0x2]; // 0x1a (0x2)
};

