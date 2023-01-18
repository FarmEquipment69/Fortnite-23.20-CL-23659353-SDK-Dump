// ScriptStruct /Script/HmxAudio.StartCondition
// Size: 0x10
struct FStartCondition
{
	enum EAudioClipStartPosition StartPosition; // 0x0 (0x1)
	enum EMusicalSubdivision Subdivision; // 0x1 (0x1)
	bool Dotted; // 0x2 (0x1)
	bool Triplet; // 0x3 (0x1)
	int TickOffset; // 0x4 (0x4)
	enum EWaitAtLeastMode AtLeastMode; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	float WaitAtLeast; // 0xc (0x4)
};

