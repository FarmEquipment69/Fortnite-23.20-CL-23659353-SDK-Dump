// ScriptStruct /Script/FortniteAI.FortAIEncounterSpawnArea
// Size: 0x58
struct FFortAIEncounterSpawnArea
{
	struct TArray<struct FEncounterEnvironmentQueryInstance> QueryInstances; // 0x0 (0x10)
	struct TArray<struct FFortAIEncounterRift> PendingRifts; // 0x10 (0x10)
	struct TArray<struct FFortAIEncounterRift> Rifts; // 0x20 (0x10)
	struct TArray<struct FVector> UsedRiftLocations; // 0x30 (0x10)
	struct TArray<class UFortPathCostEstimator*> PathEstimators; // 0x40 (0x10)
	bool bIsActive; // 0x50 (0x1)
	bool bUsingFallbackQuery; // 0x51 (0x1)
	enum EFortEncounterSpawnLocationManagementMode SpawnLocationManagementMode; // 0x52 (0x1)
	unsigned char padding_53[0x5]; // 0x53 (0x5)
};

