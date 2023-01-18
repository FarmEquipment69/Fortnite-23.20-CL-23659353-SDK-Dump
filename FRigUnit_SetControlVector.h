// ScriptStruct /Script/ControlRig.RigUnit_SetControlVector
// Size: 0x78
struct FRigUnit_SetControlVector : FRigUnitMutable
{
	struct FName Control; // 0x38 (0x4)
	float Weight; // 0x3c (0x4)
	struct FVector Vector; // 0x40 (0x18)
	enum EBoneGetterSetterMode Space; // 0x58 (0x1)
	unsigned char unreflected_59[0x7]; // 0x59 (0x7) 
	struct FCachedRigElement CachedControlIndex; // 0x60 (0x18)
};

