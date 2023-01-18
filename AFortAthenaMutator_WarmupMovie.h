// Class /Script/FortniteGame.FortAthenaMutator_WarmupMovie
// Size: 0x390
class AFortAthenaMutator_WarmupMovie : public AFortAthenaMutator
{
	unsigned char unreflected_330[0x8]; // 0x330 (0x8) 
	float MovieLengthSeconds; // 0x338 (0x4)
	bool bServerMovieStart; // 0x33c (0x1)
	unsigned char unreflected_33d[0x3]; // 0x33d (0x3) 
	class UCommonActivatablePanelLegacy* MovieWidget; // 0x340 (0x8)
	class USoundBase* SkydiveTransitionMusic; // 0x348 (0x8)
	class USoundMix* WarmupMovieMix; // 0x350 (0x8)
	class UCommonActivatablePanelLegacy* WaitingScreen; // 0x358 (0x8)
	class UClass* SpawnEffectClass; // 0x360 (0x8)
	class UMediaPlayer* MediaPlayer; // 0x368 (0x8)
	unsigned char padding_370[0x20]; // 0x370 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_WarmupMovie.ShowMovieWidget (Underlying native function: ShowMovieWidget 0x8524e54)
	void ShowMovieWidget(class UCommonActivatablePanelLegacy*& InMovieWidget, class UMediaPlayer*& InMediaPlayer); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_WarmupMovie.PushMovieWidget (Has no native function)
	void PushMovieWidget(class UCommonActivatablePanelLegacy*& Widget); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaMutator_WarmupMovie.PlayMovie (Has no native function)
	void PlayMovie(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaMutator_WarmupMovie.OnMediaClosedOrEndReached (Underlying native function: OnMediaClosedOrEndReached 0x85243c0)
	void OnMediaClosedOrEndReached(); // (Final | Native | Protected)
};

