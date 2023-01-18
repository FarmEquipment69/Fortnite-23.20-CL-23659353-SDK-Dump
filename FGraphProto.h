// ScriptStruct /Script/ModelProto.GraphProto
// Size: 0x98
struct FGraphProto
{
	bool bIsLoaded; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TArray<struct FNodeProto> Node; // 0x8 (0x10)
	struct FString Name; // 0x18 (0x10)
	struct TArray<struct FTensorProto> Initializer; // 0x28 (0x10)
	struct TArray<struct FSparseTensorProto> SparseInitializer; // 0x38 (0x10)
	struct FString DocString; // 0x48 (0x10)
	struct TArray<struct FValueInfoProto> Input; // 0x58 (0x10)
	struct TArray<struct FValueInfoProto> Output; // 0x68 (0x10)
	struct TArray<struct FValueInfoProto> ValueInfo; // 0x78 (0x10)
	unsigned char padding_88[0x10]; // 0x88 (0x10)
};

