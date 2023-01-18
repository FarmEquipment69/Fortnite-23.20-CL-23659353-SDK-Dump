// ScriptStruct /Script/ControlRig.RigUnit_ProjectTransformToNewParent
// Size: 0xe0
struct FRigUnit_ProjectTransformToNewParent : FRigUnit
{
	struct FRigElementKey* Child; // 0x8 (0x8)
	bool bChildInitial; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	struct FRigElementKey* OldParent; // 0x14 (0x8)
	bool bOldParentInitial; // 0x1c (0x1)
	unsigned char unreflected_1d[0x3]; // 0x1d (0x3) 
	struct FRigElementKey* NewParent; // 0x20 (0x8)
	bool bNewParentInitial; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct FTransform Transform; // 0x30 (0x60)
	struct FCachedRigElement CachedChild; // 0x90 (0x18)
	struct FCachedRigElement CachedOldParent; // 0xa8 (0x18)
	struct FCachedRigElement CachedNewParent; // 0xc0 (0x18)
	unsigned char padding_d8[0x8]; // 0xd8 (0x8)
};

