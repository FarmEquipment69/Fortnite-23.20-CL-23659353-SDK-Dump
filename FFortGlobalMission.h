// ScriptStruct /Script/FortniteGame.FortGlobalMission
// Size: 0x178
struct FFortGlobalMission
{
	struct TWeakObjectPtr<class UFortMissionInfo> MissionInfo; // 0x0 (0x28)
	struct TArray<enum EFortTheaterType> AllowedTheaterTypes; // 0x28 (0x10)
	struct FGameplayTagQuery TheaterTagQuery; // 0x38 (0x48)
	struct FGameplayTagQuery RegionTagQuery; // 0x80 (0x48)
	struct TArray<enum EFortZoneType> AllowedZoneTypes; // 0xc8 (0x10)
	struct FGameplayTagQuery ZoneTagQuery; // 0xd8 (0x48)
	struct FGameplayTagQuery PrimaryMissionTagQuery; // 0x120 (0x48)
	float MaxDifficultyLevel; // 0x168 (0x4)
	float MinDifficultyLevel; // 0x16c (0x4)
	bool bIsPrototype; // 0x170 (0x1)
	bool bAllowInTestMaps; // 0x171 (0x1)
	bool bEnabled; // 0x172 (0x1)
	unsigned char padding_173[0x5]; // 0x173 (0x5)
};

