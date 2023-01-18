// ScriptStruct /Script/ControlRig.RigUnit_DebugArc
// Size: 0x140
struct FRigUnit_DebugArc : FRigUnit_DebugBaseMutable
{
	unsigned char unreflected_38[0x8]; // 0x38 (0x8) 
	struct FTransform Transform; // 0x40 (0x60)
	struct FLinearColor Color; // 0xa0 (0x10)
	float Radius; // 0xb0 (0x4)
	float MinimumDegrees; // 0xb4 (0x4)
	float MaximumDegrees; // 0xb8 (0x4)
	float Thickness; // 0xbc (0x4)
	int Detail; // 0xc0 (0x4)
	struct FName Space; // 0xc4 (0x4)
	unsigned char unreflected_c8[0x8]; // 0xc8 (0x8) 
	struct FTransform WorldOffset; // 0xd0 (0x60)
	bool bEnabled; // 0x130 (0x1)
	unsigned char padding_131[0xf]; // 0x131 (0xf)
};

