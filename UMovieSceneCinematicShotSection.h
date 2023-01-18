// Class /Script/MovieSceneTracks.MovieSceneCinematicShotSection
// Size: 0x160
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
	struct FString ShotDisplayName; // 0x138 (0x10)
	struct FText DisplayName; // 0x148 (0x18)

	/* Functions */

	// Function /Script/MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName (Underlying native function: SetShotDisplayName 0x9a849b0)
	void SetShotDisplayName(struct FString& InShotDisplayName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName (Underlying native function: GetShotDisplayName 0x9a844bc)
	struct FString GetShotDisplayName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

