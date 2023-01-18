// ScriptStruct /Script/ControlRig.RigUnit_OffsetTransformForItem
// Size: 0xc0
struct FRigUnit_OffsetTransformForItem : FRigUnitMutable
{
	struct FRigElementKey* Item; // 0x38 (0x8)
	struct FTransform OffsetTransform; // 0x40 (0x60)
	float Weight; // 0xa0 (0x4)
	bool bPropagateToChildren; // 0xa4 (0x1)
	unsigned char unreflected_a5[0x3]; // 0xa5 (0x3) 
	struct FCachedRigElement CachedIndex; // 0xa8 (0x18)
};

