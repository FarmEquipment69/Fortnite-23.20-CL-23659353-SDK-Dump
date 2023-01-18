// Class /Script/FortniteGame.FortMeshNetworkEventsSubsystem
// Size: 0xe0
class UFortMeshNetworkEventsSubsystem : public UGameInstanceSubsystem
{
	unsigned char unreflected_30[0x60]; // 0x30 (0x60) 
	struct FMulticastInlineDelegate OnMeshNetworkEventBurst; // 0x90 (0x10)
	struct FMulticastInlineDelegate OnMeshNetworkEventStart; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnMeshNetworkEventChange; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnMeshNetworkEventEnd; // 0xc0 (0x10)
	struct TArray<struct FEventResponderTrackingItem> EventResponderList; // 0xd0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortMeshNetworkEventsSubsystem.IsMeshNetworkEventActive (Underlying native function: IsMeshNetworkEventActive 0x845e510)
	bool IsMeshNetworkEventActive(struct FName& EventName, struct FGameplayTagContainer& Filters); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMeshNetworkEventsSubsystem.GetMeshNetworkNodeType (Underlying native function: GetMeshNetworkNodeType 0x845e0fc)
	enum EMeshNetworkNodeType GetMeshNetworkNodeType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMeshNetworkEventsSubsystem.GetActiveMeshNetworkEvents (Underlying native function: GetActiveMeshNetworkEvents 0x845d904)
	void GetActiveMeshNetworkEvents(struct TArray<struct FMeshNetworkEventStateData>& ActiveMeshNetworkEvents); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMeshNetworkEventsSubsystem.GetActiveMeshNetworkEvent (Underlying native function: GetActiveMeshNetworkEvent 0x845d730)
	bool GetActiveMeshNetworkEvent(struct FMeshNetworkEventStateData& OutEventData, struct FName& EventName, struct FGameplayTagContainer& EventFilters); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

