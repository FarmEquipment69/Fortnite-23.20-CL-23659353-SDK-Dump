// Class /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel
// Size: 0x58
class UMovieSceneScriptingActorReferenceChannel : public UMovieSceneScriptingChannel
{
	unsigned char unreflected_58[0x58]; 

	/* Functions */

	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.SetDefault (Underlying native function: SetDefault 0x71f8a78)
	void SetDefault(struct FMovieSceneObjectBindingID& InDefaultValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveKey (Underlying native function: RemoveKey 0x71f88ec)
	void RemoveKey(class UMovieSceneScriptingKey*& Key); // (Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveDefault (Underlying native function: RemoveDefault 0x71f87c4)
	void RemoveDefault(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault (Underlying native function: HasDefault 0x71f869c)
	bool HasDefault(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys (Underlying native function: GetKeys 0x71f807c)
	struct TArray<class UMovieSceneScriptingKey*> GetKeys(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault (Underlying native function: GetDefault 0x71f7f80)
	struct FMovieSceneObjectBindingID GetDefault(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.AddKey (Underlying native function: AddKey 0x71f7444)
	class UMovieSceneScriptingActorReferenceKey* AddKey(struct FFrameNumber& InTime, struct FMovieSceneObjectBindingID& NewValue, float& SubFrame, enum ESequenceTimeUnit& TimeUnit); // (Final | Native | Public | HasDefaults | BlueprintCallable)
};

