// ScriptStruct /Script/ModelProto.NodeProto
// Size: 0x70
struct FNodeProto
{
	struct TArray<struct FString> Input; // 0x0 (0x10)
	struct TArray<struct FString> Output; // 0x10 (0x10)
	struct FString Name; // 0x20 (0x10)
	struct FString OperatorType; // 0x30 (0x10)
	struct FString Domain; // 0x40 (0x10)
	struct TArray<struct FAttributeProto> Attribute; // 0x50 (0x10)
	struct FString DocString; // 0x60 (0x10)
};

