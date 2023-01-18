// ScriptStruct /Script/Engine.SoundWaveSpectralTimeData
// Size: 0x18
struct FSoundWaveSpectralTimeData
{
	struct TArray<struct FSoundWaveSpectralDataEntry*> Data; // 0x0 (0x10)
	float TimeSec; // 0x10 (0x4)
	unsigned char padding_14[0x4]; // 0x14 (0x4)
};

