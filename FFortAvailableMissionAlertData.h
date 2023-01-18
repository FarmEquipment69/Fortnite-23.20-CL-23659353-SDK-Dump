// ScriptStruct /Script/FortniteGame.FortAvailableMissionAlertData
// Size: 0x98
struct FFortAvailableMissionAlertData
{
	struct FString CategoryName; // 0x0 (0x10)
	struct FString SpreadDataName; // 0x10 (0x10)
	struct FString MissionAlertGuid; // 0x20 (0x10)
	int TileIndex; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct FDateTime* AvailableUntil; // 0x38 (0x8)
	struct FDateTime* RefreshSpreadAt; // 0x40 (0x8)
	struct FMcpLootResult MissionAlertRewards; // 0x48 (0x20)
	struct FMcpLootResult MissionAlertModifiers; // 0x68 (0x20)
	struct TArray<class UFortItemDefinition*> ItemDefinitionRefCache; // 0x88 (0x10)
};

