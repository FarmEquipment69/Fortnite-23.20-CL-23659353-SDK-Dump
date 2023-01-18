// ScriptStruct /Script/RigVM.RigVMRegisterOffset
// Size: 0x40
struct FRigVMRegisterOffset
{
	struct TArray<int> Segments; // 0x0 (0x10)
	enum ERigVMRegisterType Type; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	struct FName CPPType; // 0x14 (0x4)
	class UScriptStruct* ScriptStruct; // 0x18 (0x8)
	class UScriptStruct* ParentScriptStruct; // 0x20 (0x8)
	int ArrayIndex; // 0x28 (0x4)
	uint16_t ElementSize; // 0x2c (0x2)
	unsigned char unreflected_2e[0x2]; // 0x2e (0x2) 
	struct FString CachedSegmentPath; // 0x30 (0x10)
};

