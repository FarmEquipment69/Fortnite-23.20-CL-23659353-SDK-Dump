// ScriptStruct /Script/ControlRig.RigUnit_FABRIK
// Size: 0xf0
struct FRigUnit_FABRIK : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone; // 0x38 (0x4)
	struct FName EffectorBone; // 0x3c (0x4)
	struct FTransform EffectorTransform; // 0x40 (0x60)
	float Precision; // 0xa0 (0x4)
	float Weight; // 0xa4 (0x4)
	bool bPropagateToChildren; // 0xa8 (0x1)
	unsigned char unreflected_a9[0x3]; // 0xa9 (0x3) 
	int MaxIterations; // 0xac (0x4)
	struct FRigUnit_FABRIK_WorkData WorkData; // 0xb0 (0x38)
	bool bSetEffectorTransform; // 0xe8 (0x1)
	unsigned char padding_e9[0x7]; // 0xe9 (0x7)
};

