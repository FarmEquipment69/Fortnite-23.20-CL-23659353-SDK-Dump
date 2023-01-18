// ScriptStruct /Script/ControlRig.RigUnit_RotationConstraint
// Size: 0x60
struct FRigUnit_RotationConstraint : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey* Child; // 0x38 (0x8)
	bool bMaintainOffset; // 0x40 (0x1)
	struct FFilterOptionPerAxis Filter; // 0x41 (0x3)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct TArray<struct FConstraintParent> Parents; // 0x48 (0x10)
	struct FRigUnit_RotationConstraint_AdvancedSettings AdvancedSettings; // 0x58 (0x2)
	unsigned char unreflected_5a[0x2]; // 0x5a (0x2) 
	float Weight; // 0x5c (0x4)
};

