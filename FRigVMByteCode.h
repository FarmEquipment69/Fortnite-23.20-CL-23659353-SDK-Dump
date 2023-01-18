// ScriptStruct /Script/RigVM.RigVMByteCode
// Size: 0x30
struct FRigVMByteCode
{
	struct TArray<unsigned char> ByteCode; // 0x0 (0x10)
	int NumInstructions; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct TArray<struct FRigVMByteCodeEntry*> Entries; // 0x18 (0x10)
	unsigned char padding_28[0x8]; // 0x28 (0x8)
};

