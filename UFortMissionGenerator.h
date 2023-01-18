// Class /Script/FortniteGame.FortMissionGenerator
// Size: 0x850
class UFortMissionGenerator : public UPrimaryDataAsset
{
	struct FText MissionName; // 0x30 (0x18)
	struct FText MissionDescription; // 0x48 (0x18)
	struct FSlateBrush MissionIcon; // 0x60 (0xc0)
	struct FFortMultiSizeBrush MissionIcons; // 0x120 (0x480)
	struct FZoneLoadingScreenConfig LoadingScreenConfig; // 0x5a0 (0x118)
	struct FFortAthenaLTMConfig AthenaLTMConfig; // 0x6b8 (0x58)
	struct TWeakObjectPtr<class UFortMissionInfo> PrimaryMissionInfo; // 0x710 (0x28)
	bool bUseNewMissionGeneration; // 0x738 (0x1)
	unsigned char unreflected_739[0x7]; // 0x739 (0x7) 
	struct FGameplayTagQuery OptionalRequirementsForAllOtherMissions; // 0x740 (0x48)
	struct TWeakObjectPtr<class UFortMissionGenerationList> MissionGenerationList; // 0x788 (0x28)
	float MissionGenerationChance[0x4]; // 0x7b0 (0x4) (ARRAY) 
	struct TArray<struct FFortPossibleMission> SecondaryMissionList; // 0x7c0 (0x10)
	struct TArray<struct FFortPossibleMission> TertiaryMissionList; // 0x7d0 (0x10)
	struct TArray<struct FFortPossibleMission> SurvivorMissionList; // 0x7e0 (0x10)
	bool bUseOverridePlayerSpawnPadPlacementData; // 0x7f0 (0x1)
	unsigned char unreflected_7f1[0x7]; // 0x7f1 (0x7) 
	struct FFortPlayerSpawnPadPlacementData OverridePlayerSpawnPadPlacementData; // 0x7f8 (0x58)
};

