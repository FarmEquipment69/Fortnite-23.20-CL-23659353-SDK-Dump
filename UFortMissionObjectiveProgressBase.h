// Class /Script/FortniteUI.FortMissionObjectiveProgressBase
// Size: 0x2a0
class UFortMissionObjectiveProgressBase : public UCommonUserWidget
{
	class UProgressBar* ObjectiveProgressBar; // 0x290 (0x8)
	class UCommonTextBlock* ProgressBarText; // 0x298 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortMissionObjectiveProgressBase.Update (Underlying native function: Update 0xa84ce9c)
	void Update(class AFortObjectiveBase*& Objective, int& BarIndex); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortMissionObjectiveProgressBase.GetHeightEstimate (Has no native function)
	float GetHeightEstimate(); // (Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

