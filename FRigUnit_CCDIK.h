// ScriptStruct /Script/ControlRig.RigUnit_CCDIK
// Size: 0x130
struct FRigUnit_CCDIK : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone; // 0x38 (0x4)
	struct FName EffectorBone; // 0x3c (0x4)
	struct FTransform EffectorTransform; // 0x40 (0x60)
	float Precision; // 0xa0 (0x4)
	float Weight; // 0xa4 (0x4)
	int MaxIterations; // 0xa8 (0x4)
	bool bStartFromTail; // 0xac (0x1)
	unsigned char unreflected_ad[0x3]; // 0xad (0x3) 
	float BaseRotationLimit; // 0xb0 (0x4)
	unsigned char unreflected_b4[0x4]; // 0xb4 (0x4) 
	struct TArray<struct FRigUnit_CCDIK_RotationLimit*> RotationLimits; // 0xb8 (0x10)
	bool bPropagateToChildren; // 0xc8 (0x1)
	unsigned char unreflected_c9[0x7]; // 0xc9 (0x7) 
	struct FRigUnit_CCDIK_WorkData WorkData; // 0xd0 (0x58)
	unsigned char padding_128[0x8]; // 0x128 (0x8)
};

