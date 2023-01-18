// Class /Script/FortniteGame.FortBuildingContainerOpenedParams
// Size: 0x38
class UFortBuildingContainerOpenedParams : public UFortMissionEventParams
{
	class AFortPlayerPawn* PlayerPawn; // 0x28 (0x8)
	class ABuildingContainer* BuildingContainer; // 0x30 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortBuildingContainerOpenedParams.SetParams (Underlying native function: SetParams 0x8b2e698)
	void SetParams(class AFortPlayerPawn*& InPlayerPawn, class ABuildingContainer*& InBuildingContainer, class UFortBuildingContainerOpenedParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortBuildingContainerOpenedParams.BreakParams (Underlying native function: BreakParams 0x8b28bf4)
	void BreakParams(class AFortPlayerPawn*& OutPlayerPawn, class ABuildingContainer*& OutBuildingContainer); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

