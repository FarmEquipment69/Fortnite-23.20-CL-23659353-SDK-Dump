// Class /Script/AudioSynesthesia.OnsetNRTSettings
// Size: 0x40
class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings
{
	bool bDownmixToMono; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	float GranularityInSeconds; // 0x2c (0x4)
	float Sensitivity; // 0x30 (0x4)
	float MinimumFrequency; // 0x34 (0x4)
	float MaximumFrequency; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};

