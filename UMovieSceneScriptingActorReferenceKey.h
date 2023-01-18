// Class /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey
// Size: 0x58
class UMovieSceneScriptingActorReferenceKey : public UMovieSceneScriptingKey
{
	unsigned char unreflected_58[0x58]; 

	/* Functions */

	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.SetValue (Underlying native function: SetValue 0x71f930c)
	void SetValue(struct FMovieSceneObjectBindingID& InNewValue); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.SetTime (Underlying native function: SetTime 0x71f91f0)
	void SetTime(struct FFrameNumber& NewFrameNumber, float& SubFrame, enum ESequenceTimeUnit& TimeUnit); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue (Underlying native function: GetValue 0x71f839c)
	struct FMovieSceneObjectBindingID GetValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.GetTime (Underlying native function: GetTime 0x71f830c)
	struct FFrameTime* GetTime(enum ESequenceTimeUnit& TimeUnit); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

