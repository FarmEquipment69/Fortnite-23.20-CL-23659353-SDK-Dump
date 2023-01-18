// Class /Script/MotoSynth.SynthComponentMoto
// Size: 0x930
class USynthComponentMoto : public USynthComponent
{
	class UMotoSynthPreset* MotoSynthPreset; // 0x790 (0x8)
	float RPM; // 0x798 (0x4)
	unsigned char padding_79c[0x194]; // 0x79c (0x194)

	/* Functions */

	// Function /Script/MotoSynth.SynthComponentMoto.SetSettings (Underlying native function: SetSettings 0x71e7e60)
	void SetSettings(struct FMotoSynthRuntimeSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MotoSynth.SynthComponentMoto.SetRPM (Underlying native function: SetRPM 0x71e7d9c)
	void SetRPM(float& InRPM, float& InTimeSec); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MotoSynth.SynthComponentMoto.IsEnabled (Underlying native function: IsEnabled 0x71e7d80)
	bool IsEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MotoSynth.SynthComponentMoto.GetRPMRange (Underlying native function: GetRPMRange 0x71e7ca8)
	void GetRPMRange(float& OutMinRPM, float& OutMaxRPM); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

