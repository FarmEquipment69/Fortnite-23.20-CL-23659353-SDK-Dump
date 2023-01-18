// Class /Script/NearestNeighborModel.NearestNeighborModel
// Size: 0x178
class UNearestNeighborModel : public UMLDeformerMorphModel
{
	bool bUseInputMultipliers; // 0x110 (0x1)
	unsigned char unreflected_111[0x7]; // 0x111 (0x7) 
	struct TArray<struct FVector3f> InputMultipliers; // 0x118 (0x10)
	struct TArray<struct FClothPartData> ClothPartData; // 0x128 (0x10)
	struct TArray<float> InputsMin; // 0x138 (0x10)
	struct TArray<float> InputsMax; // 0x148 (0x10)
	struct TArray<class UAnimSequence*> SourceSkeletons; // 0x158 (0x10)
	int NumClusters; // 0x168 (0x4)
	float DecayFactor; // 0x16c (0x4)
	float NearestNeighborOffsetWeight; // 0x170 (0x4)
	unsigned char padding_174[0x4]; // 0x174 (0x4)

	/* Functions */

	// Function /Script/NearestNeighborModel.NearestNeighborModel.VertexMean (Underlying native function: VertexMean 0x5b2bf20)
	struct TArray<float> VertexMean(int& PartId); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NearestNeighborModel.NearestNeighborModel.SetVertexMean (Underlying native function: SetVertexMean 0x5b2be00)
	void SetVertexMean(int& PartId, struct TArray<float>& VertexMean); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/NearestNeighborModel.NearestNeighborModel.SetPCABasis (Underlying native function: SetPCABasis 0x5b2bce0)
	void SetPCABasis(int& PartId, struct TArray<float>& PCABasis); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/NearestNeighborModel.NearestNeighborModel.SetNumNeighbors (Underlying native function: SetNumNeighbors 0x5b2bbe0)
	void SetNumNeighbors(int& PartId, int& InNumNeighbors); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/NearestNeighborModel.NearestNeighborModel.SetNeighborOffsets (Underlying native function: SetNeighborOffsets 0x5b2bac0)
	void SetNeighborOffsets(int& PartId, struct TArray<float>& NeighborOffsets); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/NearestNeighborModel.NearestNeighborModel.SetNeighborCoeffs (Underlying native function: SetNeighborCoeffs 0x5b2b9a0)
	void SetNeighborCoeffs(int& PartId, struct TArray<float>& NeighborCoeffs); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/NearestNeighborModel.NearestNeighborModel.PCABasis (Underlying native function: PCABasis 0x5b2b8d0)
	struct TArray<float> PCABasis(int& PartId); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NearestNeighborModel.NearestNeighborModel.NeighborOffsets (Underlying native function: NeighborOffsets 0x5b2b800)
	struct TArray<float> NeighborOffsets(int& PartId); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NearestNeighborModel.NearestNeighborModel.NeighborCoeffs (Underlying native function: NeighborCoeffs 0x5b2b730)
	struct TArray<float> NeighborCoeffs(int& PartId); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NearestNeighborModel.NearestNeighborModel.GetPCACoeffStart (Underlying native function: GetPCACoeffStart 0x5b2b5b0)
	int GetPCACoeffStart(int& PartId); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NearestNeighborModel.NearestNeighborModel.GetPCACoeffNum (Underlying native function: GetPCACoeffNum 0x5b2b4f0)
	int GetPCACoeffNum(int& PartId); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NearestNeighborModel.NearestNeighborModel.GetPartNumVerts (Underlying native function: GetPartNumVerts 0x5b2b670)
	int GetPartNumVerts(int& PartId); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NearestNeighborModel.NearestNeighborModel.GetNumParts (Underlying native function: GetNumParts 0x5b2b4d0)
	int GetNumParts(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NearestNeighborModel.NearestNeighborModel.GetNumNeighbors (Underlying native function: GetNumNeighbors 0x5b2b410)
	int GetNumNeighbors(int& PartId); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NearestNeighborModel.NearestNeighborModel.ClipInputs (Underlying native function: ClipInputs 0x5b2b320)
	struct TArray<float> ClipInputs(struct TArray<float>& Input); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

