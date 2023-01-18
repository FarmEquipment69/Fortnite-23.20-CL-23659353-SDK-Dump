// Class /Script/Synthesis.MonoWaveTableSynthPreset
// Size: 0x170
class UMonoWaveTableSynthPreset : public UObject
{
	struct FString PresetName; // 0x28 (0x10)
	unsigned char bLockKeyframesToGridBool; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	int LockKeyframesToGrid; // 0x3c (0x4)
	int WaveTableResolution; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct TArray<struct FRuntimeFloatCurve> WaveTable; // 0x48 (0x10)
	unsigned char bNormalizeWaveTables; // 0x58 (0x1)
	unsigned char padding_59[0x117]; // 0x59 (0x117)
};

