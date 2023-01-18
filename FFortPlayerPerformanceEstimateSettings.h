// ScriptStruct /Script/FortniteAI.FortPlayerPerformanceEstimateSettings
// Size: 0x40
struct FFortPlayerPerformanceEstimateSettings
{
	struct FCurveTableRowHandle PlayerPerformanceEstimateTransformMin; // 0x0 (0x10)
	struct FCurveTableRowHandle PlayerPerformanceEstimateTransformOrigin; // 0x10 (0x10)
	struct FCurveTableRowHandle PlayerPerformanceEstimateTransformMax; // 0x20 (0x10)
	float EncounterPlayerPerformanceWeight; // 0x30 (0x4)
	float PreviousWavePlayerPerformanceWeight; // 0x34 (0x4)
	float CampaignPlayerPerformanceWeight; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};

