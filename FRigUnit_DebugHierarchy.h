// ScriptStruct /Script/ControlRig.RigUnit_DebugHierarchy
// Size: 0xc0
struct FRigUnit_DebugHierarchy : FRigUnit_DebugBaseMutable
{
	float Scale; // 0x38 (0x4)
	struct FLinearColor Color; // 0x3c (0x10)
	float Thickness; // 0x4c (0x4)
	struct FTransform WorldOffset; // 0x50 (0x60)
	bool bEnabled; // 0xb0 (0x1)
	unsigned char padding_b1[0xf]; // 0xb1 (0xf)
};

