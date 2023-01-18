// Class /Script/AudioGameplayVolume.SubmixOverrideVolumeComponent
// Size: 0xc0
class USubmixOverrideVolumeComponent : public UAudioGameplayVolumeMutator
{
	struct TArray<struct FAudioVolumeSubmixOverrideSettings> SubmixOverrideSettings; // 0xb0 (0x10)

	/* Functions */

	// Function /Script/AudioGameplayVolume.SubmixOverrideVolumeComponent.SetSubmixOverrideSettings (Underlying native function: SetSubmixOverrideSettings 0x7df9ca8)
	void SetSubmixOverrideSettings(struct TArray<struct FAudioVolumeSubmixOverrideSettings>& NewSubmixOverrideSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

