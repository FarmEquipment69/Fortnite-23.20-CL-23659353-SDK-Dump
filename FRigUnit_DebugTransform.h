// ScriptStruct /Script/ControlRig.RigUnit_DebugTransform
// Size: 0x100
struct FRigUnit_DebugTransform : FRigUnit_DebugBase
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FTransform Transform; // 0x10 (0x60)
	enum ERigUnitDebugTransformMode Mode; // 0x70 (0x1)
	unsigned char unreflected_71[0x3]; // 0x71 (0x3) 
	struct FLinearColor Color; // 0x74 (0x10)
	float Thickness; // 0x84 (0x4)
	float Scale; // 0x88 (0x4)
	struct FName Space; // 0x8c (0x4)
	struct FTransform WorldOffset; // 0x90 (0x60)
	bool bEnabled; // 0xf0 (0x1)
	unsigned char padding_f1[0xf]; // 0xf1 (0xf)
};

