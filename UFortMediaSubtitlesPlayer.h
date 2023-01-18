// Class /Script/SubtitlesWidgets.FortMediaSubtitlesPlayer
// Size: 0x58
class UFortMediaSubtitlesPlayer : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	class UOverlays* SourceSubtitles; // 0x30 (0x8)
	unsigned char padding_38[0x20]; // 0x38 (0x20)

	/* Functions */

	// Function /Script/SubtitlesWidgets.FortMediaSubtitlesPlayer.Stop (Underlying native function: Stop 0x7520e5c)
	void Stop(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SubtitlesWidgets.FortMediaSubtitlesPlayer.SetSubtitles (Underlying native function: SetSubtitles 0x7520de0)
	void SetSubtitles(class UOverlays*& Subtitles); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SubtitlesWidgets.FortMediaSubtitlesPlayer.Play (Underlying native function: Play 0x7520dcc)
	void Play(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SubtitlesWidgets.FortMediaSubtitlesPlayer.BindToMediaPlayer (Underlying native function: BindToMediaPlayer 0x7520c94)
	void BindToMediaPlayer(class UMediaPlayer*& InMediaPlayer); // (Final | Native | Public | BlueprintCallable)
};

