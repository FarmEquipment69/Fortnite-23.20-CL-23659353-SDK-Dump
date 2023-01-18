// ScriptStruct /Script/FullBodyIK.SolverInput
// Size: 0x24
struct FSolverInput
{
	float LinearMotionStrength; // 0x0 (0x4)
	float MinLinearMotionStrength; // 0x4 (0x4)
	float AngularMotionStrength; // 0x8 (0x4)
	float MinAngularMotionStrength; // 0xc (0x4)
	float DefaultTargetClamp; // 0x10 (0x4)
	float Precision; // 0x14 (0x4)
	float Damping; // 0x18 (0x4)
	int MaxIterations; // 0x1c (0x4)
	bool bUseJacobianTranspose; // 0x20 (0x1)
	unsigned char padding_21[0x3]; // 0x21 (0x3)
};

