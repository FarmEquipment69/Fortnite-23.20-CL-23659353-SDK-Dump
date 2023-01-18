// ScriptStruct /Script/ControlRig.RigUnit_GetControlInitialTransform
// Size: 0x90
struct FRigUnit_GetControlInitialTransform : FRigUnit
{
	struct FName Control; // 0x8 (0x4)
	enum EBoneGetterSetterMode Space; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	struct FTransform Transform; // 0x10 (0x60)
	struct FCachedRigElement CachedControlIndex; // 0x70 (0x18)
	unsigned char padding_88[0x8]; // 0x88 (0x8)
};

