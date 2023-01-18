// Class /Script/SequencerScripting.MovieSceneScriptingDoubleKey
// Size: 0x58
class UMovieSceneScriptingDoubleKey : public UMovieSceneScriptingKey
{
	unsigned char unreflected_58[0x58]; 

	/* Functions */

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetValue (Underlying native function: SetValue 0x71f956c)
	void SetValue(double& InNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetTime (Underlying native function: SetTime 0x71f91f0)
	void SetTime(struct FFrameNumber& NewFrameNumber, float& SubFrame, enum ESequenceTimeUnit& TimeUnit); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentWeightMode (Underlying native function: SetTangentWeightMode 0x71f913c)
	void SetTangentWeightMode(struct TEnumAsByte<ERichCurveTangentWeightMode>& InNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentMode (Underlying native function: SetTangentMode 0x71f9088)
	void SetTangentMode(struct TEnumAsByte<ERichCurveTangentMode>& InNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangentWeight (Underlying native function: SetLeaveTangentWeight 0x71f8ee4)
	void SetLeaveTangentWeight(float& InNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangent (Underlying native function: SetLeaveTangent 0x71f8e60)
	void SetLeaveTangent(float& InNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetInterpolationMode (Underlying native function: SetInterpolationMode 0x71f8dac)
	void SetInterpolationMode(struct TEnumAsByte<ERichCurveInterpMode>& InNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangentWeight (Underlying native function: SetArriveTangentWeight 0x71f89f4)
	void SetArriveTangentWeight(float& InNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangent (Underlying native function: SetArriveTangent 0x71f8970)
	void SetArriveTangent(float& InNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetValue (Underlying native function: GetValue 0x71f8544)
	double GetValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetTime (Underlying native function: GetTime 0x71f830c)
	struct FFrameTime* GetTime(enum ESequenceTimeUnit& TimeUnit); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentWeightMode (Underlying native function: GetTangentWeightMode 0x71f82d4)
	struct TEnumAsByte<ERichCurveTangentWeightMode> GetTangentWeightMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentMode (Underlying native function: GetTangentMode 0x71f829c)
	struct TEnumAsByte<ERichCurveTangentMode> GetTangentMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangentWeight (Underlying native function: GetLeaveTangentWeight 0x71f812c)
	float GetLeaveTangentWeight(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangent (Underlying native function: GetLeaveTangent 0x71f80f4)
	float GetLeaveTangent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetInterpolationMode (Underlying native function: GetInterpolationMode 0x71f8044)
	struct TEnumAsByte<ERichCurveInterpMode> GetInterpolationMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangentWeight (Underlying native function: GetArriveTangentWeight 0x71f7f48)
	float GetArriveTangentWeight(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangent (Underlying native function: GetArriveTangent 0x71f7f10)
	float GetArriveTangent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

