// ScriptStruct /Script/ControlRig.RigUnit_SetBoneRotation
// Size: 0x90
struct FRigUnit_SetBoneRotation : FRigUnitMutable
{
	struct FName bone; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FQuat Rotation; // 0x40 (0x20)
	enum EBoneGetterSetterMode Space; // 0x60 (0x1)
	unsigned char unreflected_61[0x3]; // 0x61 (0x3) 
	float Weight; // 0x64 (0x4)
	bool bPropagateToChildren; // 0x68 (0x1)
	unsigned char unreflected_69[0x7]; // 0x69 (0x7) 
	struct FCachedRigElement CachedBone; // 0x70 (0x18)
	unsigned char padding_88[0x8]; // 0x88 (0x8)
};

