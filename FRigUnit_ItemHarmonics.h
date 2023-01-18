// ScriptStruct /Script/ControlRig.RigUnit_ItemHarmonics
// Size: 0xf8
struct FRigUnit_ItemHarmonics : FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigUnit_Harmonics_TargetItem> Targets; // 0x38 (0x10)
	struct FVector WaveSpeed; // 0x48 (0x18)
	struct FVector WaveFrequency; // 0x60 (0x18)
	struct FVector WaveAmplitude; // 0x78 (0x18)
	struct FVector WaveOffset; // 0x90 (0x18)
	struct FVector WaveNoise; // 0xa8 (0x18)
	enum EControlRigAnimEasingType WaveEase; // 0xc0 (0x1)
	unsigned char unreflected_c1[0x3]; // 0xc1 (0x3) 
	float WaveMinimum; // 0xc4 (0x4)
	float WaveMaximum; // 0xc8 (0x4)
	enum EEulerRotationOrder RotationOrder; // 0xcc (0x1)
	unsigned char unreflected_cd[0x3]; // 0xcd (0x3) 
	struct FRigUnit_BoneHarmonics_WorkData WorkData; // 0xd0 (0x28)
};

