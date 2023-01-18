// ScriptStruct /Script/ControlRig.RigUnit_StringTruncate
// Size: 0x40
struct FRigUnit_StringTruncate : FRigUnit_StringBase
{
	struct FString Name; // 0x8 (0x10)
	int Count; // 0x18 (0x4)
	bool FromEnd; // 0x1c (0x1)
	unsigned char unreflected_1d[0x3]; // 0x1d (0x3) 
	struct FString Remainder; // 0x20 (0x10)
	struct FString Chopped; // 0x30 (0x10)
};

