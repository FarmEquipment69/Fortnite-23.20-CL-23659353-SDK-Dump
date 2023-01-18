// ScriptStruct /Script/FortniteGame.FortZoneInstanceDetails
// Size: 0x128
struct FFortZoneInstanceDetails : FFortZoneInstanceInfo
{
	struct TWeakObjectPtr<class UClass> MissionGenerator; // 0x68 (0x28)
	struct FDataTableRowHandle ZoneDifficultyInfo; // 0x90 (0x10)
	struct FMcpLootResult MissionRewards; // 0xa0 (0x20)
	struct TArray<struct FMcpLootResult> DifficultyIncreaseMissionRewards; // 0xc0 (0x10)
	struct FMcpLootResult MissionAlertRewards; // 0xd0 (0x20)
	struct FMcpLootResult ZoneModifiers; // 0xf0 (0x20)
	struct FString MissionAlertCategoryName; // 0x110 (0x10)
	int TileIndex; // 0x120 (0x4)
	unsigned char padding_124[0x4]; // 0x124 (0x4)
};

