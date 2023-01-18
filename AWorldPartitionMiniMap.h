// Class /Script/Engine.WorldPartitionMiniMap
// Size: 0x358
class AWorldPartitionMiniMap : public AInfo
{
	struct FBox MiniMapWorldBounds; // 0x288 (0x38)
	struct FBox2D UVOffset; // 0x2c0 (0x28)
	class UTexture2D* MiniMapTexture; // 0x2e8 (0x8)
	struct TSet<struct FActorDataLayer> ExcludedDataLayers; // 0x2f0 (0x50)
	int WorldUnitsPerPixel; // 0x340 (0x4)
	int BuilderCellSize; // 0x344 (0x4)
	struct TEnumAsByte<ESceneCaptureSource> CaptureSource; // 0x348 (0x1)
	unsigned char unreflected_349[0x3]; // 0x349 (0x3) 
	uint32_t CaptureWarmupFrames; // 0x34c (0x4)
	int MiniMapTileSize; // 0x350 (0x4)
	unsigned char padding_354[0x4]; // 0x354 (0x4)
};

