// ScriptStruct /Script/FortniteGame.FortFootstepAttenuationData
// Size: 0x28
struct FFortFootstepAttenuationData
{
	class USoundAttenuation* SoundAttenuation; // 0x0 (0x8)
	class USoundAttenuation* SoundAttenuationAbove; // 0x8 (0x8)
	class USoundAttenuation* SoundAttenuationBelow; // 0x10 (0x8)
	class USoundAttenuation* SoundAttenuationAboveOrBelowAndVisible; // 0x18 (0x8)
	float VolumeMultiplier; // 0x20 (0x4)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};

