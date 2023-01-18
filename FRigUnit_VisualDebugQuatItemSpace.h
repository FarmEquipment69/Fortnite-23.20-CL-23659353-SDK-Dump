// ScriptStruct /Script/ControlRig.RigUnit_VisualDebugQuatItemSpace
// Size: 0x50
struct FRigUnit_VisualDebugQuatItemSpace : FRigUnit_DebugBase
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FQuat Value; // 0x10 (0x20)
	bool bEnabled; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	float Thickness; // 0x34 (0x4)
	float Scale; // 0x38 (0x4)
	struct FRigElementKey* Space; // 0x3c (0x8)
	unsigned char padding_44[0xc]; // 0x44 (0xc)
};

