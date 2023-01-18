// Class /Script/SequencerScripting.MovieSceneScriptingEventKey
// Size: 0x58
class UMovieSceneScriptingEventKey : public UMovieSceneScriptingKey
{
	unsigned char unreflected_58[0x58]; 

	/* Functions */

	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.SetValue (Underlying native function: SetValue 0x71f95f0)
	void SetValue(struct FMovieSceneEvent& InNewValue); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.SetTime (Underlying native function: SetTime 0x71f91f0)
	void SetTime(struct FFrameNumber& NewFrameNumber, float& SubFrame, enum ESequenceTimeUnit& TimeUnit); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.GetValue (Underlying native function: GetValue 0x71f857c)
	struct FMovieSceneEvent GetValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.GetTime (Underlying native function: GetTime 0x71f830c)
	struct FFrameTime* GetTime(enum ESequenceTimeUnit& TimeUnit); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

