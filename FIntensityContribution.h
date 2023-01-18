// ScriptStruct /Script/FortniteAI.IntensityContribution
// Size: 0x48
struct FIntensityContribution
{
	struct TEnumAsByte<EFortCombatFactors> CombatFactor; // 0x0 (0x1)
	enum EFortAIDirectorFactor ContributingAIDirectorFactor; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	float MaxContribution; // 0x4 (0x4)
	bool bModifyContributionByCompletionPercentage; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct FCurveTableRowHandle CompletionPercentageInitialMultiplier; // 0x10 (0x10)
	struct FCurveTableRowHandle CompletionPercentageToStartReducingMultiplier; // 0x20 (0x10)
	struct FCurveTableRowHandle CompletionPercentageToStopReducingMultiplier; // 0x30 (0x10)
	bool bModifyByNumberOfCriticalEncounterGoals; // 0x40 (0x1)
	unsigned char padding_41[0x7]; // 0x41 (0x7)
};

