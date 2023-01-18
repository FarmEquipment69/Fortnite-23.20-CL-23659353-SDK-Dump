// ScriptStruct /Script/Niagara.VMExternalFunctionBindingInfo
// Size: 0x30
struct FVMExternalFunctionBindingInfo
{
	struct FName Name; // 0x0 (0x4)
	struct FName OwnerName; // 0x4 (0x4)
	struct TArray<bool> InputParamLocations; // 0x8 (0x10)
	int NumOutputs; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct TArray<struct FVMFunctionSpecifier*> FunctionSpecifiers; // 0x20 (0x10)
};

