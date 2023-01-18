// Class /Script/SequencerScripting.MovieSceneScriptingObjectPathKey
// Size: 0x58
class UMovieSceneScriptingObjectPathKey : public UMovieSceneScriptingKey
{
	unsigned char unreflected_58[0x58]; 

	/* Functions */

	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.SetValue (Underlying native function: SetValue 0x7205c3c)
	void SetValue(class UObject*& InNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.SetTime (Underlying native function: SetTime 0x71f91f0)
	void SetTime(struct FFrameNumber& NewFrameNumber, float& SubFrame, enum ESequenceTimeUnit& TimeUnit); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue (Underlying native function: GetValue 0x7203108)
	class UObject* GetValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.GetTime (Underlying native function: GetTime 0x71f830c)
	struct FFrameTime* GetTime(enum ESequenceTimeUnit& TimeUnit); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

