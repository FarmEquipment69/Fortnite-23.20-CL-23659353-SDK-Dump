// Class /Script/FortSoundCueTemplates.PlayerFoleyDefaults
// Size: 0xb8
class UPlayerFoleyDefaults : public UFortSoundCueTemplateDefaults
{
	class USoundClass* LocalPlayerSoundClass; // 0x70 (0x8)
	class USoundClass* TeammateSoundClass; // 0x78 (0x8)
	class USoundClass* HostileSoundClass; // 0x80 (0x8)
	class USoundAttenuation* LocalPlayerAttenuation; // 0x88 (0x8)
	class USoundAttenuation* AboveAttenuation; // 0x90 (0x8)
	class USoundAttenuation* BelowAttenuation; // 0x98 (0x8)
	class USoundAttenuation* ParallelAttenuation; // 0xa0 (0x8)
	struct TArray<struct FDistanceDatum> ElevationCrossfadeDistances; // 0xa8 (0x10)
};

