// ScriptStruct /Script/Engine.SpatialHashStreamingGrid
// Size: 0xb8
struct FSpatialHashStreamingGrid
{
	struct FName GridName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FVector Origin; // 0x8 (0x18)
	int CellSize; // 0x20 (0x4)
	float LoadingRange; // 0x24 (0x4)
	bool bBlockOnSlowStreaming; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	struct FLinearColor DebugColor; // 0x2c (0x10)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct TArray<struct FSpatialHashStreamingGridLevel> GridLevels; // 0x40 (0x10)
	struct FBox WorldBounds; // 0x50 (0x38)
	bool bClientOnlyVisible; // 0x88 (0x1)
	unsigned char unreflected_89[0x7]; // 0x89 (0x7) 
	class UHLODLayer* HLODLayer; // 0x90 (0x8)
	unsigned char padding_98[0x20]; // 0x98 (0x20)
};

