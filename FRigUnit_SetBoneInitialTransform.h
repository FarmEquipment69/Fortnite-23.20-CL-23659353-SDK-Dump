// ScriptStruct /Script/ControlRig.RigUnit_SetBoneInitialTransform
// Size: 0x120
struct FRigUnit_SetBoneInitialTransform : FRigUnitMutable
{
	struct FName bone; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FTransform Transform; // 0x40 (0x60)
	struct FTransform Result; // 0xa0 (0x60)
	enum EBoneGetterSetterMode Space; // 0x100 (0x1)
	bool bPropagateToChildren; // 0x101 (0x1)
	unsigned char unreflected_102[0x6]; // 0x102 (0x6) 
	struct FCachedRigElement CachedBone; // 0x108 (0x18)
};

