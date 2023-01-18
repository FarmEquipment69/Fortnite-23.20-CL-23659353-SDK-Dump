// Class /Script/FortniteUI.AthenaContextualChallengesWidget
// Size: 0x378
class UAthenaContextualChallengesWidget : public UAthenaChallengesWidget
{

	/* Functions */

	// Function /Script/FortniteUI.AthenaContextualChallengesWidget.ShouldOutroAutomatically (Underlying native function: ShouldOutroAutomatically 0xa470d88)
	bool ShouldOutroAutomatically(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaContextualChallengesWidget.OnResetOutroDelay (Has no native function)
	void OnResetOutroDelay(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaContextualChallengesWidget.OnNewContextualHeader (Has no native function)
	void OnNewContextualHeader(struct FText& NewText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaContextualChallengesWidget.HandleToggleFullscreenMap (Underlying native function: HandleToggleFullscreenMap 0xa470634)
	void HandleToggleFullscreenMap(bool& bFullscreenMapVisible); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaContextualChallengesWidget.HandleNewContextualObjectives (Underlying native function: HandleNewContextualObjectives 0xa470140)
	void HandleNewContextualObjectives(struct TArray<class UFortQuestItem*>& InContextualQuests); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.AthenaContextualChallengesWidget.GetOutroDelay (Underlying native function: GetOutroDelay 0xa46fea4)
	float GetOutroDelay(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

