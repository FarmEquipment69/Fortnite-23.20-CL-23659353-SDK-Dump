// ScriptStruct /Script/ControlRig.RigUnit_StringFind
// Size: 0x30
struct FRigUnit_StringFind : FRigUnit_StringBase
{
	struct FString Value; // 0x8 (0x10)
	struct FString Search; // 0x18 (0x10)
	bool Found; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	int Index; // 0x2c (0x4)
};

