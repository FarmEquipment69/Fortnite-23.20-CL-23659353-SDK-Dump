// Class /Script/Engine.SoundNodeAttenuation
// Size: 0x420
class USoundNodeAttenuation : public USoundNode
{
	class USoundAttenuation* AttenuationSettings; // 0x48 (0x8)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x50 (0x3c8)
	unsigned char bOverrideAttenuation; // 0x418 (0x1)
	unsigned char padding_419[0x7]; // 0x419 (0x7)
};

