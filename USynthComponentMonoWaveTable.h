// Class /Script/Synthesis.SynthComponentMonoWaveTable
// Size: 0xee0
class USynthComponentMonoWaveTable : public USynthComponent
{
	struct FMulticastInlineDelegate OnTableAltered; // 0x790 (0x10)
	struct FMulticastInlineDelegate OnNumTablesChanged; // 0x7a0 (0x10)
	class UMonoWaveTableSynthPreset* CurrentPreset; // 0x7b0 (0x8)
	unsigned char padding_7b8[0x728]; // 0x7b8 (0x728)

	/* Functions */

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition (Underlying native function: SetWaveTablePosition 0x71d80cc)
	void SetWaveTablePosition(float& InPosition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState (Underlying native function: SetSustainPedalState 0x71d7cc8)
	void SetSustainPedalState(bool& InSustainPedalState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoType (Underlying native function: SetPosLfoType 0x71d56fc)
	void SetPosLfoType(enum ESynthLFOType& InLfoType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency (Underlying native function: SetPosLfoFrequency 0x71d5678)
	void SetPosLfoFrequency(float& InLfoFrequency); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth (Underlying native function: SetPosLfoDepth 0x71d55f4)
	void SetPosLfoDepth(float& InLfoDepth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain (Underlying native function: SetPositionEnvelopeSustainGain 0x71d5bc0)
	void SetPositionEnvelopeSustainGain(float& InSustainGain); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime (Underlying native function: SetPositionEnvelopeReleaseTime 0x71d5b3c)
	void SetPositionEnvelopeReleaseTime(float& InReleaseTimeMsec); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert (Underlying native function: SetPositionEnvelopeInvert 0x71d5a80)
	void SetPositionEnvelopeInvert(bool& bInInvert); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth (Underlying native function: SetPositionEnvelopeDepth 0x71d59fc)
	void SetPositionEnvelopeDepth(float& InDepth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime (Underlying native function: SetPositionEnvelopeDecayTime 0x71d5978)
	void SetPositionEnvelopeDecayTime(float& InDecayTimeMsec); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert (Underlying native function: SetPositionEnvelopeBiasInvert 0x71d58bc)
	void SetPositionEnvelopeBiasInvert(bool& bInBiasInvert); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth (Underlying native function: SetPositionEnvelopeBiasDepth 0x71d5838)
	void SetPositionEnvelopeBiasDepth(float& InDepth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime (Underlying native function: SetPositionEnvelopeAttackTime 0x71d57b4)
	void SetPositionEnvelopeAttackTime(float& InAttackTimeMsec); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance (Underlying native function: SetLowPassFilterResonance 0x71d41f8)
	void SetLowPassFilterResonance(float& InNewQ); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote (Underlying native function: SetFrequencyWithMidiNote 0x71d30b0)
	void SetFrequencyWithMidiNote(float& InMidiNote); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend (Underlying native function: SetFrequencyPitchBend 0x71d302c)
	void SetFrequencyPitchBend(float& FrequencyOffsetCents); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequency (Underlying native function: SetFrequency 0x71d2d98)
	void SetFrequency(float& FrequencyHz); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain (Underlying native function: SetFilterEnvelopeSustainGain 0x71d27a0)
	void SetFilterEnvelopeSustainGain(float& InSustainGain); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime (Underlying native function: SetFilterEnvelopeReleaseTime 0x71d271c)
	void SetFilterEnvelopeReleaseTime(float& InReleaseTimeMsec); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime (Underlying native function: SetFilterEnvelopenDecayTime 0x71d2824)
	void SetFilterEnvelopenDecayTime(float& InDecayTimeMsec); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert (Underlying native function: SetFilterEnvelopeInvert 0x71d2660)
	void SetFilterEnvelopeInvert(bool& bInInvert); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth (Underlying native function: SetFilterEnvelopeDepth 0x71d25dc)
	void SetFilterEnvelopeDepth(float& InDepth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert (Underlying native function: SetFilterEnvelopeBiasInvert 0x71d2520)
	void SetFilterEnvelopeBiasInvert(bool& bInBiasInvert); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth (Underlying native function: SetFilterEnvelopeBiasDepth 0x71d249c)
	void SetFilterEnvelopeBiasDepth(float& InDepth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime (Underlying native function: SetFilterEnvelopeAttackTime 0x71d2418)
	void SetFilterEnvelopeAttackTime(float& InAttackTimeMsec); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveValue (Underlying native function: SetCurveValue 0x71d146c)
	bool SetCurveValue(int& TableIndex, int& KeyframeIndex, float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveTangent (Underlying native function: SetCurveTangent 0x71d13a4)
	bool SetCurveTangent(int& TableIndex, float& InNewTangent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType (Underlying native function: SetCurveInterpolationType 0x71d12e4)
	bool SetCurveInterpolationType(enum CurveInterpolationType& InterpolationType, int& TableIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain (Underlying native function: SetAmpEnvelopeSustainGain 0x71d0c64)
	void SetAmpEnvelopeSustainGain(float& InSustainGain); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime (Underlying native function: SetAmpEnvelopeReleaseTime 0x71d0be0)
	void SetAmpEnvelopeReleaseTime(float& InReleaseTimeMsec); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert (Underlying native function: SetAmpEnvelopeInvert 0x71d0b24)
	void SetAmpEnvelopeInvert(bool& bInInvert); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth (Underlying native function: SetAmpEnvelopeDepth 0x71d0aa0)
	void SetAmpEnvelopeDepth(float& InDepth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime (Underlying native function: SetAmpEnvelopeDecayTime 0x71d0a1c)
	void SetAmpEnvelopeDecayTime(float& InDecayTimeMsec); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert (Underlying native function: SetAmpEnvelopeBiasInvert 0x71d0960)
	void SetAmpEnvelopeBiasInvert(bool& bInBiasInvert); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth (Underlying native function: SetAmpEnvelopeBiasDepth 0x71d08dc)
	void SetAmpEnvelopeBiasDepth(float& InDepth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime (Underlying native function: SetAmpEnvelopeAttackTime 0x71d0858)
	void SetAmpEnvelopeAttackTime(float& InAttackTimeMsec); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable (Underlying native function: RefreshWaveTable 0x71d05b4)
	void RefreshWaveTable(int& Index); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables (Underlying native function: RefreshAllWaveTables 0x71d05a0)
	void RefreshAllWaveTables(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOn (Underlying native function: NoteOn 0x71d04dc)
	void NoteOn(float& InMidiNote, float& InVelocity); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOff (Underlying native function: NoteOff 0x71d0268)
	void NoteOff(float& InMidiNote); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries (Underlying native function: GetNumTableEntries 0x71cfd74)
	int GetNumTableEntries(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex (Underlying native function: GetMaxTableIndex 0x71cfd4c)
	int GetMaxTableIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable (Underlying native function: GetKeyFrameValuesForTable 0x71cf94c)
	struct TArray<float> GetKeyFrameValuesForTable(float& TableIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetCurveTangent (Underlying native function: GetCurveTangent 0x71cf8bc)
	float GetCurveTangent(int& TableIndex); // (Final | Native | Public | BlueprintCallable)
};

