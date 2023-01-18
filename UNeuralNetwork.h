// Class /Script/NeuralNetworkInference.NeuralNetwork
// Size: 0x118
class UNeuralNetwork : public UObject
{
	enum ENeuralDeviceType DeviceType; // 0x28 (0x1)
	enum ENeuralDeviceType InputDeviceType; // 0x29 (0x1)
	enum ENeuralDeviceType OutputDeviceType; // 0x2a (0x1)
	enum ENeuralSynchronousMode SynchronousMode; // 0x2b (0x1)
	enum ENeuralThreadMode ThreadModeDelegateForAsyncRunCompleted; // 0x2c (0x1)
	unsigned char unreflected_2d[0x3]; // 0x2d (0x3) 
	struct FString ModelFullFilePath; // 0x30 (0x10)
	bool bIsLoaded; // 0x40 (0x1)
	unsigned char unreflected_41[0x7]; // 0x41 (0x7) 
	struct TArray<unsigned char> ModelReadFromFileInBytes; // 0x48 (0x10)
	struct TArray<bool> AreInputTensorSizesVariable; // 0x58 (0x10)
	unsigned char padding_68[0xb0]; // 0x68 (0xb0)
};

