// Class /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection
// Size: 0x110
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
	unsigned char unreflected_f0[0x8]; // 0xf0 (0x8) 
	enum ELevelVisibility Visibility; // 0xf8 (0x1)
	unsigned char unreflected_f9[0x7]; // 0xf9 (0x7) 
	struct TArray<struct FName> LevelNames; // 0x100 (0x10)

	/* Functions */

	// Function /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility (Underlying native function: SetVisibility 0x9aade6c)
	void SetVisibility(enum ELevelVisibility& InVisibility); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames (Underlying native function: SetLevelNames 0x9aadd50)
	void SetLevelNames(struct TArray<struct FName>& InLevelNames); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility (Underlying native function: GetVisibility 0x9aad09c)
	enum ELevelVisibility GetVisibility(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames (Underlying native function: GetLevelNames 0x9aacf84)
	struct TArray<struct FName> GetLevelNames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

