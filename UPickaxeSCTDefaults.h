// Class /Script/FortSoundCueTemplates.PickaxeSCTDefaults
// Size: 0x90
class UPickaxeSCTDefaults : public UFortSoundCueTemplateDefaults
{
	class USoundAttenuation* CloseAttenuation; // 0x70 (0x8)
	class USoundAttenuation* DistantAttenuation; // 0x78 (0x8)
	struct TArray<class USoundWave*> DistantVariations; // 0x80 (0x10)
};

