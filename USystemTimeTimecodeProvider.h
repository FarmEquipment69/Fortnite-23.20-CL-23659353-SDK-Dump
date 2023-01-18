// Class /Script/Engine.SystemTimeTimecodeProvider
// Size: 0x40
class USystemTimeTimecodeProvider : public UTimecodeProvider
{
	struct FFrameRate* FrameRate; // 0x30 (0x8)
	bool bGenerateFullFrame; // 0x38 (0x1)
	bool bUseHighPerformanceClock; // 0x39 (0x1)
	unsigned char padding_3a[0x6]; // 0x3a (0x6)
};

