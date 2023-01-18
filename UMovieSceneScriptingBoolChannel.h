// Class /Script/SequencerScripting.MovieSceneScriptingBoolChannel
// Size: 0x58
class UMovieSceneScriptingBoolChannel : public UMovieSceneScriptingChannel
{
	unsigned char unreflected_58[0x58]; 

	/* Functions */

	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.SetDefault (Underlying native function: SetDefault 0x71f8b24)
	void SetDefault(bool& InDefaultValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.RemoveKey (Underlying native function: RemoveKey 0x71f88ec)
	void RemoveKey(class UMovieSceneScriptingKey*& Key); // (Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.RemoveDefault (Underlying native function: RemoveDefault 0x71f8804)
	void RemoveDefault(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault (Underlying native function: HasDefault 0x71f86f0)
	bool HasDefault(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys (Underlying native function: GetNumKeys 0x71f8164)
	int GetNumKeys(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys (Underlying native function: GetKeys 0x71f807c)
	struct TArray<class UMovieSceneScriptingKey*> GetKeys(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault (Underlying native function: GetDefault 0x71f7fb8)
	bool GetDefault(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.EvaluateKeys (Underlying native function: EvaluateKeys 0x71f7c9c)
	struct TArray<bool> EvaluateKeys(struct FSequencerScriptingRange& Range, struct FFrameRate*& FrameRate); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange (Underlying native function: ComputeEffectiveRange 0x71f7bcc)
	struct FSequencerScriptingRange ComputeEffectiveRange(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.AddKey (Underlying native function: AddKey 0x71f75a4)
	class UMovieSceneScriptingBoolKey* AddKey(struct FFrameNumber& InTime, bool& NewValue, float& SubFrame, enum ESequenceTimeUnit& TimeUnit); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

