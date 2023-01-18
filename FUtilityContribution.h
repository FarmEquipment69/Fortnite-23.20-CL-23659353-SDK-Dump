// ScriptStruct /Script/FortniteAI.UtilityContribution
// Size: 0x8
struct FUtilityContribution
{
	float MaxContribution; // 0x0 (0x4)
	struct TEnumAsByte<EFortCombatFactors> ContributingFactor; // 0x4 (0x1)
	enum EFortAIDirectorFactor ContributingAIDirectorFactor; // 0x5 (0x1)
	struct TEnumAsByte<EFortFactorContributionType> ContributionType; // 0x6 (0x1)
	unsigned char padding_7[0x1]; // 0x7 (0x1)
};

