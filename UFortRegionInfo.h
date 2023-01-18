// Class /Script/FortniteGame.FortRegionInfo
// Size: 0x138
class UFortRegionInfo : public UDataAsset
{
	struct FText RegionName; // 0x30 (0x18)
	struct FName UniqueId; // 0x48 (0x4)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	struct FGameplayTagContainer RegionTags; // 0x50 (0x20)
	struct FFortRequirementsInfo Requirements; // 0x70 (0x60)
	struct TArray<struct FFortMissionAlertRequirementsInfo> MissionAlertRequirements; // 0xd0 (0x10)
	struct FFortTheaterMapMissionData MissionData; // 0xe0 (0x30)
	struct TWeakObjectPtr<class USlateBrushAsset> RegionThemeIcon; // 0x110 (0x28)
};

