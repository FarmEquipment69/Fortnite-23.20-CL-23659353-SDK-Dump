// ScriptStruct /Script/AnimGraphRuntime.RandomPlayerSequenceEntry
// Size: 0x50
struct FRandomPlayerSequenceEntry
{
	class UAnimSequence* Sequence; // 0x0 (0x8)
	float ChanceToPlay; // 0x8 (0x4)
	int MinLoopCount; // 0xc (0x4)
	int MaxLoopCount; // 0x10 (0x4)
	float MinPlayrate; // 0x14 (0x4)
	float MaxPlayrate; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct FAlphaBlend BlendIn; // 0x20 (0x30)
};

