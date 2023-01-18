// Class /Script/Engine.GarbageCollectionSettings
// Size: 0x50
class UGarbageCollectionSettings : public UDeveloperSettings
{
	float TimeBetweenPurgingPendingKillObjects; // 0x30 (0x4)
	unsigned char FlushStreamingOnGC; // 0x34 (0x1)
	unsigned char AllowParallelGC; // 0x34 (0x1)
	unsigned char IncrementalBeginDestroyEnabled; // 0x34 (0x1)
	unsigned char MultithreadedDestructionEnabled; // 0x34 (0x1)
	unsigned char CreateGCClusters; // 0x34 (0x1)
	unsigned char AssetClusteringEnabled; // 0x34 (0x1)
	unsigned char ActorClusteringEnabled; // 0x34 (0x1)
	unsigned char BlueprintClusteringEnabled; // 0x34 (0x1)
	unsigned char UseDisregardForGCOnDedicatedServers; // 0x35 (0x1)
	unsigned char VerifyGCObjectNames; // 0x35 (0x1)
	unsigned char VerifyUObjectsAreNotFGCObjects; // 0x35 (0x1)
	unsigned char PendingKillEnabled; // 0x35 (0x1)
	unsigned char unreflected_36[0x2]; // 0x36 (0x2) 
	int MinGCClusterSize; // 0x38 (0x4)
	int NumRetriesBeforeForcingGC; // 0x3c (0x4)
	int MaxObjectsNotConsideredByGC; // 0x40 (0x4)
	int SizeOfPermanentObjectPool; // 0x44 (0x4)
	int MaxObjectsInGame; // 0x48 (0x4)
	int MaxObjectsInEditor; // 0x4c (0x4)
};

