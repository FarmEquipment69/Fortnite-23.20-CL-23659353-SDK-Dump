// Class /Script/IKRig.IKRigPBIKSolver
// Size: 0xd0
class UIKRigPBIKSolver : public UIKRigSolver
{
	struct FName RootBone; // 0x30 (0x4)
	int Iterations; // 0x34 (0x4)
	float MassMultiplier; // 0x38 (0x4)
	float MinMassMultiplier; // 0x3c (0x4)
	bool bAllowStretch; // 0x40 (0x1)
	enum EPBIKRootBehavior RootBehavior; // 0x41 (0x1)
	bool bStartSolveFromInputPose; // 0x42 (0x1)
	unsigned char unreflected_43[0x5]; // 0x43 (0x5) 
	struct TArray<class UIKRig_FBIKEffector*> Effectors; // 0x48 (0x10)
	struct TArray<class UIKRig_PBIKBoneSettings*> BoneSettings; // 0x58 (0x10)
	unsigned char padding_68[0x68]; // 0x68 (0x68)
};

