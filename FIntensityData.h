// ScriptStruct /Script/FortniteAI.IntensityData
// Size: 0x30
struct FIntensityData
{
	struct TArray<struct FIntensityContribution> ContributingFactors; // 0x0 (0x10)
	float ContributionsTotal; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct TArray<class UBuildingEditModeMetadata*> ExceptionEditModes; // 0x18 (0x10)
	float ExceptionEditModeWeight; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

