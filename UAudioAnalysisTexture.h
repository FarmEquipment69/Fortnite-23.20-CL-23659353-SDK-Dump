// Class /Script/HmxAudioGraphics.AudioAnalysisTexture
// Size: 0x198
class UAudioAnalysisTexture : public UHysteresisTextureBase
{
	class UMusicClockComponent* MusicClock; // 0x180 (0x8)
	enum EHmxAudioAnalysisType Type; // 0x188 (0x4)
	struct FName InstanceName; // 0x18c (0x4)
	bool ResetMonoPeakOnUpdate; // 0x190 (0x1)
	bool WarnIfNotEnabled; // 0x191 (0x1)
	unsigned char padding_192[0x6]; // 0x192 (0x6)
};

