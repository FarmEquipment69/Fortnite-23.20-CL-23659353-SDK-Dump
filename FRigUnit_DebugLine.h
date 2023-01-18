// ScriptStruct /Script/ControlRig.RigUnit_DebugLine
// Size: 0xf0
struct FRigUnit_DebugLine : FRigUnit_DebugBaseMutable
{
	struct FVector A; // 0x38 (0x18)
	struct FVector B; // 0x50 (0x18)
	struct FLinearColor Color; // 0x68 (0x10)
	float Thickness; // 0x78 (0x4)
	struct FName Space; // 0x7c (0x4)
	struct FTransform WorldOffset; // 0x80 (0x60)
	bool bEnabled; // 0xe0 (0x1)
	unsigned char padding_e1[0xf]; // 0xe1 (0xf)
};

