// ScriptStruct /Script/NeuralNetworkInference.NeuralTensor
// Size: 0x80
struct FNeuralTensor
{
	enum ENeuralDataType DataType; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TArray<int64_t> Sizes; // 0x8 (0x10)
	int64_t Volume; // 0x18 (0x8)
	struct FString Name; // 0x20 (0x10)
	enum ENeuralTensorType TensorType; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct TArray<unsigned char> UnderlyingUInt8ArrayData; // 0x38 (0x10)
	bool bEnableGPU; // 0x48 (0x1)
	unsigned char padding_49[0x37]; // 0x49 (0x37)
};

