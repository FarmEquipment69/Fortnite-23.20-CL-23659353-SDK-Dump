// Class /Script/FortniteGame.FortPlayerSpawnedParams
// Size: 0x30
class UFortPlayerSpawnedParams : public UFortMissionEventParams
{
	class AFortPlayerController* SpawnedPlayerController; // 0x28 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerSpawnedParams.SetParams (Underlying native function: SetParams 0x8b2ec10)
	void SetParams(class AFortPlayerController*& SpawnedPlayerController, class UFortPlayerSpawnedParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerSpawnedParams.BreakParams (Underlying native function: BreakParams 0x8b29104)
	void BreakParams(class AFortPlayerController*& SpawnedPlayerController); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

