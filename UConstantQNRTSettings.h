// Class /Script/AudioSynesthesia.ConstantQNRTSettings
// Size: 0x48
class UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings
{
	float StartingFrequency; // 0x28 (0x4)
	int NumBands; // 0x2c (0x4)
	float NumBandsPerOctave; // 0x30 (0x4)
	float AnalysisPeriod; // 0x34 (0x4)
	bool bDownmixToMono; // 0x38 (0x1)
	enum EConstantQFFTSizeEnum FFTSize; // 0x39 (0x1)
	enum EFFTWindowType WindowType; // 0x3a (0x1)
	enum EAudioSpectrumType SpectrumType; // 0x3b (0x1)
	float BandWidthStretch; // 0x3c (0x4)
	enum EConstantQNormalizationEnum CQTNormalization; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	float NoiseFloorDb; // 0x44 (0x4)
};

