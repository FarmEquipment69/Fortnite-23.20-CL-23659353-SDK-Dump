// Class /Script/AugmentedReality.ARBasicLightEstimate
// Size: 0x40
class UARBasicLightEstimate : public UARLightEstimate
{
	float AmbientIntensityLumens; // 0x28 (0x4)
	float AmbientColorTemperatureKelvin; // 0x2c (0x4)
	struct FLinearColor AmbientColor; // 0x30 (0x10)

	/* Functions */

	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens (Underlying native function: GetAmbientIntensityLumens 0x743b82c)
	float GetAmbientIntensityLumens(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin (Underlying native function: GetAmbientColorTemperatureKelvin 0x97bab9c)
	float GetAmbientColorTemperatureKelvin(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientColor (Underlying native function: GetAmbientColor 0x97bab84)
	struct FLinearColor GetAmbientColor(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

