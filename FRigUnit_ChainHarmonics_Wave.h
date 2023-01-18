// ScriptStruct /Script/ControlRig.RigUnit_ChainHarmonics_Wave
// Size: 0x78
struct FRigUnit_ChainHarmonics_Wave
{
	bool bEnabled; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FVector WaveFrequency; // 0x8 (0x18)
	struct FVector WaveAmplitude; // 0x20 (0x18)
	struct FVector WaveOffset; // 0x38 (0x18)
	struct FVector WaveNoise; // 0x50 (0x18)
	float WaveMinimum; // 0x68 (0x4)
	float WaveMaximum; // 0x6c (0x4)
	enum EControlRigAnimEasingType WaveEase; // 0x70 (0x1)
	unsigned char padding_71[0x7]; // 0x71 (0x7)
};

