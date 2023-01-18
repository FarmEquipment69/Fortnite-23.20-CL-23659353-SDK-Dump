// ScriptStruct /Script/Landscape.WeightmapData
// Size: 0x30
struct FWeightmapData
{
	struct TArray<class UTexture2D*> Textures; // 0x0 (0x10)
	struct TArray<struct FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10 (0x10)
	struct TArray<class ULandscapeWeightmapUsage*> TextureUsages; // 0x20 (0x10)
};

