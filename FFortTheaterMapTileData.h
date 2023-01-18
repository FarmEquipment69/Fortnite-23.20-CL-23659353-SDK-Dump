// ScriptStruct /Script/FortniteGame.FortTheaterMapTileData
// Size: 0xf0
struct FFortTheaterMapTileData
{
	enum EFortTheaterMapTileType TileType; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TWeakObjectPtr<class UClass> ZoneTheme; // 0x8 (0x28)
	struct FFortRequirementsInfo Requirements; // 0x30 (0x60)
	struct TArray<struct FFortLinkedQuest> LinkedQuests; // 0x90 (0x10)
	int XCoordinate; // 0xa0 (0x4)
	int YCoordinate; // 0xa4 (0x4)
	struct TArray<struct FFortTheaterMissionWeight> MissionWeightOverrides; // 0xa8 (0x10)
	struct TArray<struct FFortTheaterDifficultyWeight> DifficultyWeightOverrides; // 0xb8 (0x10)
	bool CanBeMissionAlert; // 0xc8 (0x1)
	bool bDisallowQuickplay; // 0xc9 (0x1)
	unsigned char unreflected_ca[0x6]; // 0xca (0x6) 
	struct FGameplayTagContainer TileTags; // 0xd0 (0x20)
};

