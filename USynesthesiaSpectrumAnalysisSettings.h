// Class /Script/AudioSynesthesia.SynesthesiaSpectrumAnalysisSettings
// Size: 0x30
class USynesthesiaSpectrumAnalysisSettings : public UAudioSynesthesiaSettings
{
	float AnalysisPeriod; // 0x28 (0x4)
	enum EFFTSize FFTSize; // 0x2c (0x1)
	enum EAudioSpectrumType SpectrumType; // 0x2d (0x1)
	enum EFFTWindowType WindowType; // 0x2e (0x1)
	bool bDownmixToMono; // 0x2f (0x1)
};

