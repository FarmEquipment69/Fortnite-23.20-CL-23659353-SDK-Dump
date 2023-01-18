// ScriptStruct /Script/ControlRig.RigUnit_ApplyFK
// Size: 0x120
struct FRigUnit_ApplyFK : FRigUnitMutable
{
	struct FName Joint; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FTransform Transform; // 0x40 (0x60)
	struct FTransformFilter Filter; // 0xa0 (0x9)
	enum EApplyTransformMode ApplyTransformMode; // 0xa9 (0x1)
	enum ETransformSpaceMode ApplyTransformSpace; // 0xaa (0x1)
	unsigned char unreflected_ab[0x5]; // 0xab (0x5) 
	struct FTransform BaseTransform; // 0xb0 (0x60)
	struct FName BaseJoint; // 0x110 (0x4)
	unsigned char padding_114[0xc]; // 0x114 (0xc)
};

