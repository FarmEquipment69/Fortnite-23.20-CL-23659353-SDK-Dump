// ScriptStruct /Script/GameplayCameras.FOscillator
// Size: 0xc
struct FFOscillator
{
	float Amplitude; // 0x0 (0x4)
	float Frequency; // 0x4 (0x4)
	struct TEnumAsByte<EInitialOscillatorOffset> InitialOffset; // 0x8 (0x1)
	enum EOscillatorWaveform Waveform; // 0x9 (0x1)
	unsigned char padding_a[0x2]; // 0xa (0x2)
};

