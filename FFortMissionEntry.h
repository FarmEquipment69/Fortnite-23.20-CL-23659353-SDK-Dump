// ScriptStruct /Script/FortniteGame.FortMissionEntry
// Size: 0x88
struct FFortMissionEntry
{
	float Weight; // 0x0 (0x4)
	int WorldMinLevel; // 0x4 (0x4)
	int WorldMaxLevel; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FDataTableRowHandle MinDifficultyInfoRow; // 0x10 (0x10)
	class UFortMissionGenerator* MissionGenerator; // 0x20 (0x8)
	class UFortMissionInfo* MissionInfo; // 0x28 (0x8)
	struct TEnumAsByte<EMissionGenerationCategory> GenerationCategory; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct FFortGeneratedDifficultyOptions GeneratedDifficultyOptions; // 0x38 (0x40)
	struct TArray<struct FFortMissionPlacementItemLookupData> BlueprintLookupData; // 0x78 (0x10)
};

