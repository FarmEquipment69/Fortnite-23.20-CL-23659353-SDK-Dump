// ScriptStruct /Script/Engine.SoundWaveTimecodeInfo
// Size: 0x70
struct FSoundWaveTimecodeInfo
{
	uint64_t NumSamplesSinceMidnight; // 0x0 (0x8)
	uint32_t NumSamplesPerSecond; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FString Description; // 0x10 (0x10)
	struct FString OriginatorTime; // 0x20 (0x10)
	struct FString OriginatorDate; // 0x30 (0x10)
	struct FString OriginatorDescription; // 0x40 (0x10)
	struct FString OriginatorReference; // 0x50 (0x10)
	struct FFrameRate* TimecodeRate; // 0x60 (0x8)
	bool bTimecodeIsDropFrame; // 0x68 (0x1)
	unsigned char padding_69[0x7]; // 0x69 (0x7)
};

