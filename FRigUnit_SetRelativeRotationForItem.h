// ScriptStruct /Script/ControlRig.RigUnit_SetRelativeRotationForItem
// Size: 0xb0
struct FRigUnit_SetRelativeRotationForItem : FRigUnitMutable
{
	struct FRigElementKey* Child; // 0x38 (0x8)
	struct FRigElementKey* Parent; // 0x40 (0x8)
	bool bParentInitial; // 0x48 (0x1)
	unsigned char unreflected_49[0x7]; // 0x49 (0x7) 
	struct FQuat Value; // 0x50 (0x20)
	float Weight; // 0x70 (0x4)
	bool bPropagateToChildren; // 0x74 (0x1)
	unsigned char unreflected_75[0x3]; // 0x75 (0x3) 
	struct FCachedRigElement CachedChild; // 0x78 (0x18)
	struct FCachedRigElement CachedParent; // 0x90 (0x18)
	unsigned char padding_a8[0x8]; // 0xa8 (0x8)
};

