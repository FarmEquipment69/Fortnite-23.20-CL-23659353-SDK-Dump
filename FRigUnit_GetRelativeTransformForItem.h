// ScriptStruct /Script/ControlRig.RigUnit_GetRelativeTransformForItem
// Size: 0xb0
struct FRigUnit_GetRelativeTransformForItem : FRigUnit
{
	struct FRigElementKey* Child; // 0x8 (0x8)
	bool bChildInitial; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	struct FRigElementKey* Parent; // 0x14 (0x8)
	bool bParentInitial; // 0x1c (0x1)
	unsigned char unreflected_1d[0x3]; // 0x1d (0x3) 
	struct FTransform RelativeTransform; // 0x20 (0x60)
	struct FCachedRigElement CachedChild; // 0x80 (0x18)
	struct FCachedRigElement CachedParent; // 0x98 (0x18)
};

