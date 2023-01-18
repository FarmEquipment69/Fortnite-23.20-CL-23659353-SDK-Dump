// Class /Script/PointLight.PointLightNativeComponent
// Size: 0x170
class UPointLightNativeComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x90]; // 0xa0 (0x90) 
	class UTimelineComponent* ShortCircuitTimelineComponent; // 0x130 (0x8)
	unsigned char unreflected_138[0x18]; // 0x138 (0x18) 
	struct FLinearColor FlickerColor; // 0x150 (0x10)
	float ShortCircuitMinDelay; // 0x160 (0x4)
	float ShortCircuitMaxDelay; // 0x164 (0x4)
	unsigned char padding_168[0x8]; // 0x168 (0x8)

	/* Functions */

	// Function /Script/PointLight.PointLightNativeComponent.UpdateShortCircuit (Underlying native function: UpdateShortCircuit 0x73b069c)
	void UpdateShortCircuit(); // (Final | Native | Private)

	// Function /Script/PointLight.PointLightNativeComponent.UpdateDeviceSettings (Underlying native function: UpdateDeviceSettings 0x73b05ec)
	void UpdateDeviceSettings(struct FPointLightRhythmParameters& RhythmParameters); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/PointLight.PointLightNativeComponent.StopShortCircuitUpdate (Underlying native function: StopShortCircuitUpdate 0x73b05d8)
	void StopShortCircuitUpdate(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PointLight.PointLightNativeComponent.StartShortCircuitUpdate (Underlying native function: StartShortCircuitUpdate 0x73b049c)
	void StartShortCircuitUpdate(class UTimelineComponent*& ShortCircuitTimeline); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PointLight.PointLightNativeComponent.StartRhythmUpdate (Underlying native function: StartRhythmUpdate 0x73b03c8)
	void StartRhythmUpdate(struct FTimerHandle*& TimerHandle, float& Rate); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

