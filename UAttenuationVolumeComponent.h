// Class /Script/AudioGameplayVolume.AttenuationVolumeComponent
// Size: 0xc0
class UAttenuationVolumeComponent : public UAudioGameplayVolumeMutator
{
	float ExteriorVolume; // 0xb0 (0x4)
	float ExteriorTime; // 0xb4 (0x4)
	float InteriorVolume; // 0xb8 (0x4)
	float InteriorTime; // 0xbc (0x4)

	/* Functions */

	// Function /Script/AudioGameplayVolume.AttenuationVolumeComponent.SetInteriorVolume (Underlying native function: SetInteriorVolume 0x7df9a84)
	void SetInteriorVolume(float& Volume, float& InterpolateTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioGameplayVolume.AttenuationVolumeComponent.SetExteriorVolume (Underlying native function: SetExteriorVolume 0x7df99b0)
	void SetExteriorVolume(float& Volume, float& InterpolateTime); // (Final | Native | Public | BlueprintCallable)
};

