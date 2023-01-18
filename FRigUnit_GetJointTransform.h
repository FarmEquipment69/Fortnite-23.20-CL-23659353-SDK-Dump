// ScriptStruct /Script/ControlRig.RigUnit_GetJointTransform
// Size: 0x110
struct FRigUnit_GetJointTransform : FRigUnitMutable
{
	struct FName Joint; // 0x38 (0x4)
	enum ETransformGetterType Type; // 0x3c (0x1)
	enum ETransformSpaceMode TransformSpace; // 0x3d (0x1)
	unsigned char unreflected_3e[0x2]; // 0x3e (0x2) 
	struct FTransform BaseTransform; // 0x40 (0x60)
	struct FName BaseJoint; // 0xa0 (0x4)
	unsigned char unreflected_a4[0xc]; // 0xa4 (0xc) 
	struct FTransform Output; // 0xb0 (0x60)
};

