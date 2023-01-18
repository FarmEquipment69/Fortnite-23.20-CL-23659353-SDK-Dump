// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParams
// Size: 0x80
class UFortAthenaAISpawnerDataComponent_SpawnParams : public UFortAthenaAISpawnerDataComponent_SpawnParamsBase
{
	class UClass* PawnClass; // 0x30 (0x8)
	class UClass* AIControllerClass; // 0x38 (0x8)
	struct FDataTableRowHandle PawnStatHandle; // 0x40 (0x10)
	struct TArray<class UClass*> SpawnerDataSpawnedAsChildren; // 0x50 (0x10)
	unsigned char bSpawnInAir; // 0x60 (0x1)
	unsigned char bSetSkyDivingFromBus; // 0x60 (0x1)
	unsigned char unreflected_61[0x3]; // 0x61 (0x3) 
	float InAirSpawnTraceStartHeight; // 0x64 (0x4)
	float InAirSpawnTraceEndHeight; // 0x68 (0x4)
	float InAirSpawnTraceSphereRadius; // 0x6c (0x4)
	float SpawnTracePadding; // 0x70 (0x4)
	unsigned char bCheckForOverlaps; // 0x74 (0x1)
	unsigned char bAddPOILocationTagsOnSpawn; // 0x74 (0x1)
	unsigned char unreflected_75[0x3]; // 0x75 (0x3) 
	bool bSetPlayerPawnAttributesWithThisStatHandle; // 0x78 (0x1)
	unsigned char padding_79[0x7]; // 0x79 (0x7)
};

