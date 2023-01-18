// Class /Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent
// Size: 0xe8
class USpecialEventAudioHapticsComponent : public USpecialEventAudioAnalysisBaseComponent
{
	struct TArray<struct FSpecialEventAudioHapticsAction> HapticsActions; // 0xc0 (0x10)
	bool bStartHapticsOnBeginPlay; // 0xd0 (0x1)
	unsigned char unreflected_d1[0x3]; // 0xd1 (0x3) 
	float IntensityMultiplier; // 0xd4 (0x4)
	unsigned char padding_d8[0x10]; // 0xd8 (0x10)

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.StopHaptics (Underlying native function: StopHaptics 0x76c804c)
	void StopHaptics(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.StartHaptics (Underlying native function: StartHaptics 0x76c7fb8)
	void StartHaptics(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.AreHapticsActive (Underlying native function: AreHapticsActive 0x76c02f4)
	bool AreHapticsActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

