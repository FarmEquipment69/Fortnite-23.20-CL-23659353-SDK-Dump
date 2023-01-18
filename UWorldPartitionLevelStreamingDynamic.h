// Class /Script/Engine.WorldPartitionLevelStreamingDynamic
// Size: 0x1b0
class UWorldPartitionLevelStreamingDynamic : public ULevelStreamingDynamic
{
	bool bShouldBeAlwaysLoaded; // 0x198 (0x1)
	unsigned char unreflected_199[0x3]; // 0x199 (0x3) 
	struct TWeakObjectPtr<class UWorldPartitionRuntimeLevelStreamingCell> StreamingCell; // 0x19c (0x8)
	struct TWeakObjectPtr<class UWorldPartition> OuterWorldPartition; // 0x1a4 (0x8)
	unsigned char padding_1ac[0x4]; // 0x1ac (0x4)
};

