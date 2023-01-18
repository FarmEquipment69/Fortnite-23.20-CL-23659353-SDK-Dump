// ScriptStruct /Script/FortniteAI.FortIntensityCurve
// Size: 0x38
struct FFortIntensityCurve : FTableRowBase
{
	class UCurveTable* IntensityCurveTable; // 0x8 (0x8)
	struct FName IntensityCurveTableRow; // 0x10 (0x4)
	float LowPlayerPerformancePeakIntensityThreshold; // 0x14 (0x4)
	float NormalPlayerPerformancePeakIntensityThreshold; // 0x18 (0x4)
	float HighPlayerPerformancePeakIntensityThreshold; // 0x1c (0x4)
	float MaxRampTime; // 0x20 (0x4)
	float FadeEndIntensityThreshold; // 0x24 (0x4)
	float StartIntensityOffsetFloor; // 0x28 (0x4)
	float EndIntensityOffsetFloor; // 0x2c (0x4)
	float StartIntensityOffsetCeiling; // 0x30 (0x4)
	float EndIntensityOffsetCeiling; // 0x34 (0x4)
};

