// ScriptStruct /Script/FortniteGame.AudioAnalysisSpectralAnalysisData
// Size: 0x30
struct FAudioAnalysisSpectralAnalysisData
{
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> BandSettings; // 0x0 (0x10)
	float UpdateRate; // 0x10 (0x4)
	float DecibelNoiseFloor; // 0x14 (0x4)
	bool bDoNormalize; // 0x18 (0x1)
	bool bDoAutoRange; // 0x19 (0x1)
	unsigned char unreflected_1a[0x2]; // 0x1a (0x2) 
	float AutoRangeAttackTime; // 0x1c (0x4)
	float AutoRangeReleaseTime; // 0x20 (0x4)
	enum EFFTSize FFTSize; // 0x24 (0x1)
	enum EFFTPeakInterpolationMethod InterpolationMethod; // 0x25 (0x1)
	enum EFFTWindowType WindowType; // 0x26 (0x1)
	unsigned char unreflected_27[0x1]; // 0x27 (0x1) 
	float HopSize; // 0x28 (0x4)
	enum EAudioSpectrumType SpectrumType; // 0x2c (0x1)
	unsigned char padding_2d[0x3]; // 0x2d (0x3)
};

