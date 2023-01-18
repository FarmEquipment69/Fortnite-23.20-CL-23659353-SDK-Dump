// ScriptStruct /Script/OptimusCore.OptimusGraphVariableDescription
// Size: 0x30
struct FOptimusGraphVariableDescription
{
	struct FString Name; // 0x0 (0x10)
	struct FShaderValueTypeHandle* ValueType; // 0x10 (0x8)
	struct TArray<unsigned char> Value; // 0x18 (0x10)
	int Offset; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

