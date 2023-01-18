// ScriptStruct /Script/ControlRig.RigUnit_StringContains
// Size: 0x30
struct FRigUnit_StringContains : FRigUnit_StringBase
{
	struct FString Name; // 0x8 (0x10)
	struct FString Search; // 0x18 (0x10)
	bool Result; // 0x28 (0x1)
	unsigned char padding_29[0x7]; // 0x29 (0x7)
};

