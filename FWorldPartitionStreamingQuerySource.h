// ScriptStruct /Script/Engine.WorldPartitionStreamingQuerySource
// Size: 0x120
struct FWorldPartitionStreamingQuerySource
{
	struct FVector Location; // 0x0 (0x18)
	float Radius; // 0x18 (0x4)
	bool bUseGridLoadingRange; // 0x1c (0x1)
	unsigned char unreflected_1d[0x3]; // 0x1d (0x3) 
	struct TArray<struct FName> DataLayers; // 0x20 (0x10)
	bool bDataLayersOnly; // 0x30 (0x1)
	bool bSpatialQuery; // 0x31 (0x1)
	unsigned char padding_32[0xee]; // 0x32 (0xee)
};

