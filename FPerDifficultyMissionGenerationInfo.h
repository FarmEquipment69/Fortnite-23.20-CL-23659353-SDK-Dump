// ScriptStruct /Script/FortniteGame.PerDifficultyMissionGenerationInfo
// Size: 0x30
struct FPerDifficultyMissionGenerationInfo
{
	struct FDataTableRowHandle MinDifficulty; // 0x0 (0x10)
	struct FDataTableRowHandle MaxDifficulty; // 0x10 (0x10)
	struct TArray<struct FMissionGenerationInfo> MissionGenerationInfos; // 0x20 (0x10)
};

