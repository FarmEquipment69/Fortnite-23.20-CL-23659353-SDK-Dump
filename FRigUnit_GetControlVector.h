// ScriptStruct /Script/ControlRig.RigUnit_GetControlVector
// Size: 0x70
struct FRigUnit_GetControlVector : FRigUnit
{
	struct FName Control; // 0x8 (0x4)
	enum EBoneGetterSetterMode Space; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	struct FVector Vector; // 0x10 (0x18)
	struct FVector Minimum; // 0x28 (0x18)
	struct FVector Maximum; // 0x40 (0x18)
	struct FCachedRigElement CachedControlIndex; // 0x58 (0x18)
};

