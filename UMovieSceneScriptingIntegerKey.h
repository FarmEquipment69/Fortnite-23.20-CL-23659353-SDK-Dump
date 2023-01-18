// Class /Script/SequencerScripting.MovieSceneScriptingIntegerKey
// Size: 0x58
class UMovieSceneScriptingIntegerKey : public UMovieSceneScriptingKey
{
	unsigned char unreflected_58[0x58]; 

	/* Functions */

	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.SetValue (Underlying native function: SetValue 0x7205b90)
	void SetValue(int& InNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.SetTime (Underlying native function: SetTime 0x71f91f0)
	void SetTime(struct FFrameNumber& NewFrameNumber, float& SubFrame, enum ESequenceTimeUnit& TimeUnit); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.GetValue (Underlying native function: GetValue 0x720307c)
	int GetValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.GetTime (Underlying native function: GetTime 0x71f830c)
	struct FFrameTime* GetTime(enum ESequenceTimeUnit& TimeUnit); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

