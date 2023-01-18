// ScriptStruct /Script/Synthesis.SourceEffectSimpleDelaySettings
// Size: 0x18
struct FSourceEffectSimpleDelaySettings
{
	float SpeedOfSound; // 0x0 (0x4)
	float DelayAmount; // 0x4 (0x4)
	float DryAmount; // 0x8 (0x4)
	float WetAmount; // 0xc (0x4)
	float Feedback; // 0x10 (0x4)
	unsigned char bDelayBasedOnDistance; // 0x14 (0x1)
	unsigned char bUseDistanceOverride; // 0x14 (0x1)
	unsigned char padding_15[0x3]; // 0x15 (0x3)
};

