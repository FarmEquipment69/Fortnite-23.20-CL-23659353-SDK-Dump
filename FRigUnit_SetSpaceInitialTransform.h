// ScriptStruct /Script/ControlRig.RigUnit_SetSpaceInitialTransform
// Size: 0x120
struct FRigUnit_SetSpaceInitialTransform : FRigUnitMutable
{
	struct FName SpaceName; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FTransform Transform; // 0x40 (0x60)
	struct FTransform Result; // 0xa0 (0x60)
	enum EBoneGetterSetterMode Space; // 0x100 (0x1)
	unsigned char unreflected_101[0x7]; // 0x101 (0x7) 
	struct FCachedRigElement CachedSpaceIndex; // 0x108 (0x18)
};

