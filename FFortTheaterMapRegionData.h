// ScriptStruct /Script/FortniteGame.FortTheaterMapRegionData
// Size: 0x118
struct FFortTheaterMapRegionData
{
	struct FText DisplayName; // 0x0 (0x18)
	struct FName UniqueId; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct FGameplayTagContainer RegionTags; // 0x20 (0x20)
	struct TArray<int> TileIndices; // 0x40 (0x10)
	struct TWeakObjectPtr<class USlateBrushAsset> RegionThemeIcon; // 0x50 (0x28)
	struct FFortTheaterMapMissionData MissionData; // 0x78 (0x30)
	struct FFortRequirementsInfo Requirements; // 0xa8 (0x60)
	struct TArray<struct FFortMissionAlertRequirementsInfo> MissionAlertRequirements; // 0x108 (0x10)
};

