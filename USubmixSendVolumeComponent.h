// Class /Script/AudioGameplayVolume.SubmixSendVolumeComponent
// Size: 0xc0
class USubmixSendVolumeComponent : public UAudioGameplayVolumeMutator
{
	struct TArray<struct FAudioVolumeSubmixSendSettings> SubmixSendSettings; // 0xb0 (0x10)

	/* Functions */

	// Function /Script/AudioGameplayVolume.SubmixSendVolumeComponent.SetSubmixSendSettings (Underlying native function: SetSubmixSendSettings 0x7df9d4c)
	void SetSubmixSendSettings(struct TArray<struct FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

