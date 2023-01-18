// ScriptStruct /Script/ControlRig.RigUnit_SetRotation
// Size: 0x90
struct FRigUnit_SetRotation : FRigUnitMutable
{
	struct FRigElementKey* Item; // 0x38 (0x8)
	enum EBoneGetterSetterMode Space; // 0x40 (0x1)
	bool bInitial; // 0x41 (0x1)
	unsigned char unreflected_42[0xe]; // 0x42 (0xe) 
	struct FQuat Value; // 0x50 (0x20)
	float Weight; // 0x70 (0x4)
	bool bPropagateToChildren; // 0x74 (0x1)
	unsigned char unreflected_75[0x3]; // 0x75 (0x3) 
	struct FCachedRigElement CachedIndex; // 0x78 (0x18)
};

