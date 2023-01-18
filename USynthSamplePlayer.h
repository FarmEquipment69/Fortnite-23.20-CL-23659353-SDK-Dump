// Class /Script/Synthesis.SynthSamplePlayer
// Size: 0x8c0
class USynthSamplePlayer : public USynthComponent
{
	class USoundWave* SoundWave; // 0x790 (0x8)
	struct FMulticastInlineDelegate OnSampleLoaded; // 0x798 (0x10)
	struct FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x7a8 (0x10)
	unsigned char padding_7b8[0x108]; // 0x7b8 (0x108)

	/* Functions */

	// Function /Script/Synthesis.SynthSamplePlayer.SetSoundWave (Underlying native function: SetSoundWave 0x71d7484)
	void SetSoundWave(class USoundWave*& InSoundWave); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthSamplePlayer.SetScrubTimeWidth (Underlying native function: SetScrubTimeWidth 0x71d60cc)
	void SetScrubTimeWidth(float& InScrubTimeWidthSec); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthSamplePlayer.SetScrubMode (Underlying native function: SetScrubMode 0x71d6010)
	void SetScrubMode(bool& bScrubMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthSamplePlayer.SetPitch (Underlying native function: SetPitch 0x71d52a8)
	void SetPitch(float& InPitch, float& TimeSec); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthSamplePlayer.SeekToTime (Underlying native function: SeekToTime 0x71d0758)
	void SeekToTime(float& TimeSec, enum ESamplePlayerSeekType& SeekType, bool& bWrap); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthSamplePlayer.IsLoaded (Underlying native function: IsLoaded 0x71d0074)
	bool IsLoaded(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Synthesis.SynthSamplePlayer.GetSampleDuration (Underlying native function: GetSampleDuration 0x71cfd9c)
	float GetSampleDuration(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime (Underlying native function: GetCurrentPlaybackProgressTime 0x71cf88c)
	float GetCurrentPlaybackProgressTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent (Underlying native function: GetCurrentPlaybackProgressPercent 0x71cf86c)
	float GetCurrentPlaybackProgressPercent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

