// ScriptStruct /Script/ControlRig.RigUnit_SetBoneTranslation
// Size: 0x80
struct FRigUnit_SetBoneTranslation : FRigUnitMutable
{
	struct FName bone; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FVector Translation; // 0x40 (0x18)
	enum EBoneGetterSetterMode Space; // 0x58 (0x1)
	unsigned char unreflected_59[0x3]; // 0x59 (0x3) 
	float Weight; // 0x5c (0x4)
	bool bPropagateToChildren; // 0x60 (0x1)
	unsigned char unreflected_61[0x7]; // 0x61 (0x7) 
	struct FCachedRigElement CachedBone; // 0x68 (0x18)
};

