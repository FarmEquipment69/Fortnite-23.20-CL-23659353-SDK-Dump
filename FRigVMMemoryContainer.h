// ScriptStruct /Script/RigVM.RigVMMemoryContainer
// Size: 0xa0
struct FRigVMMemoryContainer
{
	bool bUseNameMap; // 0x0 (0x1)
	enum ERigVMMemoryType MemoryType; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	struct TArray<struct FRigVMRegister> Registers; // 0x8 (0x10)
	struct TArray<struct FRigVMRegisterOffset> RegisterOffsets; // 0x18 (0x10)
	struct TArray<unsigned char> Data; // 0x28 (0x10)
	struct TArray<class UScriptStruct*> ScriptStructs; // 0x38 (0x10)
	struct TMap<struct FName, int> NameMap; // 0x48 (0x50)
	bool bEncounteredErrorDuringLoad; // 0x98 (0x1)
	unsigned char padding_99[0x7]; // 0x99 (0x7)
};

