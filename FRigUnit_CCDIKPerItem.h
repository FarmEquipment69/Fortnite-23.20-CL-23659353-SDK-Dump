// ScriptStruct /Script/ControlRig.RigUnit_CCDIKPerItem
// Size: 0x140
struct FRigUnit_CCDIKPerItem : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection Items; // 0x38 (0x10)
	unsigned char unreflected_48[0x8]; // 0x48 (0x8) 
	struct FTransform EffectorTransform; // 0x50 (0x60)
	float Precision; // 0xb0 (0x4)
	float Weight; // 0xb4 (0x4)
	int MaxIterations; // 0xb8 (0x4)
	bool bStartFromTail; // 0xbc (0x1)
	unsigned char unreflected_bd[0x3]; // 0xbd (0x3) 
	float BaseRotationLimit; // 0xc0 (0x4)
	unsigned char unreflected_c4[0x4]; // 0xc4 (0x4) 
	struct TArray<struct FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits; // 0xc8 (0x10)
	bool bPropagateToChildren; // 0xd8 (0x1)
	unsigned char unreflected_d9[0x7]; // 0xd9 (0x7) 
	struct FRigUnit_CCDIK_WorkData WorkData; // 0xe0 (0x58)
	unsigned char padding_138[0x8]; // 0x138 (0x8)
};

