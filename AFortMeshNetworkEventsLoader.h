// Class /Script/FortniteGame.FortMeshNetworkEventsLoader
// Size: 0x3b8
class AFortMeshNetworkEventsLoader : public AInfo
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	bool bMeshNetworkReady; // 0x290 (0x1)
	unsigned char unreflected_291[0x7]; // 0x291 (0x7) 
	struct FMeshNetworkEventStateDataArray ActiveMeshNetworkEvents; // 0x298 (0x120)

	/* Functions */

	// Function /Script/FortniteGame.FortMeshNetworkEventsLoader.OnMeshNetworkReady (Underlying native function: OnMeshNetworkReady 0x845f528)
	void OnMeshNetworkReady(enum EMeshNetworkNodeType& NodeType); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMeshNetworkEventsLoader.MulticastMeshNetEventBurst (Underlying native function: MulticastMeshNetEventBurst 0x845edfc)
	void MulticastMeshNetEventBurst(struct FName& EventName, struct FString& EventParams, struct FGameplayTagContainer& Filters); // (Net | NetReliable | Native | Event | NetMulticast | Public)
};

