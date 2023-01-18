// ScriptStruct /Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsAction
// Size: 0x20
struct FSpecialEventAudioHapticsAction
{
	float LoudnessFloor; // 0x0 (0x4)
	float LoudnessCeiling; // 0x4 (0x4)
	float HapticsIntensity; // 0x8 (0x4)
	int ChannelIndex; // 0xc (0x4)
	unsigned char bAffectsLeftLarge; // 0x10 (0x1)
	unsigned char bAffectsLeftSmall; // 0x10 (0x1)
	unsigned char bAffectsRightLarge; // 0x10 (0x1)
	unsigned char bAffectsRightSmall; // 0x10 (0x1)
	unsigned char padding_11[0xf]; // 0x11 (0xf)
};

