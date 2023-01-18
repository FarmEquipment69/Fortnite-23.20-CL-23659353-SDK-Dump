// ScriptStruct /Script/AnimationCore.TransformConstraint
// Size: 0x20
struct FTransformConstraint
{
	struct FConstraintDescription Operator; // 0x0 (0xd)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	struct FName SourceNode; // 0x10 (0x4)
	struct FName TargetNode; // 0x14 (0x4)
	float Weight; // 0x18 (0x4)
	bool bMaintainOffset; // 0x1c (0x1)
	unsigned char padding_1d[0x3]; // 0x1d (0x3)
};

