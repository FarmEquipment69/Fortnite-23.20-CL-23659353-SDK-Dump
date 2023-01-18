// Class /Script/Synthesis.ModularSynthComponent
// Size: 0xe60
class UModularSynthComponent : public USynthComponent
{
	int VoiceCount; // 0x790 (0x4)
	unsigned char padding_794[0x6cc]; // 0x794 (0x6cc)

	/* Functions */

	// Function /Script/Synthesis.ModularSynthComponent.SetSynthPreset (Underlying native function: SetSynthPreset 0x71d7d84)
	void SetSynthPreset(struct FModularSynthPreset& SynthPreset); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetSustainGain (Underlying native function: SetSustainGain 0x71d7c44)
	void SetSustainGain(float& SustainGain); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayWetlevel (Underlying native function: SetStereoDelayWetlevel 0x71d7b3c)
	void SetStereoDelayWetlevel(float& DelayWetlevel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayTime (Underlying native function: SetStereoDelayTime 0x71d7ab8)
	void SetStereoDelayTime(float& DelayTimeMsec); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayRatio (Underlying native function: SetStereoDelayRatio 0x71d7a34)
	void SetStereoDelayRatio(float& DelayRatio); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayMode (Underlying native function: SetStereoDelayMode 0x71d79b4)
	void SetStereoDelayMode(enum ESynthStereoDelayMode& StereoDelayMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled (Underlying native function: SetStereoDelayIsEnabled 0x71d7934)
	void SetStereoDelayIsEnabled(bool& StereoDelayEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayFeedback (Underlying native function: SetStereoDelayFeedback 0x71d78b0)
	void SetStereoDelayFeedback(float& DelayFeedback); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetSpread (Underlying native function: SetSpread 0x71d7514)
	void SetSpread(float& Spread); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetReleaseTime (Underlying native function: SetReleaseTime 0x71d5c44)
	void SetReleaseTime(float& ReleaseTimeMsec); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetPortamento (Underlying native function: SetPortamento 0x71d5570)
	void SetPortamento(float& Portamento); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetPitchBend (Underlying native function: SetPitchBend 0x71d536c)
	void SetPitchBend(float& PitchBend); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetPan (Underlying native function: SetPan 0x71d5224)
	void SetPan(float& Pan); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetOscType (Underlying native function: SetOscType 0x71d5160)
	void SetOscType(int& OscIndex, enum ESynth1OscType& OscType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetOscSync (Underlying native function: SetOscSync 0x71d50a4)
	void SetOscSync(bool& bIsSynced); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetOscSemitones (Underlying native function: SetOscSemitones 0x71d4fdc)
	void SetOscSemitones(int& OscIndex, float& Semitones); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetOscPulsewidth (Underlying native function: SetOscPulsewidth 0x71d4f14)
	void SetOscPulsewidth(int& OscIndex, float& Pulsewidth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetOscOctave (Underlying native function: SetOscOctave 0x71d4e4c)
	void SetOscOctave(int& OscIndex, float& Octave); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetOscGainMod (Underlying native function: SetOscGainMod 0x71d4d84)
	void SetOscGainMod(int& OscIndex, float& OscGainMod); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetOscGain (Underlying native function: SetOscGain 0x71d4cbc)
	void SetOscGain(int& OscIndex, float& OscGain); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetOscFrequencyMod (Underlying native function: SetOscFrequencyMod 0x71d4bf4)
	void SetOscFrequencyMod(int& OscIndex, float& OscFreqMod); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetOscCents (Underlying native function: SetOscCents 0x71d4b2c)
	void SetOscCents(int& OscIndex, float& Cents); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvSustainGain (Underlying native function: SetModEnvSustainGain 0x71d4890)
	void SetModEnvSustainGain(float& SustainGain); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvReleaseTime (Underlying native function: SetModEnvReleaseTime 0x71d480c)
	void SetModEnvReleaseTime(float& Release); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvPatch (Underlying native function: SetModEnvPatch 0x71d4754)
	void SetModEnvPatch(enum ESynthModEnvPatch& InPatchType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvInvert (Underlying native function: SetModEnvInvert 0x71d4698)
	void SetModEnvInvert(bool& bInvert); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvDepth (Underlying native function: SetModEnvDepth 0x71d4614)
	void SetModEnvDepth(float& Depth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvDecayTime (Underlying native function: SetModEnvDecayTime 0x71d4590)
	void SetModEnvDecayTime(float& DecayTimeMsec); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasPatch (Underlying native function: SetModEnvBiasPatch 0x71d44d8)
	void SetModEnvBiasPatch(enum ESynthModEnvBiasPatch& InPatchType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasInvert (Underlying native function: SetModEnvBiasInvert 0x71d441c)
	void SetModEnvBiasInvert(bool& bInvert); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvAttackTime (Underlying native function: SetModEnvAttackTime 0x71d4398)
	void SetModEnvAttackTime(float& AttackTimeMsec); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetLFOType (Underlying native function: SetLFOType 0x71d3f9c)
	void SetLFOType(int& LFOIndex, enum ESynthLFOType& LFOType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetLFOPatch (Underlying native function: SetLFOPatch 0x71d3ea8)
	void SetLFOPatch(int& LFOIndex, enum ESynthLFOPatchType& LFOPatchType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetLFOMode (Underlying native function: SetLFOMode 0x71d3db4)
	void SetLFOMode(int& LFOIndex, enum ESynthLFOMode& LFOMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetLFOGainMod (Underlying native function: SetLFOGainMod 0x71d3cec)
	void SetLFOGainMod(int& LFOIndex, float& GainMod); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetLFOGain (Underlying native function: SetLFOGain 0x71d3c24)
	void SetLFOGain(int& LFOIndex, float& Gain); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequencyMod (Underlying native function: SetLFOFrequencyMod 0x71d3b5c)
	void SetLFOFrequencyMod(int& LFOIndex, float& FrequencyModHz); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequency (Underlying native function: SetLFOFrequency 0x71d3a94)
	void SetLFOFrequency(int& LFOIndex, float& FrequencyHz); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetGainDb (Underlying native function: SetGainDb 0x71d3134)
	void SetGainDb(float& GainDb); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetFilterType (Underlying native function: SetFilterType 0x71d2bc0)
	void SetFilterType(enum ESynthFilterType& FilterType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetFilterQMod (Underlying native function: SetFilterQMod 0x71d2ab8)
	void SetFilterQMod(float& FilterQ); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetFilterQ (Underlying native function: SetFilterQ 0x71d29b0)
	void SetFilterQ(float& FilterQ); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequencyMod (Underlying native function: SetFilterFrequencyMod 0x71d292c)
	void SetFilterFrequencyMod(float& FilterFrequencyHz); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequency (Underlying native function: SetFilterFrequency 0x71d28a8)
	void SetFilterFrequency(float& FilterFrequencyHz); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetFilterAlgorithm (Underlying native function: SetFilterAlgorithm 0x71d21f4)
	void SetFilterAlgorithm(enum ESynthFilterAlgorithm& FilterAlgorithm); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetEnableUnison (Underlying native function: SetEnableUnison 0x71d1e94)
	void SetEnableUnison(bool& EnableUnison); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetEnableRetrigger (Underlying native function: SetEnableRetrigger 0x71d1e14)
	void SetEnableRetrigger(bool& RetriggerEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetEnablePolyphony (Underlying native function: SetEnablePolyphony 0x71d1d94)
	void SetEnablePolyphony(bool& bEnablePolyphony); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetEnablePatch (Underlying native function: SetEnablePatch 0x71d1ccc)
	bool SetEnablePatch(struct FPatchId& PatchId, bool& bIsEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetEnableLegato (Underlying native function: SetEnableLegato 0x71d1c4c)
	void SetEnableLegato(bool& LegatoEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetDecayTime (Underlying native function: SetDecayTime 0x71d1568)
	void SetDecayTime(float& DecayTimeMsec); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetChorusFrequency (Underlying native function: SetChorusFrequency 0x71d1260)
	void SetChorusFrequency(float& Frequency); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetChorusFeedback (Underlying native function: SetChorusFeedback 0x71d11dc)
	void SetChorusFeedback(float& Feedback); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetChorusEnabled (Underlying native function: SetChorusEnabled 0x71d115c)
	void SetChorusEnabled(bool& EnableChorus); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetChorusDepth (Underlying native function: SetChorusDepth 0x71d10d8)
	void SetChorusDepth(float& Depth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.SetAttackTime (Underlying native function: SetAttackTime 0x71d0d6c)
	void SetAttackTime(float& AttackTimeMsec); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.NoteOn (Underlying native function: NoteOn 0x71d03e4)
	void NoteOn(float& Note, int& Velocity, float& Duration); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.NoteOff (Underlying native function: NoteOff 0x71d0158)
	void NoteOff(float& Note, bool& bAllNotesOff, bool& bKillAllNotes); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.ModularSynthComponent.CreatePatch (Underlying native function: CreatePatch 0x71cf72c)
	struct FPatchId CreatePatch(enum ESynth1PatchSource& PatchSource, struct TArray<struct FSynth1PatchCable*>& PatchCables, bool& bEnableByDefault); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

