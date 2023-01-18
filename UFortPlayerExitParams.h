// Class /Script/FortniteGame.FortPlayerExitParams
// Size: 0x30
class UFortPlayerExitParams : public UFortMissionEventParams
{
	class AFortPlayerController* ExitingPlayerController; // 0x28 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerExitParams.SetParams (Underlying native function: SetParams 0x8b2ec10)
	void SetParams(class AFortPlayerController*& ExitingPlayerController, class UFortPlayerExitParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerExitParams.BreakParams (Underlying native function: BreakParams 0x8b29104)
	void BreakParams(class AFortPlayerController*& ExitingPlayerController); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

