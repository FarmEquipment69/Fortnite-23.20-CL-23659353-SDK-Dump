// ScriptStruct /Script/ControlRig.RigUnit_SetTransform
// Size: 0xd0
struct FRigUnit_SetTransform : FRigUnitMutable
{
	struct FRigElementKey* Item; // 0x38 (0x8)
	enum EBoneGetterSetterMode Space; // 0x40 (0x1)
	bool bInitial; // 0x41 (0x1)
	unsigned char unreflected_42[0xe]; // 0x42 (0xe) 
	struct FTransform Value; // 0x50 (0x60)
	float Weight; // 0xb0 (0x4)
	bool bPropagateToChildren; // 0xb4 (0x1)
	unsigned char unreflected_b5[0x3]; // 0xb5 (0x3) 
	struct FCachedRigElement CachedIndex; // 0xb8 (0x18)
};

