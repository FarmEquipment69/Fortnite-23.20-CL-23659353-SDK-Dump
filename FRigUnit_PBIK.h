// ScriptStruct /Script/PBIK.RigUnit_PBIK
// Size: 0x128
struct FRigUnit_PBIK : FRigUnit_HighlevelBaseMutable
{
	struct FName Root; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct TArray<struct FPBIKEffector> Effectors; // 0x40 (0x10)
	struct TArray<int> EffectorSolverIndices; // 0x50 (0x10)
	struct TArray<struct FPBIKBoneSetting> BoneSettings; // 0x60 (0x10)
	struct TArray<struct FName> ExcludedBones; // 0x70 (0x10)
	struct FPBIKSolverSettings Settings; // 0x80 (0x10)
	struct FPBIKDebug* Debug; // 0x90 (0x8)
	struct TArray<int> BoneSettingToSolverBoneIndex; // 0x98 (0x10)
	struct TArray<int> SolverBoneToElementIndex; // 0xa8 (0x10)
	struct FPBIKSolver Solver; // 0xb8 (0x68)
	bool bNeedsInit; // 0x120 (0x1)
	unsigned char padding_121[0x7]; // 0x121 (0x7)
};

