// Class /Script/Synthesis.AudioImpulseResponse
// Size: 0x58
class UAudioImpulseResponse : public UObject
{
	struct TArray<float> ImpulseResponse; // 0x28 (0x10)
	int NumChannels; // 0x38 (0x4)
	int SampleRate; // 0x3c (0x4)
	float NormalizationVolumeDb; // 0x40 (0x4)
	bool bTrueStereo; // 0x44 (0x1)
	unsigned char unreflected_45[0x3]; // 0x45 (0x3) 
	struct TArray<float> IRData; // 0x48 (0x10)
};

