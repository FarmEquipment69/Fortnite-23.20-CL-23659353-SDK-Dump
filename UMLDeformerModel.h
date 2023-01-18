// Class /Script/MLDeformerFramework.MLDeformerModel
// Size: 0xe0
class UMLDeformerModel : public UObject
{
	unsigned char unreflected_28[0x88]; // 0x28 (0x88) 
	int NumBaseMeshVerts; // 0xb0 (0x4)
	int NumTargetMeshVerts; // 0xb4 (0x4)
	class UMLDeformerInputInfo* InputInfo; // 0xb8 (0x8)
	struct TArray<int> VertexMap; // 0xc0 (0x10)
	class UNeuralNetwork* NeuralNetwork; // 0xd0 (0x8)
	class USkeletalMesh* SkeletalMesh; // 0xd8 (0x8)
};

