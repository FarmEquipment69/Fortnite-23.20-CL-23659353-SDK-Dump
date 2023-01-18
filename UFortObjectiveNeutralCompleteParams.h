// Class /Script/FortniteGame.FortObjectiveNeutralCompleteParams
// Size: 0x30
class UFortObjectiveNeutralCompleteParams : public UFortMissionEventParams
{
	class AFortObjectiveBase* NeutrallyCompletedObjective; // 0x28 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortObjectiveNeutralCompleteParams.SetParams (Underlying native function: SetParams 0x8b2ec10)
	void SetParams(class AFortObjectiveBase*& NeutrallyCompletedObjective, class UFortObjectiveNeutralCompleteParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortObjectiveNeutralCompleteParams.BreakParams (Underlying native function: BreakParams 0x8b29104)
	void BreakParams(class AFortObjectiveBase*& NeutrallyCompletedObjective); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

