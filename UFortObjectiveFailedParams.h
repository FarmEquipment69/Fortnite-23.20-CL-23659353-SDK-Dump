// Class /Script/FortniteGame.FortObjectiveFailedParams
// Size: 0x30
class UFortObjectiveFailedParams : public UFortMissionEventParams
{
	class AFortObjectiveBase* FailedObjective; // 0x28 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortObjectiveFailedParams.SetParams (Underlying native function: SetParams 0x8b2ec10)
	void SetParams(class AFortObjectiveBase*& FailedObjective, class UFortObjectiveFailedParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectiveFailedParams.BreakParams (Underlying native function: BreakParams 0x8b29104)
	void BreakParams(class AFortObjectiveBase*& FailedObjective); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

