// ScriptStruct /Script/ControlRig.RigUnit_DebugRectangleItemSpace
// Size: 0x130
struct FRigUnit_DebugRectangleItemSpace : FRigUnit_DebugBaseMutable
{
	unsigned char unreflected_38[0x8]; // 0x38 (0x8) 
	struct FTransform Transform; // 0x40 (0x60)
	struct FLinearColor Color; // 0xa0 (0x10)
	float Scale; // 0xb0 (0x4)
	float Thickness; // 0xb4 (0x4)
	struct FRigElementKey* Space; // 0xb8 (0x8)
	struct FTransform WorldOffset; // 0xc0 (0x60)
	bool bEnabled; // 0x120 (0x1)
	unsigned char padding_121[0xf]; // 0x121 (0xf)
};

