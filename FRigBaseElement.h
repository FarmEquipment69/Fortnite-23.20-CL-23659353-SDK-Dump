// ScriptStruct /Script/ControlRig.RigBaseElement
// Size: 0xe8
struct FRigBaseElement
{
	struct FRigElementKey* Key; // 0x8 (0x8)
	struct FString NameString; // 0x10 (0x10)
	int Index; // 0x20 (0x4)
	int SubIndex; // 0x24 (0x4)
	bool bSelected; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	int CreatedAtInstructionIndex; // 0x2c (0x4)
	unsigned char padding_30[0xb8]; // 0x30 (0xb8)
};

