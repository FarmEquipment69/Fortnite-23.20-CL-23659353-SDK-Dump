// ScriptStruct /Script/ComputeFramework.ShaderValueType
// Size: 0x20
struct FShaderValueType
{
	enum EShaderFundamentalType Type; // 0x0 (0x1)
	enum EShaderFundamentalDimensionType DimensionType; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	struct FName Name; // 0x4 (0x4)
	bool bIsDynamicArray; // 0x8 (0x1)
	unsigned char padding_9[0x17]; // 0x9 (0x17)
};

