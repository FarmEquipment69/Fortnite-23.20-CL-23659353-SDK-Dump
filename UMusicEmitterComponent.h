// Class /Script/HmxAudio.MusicEmitterComponent
// Size: 0x970
class UMusicEmitterComponent : public USynthComponent
{
	unsigned char unreflected_790[0x10]; // 0x790 (0x10) 
	bool DriveSubmixDspTempo; // 0x7a0 (0x1)
	unsigned char unreflected_7a1[0x3]; // 0x7a1 (0x3) 
	int mBar; // 0x7a4 (0x4)
	int mBeat; // 0x7a8 (0x4)
	unsigned char unreflected_7ac[0x4]; // 0x7ac (0x4) 
	struct FString mSection; // 0x7b0 (0x10)
	unsigned char unreflected_7c0[0x188]; // 0x7c0 (0x188) 
	class UMusicHandle* TimeAuthority; // 0x948 (0x8)
	class UMusicHandle* FallbackTimeAuthority; // 0x950 (0x8)
	class UMusicHandle* CurrentPositionProvider; // 0x958 (0x8)
	unsigned char padding_960[0x10]; // 0x960 (0x10)

	/* Functions */

	// Function /Script/HmxAudio.MusicEmitterComponent.StopAllSounds (Underlying native function: StopAllSounds 0x545e890)
	void StopAllSounds(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicEmitterComponent.SetParameter (Underlying native function: SetParameter 0x5458e70)
	void SetParameter(struct FName& Parameter, float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicEmitterComponent.RemoveDynamicSourceEffect (Underlying native function: RemoveDynamicSourceEffect 0x5450c30)
	void RemoveDynamicSourceEffect(class USoundEffectSourcePreset*& EffectPreset); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicEmitterComponent.PlayMusic (Underlying native function: PlayMusic 0x5450760)
	class UMusicHandle* PlayMusic(struct FPlayMusicArgs& args); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.MusicEmitterComponent.PlayInstrument (Underlying native function: PlayInstrument 0x54506a0)
	class UInstrumentHandle* PlayInstrument(struct FPlayInstrumentArgs& args); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.MusicEmitterComponent.PauseAllSounds (Underlying native function: PauseAllSounds 0x5450670)
	void PauseAllSounds(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicEmitterComponent.KillAllSounds (Underlying native function: KillAllSounds 0x544cdd0)
	void KillAllSounds(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicEmitterComponent.InsertDynamicSourceEffect (Underlying native function: InsertDynamicSourceEffect 0x544c810)
	void InsertDynamicSourceEffect(class USoundEffectSourcePreset*& EffectPreset); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicEmitterComponent.GetWorldsDefaultMusicEmitter (Underlying native function: GetWorldsDefaultMusicEmitter 0x544c3d0)
	static class UMusicEmitterComponent* GetWorldsDefaultMusicEmitter(class UObject*& worldContextObj); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MusicEmitterComponent.GetTimeAuthorityHandle (Underlying native function: GetTimeAuthorityHandle 0x544bcb0)
	class UMusicHandle* GetTimeAuthorityHandle(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicEmitterComponent.GetSection (Underlying native function: GetSection 0x544b110)
	struct FString GetSection(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicEmitterComponent.GetParameter (Underlying native function: GetParameter 0x544a960)
	bool GetParameter(struct FName& Parameter, float& OutVal); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.MusicEmitterComponent.GetBeat (Underlying native function: GetBeat 0x5448af0)
	int GetBeat(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MusicEmitterComponent.GetBar (Underlying native function: GetBar 0x5448990)
	int GetBar(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MusicEmitterComponent.ContinueAllSounds (Underlying native function: ContinueAllSounds 0x5445a50)
	void ContinueAllSounds(); // (Final | Native | Public | BlueprintCallable)
};

