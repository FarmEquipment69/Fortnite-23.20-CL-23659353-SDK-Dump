// Class /Script/MovieSceneTracks.MovieSceneCVarSection
// Size: 0x158
class UMovieSceneCVarSection : public UMovieSceneSection
{
	unsigned char unreflected_f0[0x8]; // 0xf0 (0x8) 
	struct TArray<struct FMovieSceneConsoleVariableCollection> ConsoleVariableCollections; // 0xf8 (0x10)
	struct FMovieSceneCVarOverrides ConsoleVariables; // 0x108 (0x50)

	/* Functions */

	// Function /Script/MovieSceneTracks.MovieSceneCVarSection.SetFromString (Underlying native function: SetFromString 0x9a84858)
	void SetFromString(struct FString& InString); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneCVarSection.GetString (Underlying native function: GetString 0x9a84548)
	struct FString GetString(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

