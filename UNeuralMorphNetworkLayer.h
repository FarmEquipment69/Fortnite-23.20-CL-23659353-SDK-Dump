// Class /Script/NeuralMorphModel.NeuralMorphNetworkLayer
// Size: 0x58
class UNeuralMorphNetworkLayer : public UObject
{
	int NumInputs; // 0x28 (0x4)
	int NumOutputs; // 0x2c (0x4)
	int Depth; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct TArray<float> Weights; // 0x38 (0x10)
	struct TArray<float> Biases; // 0x48 (0x10)
};

