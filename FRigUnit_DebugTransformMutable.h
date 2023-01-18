// ScriptStruct /Script/ControlRig.RigUnit_DebugTransformMutable
// Size: 0x130
struct FRigUnit_DebugTransformMutable : FRigUnit_DebugBaseMutable
{
	unsigned char unreflected_38[0x8]; // 0x38 (0x8) 
	struct FTransform Transform; // 0x40 (0x60)
	enum ERigUnitDebugTransformMode Mode; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x3]; // 0xa1 (0x3) 
	struct FLinearColor Color; // 0xa4 (0x10)
	float Thickness; // 0xb4 (0x4)
	float Scale; // 0xb8 (0x4)
	struct FName Space; // 0xbc (0x4)
	struct FTransform WorldOffset; // 0xc0 (0x60)
	bool bEnabled; // 0x120 (0x1)
	unsigned char padding_121[0xf]; // 0x121 (0xf)
};

