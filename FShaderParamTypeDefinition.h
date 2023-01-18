// ScriptStruct /Script/ComputeFramework.ShaderParamTypeDefinition
// Size: 0x30
struct FShaderParamTypeDefinition
{
	struct FString TypeDeclaration; // 0x0 (0x10)
	struct FString Name; // 0x10 (0x10)
	struct FShaderValueTypeHandle* ValueType; // 0x20 (0x8)
	uint16_t ArrayElementCount; // 0x28 (0x2)
	enum EShaderParamBindingType BindingType; // 0x2a (0x1)
	enum EShaderResourceType ResourceType; // 0x2b (0x1)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

