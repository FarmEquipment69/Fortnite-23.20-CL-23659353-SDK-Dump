// Class /Script/Synthesis.SynthComponentToneGenerator
// Size: 0x880
class USynthComponentToneGenerator : public USynthComponent
{
	float Frequency; // 0x790 (0x4)
	float Volume; // 0x794 (0x4)
	struct FRuntimeFloatCurve DistanceAttenuationCurve; // 0x798 (0x88)
	struct FVector2D DistanceRange; // 0x820 (0x10)
	float AttenuationDbAtMaxRange; // 0x830 (0x4)
	unsigned char padding_834[0x4c]; // 0x834 (0x4c)

	/* Functions */

	// Function /Script/Synthesis.SynthComponentToneGenerator.SetVolume (Underlying native function: SetVolume 0x71d8040)
	void SetVolume(float& InVolume); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentToneGenerator.SetFrequency (Underlying native function: SetFrequency 0x71d2e1c)
	void SetFrequency(float& InFrequency); // (Final | Native | Public | BlueprintCallable)
};

