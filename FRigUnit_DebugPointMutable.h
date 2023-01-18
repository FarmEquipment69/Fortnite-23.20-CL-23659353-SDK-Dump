// ScriptStruct /Script/ControlRig.RigUnit_DebugPointMutable
// Size: 0xe0
struct FRigUnit_DebugPointMutable : FRigUnit_DebugBaseMutable
{
	struct FVector Vector; // 0x38 (0x18)
	enum ERigUnitDebugPointMode Mode; // 0x50 (0x1)
	unsigned char unreflected_51[0x3]; // 0x51 (0x3) 
	struct FLinearColor Color; // 0x54 (0x10)
	float Scale; // 0x64 (0x4)
	float Thickness; // 0x68 (0x4)
	struct FName Space; // 0x6c (0x4)
	struct FTransform WorldOffset; // 0x70 (0x60)
	bool bEnabled; // 0xd0 (0x1)
	unsigned char padding_d1[0xf]; // 0xd1 (0xf)
};

