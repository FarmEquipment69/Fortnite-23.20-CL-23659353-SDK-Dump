// ScriptStruct /Script/FortniteGame.SupplyDropZoneBasedSpawnData
// Size: 0x28
struct FSupplyDropZoneBasedSpawnData
{
	struct TArray<class AFortAthenaSupplyDrop*> SpawnedSupplyDrops; // 0x0 (0x10)
	int NumDropsRemainingInWave; // 0x10 (0x4)
	float NextWaveSpawnTime; // 0x14 (0x4)
	float NextSpawnTime; // 0x18 (0x4)
	enum EAthenaGamePhase CurrGamePhase; // 0x1c (0x1)
	unsigned char unreflected_1d[0x3]; // 0x1d (0x3) 
	int CurrSubPhase; // 0x20 (0x4)
	int TotalSupplyDropsSpawnedInSubPhase; // 0x24 (0x4)
};

