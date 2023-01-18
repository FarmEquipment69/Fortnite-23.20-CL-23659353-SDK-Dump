// ScriptStruct /Script/FortniteGame.SupplyDropItemDeliverySpawnData
// Size: 0x20
struct FSupplyDropItemDeliverySpawnData
{
	int NumItemsToDeliver; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<float> QueuedSpawnTimes; // 0x8 (0x10)
	float NextSpawnTime; // 0x18 (0x4)
	int NumInitialSpawns; // 0x1c (0x4)
};

