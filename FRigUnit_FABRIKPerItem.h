// ScriptStruct /Script/ControlRig.RigUnit_FABRIKPerItem
// Size: 0x100
struct FRigUnit_FABRIKPerItem : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection Items; // 0x38 (0x10)
	unsigned char unreflected_48[0x8]; // 0x48 (0x8) 
	struct FTransform EffectorTransform; // 0x50 (0x60)
	float Precision; // 0xb0 (0x4)
	float Weight; // 0xb4 (0x4)
	bool bPropagateToChildren; // 0xb8 (0x1)
	unsigned char unreflected_b9[0x3]; // 0xb9 (0x3) 
	int MaxIterations; // 0xbc (0x4)
	struct FRigUnit_FABRIK_WorkData WorkData; // 0xc0 (0x38)
	bool bSetEffectorTransform; // 0xf8 (0x1)
	unsigned char padding_f9[0x7]; // 0xf9 (0x7)
};

