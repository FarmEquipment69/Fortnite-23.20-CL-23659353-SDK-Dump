// Class /Script/AudioSynesthesia.LoudnessSettings
// Size: 0x40
class ULoudnessSettings : public UAudioSynesthesiaSettings
{
	float AnalysisPeriod; // 0x28 (0x4)
	float MinimumFrequency; // 0x2c (0x4)
	float MaximumFrequency; // 0x30 (0x4)
	enum ELoudnessCurveTypeEnum CurveType; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	float NoiseFloorDb; // 0x38 (0x4)
	float ExpectedMaxLoudness; // 0x3c (0x4)
};

