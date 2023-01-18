// Class /Script/MotoSynth.MotoSynthSource
// Size: 0xf8
class UMotoSynthSource : public UObject
{
	bool bConvertTo8Bit; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	float DownSampleFactor; // 0x2c (0x4)
	struct FRuntimeFloatCurve RpmCurve; // 0x30 (0x88)
	struct TArray<float> SourceData; // 0xb8 (0x10)
	struct TArray<int16_t> SourceDataPCM; // 0xc8 (0x10)
	int SourceSampleRate; // 0xd8 (0x4)
	unsigned char unreflected_dc[0x4]; // 0xdc (0x4) 
	struct TArray<struct FGrainTableEntry*> GrainTable; // 0xe0 (0x10)
	unsigned char padding_f0[0x8]; // 0xf0 (0x8)
};

