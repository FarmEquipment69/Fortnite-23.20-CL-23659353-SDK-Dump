// Class /Script/SBMusicalTargets.SBMusicalTargetsInterface
// Size: 0x28
class ISBMusicalTargetsInterface : public IInterface
{

	/* Functions */

	// Function /Script/SBMusicalTargets.SBMusicalTargetsInterface.WasTargetHit (Has no native function)
	bool WasTargetHit(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/SBMusicalTargets.SBMusicalTargetsInterface.UpdateProgress (Has no native function)
	void UpdateProgress(float& Progress); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/SBMusicalTargets.SBMusicalTargetsInterface.ResetTarget (Has no native function)
	void ResetTarget(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/SBMusicalTargets.SBMusicalTargetsInterface.RemoveInteractionPointerIndex (Has no native function)
	void RemoveInteractionPointerIndex(int& PointerIndex); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/SBMusicalTargets.SBMusicalTargetsInterface.PlayFailure (Has no native function)
	void PlayFailure(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/SBMusicalTargets.SBMusicalTargetsInterface.PlayCue (Has no native function)
	class UUserWidget* PlayCue(struct FSBMusicalTargetsCueId& CueId); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/SBMusicalTargets.SBMusicalTargetsInterface.IsValidPointerIndex (Has no native function)
	bool IsValidPointerIndex(int& PointerIndex); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/SBMusicalTargets.SBMusicalTargetsInterface.GetHighlightedCueID (Has no native function)
	struct FSBMusicalTargetsCueId GetHighlightedCueID(class UUserWidget*& Widget); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/SBMusicalTargets.SBMusicalTargetsInterface.EvaluateHit (Has no native function)
	void EvaluateHit(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/SBMusicalTargets.SBMusicalTargetsInterface.AddInteractionPointerIndex (Has no native function)
	void AddInteractionPointerIndex(int& PointerIndex); // (Event | Public | BlueprintCallable | BlueprintEvent)
};

