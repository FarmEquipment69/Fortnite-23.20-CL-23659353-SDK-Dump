// Class /Script/FortniteGame.FortTheaterInfo
// Size: 0x870
class UFortTheaterInfo : public UDataAsset
{
	struct FString UniqueId; // 0x30 (0x10)
	int SaveVersion; // 0x40 (0x4)
	unsigned char unreflected_44[0xc]; // 0x44 (0xc) 
	struct FFortTheaterMapData TheaterData; // 0x50 (0x6e0)
	struct FFortTheaterMapMissionData Missions; // 0x730 (0x30)
	struct FFortTheaterMapMissionAlertData MissionAlerts; // 0x760 (0x10)
	bool bForceIncludeInCookIfReferenced; // 0x770 (0x1)
	unsigned char unreflected_771[0x7]; // 0x771 (0x7) 
	class UClass* SelectedZoneTheme; // 0x778 (0x8)
	class UFortRegionInfo* SelectedZoneRegion; // 0x780 (0x8)
	enum EFortTheaterMapTileType SelectedTileType; // 0x788 (0x1)
	unsigned char unreflected_789[0x7]; // 0x789 (0x7) 
	struct FGameplayTagContainer SelectedTileTags; // 0x790 (0x20)
	struct FFortRequirementsInfo SelectedTileRequirements; // 0x7b0 (0x60)
	struct TArray<struct FFortLinkedQuest> SelectedLinkedQuests; // 0x810 (0x10)
	struct TArray<struct FFortTheaterMissionWeight> SelectedMissionWeightOverrides; // 0x820 (0x10)
	struct TArray<struct FFortTheaterDifficultyWeight> SelectedDifficultyWeightOverrides; // 0x830 (0x10)
	bool bCanSelectedTileHaveMissionAlert; // 0x840 (0x1)
	bool bShouldSelectedTileDisallowQuickplay; // 0x841 (0x1)
	unsigned char unreflected_842[0x6]; // 0x842 (0x6) 
	struct TArray<struct FFortEditorTheaterMapRegionColor> RegionColors; // 0x848 (0x10)
	struct TArray<struct FFortTheaterTileEditorData> EditorTiles; // 0x858 (0x10)
	int TheaterWidth; // 0x868 (0x4)
	int TheaterHeight; // 0x86c (0x4)
};

