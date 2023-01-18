// Class /Script/FortniteGame.FortSaveFileBuildingInstructionsHandler
// Size: 0x438
class AFortSaveFileBuildingInstructionsHandler : public AActor
{
	struct FString SaveFileName; // 0x288 (0x10)
	struct FVector LoadedBuildingsScale; // 0x298 (0x18)
	struct FVector LoadedBuildingsAdditionalTranslation; // 0x2b0 (0x18)
	unsigned char bUseAbsoluteCoordinates; // 0x2c8 (0x1)
	unsigned char bTrackDestroyedBuildings; // 0x2c8 (0x1)
	unsigned char unreflected_2c9[0x7]; // 0x2c9 (0x7) 
	struct TWeakObjectPtr<class UFortBuildingInstructions> DefaultBuildingInstructions; // 0x2d0 (0x28)
	unsigned char bLoadInvisible; // 0x2f8 (0x1)
	unsigned char bDespawnOnBuildingsSpawned; // 0x2f8 (0x1)
	unsigned char bSpawnBuildingsAutomaticallyAfterLoad; // 0x2f8 (0x1)
	unsigned char unreflected_2f9[0x87]; // 0x2f9 (0x87) 
	struct FUniqueNetIdRepl OperationUserId; // 0x380 (0x30)
	unsigned char padding_3b0[0x88]; // 0x3b0 (0x88)

	/* Functions */

	// Function /Script/FortniteGame.FortSaveFileBuildingInstructionsHandler.SaveBuildings (Underlying native function: SaveBuildings 0x8657844)
	bool SaveBuildings(class AFortPlayerController*& FortPC); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSaveFileBuildingInstructionsHandler.ResetBuildings (Underlying native function: ResetBuildings 0x86575e0)
	bool ResetBuildings(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSaveFileBuildingInstructionsHandler.LoadBuildings (Underlying native function: LoadBuildings 0x8656bd0)
	void LoadBuildings(class AFortPlayerController*& FortPC); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSaveFileBuildingInstructionsHandler.AreBuildingsLoaded (Underlying native function: AreBuildingsLoaded 0x8654778)
	bool AreBuildingsLoaded(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

