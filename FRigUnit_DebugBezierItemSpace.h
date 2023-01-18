// ScriptStruct /Script/ControlRig.RigUnit_DebugBezierItemSpace
// Size: 0x130
struct FRigUnit_DebugBezierItemSpace : FRigUnit_DebugBaseMutable
{
	struct FCRFourPointBezier Bezier; // 0x38 (0x60)
	float MinimumU; // 0x98 (0x4)
	float MaximumU; // 0x9c (0x4)
	struct FLinearColor Color; // 0xa0 (0x10)
	float Thickness; // 0xb0 (0x4)
	int Detail; // 0xb4 (0x4)
	struct FRigElementKey* Space; // 0xb8 (0x8)
	struct FTransform WorldOffset; // 0xc0 (0x60)
	bool bEnabled; // 0x120 (0x1)
	unsigned char padding_121[0xf]; // 0x121 (0xf)
};

