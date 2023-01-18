// Class /Script/NavigationSystem.NavigationData
// Size: 0x498
class ANavigationData : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	class UPrimitiveComponent* RenderingComp; // 0x290 (0x8)
	struct FNavDataConfig NavDataConfig; // 0x298 (0x80)
	unsigned char bEnableDrawing; // 0x318 (0x1)
	unsigned char bForceRebuildOnLoad; // 0x318 (0x1)
	unsigned char bAutoDestroyWhenNoNavigation; // 0x318 (0x1)
	unsigned char bCanBeMainNavData; // 0x318 (0x1)
	unsigned char bCanSpawnOnRebuild; // 0x318 (0x1)
	unsigned char bRebuildAtRuntime; // 0x318 (0x1)
	unsigned char unreflected_319[0x3]; // 0x319 (0x3) 
	enum ERuntimeGenerationType RuntimeGeneration; // 0x31c (0x1)
	unsigned char unreflected_31d[0x3]; // 0x31d (0x3) 
	float ObservedPathsTickInterval; // 0x320 (0x4)
	uint32_t DataVersion; // 0x324 (0x4)
	unsigned char unreflected_328[0x108]; // 0x328 (0x108) 
	struct TArray<struct FSupportedAreaData> SupportedAreas; // 0x430 (0x10)
	unsigned char padding_440[0x58]; // 0x440 (0x58)
};

