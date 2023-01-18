// Class /Script/Engine.AudioComponent
// Size: 0xc60
class UAudioComponent : public USceneComponent
{
	unsigned char unreflected_2a0[0x198]; // 0x2a0 (0x198) 
	class USoundBase* sound; // 0x438 (0x8)
	struct TArray<struct FAudioParameter> DefaultParameters; // 0x440 (0x10)
	struct TArray<struct FAudioParameter> InstanceParameters; // 0x450 (0x10)
	class USoundClass* SoundClassOverride; // 0x460 (0x8)
	unsigned char bAutoDestroy; // 0x468 (0x1)
	unsigned char bStopWhenOwnerDestroyed; // 0x468 (0x1)
	unsigned char bShouldRemainActiveIfDropped; // 0x468 (0x1)
	unsigned char bAllowSpatialization; // 0x468 (0x1)
	unsigned char bOverrideAttenuation; // 0x468 (0x1)
	unsigned char bOverrideSubtitlePriority; // 0x468 (0x1)
	unsigned char bIsUISound; // 0x468 (0x1)
	unsigned char bEnableLowPassFilter; // 0x468 (0x1)
	unsigned char bOverridePriority; // 0x469 (0x1)
	unsigned char bSuppressSubtitles; // 0x469 (0x1)
	unsigned char bCanPlayMultipleInstances; // 0x469 (0x1)
	unsigned char bDisableParameterUpdatesWhilePlaying; // 0x469 (0x1)
	unsigned char bAutoManageAttachment; // 0x46a (0x1)
	unsigned char unreflected_46b[0x5]; // 0x46b (0x5) 
	struct FName AudioComponentUserID; // 0x470 (0x4)
	float PitchModulationMin; // 0x474 (0x4)
	float PitchModulationMax; // 0x478 (0x4)
	float VolumeModulationMin; // 0x47c (0x4)
	float VolumeModulationMax; // 0x480 (0x4)
	float VolumeMultiplier; // 0x484 (0x4)
	int EnvelopeFollowerAttackTime; // 0x488 (0x4)
	int EnvelopeFollowerReleaseTime; // 0x48c (0x4)
	float Priority; // 0x490 (0x4)
	float SubtitlePriority; // 0x494 (0x4)
	class USoundEffectSourcePresetChain* SourceEffectChain; // 0x498 (0x8)
	float PitchMultiplier; // 0x4a0 (0x4)
	float LowPassFilterFrequency; // 0x4a4 (0x4)
	unsigned char unreflected_4a8[0x8]; // 0x4a8 (0x8) 
	class USoundAttenuation* AttenuationSettings; // 0x4b0 (0x8)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x4b8 (0x3c8)
	class USoundConcurrency* ConcurrencySettings; // 0x880 (0x8)
	struct TSet<class USoundConcurrency*> ConcurrencySet; // 0x888 (0x50)
	unsigned char unreflected_8d8[0xc]; // 0x8d8 (0xc) 
	enum EAttachmentRule AutoAttachLocationRule; // 0x8e4 (0x1)
	enum EAttachmentRule AutoAttachRotationRule; // 0x8e5 (0x1)
	enum EAttachmentRule AutoAttachScaleRule; // 0x8e6 (0x1)
	unsigned char unreflected_8e7[0x1]; // 0x8e7 (0x1) 
	struct FSoundModulationDefaultRoutingSettings ModulationRouting; // 0x8e8 (0x188)
	struct FMulticastInlineDelegate OnAudioPlayStateChanged; // 0xa70 (0x10)
	unsigned char unreflected_a80[0x18]; // 0xa80 (0x18) 
	struct FMulticastInlineDelegate OnAudioVirtualizationChanged; // 0xa98 (0x10)
	unsigned char unreflected_aa8[0x18]; // 0xaa8 (0x18) 
	struct FMulticastInlineDelegate OnAudioFinished; // 0xac0 (0x10)
	unsigned char unreflected_ad0[0x18]; // 0xad0 (0x18) 
	struct FMulticastInlineDelegate OnAudioPlaybackPercent; // 0xae8 (0x10)
	unsigned char unreflected_af8[0x18]; // 0xaf8 (0x18) 
	struct FMulticastInlineDelegate OnAudioSingleEnvelopeValue; // 0xb10 (0x10)
	unsigned char unreflected_b20[0x18]; // 0xb20 (0x18) 
	struct FMulticastInlineDelegate OnAudioMultiEnvelopeValue; // 0xb38 (0x10)
	unsigned char unreflected_b48[0x18]; // 0xb48 (0x18) 
	struct FDelegate OnQueueSubtitles; // 0xb60 (0xc)
	unsigned char unreflected_b6c[0x14]; // 0xb6c (0x14) 
	struct TWeakObjectPtr<class USceneComponent> AutoAttachParent; // 0xb80 (0x8)
	struct FName AutoAttachSocketName; // 0xb88 (0x4)
	unsigned char padding_b8c[0xd4]; // 0xb8c (0xd4)

	/* Functions */

	// Function /Script/Engine.AudioComponent.StopDelayed (Underlying native function: StopDelayed 0x9ce2ca0)
	void StopDelayed(float& DelayTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.Stop (Underlying native function: Stop 0x27c0d7c)
	void Stop(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.SetWaveParameter (Underlying native function: SetWaveParameter 0x262dde8)
	void SetWaveParameter(struct FName& InName, class USoundWave*& InWave); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.SetVolumeMultiplier (Underlying native function: SetVolumeMultiplier 0x15c8470)
	void SetVolumeMultiplier(float& NewVolumeMultiplier); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.SetUISound (Underlying native function: SetUISound 0x9ce2974)
	void SetUISound(bool& bInUISound); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.SetSubmixSend (Underlying native function: SetSubmixSend 0x9ce282c)
	void SetSubmixSend(class USoundSubmixBase*& Submix, float& SendLevel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.SetSourceBusSendPreEffect (Underlying native function: SetSourceBusSendPreEffect 0x9ce25e4)
	void SetSourceBusSendPreEffect(class USoundSourceBus*& SoundSourceBus, float& SourceBusSendLevel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.SetSourceBusSendPostEffect (Underlying native function: SetSourceBusSendPostEffect 0x9ce2514)
	void SetSourceBusSendPostEffect(class USoundSourceBus*& SoundSourceBus, float& SourceBusSendLevel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.SetSound (Underlying native function: SetSound 0x23ec2d4)
	void SetSound(class USoundBase*& NewSound); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.SetPitchMultiplier (Underlying native function: SetPitchMultiplier 0x9ce2490)
	void SetPitchMultiplier(float& NewPitchMultiplier); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.SetPaused (Underlying native function: SetPaused 0x9ce2410)
	void SetPaused(bool& bPause); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.SetOutputToBusOnly (Underlying native function: SetOutputToBusOnly 0x9ce2390)
	void SetOutputToBusOnly(bool& bInOutputToBusOnly); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.SetLowPassFilterFrequency (Underlying native function: SetLowPassFilterFrequency 0x9ce2280)
	void SetLowPassFilterFrequency(float& InLowPassFilterFrequency); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.SetLowPassFilterEnabled (Underlying native function: SetLowPassFilterEnabled 0x9ce2200)
	void SetLowPassFilterEnabled(bool& InLowPassFilterEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.SetIntParameter (Underlying native function: SetIntParameter 0x119f898)
	void SetIntParameter(struct FName& InName, int& inInt); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.SetFloatParameter (Underlying native function: SetFloatParameter 0x2162f50)
	void SetFloatParameter(struct FName& InName, float& InFloat); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.SetBoolParameter (Underlying native function: SetBoolParameter 0x15c5588)
	void SetBoolParameter(struct FName& InName, bool& InBool); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.SetAudioBusSendPreEffect (Underlying native function: SetAudioBusSendPreEffect 0x9ce194c)
	void SetAudioBusSendPreEffect(class UAudioBus*& AudioBus, float& AudioBusSendLevel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.SetAudioBusSendPostEffect (Underlying native function: SetAudioBusSendPostEffect 0x9ce187c)
	void SetAudioBusSendPostEffect(class UAudioBus*& AudioBus, float& AudioBusSendLevel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.PlayQuantized (Underlying native function: PlayQuantized 0x9ce1418)
	void PlayQuantized(class UObject*& WorldContextObject, class UQuartzClockHandle*& InClockHandle, struct FQuartzQuantizationBoundary& InQuantizationBoundary, struct FDelegate& InDelegate, float& InStartTime, float& InFadeInDuration, float& InFadeVolumeLevel, enum EAudioFaderCurve& InFadeCurve); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.Play (Underlying native function: Play 0x2451520)
	void Play(float& StartTime); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.IsVirtualized (Underlying native function: IsVirtualized 0x9ce1048)
	bool IsVirtualized(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AudioComponent.IsPlaying (Underlying native function: IsPlaying 0x24e6b04)
	bool IsPlaying(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AudioComponent.HasCookedFFTData (Underlying native function: HasCookedFFTData 0x9ce0fc4)
	bool HasCookedFFTData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AudioComponent.HasCookedAmplitudeEnvelopeData (Underlying native function: HasCookedAmplitudeEnvelopeData 0x9ce0fa0)
	bool HasCookedAmplitudeEnvelopeData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AudioComponent.GetPlayState (Underlying native function: GetPlayState 0x9ce0908)
	enum EAudioComponentPlayState GetPlayState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AudioComponent.GetCookedFFTDataForAllPlayingSounds (Underlying native function: GetCookedFFTDataForAllPlayingSounds 0x9ce064c)
	bool GetCookedFFTDataForAllPlayingSounds(struct TArray<struct FSoundWaveSpectralDataPerSound>& OutSoundWaveSpectralData); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.GetCookedFFTData (Underlying native function: GetCookedFFTData 0x9ce0534)
	bool GetCookedFFTData(struct TArray<float>& FrequenciesToGet, struct TArray<struct FSoundWaveSpectralData>& OutSoundWaveSpectralData); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.GetCookedEnvelopeDataForAllPlayingSounds (Underlying native function: GetCookedEnvelopeDataForAllPlayingSounds 0x9ce03c8)
	bool GetCookedEnvelopeDataForAllPlayingSounds(struct TArray<struct FSoundWaveEnvelopeDataPerSound>& OutEnvelopeData); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.GetCookedEnvelopeData (Underlying native function: GetCookedEnvelopeData 0x9ce032c)
	bool GetCookedEnvelopeData(float& OutEnvelopeData); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.FadeOut (Underlying native function: FadeOut 0x22f904c)
	void FadeOut(float& FadeOutDuration, float& FadeVolumeLevel, enum EAudioFaderCurve& FadeCurve); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.FadeIn (Underlying native function: FadeIn 0xfb1f74)
	void FadeIn(float& FadeInDuration, float& FadeVolumeLevel, float& StartTime, enum EAudioFaderCurve& FadeCurve); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.BP_GetAttenuationSettingsToApply (Underlying native function: BP_GetAttenuationSettingsToApply 0x9cdfef0)
	bool BPGetAttenuationSettingsToApply(struct FSoundAttenuationSettings& OutAttenuationSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.AdjustVolume (Underlying native function: AdjustVolume 0x9cdfdf4)
	void AdjustVolume(float& AdjustVolumeDuration, float& AdjustVolumeLevel, enum EAudioFaderCurve& FadeCurve); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AudioComponent.AdjustAttenuation (Underlying native function: AdjustAttenuation 0x9cdfd30)
	void AdjustAttenuation(struct FSoundAttenuationSettings& InAttenuationSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

