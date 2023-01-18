// ScriptStruct /Script/Engine.SoundWaveSpectralDataPerSound
// Size: 0x20
struct FSoundWaveSpectralDataPerSound
{
	struct TArray<struct FSoundWaveSpectralData> SpectralData; // 0x0 (0x10)
	float PlaybackTime; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	class USoundWave* SoundWave; // 0x18 (0x8)
};

