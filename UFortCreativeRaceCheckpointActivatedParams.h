// Class /Script/FortniteGame.FortCreativeRaceCheckpointActivatedParams
// Size: 0x38
class UFortCreativeRaceCheckpointActivatedParams : public UFortMissionEventParams
{
	class APlayerState* PlayerState; // 0x28 (0x8)
	class AActor* RaceCheckpoint; // 0x30 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeRaceCheckpointActivatedParams.SetParams (Underlying native function: SetParams 0x8b2e698)
	void SetParams(class APlayerState*& InPlayerState, class AActor*& InRaceCheckpoint, class UFortCreativeRaceCheckpointActivatedParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeRaceCheckpointActivatedParams.BreakParams (Underlying native function: BreakParams 0x8b28bf4)
	void BreakParams(class APlayerState*& OutPlayerState, class AActor*& OutRaceCheckpoint); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

