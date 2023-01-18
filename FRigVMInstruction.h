// ScriptStruct /Script/RigVM.RigVMInstruction
// Size: 0x10
struct FRigVMInstruction
{
	uint64_t ByteCodeIndex; // 0x0 (0x8)
	enum ERigVMOpCode OpCode; // 0x8 (0x1)
	unsigned char OperandAlignment; // 0x9 (0x1)
	unsigned char padding_a[0x6]; // 0xa (0x6)
};

