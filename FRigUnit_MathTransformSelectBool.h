// ScriptStruct /Script/ControlRig.RigUnit_MathTransformSelectBool
// Size: 0x130
struct FRigUnit_MathTransformSelectBool : FRigUnit_MathTransformBase
{
	bool Condition; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct FTransform IfTrue; // 0x10 (0x60)
	struct FTransform IfFalse; // 0x70 (0x60)
	struct FTransform Result; // 0xd0 (0x60)
};

