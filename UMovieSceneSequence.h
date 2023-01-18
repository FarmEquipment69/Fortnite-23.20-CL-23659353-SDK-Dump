// Class /Script/MovieScene.MovieSceneSequence
// Size: 0x68
class UMovieSceneSequence : public UMovieSceneSignedObject
{
	class UMovieSceneCompiledData* CompiledData; // 0x58 (0x8)
	enum EMovieSceneCompletionMode DefaultCompletionMode; // 0x60 (0x1)
	bool bParentContextsAreSignificant; // 0x61 (0x1)
	bool bPlayableDirectly; // 0x62 (0x1)
	enum EMovieSceneSequenceFlags SequenceFlags; // 0x63 (0x1)
	unsigned char padding_64[0x4]; // 0x64 (0x4)

	/* Functions */

	// Function /Script/MovieScene.MovieSceneSequence.GetEarliestTimecodeSource (Underlying native function: GetEarliestTimecodeSource 0x996eb84)
	struct FMovieSceneTimecodeSource GetEarliestTimecodeSource(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieScene.MovieSceneSequence.FindBindingsByTag (Underlying native function: FindBindingsByTag 0x996e944)
	struct TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(struct FName& InBindingName); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MovieScene.MovieSceneSequence.FindBindingByTag (Underlying native function: FindBindingByTag 0x996e8a4)
	struct FMovieSceneObjectBindingID FindBindingByTag(struct FName& InBindingName); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

