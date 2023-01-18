// Class /Script/Engine.SoundNodeEnveloper
// Size: 0x190
class USoundNodeEnveloper : public USoundNode
{
	float LoopStart; // 0x48 (0x4)
	float LoopEnd; // 0x4c (0x4)
	float DurationAfterLoop; // 0x50 (0x4)
	int LoopCount; // 0x54 (0x4)
	unsigned char bLoopIndefinitely; // 0x58 (0x1)
	unsigned char bLoop; // 0x58 (0x1)
	unsigned char unreflected_59[0x7]; // 0x59 (0x7) 
	class UDistributionFloatConstantCurve* VolumeInterpCurve; // 0x60 (0x8)
	class UDistributionFloatConstantCurve* PitchInterpCurve; // 0x68 (0x8)
	struct FRuntimeFloatCurve VolumeCurve; // 0x70 (0x88)
	struct FRuntimeFloatCurve PitchCurve; // 0xf8 (0x88)
	float PitchMin; // 0x180 (0x4)
	float PitchMax; // 0x184 (0x4)
	float VolumeMin; // 0x188 (0x4)
	float VolumeMax; // 0x18c (0x4)
};

