// Class /Script/FortniteGame.FortNavigationActor_MapTable
// Size: 0x588
class AFortNavigationActor_MapTable : public AFortEventLevelNavigationActor
{
	class UStaticMeshComponent* ApolloMap; // 0x530 (0x8)
	class UStaticMeshComponent* ReferencePlane; // 0x538 (0x8)
	struct FVector ApolloMapMinLoc; // 0x540 (0x18)
	struct FVector ApolloMapMaxLoc; // 0x558 (0x18)
	struct FVector UnscaledPlaneExtent; // 0x570 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortNavigationActor_MapTable.OnActiveEventsChanged (Has no native function)
	void OnActiveEventsChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortNavigationActor_MapTable.HandleActiveEventsChanged (Underlying native function: HandleActiveEventsChanged 0x8545a50)
	void HandleActiveEventsChanged(struct TArray<struct FString>& ActiveEventFlags); // (Final | Native | Protected | HasOutParms)
};

