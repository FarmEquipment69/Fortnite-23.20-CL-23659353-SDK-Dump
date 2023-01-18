// Class /Script/SequencerScripting.MovieSceneScriptingBoolKey
// Size: 0x58
class UMovieSceneScriptingBoolKey : public UMovieSceneScriptingKey
{
	unsigned char unreflected_58[0x58]; 

	/* Functions */

	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.SetValue (Underlying native function: SetValue 0x71f9410)
	void SetValue(bool& InNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.SetTime (Underlying native function: SetTime 0x71f91f0)
	void SetTime(struct FFrameNumber& NewFrameNumber, float& SubFrame, enum ESequenceTimeUnit& TimeUnit); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.GetValue (Underlying native function: GetValue 0x71f8434)
	bool GetValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.GetTime (Underlying native function: GetTime 0x71f830c)
	struct FFrameTime* GetTime(enum ESequenceTimeUnit& TimeUnit); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

