// ScriptStruct /Script/HmxAudio.MusicalPlayerRuntimeState
// Size: 0x14
struct FMusicalPlayerRuntimeState
{
	bool Debug; // 0x0 (0x1)
	bool IsTriggered; // 0x1 (0x1)
	bool IsPlaying; // 0x2 (0x1)
	bool IsPaused; // 0x3 (0x1)
	bool IsFinished; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	float SecondsUntilNextPlay; // 0x8 (0x4)
	int ElapsedMs; // 0xc (0x4)
	int ActiveTriggerTickets; // 0x10 (0x4)
};

