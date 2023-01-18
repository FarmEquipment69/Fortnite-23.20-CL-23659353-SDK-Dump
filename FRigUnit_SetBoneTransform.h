// ScriptStruct /Script/ControlRig.RigUnit_SetBoneTransform
// Size: 0x130
struct FRigUnit_SetBoneTransform : FRigUnitMutable
{
	struct FName bone; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FTransform Transform; // 0x40 (0x60)
	struct FTransform Result; // 0xa0 (0x60)
	enum EBoneGetterSetterMode Space; // 0x100 (0x1)
	unsigned char unreflected_101[0x3]; // 0x101 (0x3) 
	float Weight; // 0x104 (0x4)
	bool bPropagateToChildren; // 0x108 (0x1)
	unsigned char unreflected_109[0x7]; // 0x109 (0x7) 
	struct FCachedRigElement CachedBone; // 0x110 (0x18)
	unsigned char padding_128[0x8]; // 0x128 (0x8)
};

