// Class /Script/AudioModulation.SoundControlBusMix
// Size: 0x40
class USoundControlBusMix : public UObject
{
	uint32_t ProfileIndex; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct TArray<struct FSoundControlBusMixStage> MixStages; // 0x30 (0x10)

	/* Functions */

	// Function /Script/AudioModulation.SoundControlBusMix.SoloMix (Underlying native function: SoloMix 0x7a4e704)
	void SoloMix(); // (Final | Native | Protected)

	// Function /Script/AudioModulation.SoundControlBusMix.SaveMixToProfile (Underlying native function: SaveMixToProfile 0x7a4e57c)
	void SaveMixToProfile(); // (Final | Native | Protected)

	// Function /Script/AudioModulation.SoundControlBusMix.LoadMixFromProfile (Underlying native function: LoadMixFromProfile 0x7a4e450)
	void LoadMixFromProfile(); // (Final | Native | Protected)

	// Function /Script/AudioModulation.SoundControlBusMix.DeactivateMix (Underlying native function: DeactivateMix 0x7a4e19c)
	void DeactivateMix(); // (Final | Native | Protected)

	// Function /Script/AudioModulation.SoundControlBusMix.DeactivateAllMixes (Underlying native function: DeactivateAllMixes 0x7a4de70)
	void DeactivateAllMixes(); // (Final | Native | Protected)

	// Function /Script/AudioModulation.SoundControlBusMix.ActivateMix (Underlying native function: ActivateMix 0x7a4d7ec)
	void ActivateMix(); // (Final | Native | Protected)
};

