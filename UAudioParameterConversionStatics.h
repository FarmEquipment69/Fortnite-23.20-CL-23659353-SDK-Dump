// Class /Script/Engine.AudioParameterConversionStatics
// Size: 0x28
class UAudioParameterConversionStatics : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.AudioParameterConversionStatics.StringToAudioParameter (Underlying native function: StringToAudioParameter 0x9c9e370)
	static struct FAudioParameter StringToAudioParameter(struct FName& Name, struct FString& String); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AudioParameterConversionStatics.StringArrayToAudioParameter (Underlying native function: StringArrayToAudioParameter 0x9c9e25c)
	static struct FAudioParameter StringArrayToAudioParameter(struct FName& Name, struct TArray<struct FString>& Strings); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AudioParameterConversionStatics.ObjectToAudioParameter (Underlying native function: ObjectToAudioParameter 0x9c9c5a8)
	static struct FAudioParameter ObjectToAudioParameter(struct FName& Name, class UObject*& Object); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AudioParameterConversionStatics.ObjectArrayToAudioParameter (Underlying native function: ObjectArrayToAudioParameter 0x9c9c48c)
	static struct FAudioParameter ObjectArrayToAudioParameter(struct FName& Name, struct TArray<class UObject*>& Objects); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AudioParameterConversionStatics.IntegerToAudioParameter (Underlying native function: IntegerToAudioParameter 0x9c9bdd8)
	static struct FAudioParameter IntegerToAudioParameter(struct FName& Name, int& Integer); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AudioParameterConversionStatics.IntegerArrayToAudioParameter (Underlying native function: IntegerArrayToAudioParameter 0x9c9bcc4)
	static struct FAudioParameter IntegerArrayToAudioParameter(struct FName& Name, struct TArray<int>& Integers); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AudioParameterConversionStatics.FloatToAudioParameter (Underlying native function: FloatToAudioParameter 0x9c9b984)
	static struct FAudioParameter FloatToAudioParameter(struct FName& Name, float& float); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AudioParameterConversionStatics.FloatArrayToAudioParameter (Underlying native function: FloatArrayToAudioParameter 0x9c9b874)
	static struct FAudioParameter FloatArrayToAudioParameter(struct FName& Name, struct TArray<float>& Floats); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AudioParameterConversionStatics.BooleanToAudioParameter (Underlying native function: BooleanToAudioParameter 0x9c9b6cc)
	static struct FAudioParameter BooleanToAudioParameter(struct FName& Name, bool& bool); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.AudioParameterConversionStatics.BooleanArrayToAudioParameter (Underlying native function: BooleanArrayToAudioParameter 0x9c9b5b4)
	static struct FAudioParameter BooleanArrayToAudioParameter(struct FName& Name, struct TArray<bool>& Bools); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

