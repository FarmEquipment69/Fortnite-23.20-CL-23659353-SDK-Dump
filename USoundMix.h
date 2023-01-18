// Class /Script/Engine.SoundMix
// Size: 0x90
class USoundMix : public UObject
{
	unsigned char bApplyEQ; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	float EQPriority; // 0x2c (0x4)
	struct FAudioEQEffect EQSettings; // 0x30 (0x40)
	struct TArray<struct FSoundClassAdjuster> SoundClassEffects; // 0x70 (0x10)
	float InitialDelay; // 0x80 (0x4)
	float FadeInTime; // 0x84 (0x4)
	float Duration; // 0x88 (0x4)
	float FadeOutTime; // 0x8c (0x4)
};

