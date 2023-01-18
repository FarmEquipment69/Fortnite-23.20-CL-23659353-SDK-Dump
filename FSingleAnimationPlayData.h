// ScriptStruct /Script/Engine.SingleAnimationPlayData
// Size: 0x18
struct FSingleAnimationPlayData
{
	class UAnimationAsset* AnimToPlay; // 0x0 (0x8)
	unsigned char bSavedLooping; // 0x8 (0x1)
	unsigned char bSavedPlaying; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	float SavedPosition; // 0xc (0x4)
	float SavedPlayRate; // 0x10 (0x4)
	unsigned char padding_14[0x4]; // 0x14 (0x4)
};

