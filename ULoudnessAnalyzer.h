// Class /Script/AudioSynesthesia.LoudnessAnalyzer
// Size: 0xd8
class ULoudnessAnalyzer : public UAudioAnalyzer
{
	class ULoudnessSettings* Settings; // 0x90 (0x8)
	struct FMulticastInlineDelegate OnOverallLoudnessResults; // 0x98 (0x10)
	struct FMulticastInlineDelegate OnPerChannelLoudnessResults; // 0xa8 (0x10)
	struct FMulticastInlineDelegate OnLatestOverallLoudnessResults; // 0xb8 (0x10)
	struct FMulticastInlineDelegate OnLatestPerChannelLoudnessResults; // 0xc8 (0x10)
};

