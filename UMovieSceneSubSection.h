// Class /Script/MovieScene.MovieSceneSubSection
// Size: 0x138
class UMovieSceneSubSection : public UMovieSceneSection
{
	unsigned char unreflected_f0[0x8]; // 0xf0 (0x8) 
	struct FMovieSceneSectionParameters Parameters; // 0xf8 (0x24)
	float StartOffset; // 0x11c (0x4)
	float TimeScale; // 0x120 (0x4)
	float PrerollTime; // 0x124 (0x4)
	unsigned char NetworkMask; // 0x128 (0x1)
	unsigned char unreflected_129[0x7]; // 0x129 (0x7) 
	class UMovieSceneSequence* SubSequence; // 0x130 (0x8)

	/* Functions */

	// Function /Script/MovieScene.MovieSceneSubSection.SetSequence (Underlying native function: SetSequence 0x9974ba0)
	void SetSequence(class UMovieSceneSequence*& Sequence); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MovieScene.MovieSceneSubSection.GetSequence (Underlying native function: GetSequence 0x9974b88)
	class UMovieSceneSequence* GetSequence(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

