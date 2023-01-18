// Class /Script/FortniteUI.FortMovieWidget
// Size: 0x2a8
class UFortMovieWidget : public UFortUserWidget
{
	struct FMulticastInlineDelegate OnMediaOpened; // 0x278 (0x10)
	class UMediaPlayer* MediaPlayer; // 0x288 (0x8)
	class UMediaTexture* MediaTexture; // 0x290 (0x8)
	bool bIncludeAudio; // 0x298 (0x1)
	unsigned char unreflected_299[0x7]; // 0x299 (0x7) 
	class UMediaSoundComponent* SoundComponent; // 0x2a0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortMovieWidget.SetMediaSource (Underlying native function: SetMediaSource 0xa701ec0)
	bool SetMediaSource(class UMediaPlayer*& InMediaPlayer, class UMediaSource*& InMediaSource, struct FMediaPlayerOptions& PlayerOptions, bool& bPlayOnOpen, bool& bLooping); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortMovieWidget.RequestStopMovie (Underlying native function: RequestStopMovie 0xa70130c)
	void RequestStopMovie(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMovieWidget.RequestPlayMovie (Underlying native function: RequestPlayMovie 0xa701290)
	void RequestPlayMovie(bool& bShouldRewind); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMovieWidget.MediaDimensionsUpdated (Has no native function)
	void MediaDimensionsUpdated(float& NewWidth, float& NewHeight); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortMovieWidget.HasPlayerForSource (Underlying native function: HasPlayerForSource 0xa6ff730)
	bool HasPlayerForSource(class UMediaSource*& InMediaSource); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortMovieWidget.GetMediaTexture (Underlying native function: GetMediaTexture 0x71207e4)
	class UMediaTexture* GetMediaTexture(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortMovieWidget.GetMediaSoundComponent (Underlying native function: GetMediaSoundComponent 0x27fec44)
	class UMediaSoundComponent* GetMediaSoundComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortMovieWidget.GetMediaPlayer (Underlying native function: GetMediaPlayer 0x7341450)
	class UMediaPlayer* GetMediaPlayer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortMovieWidget.CleanupMediaPlayer (Underlying native function: CleanupMediaPlayer 0xa6fdc08)
	void CleanupMediaPlayer(); // (Final | Native | Public | BlueprintCallable)
};

