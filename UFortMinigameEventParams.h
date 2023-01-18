// Class /Script/FortniteGame.FortMinigameEventParams
// Size: 0x38
class UFortMinigameEventParams : public UFortMissionEventParams
{
	class AFortMinigame* Minigame; // 0x28 (0x8)
	class APlayerState* PlayerState; // 0x30 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortMinigameEventParams.SetParams (Underlying native function: SetParams 0x8b2e698)
	void SetParams(class AFortMinigame*& InMinigame, class APlayerState*& InPlayerState, class UFortMinigameEventParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameEventParams.BreakParams (Underlying native function: BreakParams 0x8b28bf4)
	void BreakParams(class AFortMinigame*& OutMinigame, class APlayerState*& OutPlayerState); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

