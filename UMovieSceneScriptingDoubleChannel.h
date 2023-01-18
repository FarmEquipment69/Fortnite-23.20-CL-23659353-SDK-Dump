// Class /Script/SequencerScripting.MovieSceneScriptingDoubleChannel
// Size: 0x58
class UMovieSceneScriptingDoubleChannel : public UMovieSceneScriptingChannel
{
	unsigned char unreflected_58[0x58]; 

	/* Functions */

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.SetPreInfinityExtrapolation (Underlying native function: SetPreInfinityExtrapolation 0x71f8ff8)
	void SetPreInfinityExtrapolation(struct TEnumAsByte<ERichCurveExtrapolation>& InExtrapolation); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.SetPostInfinityExtrapolation (Underlying native function: SetPostInfinityExtrapolation 0x71f8f68)
	void SetPostInfinityExtrapolation(struct TEnumAsByte<ERichCurveExtrapolation>& InExtrapolation); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.SetDefault (Underlying native function: SetDefault 0x71f8ccc)
	void SetDefault(double& InDefaultValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveKey (Underlying native function: RemoveKey 0x71f88ec)
	void RemoveKey(class UMovieSceneScriptingKey*& Key); // (Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveDefault (Underlying native function: RemoveDefault 0x71f8878)
	void RemoveDefault(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.HasDefault (Underlying native function: HasDefault 0x71f874c)
	bool HasDefault(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetPreInfinityExtrapolation (Underlying native function: GetPreInfinityExtrapolation 0x71f8258)
	struct TEnumAsByte<ERichCurveExtrapolation> GetPreInfinityExtrapolation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetPostInfinityExtrapolation (Underlying native function: GetPostInfinityExtrapolation 0x71f8214)
	struct TEnumAsByte<ERichCurveExtrapolation> GetPostInfinityExtrapolation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetNumKeys (Underlying native function: GetNumKeys 0x71f81bc)
	int GetNumKeys(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetKeys (Underlying native function: GetKeys 0x71f807c)
	struct TArray<class UMovieSceneScriptingKey*> GetKeys(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetDefault (Underlying native function: GetDefault 0x71f801c)
	double GetDefault(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.EvaluateKeys (Underlying native function: EvaluateKeys 0x71f7de0)
	struct TArray<double> EvaluateKeys(struct FSequencerScriptingRange& Range, struct FFrameRate*& FrameRate); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.ComputeEffectiveRange (Underlying native function: ComputeEffectiveRange 0x71f7c34)
	struct FSequencerScriptingRange ComputeEffectiveRange(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.AddKey (Underlying native function: AddKey 0x71f7894)
	class UMovieSceneScriptingDoubleKey* AddKey(struct FFrameNumber& InTime, double& NewValue, float& SubFrame, enum ESequenceTimeUnit& TimeUnit, enum EMovieSceneKeyInterpolation& InInterpolation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

