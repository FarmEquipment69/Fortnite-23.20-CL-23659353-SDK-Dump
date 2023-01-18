// Class /Script/HmxAudio.HarmonixBufferUtilSourceEffectPreset
// Size: 0xb0
class UHarmonixBufferUtilSourceEffectPreset : public UTempoSyncedSourceEffectPresetBase
{
	unsigned char unreflected_80[0x29]; // 0x80 (0x29) 
	struct FHarmonixBufferUtilEffectSettings Settings; // 0xa9 (0x1)
	unsigned char padding_aa[0x6]; // 0xaa (0x6)

	/* Functions */

	// Function /Script/HmxAudio.HarmonixBufferUtilSourceEffectPreset.SetTriplet (Underlying native function: SetTriplet 0x545ce60)
	void SetTriplet(bool& trip); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBufferUtilSourceEffectPreset.SetState (Underlying native function: SetState 0x545b240)
	void SetState(int& T, int& Len, bool& AutomationTriggeredSet); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBufferUtilSourceEffectPreset.SetShuffleP (Underlying native function: SetShuffleP 0x545ab70)
	void SetShuffleP(float& P); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBufferUtilSourceEffectPreset.SetSettings (Underlying native function: SetSettings 0x5459fd0)
	void SetSettings(struct FHarmonixBufferUtilEffectSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBufferUtilSourceEffectPreset.SetSequence (Underlying native function: SetSequence 0x5459d30)
	void SetSequence(int& S); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBufferUtilSourceEffectPreset.SetScratch (Underlying native function: SetScratch 0x5459940)
	void SetScratch(float& scratch); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBufferUtilSourceEffectPreset.SetReverseP (Underlying native function: SetReverseP 0x54597b0)
	void SetReverseP(float& P); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBufferUtilSourceEffectPreset.SetRepeatP (Underlying native function: SetRepeatP 0x54596e0)
	void SetRepeatP(float& P); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBufferUtilSourceEffectPreset.SetMinDur (Underlying native function: SetMinDur 0x5457680)
	void SetMinDur(int& D, bool& BeatValChange); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBufferUtilSourceEffectPreset.SetMaxDur (Underlying native function: SetMaxDur 0x54573e0)
	void SetMaxDur(int& D, bool& BeatValChange); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBufferUtilSourceEffectPreset.SetEven (Underlying native function: SetEven 0x54543d0)
	void SetEven(bool& Even); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBufferUtilSourceEffectPreset.SetEnabled (Underlying native function: SetEnabled 0x5453b10)
	void SetEnabled(bool& Enabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBufferUtilSourceEffectPreset.SetDotted (Underlying native function: SetDotted 0x54531e0)
	void SetDotted(bool& Dotted); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBufferUtilSourceEffectPreset.SetBufSpeed (Underlying native function: SetBufSpeed 0x5452270)
	void SetBufSpeed(float& Speed); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBufferUtilSourceEffectPreset.SetAutomation (Underlying native function: SetAutomation 0x5451940)
	void SetAutomation(int& A); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBufferUtilSourceEffectPreset.SetAttach (Underlying native function: SetAttach 0x54516b0)
	void SetAttach(bool& attach); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixBufferUtilSourceEffectPreset.CreateHarmonixBufferUtilInstanceOnEmitter (Underlying native function: CreateHarmonixBufferUtilInstanceOnEmitter 0x5445fe0)
	static class UHarmonixBufferUtilSourceEffectPreset* CreateHarmonixBufferUtilInstanceOnEmitter(class UMusicEmitterComponent*& Emitter, struct FHarmonixBufferUtilEffectSettings& InSettings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

