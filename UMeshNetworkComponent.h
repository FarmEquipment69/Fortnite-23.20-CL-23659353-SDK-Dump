// Class /Script/MeshNetwork.MeshNetworkComponent
// Size: 0x150
class UMeshNetworkComponent : public UActorComponent
{
	enum EMeshNetworkRelevancy MeshRelevancy; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	struct TMap<struct FString, struct FAggregatedFunction> AggregatedFunctions; // 0xa8 (0x50)
	struct TMap<struct FName, struct FAggregatedFunctionConfig> AggregatedFunctionConfigs; // 0xf8 (0x50)
	unsigned char padding_148[0x8]; // 0x148 (0x8)

	/* Functions */

	// Function /Script/MeshNetwork.MeshNetworkComponent.IsConnectedToMeshRoot (Underlying native function: IsConnectedToMeshRoot 0x72d94a8)
	bool IsConnectedToMeshRoot(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshNetwork.MeshNetworkComponent.GetMeshNetworkNodeType (Underlying native function: GetMeshNetworkNodeType 0x72d90c4)
	enum EMeshNetworkNodeType GetMeshNetworkNodeType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

