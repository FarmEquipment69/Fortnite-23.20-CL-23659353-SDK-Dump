// Class /Script/FortniteGame.FortMissionFailedParams
// Size: 0x30
class UFortMissionFailedParams : public UFortMissionEventParams
{
	class AFortMission* FailedMission; // 0x28 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortMissionFailedParams.SetParams (Underlying native function: SetParams 0x8b2ec10)
	void SetParams(class AFortMission*& FailedMission, class UFortMissionFailedParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionFailedParams.BreakParams (Underlying native function: BreakParams 0x8b29104)
	void BreakParams(class AFortMission*& FailedMission); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

