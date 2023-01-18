// Class /Script/FortniteGame.FortCreativePlayerStateParams
// Size: 0x30
class UFortCreativePlayerStateParams : public UFortMissionEventParams
{
	class APlayerState* PlayerState; // 0x28 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativePlayerStateParams.SetParams (Underlying native function: SetParams 0x8b2ec10)
	void SetParams(class APlayerState*& InPlayerState, class UFortCreativePlayerStateParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativePlayerStateParams.BreakParams (Underlying native function: BreakParams 0x8b29104)
	void BreakParams(class APlayerState*& OutPlayerState); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

