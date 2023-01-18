// Class /Script/SequencerScripting.MovieSceneScriptingFloatKey
// Size: 0x40
class UMovieSceneScriptingFloatKey : public UMovieSceneScriptingKey
{

	/* Functions */

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetValue (Underlying native function: SetValue 0x7205b08)
	void SetValue(float& InNewValue); // (Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetTime (Underlying native function: SetTime 0x72059fc)
	void SetTime(struct FFrameNumber& NewFrameNumber, float& SubFrame, enum ESequenceTimeUnit& TimeUnit); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode (Underlying native function: SetTangentWeightMode 0x7205978)
	void SetTangentWeightMode(struct TEnumAsByte<ERichCurveTangentWeightMode>& InNewValue); // (Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode (Underlying native function: SetTangentMode 0x72058f4)
	void SetTangentMode(struct TEnumAsByte<ERichCurveTangentMode>& InNewValue); // (Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight (Underlying native function: SetLeaveTangentWeight 0x72048f0)
	void SetLeaveTangentWeight(float& InNewValue); // (Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent (Underlying native function: SetLeaveTangent 0x7204868)
	void SetLeaveTangent(float& InNewValue); // (Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode (Underlying native function: SetInterpolationMode 0x72047e4)
	void SetInterpolationMode(struct TEnumAsByte<ERichCurveInterpMode>& InNewValue); // (Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight (Underlying native function: SetArriveTangentWeight 0x7203cc0)
	void SetArriveTangentWeight(float& InNewValue); // (Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent (Underlying native function: SetArriveTangent 0x7203c38)
	void SetArriveTangent(float& InNewValue); // (Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetValue (Underlying native function: GetValue 0x281f720)
	float GetValue(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetTime (Underlying native function: GetTime 0x71f830c)
	struct FFrameTime* GetTime(enum ESequenceTimeUnit& TimeUnit); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode (Underlying native function: GetTangentWeightMode 0x7202efc)
	struct TEnumAsByte<ERichCurveTangentWeightMode> GetTangentWeightMode(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode (Underlying native function: GetTangentMode 0x7202ed4)
	struct TEnumAsByte<ERichCurveTangentMode> GetTangentMode(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight (Underlying native function: GetLeaveTangentWeight 0x7202080)
	float GetLeaveTangentWeight(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent (Underlying native function: GetLeaveTangent 0x7202054)
	float GetLeaveTangent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode (Underlying native function: GetInterpolationMode 0x720202c)
	struct TEnumAsByte<ERichCurveInterpMode> GetInterpolationMode(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight (Underlying native function: GetArriveTangentWeight 0x7200954)
	float GetArriveTangentWeight(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent (Underlying native function: GetArriveTangent 0x7200928)
	float GetArriveTangent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

