// Class /Script/NeuralMorphModel.NeuralMorphModel
// Size: 0x148
class UNeuralMorphModel : public UMLDeformerMorphModel
{
	enum ENeuralMorphMode Mode; // 0x110 (0x1)
	unsigned char unreflected_111[0x3]; // 0x111 (0x3) 
	int LocalNumMorphTargetsPerBone; // 0x114 (0x4)
	int GlobalNumMorphTargets; // 0x118 (0x4)
	int NumIterations; // 0x11c (0x4)
	int LocalNumHiddenLayers; // 0x120 (0x4)
	int LocalNumNeuronsPerLayer; // 0x124 (0x4)
	int GlobalNumHiddenLayers; // 0x128 (0x4)
	int GlobalNumNeuronsPerLayer; // 0x12c (0x4)
	int BatchSize; // 0x130 (0x4)
	float LearningRate; // 0x134 (0x4)
	float LearningRateDecay; // 0x138 (0x4)
	float RegularizationFactor; // 0x13c (0x4)
	class UNeuralMorphNetwork* NeuralMorphNetwork; // 0x140 (0x8)
};

