// ScriptStruct /Script/ControlRig.RigUnit_SetRelativeTransformForItem
// Size: 0xf0
struct FRigUnit_SetRelativeTransformForItem : FRigUnitMutable
{
	struct FRigElementKey* Child; // 0x38 (0x8)
	struct FRigElementKey* Parent; // 0x40 (0x8)
	bool bParentInitial; // 0x48 (0x1)
	unsigned char unreflected_49[0x7]; // 0x49 (0x7) 
	struct FTransform Value; // 0x50 (0x60)
	float Weight; // 0xb0 (0x4)
	bool bPropagateToChildren; // 0xb4 (0x1)
	unsigned char unreflected_b5[0x3]; // 0xb5 (0x3) 
	struct FCachedRigElement CachedChild; // 0xb8 (0x18)
	struct FCachedRigElement CachedParent; // 0xd0 (0x18)
	unsigned char padding_e8[0x8]; // 0xe8 (0x8)
};

