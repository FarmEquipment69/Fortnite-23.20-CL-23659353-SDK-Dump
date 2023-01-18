// ScriptStruct /Script/ControlRig.RigUnit_NameTruncate
// Size: 0x20
struct FRigUnit_NameTruncate : FRigUnit_NameBase
{
	struct FName Name; // 0x8 (0x4)
	int Count; // 0xc (0x4)
	bool FromEnd; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	struct FName Remainder; // 0x14 (0x4)
	struct FName Chopped; // 0x18 (0x4)
	unsigned char padding_1c[0x4]; // 0x1c (0x4)
};

