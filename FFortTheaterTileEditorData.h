// ScriptStruct /Script/FortniteGame.FortTheaterTileEditorData
// Size: 0xd8
struct FFortTheaterTileEditorData
{
	int XCoordinate; // 0x0 (0x4)
	int YCoordinate; // 0x4 (0x4)
	class UClass* ZoneTheme; // 0x8 (0x8)
	class UFortRegionInfo* Region; // 0x10 (0x8)
	struct FFortRequirementsInfo Requirements; // 0x18 (0x60)
	struct TArray<struct FFortLinkedQuest> LinkedQuests; // 0x78 (0x10)
	enum EFortTheaterMapTileType TileType; // 0x88 (0x1)
	unsigned char unreflected_89[0x7]; // 0x89 (0x7) 
	struct FGameplayTagContainer TileTags; // 0x90 (0x20)
	struct TArray<struct FFortTheaterMissionWeight> MissionWeightOverrides; // 0xb0 (0x10)
	struct TArray<struct FFortTheaterDifficultyWeight> DifficultyWeightOverrides; // 0xc0 (0x10)
	bool bCanBeMissionAlert; // 0xd0 (0x1)
	bool bDisallowQuickplay; // 0xd1 (0x1)
	unsigned char padding_d2[0x6]; // 0xd2 (0x6)
};

