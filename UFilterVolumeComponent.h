// Class /Script/AudioGameplayVolume.FilterVolumeComponent
// Size: 0xc0
class UFilterVolumeComponent : public UAudioGameplayVolumeMutator
{
	float ExteriorLPF; // 0xb0 (0x4)
	float ExteriorLPFTime; // 0xb4 (0x4)
	float InteriorLPF; // 0xb8 (0x4)
	float InteriorLPFTime; // 0xbc (0x4)

	/* Functions */

	// Function /Script/AudioGameplayVolume.FilterVolumeComponent.SetInteriorLPF (Underlying native function: SetInteriorLPF 0x7df9a84)
	void SetInteriorLPF(float& Volume, float& InterpolateTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioGameplayVolume.FilterVolumeComponent.SetExteriorLPF (Underlying native function: SetExteriorLPF 0x7df99b0)
	void SetExteriorLPF(float& Volume, float& InterpolateTime); // (Final | Native | Public | BlueprintCallable)
};

