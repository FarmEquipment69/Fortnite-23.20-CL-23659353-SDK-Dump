// ScriptStruct /Script/ControlRig.RigUnit_GetShapeTransform
// Size: 0x90
struct FRigUnit_GetShapeTransform : FRigUnit
{
	struct FName Control; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FTransform Transform; // 0x10 (0x60)
	struct FCachedRigElement CachedControlIndex; // 0x70 (0x18)
	unsigned char padding_88[0x8]; // 0x88 (0x8)
};

