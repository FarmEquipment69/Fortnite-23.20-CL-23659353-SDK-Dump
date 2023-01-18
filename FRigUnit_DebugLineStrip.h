// ScriptStruct /Script/ControlRig.RigUnit_DebugLineStrip
// Size: 0xd0
struct FRigUnit_DebugLineStrip : FRigUnit_DebugBaseMutable
{
	struct TArray<struct FVector> Points; // 0x38 (0x10)
	struct FLinearColor Color; // 0x48 (0x10)
	float Thickness; // 0x58 (0x4)
	struct FName Space; // 0x5c (0x4)
	struct FTransform WorldOffset; // 0x60 (0x60)
	bool bEnabled; // 0xc0 (0x1)
	unsigned char padding_c1[0xf]; // 0xc1 (0xf)
};

