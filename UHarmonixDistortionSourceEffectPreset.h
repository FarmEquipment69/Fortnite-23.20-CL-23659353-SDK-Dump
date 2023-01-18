// Class /Script/HmxAudio.HarmonixDistortionSourceEffectPreset
// Size: 0x150
class UHarmonixDistortionSourceEffectPreset : public USoundEffectSourcePreset
{
	unsigned char unreflected_68[0x88]; // 0x68 (0x88) 
	struct FHarmonixDistortionEffectSettings Settings; // 0xf0 (0x60)

	/* Functions */

	// Function /Script/HmxAudio.HarmonixDistortionSourceEffectPreset.SetWetGainDb (Underlying native function: SetWetGainDb 0x545de40)
	void SetWetGainDb(float& GainDb, bool& Snap); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDistortionSourceEffectPreset.SetupFilter (Underlying native function: SetupFilter 0x545df40)
	void SetupFilter(int& Index, bool& pre, struct FHarmonixDistortionBiquadSettings& filterSettings, int& filterPasses); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDistortionSourceEffectPreset.SetType (Underlying native function: SetType 0x545cf30)
	void SetType(enum EDistortionType& Type); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDistortionSourceEffectPreset.SetSettings (Underlying native function: SetSettings 0x545a190)
	void SetSettings(struct FHarmonixDistortionEffectSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDistortionSourceEffectPreset.SetOversample (Underlying native function: SetOversample 0x5458ba0)
	void SetOversample(bool& Oversample); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDistortionSourceEffectPreset.SetOutputGainDb (Underlying native function: SetOutputGainDb 0x5458aa0)
	void SetOutputGainDb(float& GainDb, bool& Snap); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDistortionSourceEffectPreset.SetMix (Underlying native function: SetMix 0x54577d0)
	void SetMix(float& M, bool& Snap); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDistortionSourceEffectPreset.SetInputGainDb (Underlying native function: SetInputGainDb 0x54561e0)
	void SetInputGainDb(float& GainDb, bool& Snap); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDistortionSourceEffectPreset.SetEnabled (Underlying native function: SetEnabled 0x5453cb0)
	void SetEnabled(bool& Enabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDistortionSourceEffectPreset.SetDryGainDb (Underlying native function: SetDryGainDb 0x5453380)
	void SetDryGainDb(float& GainDb, bool& Snap); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDistortionSourceEffectPreset.SetDCOffset (Underlying native function: SetDCOffset 0x5452bc0)
	void SetDCOffset(float& Offset, bool& Snap); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixDistortionSourceEffectPreset.CreateHarmonixDistortionInstanceOnEmitter (Underlying native function: CreateHarmonixDistortionInstanceOnEmitter 0x5446580)
	static class UHarmonixDistortionSourceEffectPreset* CreateHarmonixDistortionInstanceOnEmitter(class UMusicEmitterComponent*& Emitter, struct FHarmonixDistortionEffectSettings& InSettings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

