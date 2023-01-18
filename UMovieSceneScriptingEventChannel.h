// Class /Script/SequencerScripting.MovieSceneScriptingEventChannel
// Size: 0x58
class UMovieSceneScriptingEventChannel : public UMovieSceneScriptingChannel
{
	unsigned char unreflected_58[0x58]; 

	/* Functions */

	// Function /Script/SequencerScripting.MovieSceneScriptingEventChannel.RemoveKey (Underlying native function: RemoveKey 0x71f88ec)
	void RemoveKey(class UMovieSceneScriptingKey*& Key); // (Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingEventChannel.GetKeys (Underlying native function: GetKeys 0x71f807c)
	struct TArray<class UMovieSceneScriptingKey*> GetKeys(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingEventChannel.AddKey (Underlying native function: AddKey 0x71f7a34)
	class UMovieSceneScriptingEventKey* AddKey(struct FFrameNumber& InTime, struct FMovieSceneEvent& NewValue, float& SubFrame, enum ESequenceTimeUnit& TimeUnit); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

