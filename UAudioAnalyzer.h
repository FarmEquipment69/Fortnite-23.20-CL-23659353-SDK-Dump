// Class /Script/AudioAnalyzer.AudioAnalyzer
// Size: 0x90
class UAudioAnalyzer : public UObject
{
	class UAudioBus* AudioBus; // 0x28 (0x8)
	unsigned char unreflected_30[0x8]; // 0x30 (0x8) 
	class UAudioAnalyzerSubsystem* AudioAnalyzerSubsystem; // 0x38 (0x8)
	unsigned char padding_40[0x50]; // 0x40 (0x50)

	/* Functions */

	// Function /Script/AudioAnalyzer.AudioAnalyzer.StopAnalyzing (Underlying native function: StopAnalyzing 0xa95683c)
	void StopAnalyzing(class UObject*& WorldContextObject); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/AudioAnalyzer.AudioAnalyzer.StartAnalyzing (Underlying native function: StartAnalyzing 0xa956524)
	void StartAnalyzing(class UObject*& WorldContextObject, class UAudioBus*& AudioBusToAnalyze); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)
};

