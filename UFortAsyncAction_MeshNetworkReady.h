// Class /Script/FortniteGame.FortAsyncAction_MeshNetworkReady
// Size: 0x50
class UFortAsyncAction_MeshNetworkReady : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnReady; // 0x30 (0x10)
	unsigned char padding_40[0x10]; // 0x40 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAsyncAction_MeshNetworkReady.MeshNetworkReadyAsync (Underlying native function: MeshNetworkReadyAsync 0x8265ca8)
	static class UFortAsyncAction_MeshNetworkReady* MeshNetworkReadyAsync(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAsyncAction_MeshNetworkReady.HandleMeshNetworkTypeSet (Underlying native function: HandleMeshNetworkTypeSet 0x8265884)
	void HandleMeshNetworkTypeSet(enum EMeshNetworkNodeType& NodeType); // (Final | Native | Private)
};

