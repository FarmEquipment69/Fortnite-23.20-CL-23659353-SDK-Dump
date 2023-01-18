// Class /Script/AudioExtensions.AudioParameterControllerInterface
// Size: 0x28
class IAudioParameterControllerInterface : public IInterface
{

	/* Functions */

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetTriggerParameter (Underlying native function: SetTriggerParameter 0x15c6bfc)
	void SetTriggerParameter(struct FName& InName); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetStringParameter (Underlying native function: SetStringParameter 0x9a1cfb8)
	void SetStringParameter(struct FName& InName, struct FString& InValue); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetStringArrayParameter (Underlying native function: SetStringArrayParameter 0x9a1ced8)
	void SetStringArrayParameter(struct FName& InName, struct TArray<struct FString>& InValue); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetParameters_Blueprint (Underlying native function: SetParameters_Blueprint 0x9a1ce3c)
	void SetParametersBlueprint(struct TArray<struct FAudioParameter>& InParameters); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetObjectParameter (Underlying native function: SetObjectParameter 0x9a1cd78)
	void SetObjectParameter(struct FName& InName, class UObject*& InValue); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetObjectArrayParameter (Underlying native function: SetObjectArrayParameter 0x9a1cc94)
	void SetObjectArrayParameter(struct FName& InName, struct TArray<class UObject*>& InValue); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetIntParameter (Underlying native function: SetIntParameter 0x119f750)
	void SetIntParameter(struct FName& InName, int& inInt); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetIntArrayParameter (Underlying native function: SetIntArrayParameter 0x9a1cbb0)
	void SetIntArrayParameter(struct FName& InName, struct TArray<int>& InValue); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetFloatParameter (Underlying native function: SetFloatParameter 0x15c71f0)
	void SetFloatParameter(struct FName& InName, float& InFloat); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetFloatArrayParameter (Underlying native function: SetFloatArrayParameter 0x9a1cacc)
	void SetFloatArrayParameter(struct FName& InName, struct TArray<float>& InValue); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetBoolParameter (Underlying native function: SetBoolParameter 0x15c705c)
	void SetBoolParameter(struct FName& InName, bool& InBool); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetBoolArrayParameter (Underlying native function: SetBoolArrayParameter 0x9a1c9e4)
	void SetBoolArrayParameter(struct FName& InName, struct TArray<bool>& InValue); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.ResetParameters (Underlying native function: ResetParameters 0x2620534)
	void ResetParameters(); // (Native | Public | BlueprintCallable)
};

