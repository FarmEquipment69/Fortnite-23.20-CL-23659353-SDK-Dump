// ScriptStruct /Script/ControlRig.RigUnit_GetControlRotator
// Size: 0x70
struct FRigUnit_GetControlRotator : FRigUnit
{
	struct FName Control; // 0x8 (0x4)
	enum EBoneGetterSetterMode Space; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	struct FRotator Rotator; // 0x10 (0x18)
	struct FRotator Minimum; // 0x28 (0x18)
	struct FRotator Maximum; // 0x40 (0x18)
	struct FCachedRigElement CachedControlIndex; // 0x58 (0x18)
};

