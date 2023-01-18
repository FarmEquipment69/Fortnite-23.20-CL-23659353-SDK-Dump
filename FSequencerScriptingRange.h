// ScriptStruct /Script/SequencerScripting.SequencerScriptingRange
// Size: 0x14
struct FSequencerScriptingRange
{
	unsigned char bHasStart; // 0x0 (0x1)
	unsigned char bHasEnd; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	int InclusiveStart; // 0x4 (0x4)
	int ExclusiveEnd; // 0x8 (0x4)
	struct FFrameRate* InternalRate; // 0xc (0x8)
};

