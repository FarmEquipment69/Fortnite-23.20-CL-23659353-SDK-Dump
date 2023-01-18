// ScriptStruct /Script/ControlRig.RigUnit_SetShapeTransform
// Size: 0xc0
struct FRigUnit_SetShapeTransform : FRigUnitMutable
{
	struct FName Control; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FTransform Transform; // 0x40 (0x60)
	struct FCachedRigElement CachedControlIndex; // 0xa0 (0x18)
	unsigned char padding_b8[0x8]; // 0xb8 (0x8)
};

