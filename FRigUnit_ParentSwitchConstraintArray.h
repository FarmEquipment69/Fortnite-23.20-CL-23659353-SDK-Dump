// ScriptStruct /Script/ControlRig.RigUnit_ParentSwitchConstraintArray
// Size: 0x1d0
struct FRigUnit_ParentSwitchConstraintArray : FRigUnitMutable
{
	struct FRigElementKey* Subject; // 0x38 (0x8)
	int ParentIndex; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct TArray<struct FRigElementKey*> Parents; // 0x48 (0x10)
	unsigned char unreflected_58[0x8]; // 0x58 (0x8) 
	struct FTransform InitialGlobalTransform; // 0x60 (0x60)
	float Weight; // 0xc0 (0x4)
	unsigned char unreflected_c4[0xc]; // 0xc4 (0xc) 
	struct FTransform Transform; // 0xd0 (0x60)
	bool Switched; // 0x130 (0x1)
	unsigned char unreflected_131[0x7]; // 0x131 (0x7) 
	struct FCachedRigElement CachedSubject; // 0x138 (0x18)
	struct FCachedRigElement CachedParent; // 0x150 (0x18)
	unsigned char unreflected_168[0x8]; // 0x168 (0x8) 
	struct FTransform RelativeOffset; // 0x170 (0x60)
};

