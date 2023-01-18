// ScriptStruct /Script/FortniteGame.FortGeneratedDifficultyOptions
// Size: 0x40
struct FFortGeneratedDifficultyOptions
{
	float GameDifficultyAtGeneration; // 0x0 (0x4)
	int DifficultyOptionPointsAvailableAtGeneration; // 0x4 (0x4)
	int MaxEncounterSpawnPointsAtGeneration; // 0x8 (0x4)
	int MinDifficultyOptionPointsToUse; // 0xc (0x4)
	struct TArray<struct FFortGeneratedEncounterSequence> GeneratedEncounterSequences; // 0x10 (0x10)
	struct TArray<struct FFortGeneratedMissionOption> MissionOptions; // 0x20 (0x10)
	struct TArray<struct FFortGeneratedEncounterProfile> GeneratedEncounterProfiles; // 0x30 (0x10)
};

