// ScriptStruct /Script/FortniteAI.FortAIEncounterWaveProgressEstimation
// Size: 0x1c
struct FFortAIEncounterWaveProgressEstimation
{
	float SectionProgressEstimate; // 0x0 (0x4)
	float SectionStartTime; // 0x4 (0x4)
	float LastWaveProgressUpdateTime; // 0x8 (0x4)
	float PeakAndFadeWavePercentage; // 0xc (0x4)
	float MaxAdjustmentPerSecond; // 0x10 (0x4)
	struct TEnumAsByte<EFortAIWaveProgressSection> CurrentSection; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	int NumberOfWaveSegments; // 0x18 (0x4)
};

