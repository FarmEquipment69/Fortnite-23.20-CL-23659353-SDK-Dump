// ScriptStruct /Script/ControlRig.RigUnit_GetTransform
// Size: 0xa0
struct FRigUnit_GetTransform : FRigUnit
{
	struct FRigElementKey* Item; // 0x8 (0x8)
	enum EBoneGetterSetterMode Space; // 0x10 (0x1)
	bool bInitial; // 0x11 (0x1)
	unsigned char unreflected_12[0xe]; // 0x12 (0xe) 
	struct FTransform Transform; // 0x20 (0x60)
	struct FCachedRigElement CachedIndex; // 0x80 (0x18)
	unsigned char padding_98[0x8]; // 0x98 (0x8)
};

