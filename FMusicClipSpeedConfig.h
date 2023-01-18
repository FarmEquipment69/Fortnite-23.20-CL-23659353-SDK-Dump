// ScriptStruct /Script/HmxAudio.MusicClipSpeedConfig
// Size: 0xc
struct FMusicClipSpeedConfig
{
	enum EMusicClipSpeedConfigMode Mode; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float Speed; // 0x4 (0x4)
	bool maintainPitch; // 0x8 (0x1)
	bool ignoreTimeAuthoritysPitchMaintainence; // 0x9 (0x1)
	unsigned char padding_a[0x2]; // 0xa (0x2)
};

