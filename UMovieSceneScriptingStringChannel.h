// Class /Script/SequencerScripting.MovieSceneScriptingStringChannel
// Size: 0x58
class UMovieSceneScriptingStringChannel : public UMovieSceneScriptingChannel
{
	unsigned char unreflected_58[0x58]; 

	/* Functions */

	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.SetDefault (Underlying native function: SetDefault 0x7203ff4)
	void SetDefault(struct FString& InDefaultValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey (Underlying native function: RemoveKey 0x71f88ec)
	void RemoveKey(class UMovieSceneScriptingKey*& Key); // (Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.RemoveDefault (Underlying native function: RemoveDefault 0x71f8878)
	void RemoveDefault(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.HasDefault (Underlying native function: HasDefault 0x72033bc)
	bool HasDefault(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.GetKeys (Underlying native function: GetKeys 0x71f807c)
	struct TArray<class UMovieSceneScriptingKey*> GetKeys(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.GetDefault (Underlying native function: GetDefault 0x7201a70)
	struct FString GetDefault(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.AddKey (Underlying native function: AddKey 0x71ffcb8)
	class UMovieSceneScriptingStringKey* AddKey(struct FFrameNumber& InTime, struct FString& NewValue, float& SubFrame, enum ESequenceTimeUnit& TimeUnit); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

