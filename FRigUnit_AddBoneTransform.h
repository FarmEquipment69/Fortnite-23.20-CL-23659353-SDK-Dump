// ScriptStruct /Script/ControlRig.RigUnit_AddBoneTransform
// Size: 0xc0
struct FRigUnit_AddBoneTransform : FRigUnitMutable
{
	struct FName bone; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FTransform Transform; // 0x40 (0x60)
	float Weight; // 0xa0 (0x4)
	bool bPostMultiply; // 0xa4 (0x1)
	bool bPropagateToChildren; // 0xa5 (0x1)
	unsigned char unreflected_a6[0x2]; // 0xa6 (0x2) 
	struct FCachedRigElement CachedBone; // 0xa8 (0x18)
};

