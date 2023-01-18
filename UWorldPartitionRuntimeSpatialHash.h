// Class /Script/Engine.WorldPartitionRuntimeSpatialHash
// Size: 0xb0
class UWorldPartitionRuntimeSpatialHash : public UWorldPartitionRuntimeHash
{
	bool bEnableZCulling; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct TArray<struct FSpatialHashStreamingGrid> StreamingGrids; // 0x38 (0x10)
	unsigned char unreflected_48[0x58]; // 0x48 (0x58) 
	struct TArray<struct TWeakObjectPtr<class URuntimeSpatialHashExternalStreamingObject>> ExternalStreamingObjects; // 0xa0 (0x10)
};

