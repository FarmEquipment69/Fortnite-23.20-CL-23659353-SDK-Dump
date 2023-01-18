// Class /Script/NeuralMorphModel.NeuralMorphNetwork
// Size: 0x68
class UNeuralMorphNetwork : public UObject
{
	struct TArray<class UNeuralMorphNetworkLayer*> Layers; // 0x28 (0x10)
	struct TArray<float> InputMeans; // 0x38 (0x10)
	struct TArray<float> InputStd; // 0x48 (0x10)
	enum ENeuralMorphMode Mode; // 0x58 (0x1)
	unsigned char unreflected_59[0x3]; // 0x59 (0x3) 
	int NumMorphsPerBone; // 0x5c (0x4)
	int NumBones; // 0x60 (0x4)
	int NumCurves; // 0x64 (0x4)
};

