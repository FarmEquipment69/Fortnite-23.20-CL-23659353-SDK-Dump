// ScriptStruct /Script/AIModule.EnvTraceData
// Size: 0x38
struct FEnvTraceData
{
	int VersionNum; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	class UClass* NavigationFilter; // 0x8 (0x8)
	float ProjectDown; // 0x10 (0x4)
	float ProjectUp; // 0x14 (0x4)
	float ExtentX; // 0x18 (0x4)
	float ExtentY; // 0x1c (0x4)
	float ExtentZ; // 0x20 (0x4)
	float PostProjectionVerticalOffset; // 0x24 (0x4)
	struct TEnumAsByte<ETraceTypeQuery> TraceChannel; // 0x28 (0x1)
	struct TEnumAsByte<ECollisionChannel> SerializedChannel; // 0x29 (0x1)
	unsigned char unreflected_2a[0x2]; // 0x2a (0x2) 
	struct FName TraceProfileName; // 0x2c (0x4)
	struct TEnumAsByte<EEnvTraceShape> TraceShape; // 0x30 (0x1)
	struct TEnumAsByte<EEnvQueryTrace> TraceMode; // 0x31 (0x1)
	unsigned char unreflected_32[0x2]; // 0x32 (0x2) 
	unsigned char bTraceComplex; // 0x34 (0x1)
	unsigned char bOnlyBlockingHits; // 0x34 (0x1)
	unsigned char bCanTraceOnNavMesh; // 0x34 (0x1)
	unsigned char bCanTraceOnGeometry; // 0x34 (0x1)
	unsigned char bCanDisableTrace; // 0x34 (0x1)
	unsigned char bCanProjectDown; // 0x34 (0x1)
	unsigned char padding_35[0x3]; // 0x35 (0x3)
};

