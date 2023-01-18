// Class /Script/SequencerScripting.MovieSceneScriptingFloatChannel
// Size: 0x70
class UMovieSceneScriptingFloatChannel : public UMovieSceneScriptingChannel
{
	unsigned char unreflected_70[0x70]; 

	/* Functions */

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation (Underlying native function: SetPreInfinityExtrapolation 0x7204f48)
	void SetPreInfinityExtrapolation(struct TEnumAsByte<ERichCurveExtrapolation>& InExtrapolation); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation (Underlying native function: SetPostInfinityExtrapolation 0x7204eac)
	void SetPostInfinityExtrapolation(struct TEnumAsByte<ERichCurveExtrapolation>& InExtrapolation); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.SetDefault (Underlying native function: SetDefault 0x7203e0c)
	void SetDefault(float& InDefaultValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.RemoveKey (Underlying native function: RemoveKey 0x71f88ec)
	void RemoveKey(class UMovieSceneScriptingKey*& Key); // (Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.RemoveDefault (Underlying native function: RemoveDefault 0x7203ab0)
	void RemoveDefault(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault (Underlying native function: HasDefault 0x72032f4)
	bool HasDefault(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation (Underlying native function: GetPreInfinityExtrapolation 0x72029d4)
	struct TEnumAsByte<ERichCurveExtrapolation> GetPreInfinityExtrapolation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation (Underlying native function: GetPostInfinityExtrapolation 0x7202978)
	struct TEnumAsByte<ERichCurveExtrapolation> GetPostInfinityExtrapolation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys (Underlying native function: GetNumKeys 0x72022a0)
	int GetNumKeys(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys (Underlying native function: GetKeys 0x71f807c)
	struct TArray<class UMovieSceneScriptingKey*> GetKeys(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault (Underlying native function: GetDefault 0x72019a4)
	float GetDefault(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys (Underlying native function: EvaluateKeys 0x7200010)
	struct TArray<float> EvaluateKeys(struct FSequencerScriptingRange& Range, struct FFrameRate*& FrameRate); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange (Underlying native function: ComputeEffectiveRange 0x71fffdc)
	struct FSequencerScriptingRange ComputeEffectiveRange(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.AddKey (Underlying native function: AddKey 0x71ff88c)
	class UMovieSceneScriptingFloatKey* AddKey(struct FFrameNumber& InTime, float& NewValue, float& SubFrame, enum ESequenceTimeUnit& TimeUnit, enum EMovieSceneKeyInterpolation& InInterpolation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

