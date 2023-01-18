// ScriptStruct /Script/Engine.AudioVolumeSubmixOverrideSettings
// Size: 0x20
struct FAudioVolumeSubmixOverrideSettings
{
	class USoundSubmix* Submix; // 0x0 (0x8)
	struct TArray<class USoundEffectSubmixPreset*> SubmixEffectChain; // 0x8 (0x10)
	float CrossfadeTime; // 0x18 (0x4)
	unsigned char padding_1c[0x4]; // 0x1c (0x4)
};

