// Class /Script/SequencerScripting.MovieSceneScriptingIntegerChannel
// Size: 0x58
class UMovieSceneScriptingIntegerChannel : public UMovieSceneScriptingChannel
{
	unsigned char unreflected_58[0x58]; 

	/* Functions */

	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.SetDefault (Underlying native function: SetDefault 0x7203e90)
	void SetDefault(int& InDefaultValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveKey (Underlying native function: RemoveKey 0x71f88ec)
	void RemoveKey(class UMovieSceneScriptingKey*& Key); // (Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveDefault (Underlying native function: RemoveDefault 0x7203ac4)
	void RemoveDefault(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault (Underlying native function: HasDefault 0x7203318)
	bool HasDefault(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys (Underlying native function: GetKeys 0x71f807c)
	struct TArray<class UMovieSceneScriptingKey*> GetKeys(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault (Underlying native function: GetDefault 0x72019cc)
	int GetDefault(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.AddKey (Underlying native function: AddKey 0x71ffa24)
	class UMovieSceneScriptingIntegerKey* AddKey(struct FFrameNumber& InTime, int& NewValue, float& SubFrame, enum ESequenceTimeUnit& TimeUnit); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

