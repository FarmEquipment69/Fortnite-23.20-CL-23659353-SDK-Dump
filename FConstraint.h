// ScriptStruct /Script/AnimGraphRuntime.Constraint
// Size: 0x18
struct FConstraint
{
	struct FBoneReference TargetBone; // 0x0 (0xc)
	enum EConstraintOffsetOption OffsetOption; // 0xc (0x1)
	enum ETransformConstraintType TransformType; // 0xd (0x1)
	struct FFilterOptionPerAxis PerAxis; // 0xe (0x3)
	unsigned char padding_11[0x7]; // 0x11 (0x7)
};

