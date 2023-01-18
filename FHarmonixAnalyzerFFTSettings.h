// ScriptStruct /Script/HmxAudio.HarmonixAnalyzerFFTSettings
// Size: 0x2c
struct FHarmonixAnalyzerFFTSettings
{
	bool Enabled; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float MinFrequencyHz; // 0x4 (0x4)
	float MaxFrequencyHz; // 0x8 (0x4)
	bool EqualLoudnessWeights; // 0xc (0x1)
	bool MelScaleBinning; // 0xd (0x1)
	unsigned char unreflected_e[0x2]; // 0xe (0x2) 
	int NumResultBins; // 0x10 (0x4)
	int FftLength; // 0x14 (0x4)
	struct FHarmonixAnalyzerOutputSettings OutputSettings; // 0x18 (0x10)
	unsigned char padding_28[0x4]; // 0x28 (0x4)
};

