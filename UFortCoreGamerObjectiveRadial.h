// Class /Script/FortniteUI.FortCoreGamerObjectiveRadial
// Size: 0x270
class UFortCoreGamerObjectiveRadial : public UUserWidget
{
	int TrackedIndex; // 0x268 (0x4)
	unsigned char padding_26c[0x4]; // 0x26c (0x4)

	/* Functions */

	// Function /Script/FortniteUI.FortCoreGamerObjectiveRadial.UpdateCaptureState (Underlying native function: UpdateCaptureState 0xa669d9c)
	void UpdateCaptureState(enum ECaptureState& NewCaptureState, enum ECaptureState& OldCaptureState, unsigned char& TrackedStateOwnerTeam, float& Progress); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCoreGamerObjectiveRadial.OnTrackedObjectiveUpdated (Has no native function)
	void OnTrackedObjectiveUpdated(struct FTrackedObjective& CurrentTrackedObjective); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortCoreGamerObjectiveRadial.OnTrackedObjectiveSet (Has no native function)
	void OnTrackedObjectiveSet(struct FTrackedObjective& NewTrackedObjective); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortCoreGamerObjectiveRadial.OnObjectiveOwningTeamChanged (Has no native function)
	void OnObjectiveOwningTeamChanged(unsigned char& NewTeam, unsigned char& OldTeam, bool& bForceUpdate); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortCoreGamerObjectiveRadial.OnObjectiveDisabled (Has no native function)
	void OnObjectiveDisabled(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCoreGamerObjectiveRadial.OnObjectiveContested (Has no native function)
	void OnObjectiveContested(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCoreGamerObjectiveRadial.OnObjectiveCaptured (Has no native function)
	void OnObjectiveCaptured(unsigned char& OwningTeam); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCoreGamerObjectiveRadial.OnObjectiveBeingNeutralized (Has no native function)
	void OnObjectiveBeingNeutralized(unsigned char& NeutralizingTeam, float& Percentage); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCoreGamerObjectiveRadial.OnObjectiveBeingDeneutralized (Has no native function)
	void OnObjectiveBeingDeneutralized(unsigned char& DeneutralizingTeam, float& Percentage); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCoreGamerObjectiveRadial.OnObjectiveBeingDecaptured (Has no native function)
	void OnObjectiveBeingDecaptured(unsigned char& DecapturingTeam, float& Percentage); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCoreGamerObjectiveRadial.OnObjectiveBeingCaptured (Has no native function)
	void OnObjectiveBeingCaptured(unsigned char& CapturingTeam, float& Percentage); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCoreGamerObjectiveRadial.OnObjectiveBecameNeutral (Has no native function)
	void OnObjectiveBecameNeutral(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCoreGamerObjectiveRadial.HandleTrackedObjectiveUpdated (Underlying native function: HandleTrackedObjectiveUpdated 0xa664d70)
	void HandleTrackedObjectiveUpdated(int& InTrackedIndex); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortCoreGamerObjectiveRadial.HandleTrackedObjectiveTeamUpdated (Underlying native function: HandleTrackedObjectiveTeamUpdated 0xa664cf0)
	void HandleTrackedObjectiveTeamUpdated(int& InTrackedIndex); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortCoreGamerObjectiveRadial.GetObjectiveTracker (Underlying native function: GetObjectiveTracker 0xa661a7c)
	class UFortMinigameObjectiveTrackerComponent* GetObjectiveTracker(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCoreGamerObjectiveRadial.GetNormalizedDistanceFromScreenCenter (Underlying native function: GetNormalizedDistanceFromScreenCenter 0xa661990)
	float GetNormalizedDistanceFromScreenCenter(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCoreGamerObjectiveRadial.GetMinigame (Underlying native function: GetMinigame 0xa6617f0)
	class AFortMinigame* GetMinigame(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

