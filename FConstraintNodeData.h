// ScriptStruct /Script/ControlRig.ConstraintNodeData
// Size: 0x140
struct FConstraintNodeData
{
	struct FTransform RelativeParent; // 0x0 (0x60)
	struct FConstraintOffset ConstraintOffset; // 0x60 (0xc0)
	struct FName LinkedNode; // 0x120 (0x4)
	unsigned char unreflected_124[0x4]; // 0x124 (0x4) 
	struct TArray<struct FTransformConstraint> Constraints; // 0x128 (0x10)
	unsigned char padding_138[0x8]; // 0x138 (0x8)
};

