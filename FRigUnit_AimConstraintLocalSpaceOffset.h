// ScriptStruct /Script/ControlRig.RigUnit_AimConstraintLocalSpaceOffset
// Size: 0x180
struct FRigUnit_AimConstraintLocalSpaceOffset : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey* Child; // 0x38 (0x8)
	bool bMaintainOffset; // 0x40 (0x1)
	struct FFilterOptionPerAxis Filter; // 0x41 (0x3)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct FVector AimAxis; // 0x48 (0x18)
	struct FVector UpAxis; // 0x60 (0x18)
	struct FRigUnit_AimConstraint_WorldUp WorldUp; // 0x78 (0x28)
	struct TArray<struct FConstraintParent> Parents; // 0xa0 (0x10)
	struct FRigUnit_AimConstraint_AdvancedSettings AdvancedSettings; // 0xb0 (0x80)
	float Weight; // 0x130 (0x4)
	unsigned char unreflected_134[0x4]; // 0x134 (0x4) 
	struct FCachedRigElement WorldUpSpaceCache; // 0x138 (0x18)
	struct FCachedRigElement ChildCache; // 0x150 (0x18)
	struct TArray<struct FCachedRigElement> ParentCaches; // 0x168 (0x10)
	unsigned char padding_178[0x8]; // 0x178 (0x8)
};

