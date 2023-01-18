// ScriptStruct /Script/Engine.AnimSegment
// Size: 0x20
struct FAnimSegment
{
	class UAnimSequenceBase* AnimReference; // 0x0 (0x8)
	float StartPos; // 0x8 (0x4)
	float AnimStartTime; // 0xc (0x4)
	float AnimEndTime; // 0x10 (0x4)
	float AnimPlayRate; // 0x14 (0x4)
	int LoopingCount; // 0x18 (0x4)
	unsigned char padding_1c[0x4]; // 0x1c (0x4)
};

