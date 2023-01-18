// ScriptStruct /Script/AnimationCore.ConstraintData
// Size: 0xe0
struct FConstraintData
{
	struct FConstraintDescriptor Constraint; // 0x0 (0x10)
	float Weight; // 0x10 (0x4)
	bool bMaintainOffset; // 0x14 (0x1)
	unsigned char unreflected_15[0xb]; // 0x15 (0xb) 
	struct FTransform Offset; // 0x20 (0x60)
	struct FTransform CurrentTransform; // 0x80 (0x60)
};

