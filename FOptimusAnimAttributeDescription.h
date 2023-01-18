// ScriptStruct /Script/OptimusCore.OptimusAnimAttributeDescription
// Size: 0x40
struct FOptimusAnimAttributeDescription
{
	struct FString Name; // 0x0 (0x10)
	struct FName BoneName; // 0x10 (0x4)
	struct FOptimusDataTypeRef DataType; // 0x14 (0xc)
	class UOptimusValueContainer* DefaultValue; // 0x20 (0x8)
	struct FString HlslId; // 0x28 (0x10)
	struct FName PinName; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};

