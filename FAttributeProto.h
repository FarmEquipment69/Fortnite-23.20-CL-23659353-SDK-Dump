// ScriptStruct /Script/ModelProto.AttributeProto
// Size: 0x310
struct FAttributeProto
{
	struct FString Name; // 0x0 (0x10)
	struct FString DocString; // 0x10 (0x10)
	enum EAttributeProtoAttributeType Type; // 0x20 (0x4)
	float F; // 0x24 (0x4)
	int64_t I; // 0x28 (0x8)
	struct FString S; // 0x30 (0x10)
	struct FTensorProto T; // 0x40 (0xd0)
	struct FSparseTensorProto SparseTensor; // 0x110 (0x1b0)
	struct TArray<float> Floats; // 0x2c0 (0x10)
	struct TArray<int64_t> Integers; // 0x2d0 (0x10)
	struct TArray<struct FString> Strings; // 0x2e0 (0x10)
	struct TArray<struct FTensorProto> Tensors; // 0x2f0 (0x10)
	struct TArray<struct FSparseTensorProto> SparseTensors; // 0x300 (0x10)
};

