// ScriptStruct /Script/OptimusCore.OptimusDataType
// Size: 0x50
struct FOptimusDataType
{
	struct FName TypeName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FText DisplayName; // 0x8 (0x18)
	struct FShaderValueTypeHandle* ShaderValueType; // 0x20 (0x8)
	int ShaderValueSize; // 0x28 (0x4)
	struct FName TypeCategory; // 0x2c (0x4)
	struct TWeakObjectPtr<class UObject> TypeObject; // 0x30 (0x8)
	bool bHasCustomPinColor; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	struct FLinearColor CustomPinColor; // 0x3c (0x10)
	enum EOptimusDataTypeUsageFlags UsageFlags; // 0x4c (0x1)
	enum EOptimusDataTypeFlags TypeFlags; // 0x4d (0x1)
	unsigned char padding_4e[0x2]; // 0x4e (0x2)
};

