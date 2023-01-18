// Class /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel
// Size: 0x58
class UMovieSceneScriptingObjectPathChannel : public UMovieSceneScriptingChannel
{
	unsigned char unreflected_58[0x58]; 

	/* Functions */

	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.SetDefault (Underlying native function: SetDefault 0x7203f5c)
	void SetDefault(class UObject*& InDefaultValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveKey (Underlying native function: RemoveKey 0x71f88ec)
	void RemoveKey(class UMovieSceneScriptingKey*& Key); // (Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveDefault (Underlying native function: RemoveDefault 0x71f87c4)
	void RemoveDefault(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault (Underlying native function: HasDefault 0x7203390)
	bool HasDefault(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys (Underlying native function: GetKeys 0x71f807c)
	struct TArray<class UMovieSceneScriptingKey*> GetKeys(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault (Underlying native function: GetDefault 0x7201a4c)
	class UObject* GetDefault(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.AddKey (Underlying native function: AddKey 0x71ffb7c)
	class UMovieSceneScriptingObjectPathKey* AddKey(struct FFrameNumber& InTime, class UObject*& NewValue, float& SubFrame, enum ESequenceTimeUnit& TimeUnit); // (Final | Native | Public | HasDefaults | BlueprintCallable)
};

