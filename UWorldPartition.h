// Class /Script/Engine.WorldPartition
// Size: 0x110
class UWorldPartition : public UObject
{
	unsigned char unreflected_28[0x38]; // 0x28 (0x38) 
	class UActorDescContainer* ActorDescContainer; // 0x60 (0x8)
	class UWorldPartitionRuntimeHash* RuntimeHash; // 0x68 (0x8)
	class UWorld* World; // 0x70 (0x8)
	bool bEnableStreaming; // 0x78 (0x1)
	unsigned char unreflected_79[0x87]; // 0x79 (0x87) 
	class UWorldPartitionStreamingPolicy* StreamingPolicy; // 0x100 (0x8)
	unsigned char padding_108[0x8]; // 0x108 (0x8)
};

