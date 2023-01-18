// Class /Script/FortniteGame.FortMissionGenerationData
// Size: 0x108
class UFortMissionGenerationData : public UDataAsset
{
	struct TArray<class UFortMissionGenerator*> PrimaryMissionGenerators; // 0x30 (0x10)
	float PrimaryMissionMinPowerPointsUsagePercentage; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct FCurveTableRowHandle SecondaryMissionPowerPointsBudgetMultiplier; // 0x48 (0x10)
	struct FCurveTableRowHandle MinSecondaryMissionPowerPointsMultiplier; // 0x58 (0x10)
	struct FCurveTableRowHandle MaxSecondaryMissionPowerPointsMultiplier; // 0x68 (0x10)
	struct FCurveTableRowHandle MinSecondaryMissions; // 0x78 (0x10)
	struct FCurveTableRowHandle MaxSecondaryMissions; // 0x88 (0x10)
	struct FCurveTableRowHandle TertiaryMissionPowerPointsBudgetMultiplier; // 0x98 (0x10)
	struct FCurveTableRowHandle MinTertiaryMissionPowerPointsMultiplier; // 0xa8 (0x10)
	struct FCurveTableRowHandle MaxTertiaryMissionPowerPointsMultiplier; // 0xb8 (0x10)
	struct FCurveTableRowHandle PowerPointsCurve; // 0xc8 (0x10)
	struct TArray<struct FFortDifficultyOptionBudget> EncounterDifficultyOptionBudgets; // 0xd8 (0x10)
	float EncounterMinDifficultyOptionPointsUsagePercentage; // 0xe8 (0x4)
	unsigned char unreflected_ec[0x4]; // 0xec (0x4) 
	struct TArray<struct FFortDifficultyOptionBudget> MissionDifficultyOptionBudgets; // 0xf0 (0x10)
	float MissionMinDifficultyOptionPointsUsagePercentage; // 0x100 (0x4)
	unsigned char padding_104[0x4]; // 0x104 (0x4)
};

