// ScriptStruct /Script/ControlRig.RigUnit_GetControlTransform
// Size: 0x150
struct FRigUnit_GetControlTransform : FRigUnit
{
	struct FName Control; // 0x8 (0x4)
	enum EBoneGetterSetterMode Space; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	struct FTransform Transform; // 0x10 (0x60)
	struct FTransform Minimum; // 0x70 (0x60)
	struct FTransform Maximum; // 0xd0 (0x60)
	struct FCachedRigElement CachedControlIndex; // 0x130 (0x18)
	unsigned char padding_148[0x8]; // 0x148 (0x8)
};

