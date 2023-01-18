// ScriptStruct /Script/ControlRig.RigUnit_SetRelativeBoneTransform
// Size: 0xe0
struct FRigUnit_SetRelativeBoneTransform : FRigUnitMutable
{
	struct FName bone; // 0x38 (0x4)
	struct FName Space; // 0x3c (0x4)
	struct FTransform Transform; // 0x40 (0x60)
	float Weight; // 0xa0 (0x4)
	bool bPropagateToChildren; // 0xa4 (0x1)
	unsigned char unreflected_a5[0x3]; // 0xa5 (0x3) 
	struct FCachedRigElement CachedBone; // 0xa8 (0x18)
	struct FCachedRigElement CachedSpaceIndex; // 0xc0 (0x18)
	unsigned char padding_d8[0x8]; // 0xd8 (0x8)
};

