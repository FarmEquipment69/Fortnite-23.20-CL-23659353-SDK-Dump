// Class /Script/Synthesis.SourceEffectChorusPreset
// Size: 0x540
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{
	unsigned char unreflected_68[0x280]; // 0x68 (0x280) 
	struct FSourceEffectChorusSettings Settings; // 0x2e8 (0x258)

	/* Functions */

	// Function /Script/Synthesis.SourceEffectChorusPreset.SetWetModulators (Underlying native function: SetWetModulators 0x71d8274)
	void SetWetModulators(struct TSet<class USoundModulatorBase*>& Modulators); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectChorusPreset.SetWetModulator (Underlying native function: SetWetModulator 0x71d81d4)
	void SetWetModulator(class USoundModulatorBase*& Modulator); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectChorusPreset.SetWet (Underlying native function: SetWet 0x71d8150)
	void SetWet(float& WetAmount); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSpreadModulators (Underlying native function: SetSpreadModulators 0x71d76bc)
	void SetSpreadModulators(struct TSet<class USoundModulatorBase*>& Modulators); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSpreadModulator (Underlying native function: SetSpreadModulator 0x71d761c)
	void SetSpreadModulator(class USoundModulatorBase*& Modulator); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSpread (Underlying native function: SetSpread 0x71d7598)
	void SetSpread(float& Spread); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSettings (Underlying native function: SetSettings 0x71d61f0)
	void SetSettings(struct FSourceEffectChorusBaseSettings& Settings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectChorusPreset.SetModulationSettings (Underlying native function: SetModulationSettings 0x71d4a34)
	void SetModulationSettings(struct FSourceEffectChorusSettings& ModulationSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequencyModulators (Underlying native function: SetFrequencyModulators 0x71d2f48)
	void SetFrequencyModulators(struct TSet<class USoundModulatorBase*>& Modulators); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequencyModulator (Underlying native function: SetFrequencyModulator 0x71d2ea8)
	void SetFrequencyModulator(class USoundModulatorBase*& Modulator); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequency (Underlying native function: SetFrequency 0x71d2d14)
	void SetFrequency(float& Frequency); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedbackModulators (Underlying native function: SetFeedbackModulators 0x71d2110)
	void SetFeedbackModulators(struct TSet<class USoundModulatorBase*>& Modulators); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedbackModulator (Underlying native function: SetFeedbackModulator 0x71d2070)
	void SetFeedbackModulator(class USoundModulatorBase*& Modulator); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedback (Underlying native function: SetFeedback 0x71d1fec)
	void SetFeedback(float& Feedback); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDryModulators (Underlying native function: SetDryModulators 0x71d1b68)
	void SetDryModulators(struct TSet<class USoundModulatorBase*>& Modulators); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDryModulator (Underlying native function: SetDryModulator 0x71d1ac8)
	void SetDryModulator(class USoundModulatorBase*& Modulator); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDry (Underlying native function: SetDry 0x71d1a44)
	void SetDry(float& DryAmount); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDepthModulators (Underlying native function: SetDepthModulators 0x71d1960)
	void SetDepthModulators(struct TSet<class USoundModulatorBase*>& Modulators); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDepthModulator (Underlying native function: SetDepthModulator 0x71d18c0)
	void SetDepthModulator(class USoundModulatorBase*& Modulator); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDepth (Underlying native function: SetDepth 0x71d183c)
	void SetDepth(float& Depth); // (Final | Native | Public | BlueprintCallable)
};

