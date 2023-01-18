// ScriptStruct /Script/HmxAudio.HarmonixAnalyzerEffectResults
// Size: 0x80
struct FHarmonixAnalyzerEffectResults
{
	struct TArray<float> VuChLevels; // 0x0 (0x10)
	struct TArray<float> VuChPeaks; // 0x10 (0x10)
	float VuMonoLevel; // 0x20 (0x4)
	float VuMonoPeak; // 0x24 (0x4)
	float VuMonoPeakdB; // 0x28 (0x4)
	float DrHighEnvelope; // 0x2c (0x4)
	float DrLowEnvelope; // 0x30 (0x4)
	float DrDb; // 0x34 (0x4)
	float DrMonoPeakdB; // 0x38 (0x4)
	float DrMonoPeakHighEnvelopedB; // 0x3c (0x4)
	struct TArray<float> FftLevels; // 0x40 (0x10)
	struct TArray<float> FilterBankLevels; // 0x50 (0x10)
	unsigned char unreflected_60[0x10]; // 0x60 (0x10) 
	struct TArray<float> Waveform; // 0x70 (0x10)
};

