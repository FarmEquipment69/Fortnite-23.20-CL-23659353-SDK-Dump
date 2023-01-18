// Class /Script/HmxAudio.HmxSettings
// Size: 0xb8
class UHmxSettings : public UDeveloperSettings
{
	bool verbosePrint; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct FDirectoryPath audioStreamsDirectory; // 0x38 (0x10)
	struct FHmxPerPlatformConfig DefaultPlatformSettings; // 0x48 (0x4)
	struct FHmxPerPlatformConfig XB1PlatformSettings; // 0x4c (0x4)
	struct FHmxPerPlatformConfig PS4PlatformSettings; // 0x50 (0x4)
	struct FHmxPerPlatformConfig SwitchPlatformSettings; // 0x54 (0x4)
	int numMoggGenerators; // 0x58 (0x4)
	int numMoggMusicGenerators; // 0x5c (0x4)
	int numFusionGenerators; // 0x60 (0x4)
	int numTotalVoices; // 0x64 (0x4)
	int softVoiceLimit; // 0x68 (0x4)
	int numStretchable; // 0x6c (0x4)
	bool shouldDecompressSamplesOnLoad; // 0x70 (0x1)
	bool onLoadDecompressionIsAsynchronous; // 0x71 (0x1)
	unsigned char unreflected_72[0x2]; // 0x72 (0x2) 
	int maxActiveVorbisDecoders; // 0x74 (0x4)
	int preBufferFramesOnAsyncLoad; // 0x78 (0x4)
	float formantVolCorrectionPerHalfStepUp; // 0x7c (0x4)
	float formantVolCorrectionPerHalfStepUpMax; // 0x80 (0x4)
	float formantVolCorrectionPerHalfStepDown; // 0x84 (0x4)
	float formantVolCorrectionPerHalfStepDownMax; // 0x88 (0x4)
	enum EVorbisMemoryScheme vorbisMemoryScheme; // 0x8c (0x1)
	unsigned char unreflected_8d[0x3]; // 0x8d (0x3) 
	int vorbisPoolOrStackSize; // 0x90 (0x4)
	bool autoGrow; // 0x94 (0x1)
	unsigned char unreflected_95[0x3]; // 0x95 (0x3) 
	int autoGrowSize; // 0x98 (0x4)
	int numMultiFusionGenerators; // 0x9c (0x4)
	int numDaggerGenerators; // 0xa0 (0x4)
	int numSynthRackGenerators; // 0xa4 (0x4)
	int numMidiMusicGenerators; // 0xa8 (0x4)
	int numAudioBusGenerators; // 0xac (0x4)
	int numMusicTimelineGenerators; // 0xb0 (0x4)
	bool scanAllBussesForTempoAwareDSP; // 0xb4 (0x1)
	unsigned char padding_b5[0x3]; // 0xb5 (0x3)
};

