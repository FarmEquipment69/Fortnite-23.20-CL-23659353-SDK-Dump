// ScriptStruct /Script/UnstableLiquidGunRuntime.LiquidRibbonSplineSegment
// Size: 0x78
struct FLiquidRibbonSplineSegment
{
	struct FVector A; // 0x0 (0x18)
	struct FVector B; // 0x18 (0x18)
	struct FVector C; // 0x30 (0x18)
	struct FVector D; // 0x48 (0x18)
	float DirectLength; // 0x60 (0x4)
	bool bHasDetachment; // 0x64 (0x1)
	unsigned char unreflected_65[0x3]; // 0x65 (0x3) 
	struct TArray<struct FVector> PointPositions; // 0x68 (0x10)
};

