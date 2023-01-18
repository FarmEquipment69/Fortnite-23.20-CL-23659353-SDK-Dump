// ScriptStruct /Script/FortniteGame.FortAvailableMissionData
// Size: 0xa8
struct FFortAvailableMissionData
{
	struct FString MissionGuid; // 0x0 (0x10)
	struct FMcpLootResult MissionRewards; // 0x10 (0x20)
	struct FMcpLootResult BonusMissionRewards; // 0x30 (0x20)
	struct TWeakObjectPtr<class UClass> MissionGenerator; // 0x50 (0x28)
	struct FDataTableRowHandle MissionDifficultyInfo; // 0x78 (0x10)
	int TileIndex; // 0x88 (0x4)
	unsigned char unreflected_8c[0x4]; // 0x8c (0x4) 
	struct FDateTime* AvailableUntil; // 0x90 (0x8)
	struct TArray<class UFortItemDefinition*> ItemDefinitionRefCache; // 0x98 (0x10)
};

