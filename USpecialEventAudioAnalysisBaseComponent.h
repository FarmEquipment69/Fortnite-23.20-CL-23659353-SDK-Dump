// Class /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent
// Size: 0xc0
class USpecialEventAudioAnalysisBaseComponent : public UActorComponent
{
	float CurrentTime; // 0xa0 (0x4)
	unsigned char unreflected_a4[0x4]; // 0xa4 (0x4) 
	class ULoudnessNRT* LoudnessNRT; // 0xa8 (0x8)
	class UOnsetNRT* OnsetNRT; // 0xb0 (0x8)
	class UConstantQNRT* ConstantQNRT; // 0xb8 (0x8)

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateTime (Underlying native function: UpdateTime 0x76c8b10)
	void UpdateTime(float& NewTime); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateOnset (Underlying native function: UpdateOnset 0x720c758)
	void UpdateOnset(float& Time); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateLoudness (Underlying native function: UpdateLoudness 0x76c8a00)
	void UpdateLoudness(float& Time); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateConstantQ (Underlying native function: UpdateConstantQ 0x76c8978)
	void UpdateConstantQ(float& Time); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetOnsetNRT (Underlying native function: GetOnsetNRT 0x76c2d0c)
	class UOnsetNRT* GetOnsetNRT(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetLoudnessNRT (Underlying native function: GetLoudnessNRT 0x76c2cd8)
	class ULoudnessNRT* GetLoudnessNRT(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetCurrentNormalizedLoudness (Underlying native function: GetCurrentNormalizedLoudness 0x76c22e8)
	float GetCurrentNormalizedLoudness(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetConstantQNRT (Underlying native function: GetConstantQNRT 0x76c2168)
	class UConstantQNRT* GetConstantQNRT(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

