// ScriptStruct /Script/PBIK.PBIKSolverSettings
// Size: 0x10
struct FPBIKSolverSettings
{
	int Iterations; // 0x0 (0x4)
	float MassMultiplier; // 0x4 (0x4)
	float MinMassMultiplier; // 0x8 (0x4)
	bool bAllowStretch; // 0xc (0x1)
	enum EPBIKRootBehavior RootBehavior; // 0xd (0x1)
	bool bStartSolveFromInputPose; // 0xe (0x1)
	unsigned char padding_f[0x1]; // 0xf (0x1)
};

