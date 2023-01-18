// ScriptStruct /Script/ControlRig.RigUnit_VisualDebugTransformItemSpace
// Size: 0x90
struct FRigUnit_VisualDebugTransformItemSpace : FRigUnit_DebugBase
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FTransform Value; // 0x10 (0x60)
	bool bEnabled; // 0x70 (0x1)
	unsigned char unreflected_71[0x3]; // 0x71 (0x3) 
	float Thickness; // 0x74 (0x4)
	float Scale; // 0x78 (0x4)
	struct FRigElementKey* Space; // 0x7c (0x8)
	unsigned char padding_84[0xc]; // 0x84 (0xc)
};

