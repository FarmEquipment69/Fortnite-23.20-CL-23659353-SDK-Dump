// ScriptStruct /Script/Engine.SoundClassAdjuster
// Size: 0x20
struct FSoundClassAdjuster
{
	class USoundClass* SoundClassObject; // 0x0 (0x8)
	float VolumeAdjuster; // 0x8 (0x4)
	float PitchAdjuster; // 0xc (0x4)
	float LowPassFilterFrequency; // 0x10 (0x4)
	unsigned char bApplyToChildren; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	float VoiceCenterChannelVolumeAdjuster; // 0x18 (0x4)
	unsigned char padding_1c[0x4]; // 0x1c (0x4)
};

