// ScriptStruct /Script/ControlRig.RigUnit_SetControlOffset
// Size: 0xc0
struct FRigUnit_SetControlOffset : FRigUnitMutable
{
	struct FName Control; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FTransform Offset; // 0x40 (0x60)
	enum EBoneGetterSetterMode Space; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	struct FCachedRigElement CachedControlIndex; // 0xa8 (0x18)
};

