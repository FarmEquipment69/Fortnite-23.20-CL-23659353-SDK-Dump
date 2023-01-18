// ScriptStruct /Script/ControlRig.RigUnit_DebugLineStripItemSpace
// Size: 0xe0
struct FRigUnit_DebugLineStripItemSpace : FRigUnit_DebugBaseMutable
{
	struct TArray<struct FVector> Points; // 0x38 (0x10)
	struct FLinearColor Color; // 0x48 (0x10)
	float Thickness; // 0x58 (0x4)
	struct FRigElementKey* Space; // 0x5c (0x8)
	unsigned char unreflected_64[0xc]; // 0x64 (0xc) 
	struct FTransform WorldOffset; // 0x70 (0x60)
	bool bEnabled; // 0xd0 (0x1)
	unsigned char padding_d1[0xf]; // 0xd1 (0xf)
};

