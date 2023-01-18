// Class /Script/OptimusCore.OptimusVariableDescription
// Size: 0x60
class UOptimusVariableDescription : public UObject
{
	struct FGuid Guid; // 0x28 (0x10)
	struct FName VariableName; // 0x38 (0x4)
	struct FOptimusDataTypeRef DataType; // 0x3c (0xc)
	class UOptimusValueContainer* DefaultValue; // 0x48 (0x8)
	struct TArray<unsigned char> ValueData; // 0x50 (0x10)
};

