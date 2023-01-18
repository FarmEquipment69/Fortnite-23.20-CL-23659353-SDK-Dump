// ScriptStruct /Script/ControlRig.RigUnit_ParentConstraint
// Size: 0x90
struct FRigUnit_ParentConstraint : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey* Child; // 0x38 (0x8)
	bool bMaintainOffset; // 0x40 (0x1)
	struct FTransformFilter Filter; // 0x41 (0x9)
	unsigned char unreflected_4a[0x6]; // 0x4a (0x6) 
	struct TArray<struct FConstraintParent> Parents; // 0x50 (0x10)
	struct FRigUnit_ParentConstraint_AdvancedSettings AdvancedSettings; // 0x60 (0x2)
	unsigned char unreflected_62[0x2]; // 0x62 (0x2) 
	float Weight; // 0x64 (0x4)
	struct FCachedRigElement ChildCache; // 0x68 (0x18)
	struct TArray<struct FCachedRigElement> ParentCaches; // 0x80 (0x10)
};

