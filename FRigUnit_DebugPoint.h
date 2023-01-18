// ScriptStruct /Script/ControlRig.RigUnit_DebugPoint
// Size: 0xb0
struct FRigUnit_DebugPoint : FRigUnit_DebugBase
{
	struct FVector Vector; // 0x8 (0x18)
	enum ERigUnitDebugPointMode Mode; // 0x20 (0x1)
	unsigned char unreflected_21[0x3]; // 0x21 (0x3) 
	struct FLinearColor Color; // 0x24 (0x10)
	float Scale; // 0x34 (0x4)
	float Thickness; // 0x38 (0x4)
	struct FName Space; // 0x3c (0x4)
	struct FTransform WorldOffset; // 0x40 (0x60)
	bool bEnabled; // 0xa0 (0x1)
	unsigned char padding_a1[0xf]; // 0xa1 (0xf)
};

