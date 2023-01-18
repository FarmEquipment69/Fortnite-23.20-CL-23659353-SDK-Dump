// ScriptStruct /Script/FortniteGame.QualitativePerfMetricProfile
// Size: 0x28
struct FQualitativePerfMetricProfile
{
	struct FName ProfileName; // 0x0 (0x4)
	struct FName ParentProfileName; // 0x4 (0x4)
	struct TArray<struct FQualitativePerfMetricScale> QualityScales; // 0x8 (0x10)
	struct TArray<struct FQualitativePerfMetricScale> HealthScales; // 0x18 (0x10)
};

