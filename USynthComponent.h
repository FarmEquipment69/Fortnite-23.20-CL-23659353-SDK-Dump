// Class /Script/AudioMixer.SynthComponent
// Size: 0x790
class USynthComponent : public USceneComponent
{
	unsigned char bAutoDestroy; // 0x2a0 (0x1)
	unsigned char bStopWhenOwnerDestroyed; // 0x2a0 (0x1)
	unsigned char bAllowSpatialization; // 0x2a0 (0x1)
	unsigned char bOverrideAttenuation; // 0x2a0 (0x1)
	unsigned char unreflected_2a1[0x3]; // 0x2a1 (0x3) 
	unsigned char bEnableBusSends; // 0x2a4 (0x1)
	unsigned char bEnableBaseSubmix; // 0x2a4 (0x1)
	unsigned char bEnableSubmixSends; // 0x2a4 (0x1)
	unsigned char unreflected_2a5[0x3]; // 0x2a5 (0x3) 
	class USoundAttenuation* AttenuationSettings; // 0x2a8 (0x8)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x2b0 (0x3c8)
	class USoundConcurrency* ConcurrencySettings; // 0x678 (0x8)
	struct TSet<class USoundConcurrency*> ConcurrencySet; // 0x680 (0x50)
	class USoundClass* SoundClass; // 0x6d0 (0x8)
	class USoundEffectSourcePresetChain* SourceEffectChain; // 0x6d8 (0x8)
	class USoundSubmixBase* SoundSubmix; // 0x6e0 (0x8)
	struct TArray<struct FSoundSubmixSendInfo> SoundSubmixSends; // 0x6e8 (0x10)
	struct TArray<struct FSoundSourceBusSendInfo> BusSends; // 0x6f8 (0x10)
	struct TArray<struct FSoundSourceBusSendInfo> PreEffectBusSends; // 0x708 (0x10)
	unsigned char bIsUISound; // 0x718 (0x1)
	unsigned char bIsPreviewSound; // 0x718 (0x1)
	unsigned char unreflected_719[0x3]; // 0x719 (0x3) 
	int EnvelopeFollowerAttackTime; // 0x71c (0x4)
	int EnvelopeFollowerReleaseTime; // 0x720 (0x4)
	unsigned char unreflected_724[0x4]; // 0x724 (0x4) 
	struct FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x728 (0x10)
	unsigned char unreflected_738[0x20]; // 0x738 (0x20) 
	class USynthSound* Synth; // 0x758 (0x8)
	class UAudioComponent* AudioComponent; // 0x760 (0x8)
	unsigned char padding_768[0x28]; // 0x768 (0x28)

	/* Functions */

	// Function /Script/AudioMixer.SynthComponent.Stop (Underlying native function: Stop 0x1abe058)
	void Stop(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.SynthComponent.Start (Underlying native function: Start 0x1316b64)
	void Start(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.SynthComponent.SetVolumeMultiplier (Underlying native function: SetVolumeMultiplier 0x1abe2b8)
	void SetVolumeMultiplier(float& VolumeMultiplier); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.SynthComponent.SetSubmixSend (Underlying native function: SetSubmixSend 0x9b52d4c)
	void SetSubmixSend(class USoundSubmixBase*& Submix, float& SendLevel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.SynthComponent.SetOutputToBusOnly (Underlying native function: SetOutputToBusOnly 0x9b52488)
	void SetOutputToBusOnly(bool& bInOutputToBusOnly); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.SynthComponent.SetLowPassFilterFrequency (Underlying native function: SetLowPassFilterFrequency 0x9b521f8)
	void SetLowPassFilterFrequency(float& InLowPassFilterFrequency); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.SynthComponent.SetLowPassFilterEnabled (Underlying native function: SetLowPassFilterEnabled 0x9b52174)
	void SetLowPassFilterEnabled(bool& InLowPassFilterEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.SynthComponent.IsPlaying (Underlying native function: IsPlaying 0x9b50864)
	bool IsPlaying(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioMixer.SynthComponent.FadeOut (Underlying native function: FadeOut 0x9b4f27c)
	void FadeOut(float& FadeOutDuration, float& FadeVolumeLevel, enum EAudioFaderCurve& FadeCurve); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/AudioMixer.SynthComponent.FadeIn (Underlying native function: FadeIn 0x9b4f134)
	void FadeIn(float& FadeInDuration, float& FadeVolumeLevel, float& StartTime, enum EAudioFaderCurve& FadeCurve); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/AudioMixer.SynthComponent.AdjustVolume (Underlying native function: AdjustVolume 0x9b4e4d4)
	void AdjustVolume(float& AdjustVolumeDuration, float& AdjustVolumeLevel, enum EAudioFaderCurve& FadeCurve); // (Final | Native | Public | BlueprintCallable | Const)
};

