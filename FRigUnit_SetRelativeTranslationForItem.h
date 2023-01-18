// ScriptStruct /Script/ControlRig.RigUnit_SetRelativeTranslationForItem
// Size: 0xa0
struct FRigUnit_SetRelativeTranslationForItem : FRigUnitMutable
{
	struct FRigElementKey* Child; // 0x38 (0x8)
	struct FRigElementKey* Parent; // 0x40 (0x8)
	bool bParentInitial; // 0x48 (0x1)
	unsigned char unreflected_49[0x7]; // 0x49 (0x7) 
	struct FVector Value; // 0x50 (0x18)
	float Weight; // 0x68 (0x4)
	bool bPropagateToChildren; // 0x6c (0x1)
	unsigned char unreflected_6d[0x3]; // 0x6d (0x3) 
	struct FCachedRigElement CachedChild; // 0x70 (0x18)
	struct FCachedRigElement CachedParent; // 0x88 (0x18)
};

