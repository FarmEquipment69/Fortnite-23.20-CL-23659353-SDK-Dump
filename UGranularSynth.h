// Class /Script/Synthesis.GranularSynth
// Size: 0xb70
class UGranularSynth : public USynthComponent
{
	class USoundWave* GranulatedSoundWave; // 0x790 (0x8)
	unsigned char padding_798[0x3d8]; // 0x798 (0x3d8)

	/* Functions */

	// Function /Script/Synthesis.GranularSynth.SetSustainGain (Underlying native function: SetSustainGain 0x71d7bc0)
	void SetSustainGain(float& SustainGain); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.GranularSynth.SetSoundWave (Underlying native function: SetSoundWave 0x71d7404)
	void SetSoundWave(class USoundWave*& InSoundWave); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.GranularSynth.SetScrubMode (Underlying native function: SetScrubMode 0x71d5f54)
	void SetScrubMode(bool& bScrubMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.GranularSynth.SetReleaseTimeMsec (Underlying native function: SetReleaseTimeMsec 0x71d5cc8)
	void SetReleaseTimeMsec(float& ReleaseTimeMsec); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.GranularSynth.SetPlayheadTime (Underlying native function: SetPlayheadTime 0x71d5474)
	void SetPlayheadTime(float& InPositionSec, float& LerpTimeSec, enum EGranularSynthSeekType& SeekType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.GranularSynth.SetPlaybackSpeed (Underlying native function: SetPlaybackSpeed 0x71d53f0)
	void SetPlaybackSpeed(float& InPlayheadRate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.GranularSynth.SetGrainVolume (Underlying native function: SetGrainVolume 0x71d3564)
	void SetGrainVolume(float& BaseVolume, struct FVector2D& VolumeRange); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Synthesis.GranularSynth.SetGrainsPerSecond (Underlying native function: SetGrainsPerSecond 0x71d3634)
	void SetGrainsPerSecond(float& InGrainsPerSecond); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.GranularSynth.SetGrainProbability (Underlying native function: SetGrainProbability 0x71d34e0)
	void SetGrainProbability(float& InGrainProbability); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.GranularSynth.SetGrainPitch (Underlying native function: SetGrainPitch 0x71d3410)
	void SetGrainPitch(float& BasePitch, struct FVector2D& PitchRange); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Synthesis.GranularSynth.SetGrainPan (Underlying native function: SetGrainPan 0x71d3340)
	void SetGrainPan(float& BasePan, struct FVector2D& PanRange); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Synthesis.GranularSynth.SetGrainEnvelopeType (Underlying native function: SetGrainEnvelopeType 0x71d3288)
	void SetGrainEnvelopeType(enum EGranularSynthEnvelopeType& EnvelopeType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.GranularSynth.SetGrainDuration (Underlying native function: SetGrainDuration 0x71d31b8)
	void SetGrainDuration(float& BaseDurationMsec, struct FVector2D& DurationRange); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Synthesis.GranularSynth.SetDecayTime (Underlying native function: SetDecayTime 0x71d0ce8)
	void SetDecayTime(float& DecayTimeMsec); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.GranularSynth.SetAttackTime (Underlying native function: SetAttackTime 0x71d0ce8)
	void SetAttackTime(float& AttackTimeMsec); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.GranularSynth.NoteOn (Underlying native function: NoteOn 0x71d02ec)
	void NoteOn(float& Note, int& Velocity, float& Duration); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.GranularSynth.NoteOff (Underlying native function: NoteOff 0x71d008c)
	void NoteOff(float& Note, bool& bKill); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.GranularSynth.IsLoaded (Underlying native function: IsLoaded 0x71d005c)
	bool IsLoaded(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Synthesis.GranularSynth.GetSampleDuration (Underlying native function: GetSampleDuration 0x2b41e9c)
	float GetSampleDuration(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Synthesis.GranularSynth.GetCurrentPlayheadTime (Underlying native function: GetCurrentPlayheadTime 0x71cf8a4)
	float GetCurrentPlayheadTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

