// Class /Script/FortniteUI.FortActivatableMovieWidget_Monolithic
// Size: 0x6e8
class UFortActivatableMovieWidget_Monolithic : public UFortActivatableVideoPanel
{
	struct FMulticastInlineDelegate MediaOpenedMono; // 0x5f8 (0x10)
	unsigned char unreflected_608[0x58]; // 0x608 (0x58) 
	class UFortStreamMediaSource* MediaSourceMono; // 0x660 (0x8)
	class UMediaPlayer* StreamedMediaPlayer; // 0x668 (0x8)
	unsigned char unreflected_670[0x50]; // 0x670 (0x50) 
	struct FDataTableRowHandle PressToSkipAction; // 0x6c0 (0x10)
	struct FDataTableRowHandle HoldToSkipAction; // 0x6d0 (0x10)
	class UImage* ImageWhite; // 0x6e0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortActivatableMovieWidget_Monolithic.StreamedVideoOnUrlSuccess (Underlying native function: StreamedVideoOnUrlSuccess 0xa84cb4c)
	void StreamedVideoOnUrlSuccess(struct FString& URL); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortActivatableMovieWidget_Monolithic.StreamedVideoOnUrlFailure (Underlying native function: StreamedVideoOnUrlFailure 0xa84c9ec)
	void StreamedVideoOnUrlFailure(struct FString& URL); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortActivatableMovieWidget_Monolithic.StartFadeFromWhite (Has no native function)
	void StartFadeFromWhite(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivatableMovieWidget_Monolithic.Play (Underlying native function: Play 0xa849078)
	void Play(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortActivatableMovieWidget_Monolithic.LoadStreamingVideo (Underlying native function: LoadStreamingVideo 0xa8485d4)
	void LoadStreamingVideo(struct FVideoConfig_Mono& Config, class UFortStreamMediaSource*& StreamMediaSource, bool& bNoAutoPlay, bool& bStartWithWhite); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortActivatableMovieWidget_Monolithic.EnableFadeInFromWhite (Underlying native function: EnableFadeInFromWhite 0xa846838)
	void EnableFadeInFromWhite(bool& bInEnable); // (Final | Native | Public | BlueprintCallable)
};

