// ScriptStruct /Script/RigVM.RigVMStatistics
// Size: 0x38
struct FRigVMStatistics
{
	int BytesForCDO; // 0x0 (0x4)
	int BytesPerInstance; // 0x4 (0x4)
	struct FRigVMMemoryStatistics LiteralMemory; // 0x8 (0xc)
	struct FRigVMMemoryStatistics WorkMemory; // 0x14 (0xc)
	struct FRigVMMemoryStatistics DebugMemory; // 0x20 (0xc)
	int BytesForCaching; // 0x2c (0x4)
	struct FRigVMByteCodeStatistics* ByteCode; // 0x30 (0x8)
};

