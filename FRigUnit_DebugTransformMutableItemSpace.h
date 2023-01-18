// ScriptStruct /Script/ControlRig.RigUnit_DebugTransformMutableItemSpace
// Size: 0x140
struct FRigUnit_DebugTransformMutableItemSpace : FRigUnit_DebugBaseMutable
{
	unsigned char unreflected_38[0x8]; // 0x38 (0x8) 
	struct FTransform Transform; // 0x40 (0x60)
	enum ERigUnitDebugTransformMode Mode; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x3]; // 0xa1 (0x3) 
	struct FLinearColor Color; // 0xa4 (0x10)
	float Thickness; // 0xb4 (0x4)
	float Scale; // 0xb8 (0x4)
	struct FRigElementKey* Space; // 0xbc (0x8)
	unsigned char unreflected_c4[0xc]; // 0xc4 (0xc) 
	struct FTransform WorldOffset; // 0xd0 (0x60)
	bool bEnabled; // 0x130 (0x1)
	unsigned char padding_131[0xf]; // 0x131 (0xf)
};

