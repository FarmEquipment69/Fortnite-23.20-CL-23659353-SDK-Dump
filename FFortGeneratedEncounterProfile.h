// ScriptStruct /Script/FortniteGame.FortGeneratedEncounterProfile
// Size: 0x50
struct FFortGeneratedEncounterProfile
{
	float EncounterDifficultyLevel; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FFortGeneratedEncounterOption> EncounterOptions; // 0x8 (0x10)
	struct FFortEncounterModeSettings EncounterModeSettings; // 0x18 (0x5)
	unsigned char unreflected_1d[0x3]; // 0x1d (0x3) 
	struct FGameplayTagContainer EncounterTypeTags; // 0x20 (0x20)
	int DifficultyOptionPointsAvailableAtGeneration; // 0x40 (0x4)
	int MinDifficultyOptionPointsToUse; // 0x44 (0x4)
	bool bShouldReselectOptionsPerInstance; // 0x48 (0x1)
	unsigned char unreflected_49[0x3]; // 0x49 (0x3) 
	int GeneratedEncounterIndex; // 0x4c (0x4)
};

