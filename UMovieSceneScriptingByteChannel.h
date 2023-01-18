// Class /Script/SequencerScripting.MovieSceneScriptingByteChannel
// Size: 0x58
class UMovieSceneScriptingByteChannel : public UMovieSceneScriptingChannel
{
	unsigned char unreflected_58[0x58]; 

	/* Functions */

	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.SetDefault (Underlying native function: SetDefault 0x71f8c00)
	void SetDefault(unsigned char& InDefaultValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.RemoveKey (Underlying native function: RemoveKey 0x71f88ec)
	void RemoveKey(class UMovieSceneScriptingKey*& Key); // (Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.RemoveDefault (Underlying native function: RemoveDefault 0x71f8804)
	void RemoveDefault(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.HasDefault (Underlying native function: HasDefault 0x71f86f0)
	bool HasDefault(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.GetKeys (Underlying native function: GetKeys 0x71f807c)
	struct TArray<class UMovieSceneScriptingKey*> GetKeys(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.GetDefault (Underlying native function: GetDefault 0x71f7fb8)
	unsigned char GetDefault(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.AddKey (Underlying native function: AddKey 0x71f7700)
	class UMovieSceneScriptingByteKey* AddKey(struct FFrameNumber& InTime, unsigned char& NewValue, float& SubFrame, enum ESequenceTimeUnit& TimeUnit, enum EMovieSceneKeyInterpolation& InInterpolation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

