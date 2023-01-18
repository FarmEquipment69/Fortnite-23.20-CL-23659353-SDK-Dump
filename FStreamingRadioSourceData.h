// ScriptStruct /Script/SrirachaRanch.StreamingRadioSourceData
// Size: 0x48
struct FStreamingRadioSourceData
{
	enum EStreamingRadioSourceState State; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	int PlayingIndex; // 0x4 (0x4)
	float FadeoutSeconds; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FAthenaRadioStation SourceOverride; // 0x10 (0x38)
};

