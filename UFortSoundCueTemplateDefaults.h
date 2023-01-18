// Class /Script/FortSoundCueTemplates.FortSoundCueTemplateDefaults
// Size: 0x70
class UFortSoundCueTemplateDefaults : public UDataAsset
{
	class USoundClass* SoundClass; // 0x30 (0x8)
	class USoundAttenuation* Attenuation; // 0x38 (0x8)
	class USoundConcurrency* Concurrency; // 0x40 (0x8)
	float VolumeMultiplier; // 0x48 (0x4)
	float PitchMultiplier; // 0x4c (0x4)
	struct TArray<struct FFortSubmixPair> SubmixSends; // 0x50 (0x10)
	class USoundWave* LicensedTrackAlternative; // 0x60 (0x8)
	class USoundSubmixBase* LicensedSubmix; // 0x68 (0x8)
};

