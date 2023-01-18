// ScriptStruct /Script/ControlRig.RigUnit_DebugLineItemSpace
// Size: 0x100
struct FRigUnit_DebugLineItemSpace : FRigUnit_DebugBaseMutable
{
	struct FVector A; // 0x38 (0x18)
	struct FVector B; // 0x50 (0x18)
	struct FLinearColor Color; // 0x68 (0x10)
	float Thickness; // 0x78 (0x4)
	struct FRigElementKey* Space; // 0x7c (0x8)
	unsigned char unreflected_84[0xc]; // 0x84 (0xc) 
	struct FTransform WorldOffset; // 0x90 (0x60)
	bool bEnabled; // 0xf0 (0x1)
	unsigned char padding_f1[0xf]; // 0xf1 (0xf)
};

