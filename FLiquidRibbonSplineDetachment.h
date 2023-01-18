// ScriptStruct /Script/UnstableLiquidGunRuntime.LiquidRibbonSplineDetachment
// Size: 0xb8
struct FLiquidRibbonSplineDetachment
{
	int FirstRibbonID; // 0x0 (0x4)
	int SecondRibbonID; // 0x4 (0x4)
	float TimeDetached; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FLiquidRibbonSplineSegment Segment; // 0x10 (0x78)
	struct FVector SegmentStartPoint; // 0x88 (0x18)
	struct FVector SegmentEndPoint; // 0xa0 (0x18)
};

