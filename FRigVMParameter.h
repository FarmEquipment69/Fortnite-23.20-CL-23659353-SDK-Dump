// ScriptStruct /Script/RigVM.RigVMParameter
// Size: 0x30
struct FRigVMParameter
{
	enum ERigVMParameterType Type; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FName Name; // 0x4 (0x4)
	int RegisterIndex; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FString CPPType; // 0x10 (0x10)
	class UScriptStruct* ScriptStruct; // 0x20 (0x8)
	struct FName ScriptStructPath; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

