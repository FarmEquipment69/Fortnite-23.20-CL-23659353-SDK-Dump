// Class /Script/MRMesh.MockDataMeshTrackerComponent
// Size: 0x310
class UMockDataMeshTrackerComponent : public USceneComponent
{
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x2a0 (0x10)
	bool ScanWorld; // 0x2b0 (0x1)
	bool RequestNormals; // 0x2b1 (0x1)
	bool RequestVertexConfidence; // 0x2b2 (0x1)
	enum EMeshTrackerVertexColorMode VertexColorMode; // 0x2b3 (0x1)
	unsigned char unreflected_2b4[0x4]; // 0x2b4 (0x4) 
	struct TArray<struct FColor> BlockVertexColors; // 0x2b8 (0x10)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x2c8 (0x10)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x2d8 (0x10)
	float UpdateInterval; // 0x2e8 (0x4)
	unsigned char unreflected_2ec[0x4]; // 0x2ec (0x4) 
	class UMRMeshComponent* MRMesh; // 0x2f0 (0x8)
	unsigned char padding_2f8[0x18]; // 0x2f8 (0x18)

	/* Functions */

	// DelegateFunction /Script/MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature (Has no native function)
	void OnMockDataMeshTrackerUpdatedDelegateSignature(int& Index, struct TArray<struct FVector>& Vertices, struct TArray<int>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<float>& Confidence); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// Function /Script/MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh (Underlying native function: DisconnectMRMesh 0x979eb04)
	void DisconnectMRMesh(class UMRMeshComponent*& InMRMeshPtr); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh (Underlying native function: ConnectMRMesh 0x979ea28)
	void ConnectMRMesh(class UMRMeshComponent*& InMRMeshPtr); // (Final | Native | Public | BlueprintCallable)
};

