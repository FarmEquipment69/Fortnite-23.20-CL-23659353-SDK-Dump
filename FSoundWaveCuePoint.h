// ScriptStruct /Script/Engine.SoundWaveCuePoint
// Size: 0x20
struct FSoundWaveCuePoint
{
	int CuePointID; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FString Label; // 0x8 (0x10)
	int FramePosition; // 0x18 (0x4)
	int FrameLength; // 0x1c (0x4)
};

