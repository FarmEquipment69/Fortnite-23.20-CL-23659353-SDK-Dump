// ScriptStruct /Script/ControlRig.RigUnit_SetSpaceTransform
// Size: 0xc0
struct FRigUnit_SetSpaceTransform : FRigUnitMutable
{
	struct FName Space; // 0x38 (0x4)
	float Weight; // 0x3c (0x4)
	struct FTransform Transform; // 0x40 (0x60)
	enum EBoneGetterSetterMode SpaceType; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	struct FCachedRigElement CachedSpaceIndex; // 0xa8 (0x18)
};

