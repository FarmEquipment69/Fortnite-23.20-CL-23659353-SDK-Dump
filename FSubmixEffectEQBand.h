// ScriptStruct /Script/AudioMixer.SubmixEffectEQBand
// Size: 0x10
struct FSubmixEffectEQBand
{
	float Frequency; // 0x0 (0x4)
	float Bandwidth; // 0x4 (0x4)
	float GainDb; // 0x8 (0x4)
	unsigned char bEnabled; // 0xc (0x1)
	unsigned char padding_d[0x3]; // 0xd (0x3)
};

