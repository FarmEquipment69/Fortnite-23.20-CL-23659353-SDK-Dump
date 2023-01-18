// ScriptStruct /Script/ControlRig.RigUnit_VisualDebugTransform
// Size: 0x80
struct FRigUnit_VisualDebugTransform : FRigUnit_DebugBase
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FTransform Value; // 0x10 (0x60)
	bool bEnabled; // 0x70 (0x1)
	unsigned char unreflected_71[0x3]; // 0x71 (0x3) 
	float Thickness; // 0x74 (0x4)
	float Scale; // 0x78 (0x4)
	struct FName BoneSpace; // 0x7c (0x4)
};

