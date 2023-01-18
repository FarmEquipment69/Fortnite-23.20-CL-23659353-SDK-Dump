// Class /Script/AudioSynesthesia.LoudnessNRTSettings
// Size: 0x40
class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings
{
	float AnalysisPeriod; // 0x28 (0x4)
	float MinimumFrequency; // 0x2c (0x4)
	float MaximumFrequency; // 0x30 (0x4)
	enum ELoudnessNRTCurveTypeEnum CurveType; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	float NoiseFloorDb; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};

