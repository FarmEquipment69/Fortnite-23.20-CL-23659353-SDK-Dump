// ScriptStruct /Script/Engine.QuartzQuantizationBoundary
// Size: 0x20
struct FQuartzQuantizationBoundary
{
	enum EQuartzCommandQuantization Quantization; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float Multiplier; // 0x4 (0x4)
	enum EQuarztQuantizationReference CountingReferencePoint; // 0x8 (0x1)
	bool bFireOnClockStart; // 0x9 (0x1)
	bool bCancelCommandIfClockIsNotRunning; // 0xa (0x1)
	bool bResetClockOnQueued; // 0xb (0x1)
	bool bResumeClockOnQueued; // 0xc (0x1)
	unsigned char padding_d[0x13]; // 0xd (0x13)
};

