// Class /Script/Synthesis.SourceEffectBitCrusherPreset
// Size: 0x230
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{
	unsigned char unreflected_68[0xf8]; // 0x68 (0xf8) 
	struct FSourceEffectBitCrusherSettings Settings; // 0x160 (0xd0)

	/* Functions */

	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSettings (Underlying native function: SetSettings 0x71d6150)
	void SetSettings(struct FSourceEffectBitCrusherBaseSettings*& Settings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulators (Underlying native function: SetSampleRateModulators 0x71d5e70)
	void SetSampleRateModulators(struct TSet<class USoundModulatorBase*>& InModulators); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator (Underlying native function: SetSampleRateModulator 0x71d5dd0)
	void SetSampleRateModulator(class USoundModulatorBase*& Modulator); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRate (Underlying native function: SetSampleRate 0x71d5d4c)
	void SetSampleRate(float& SampleRate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings (Underlying native function: SetModulationSettings 0x71d4914)
	void SetModulationSettings(struct FSourceEffectBitCrusherSettings& ModulationSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBits (Underlying native function: SetBits 0x71d1054)
	void SetBits(float& Bits); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBitModulators (Underlying native function: SetBitModulators 0x71d0f70)
	void SetBitModulators(struct TSet<class USoundModulatorBase*>& InModulators); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBitModulator (Underlying native function: SetBitModulator 0x71d0ed0)
	void SetBitModulator(class USoundModulatorBase*& Modulator); // (Final | Native | Public | BlueprintCallable)
};

