// Class /Script/FortniteGame.FortMinigameObjectiveComponent
// Size: 0x1a8
class UFortMinigameObjectiveComponent : public UFortMinigameLogicComponent
{
	struct FMulticastInlineDelegate OnObjectiveUpdated; // 0x168 (0x10)
	struct FMulticastInlineDelegate OnObjectiveStateChanged; // 0x178 (0x10)
	struct FMulticastInlineDelegate OnObjectiveAllowedInteractionChanged; // 0x188 (0x10)
	int TrackedIndex; // 0x198 (0x4)
	float ProgressPercentage; // 0x19c (0x4)
	unsigned char TrackedState; // 0x1a0 (0x1)
	unsigned char TrackedStateOwnerTeam; // 0x1a1 (0x1)
	bool bIsInteractionAllowed; // 0x1a2 (0x1)
	enum EObjectiveType ObjectiveType; // 0x1a3 (0x1)
	bool bPurgeTrackingHistoryOnRemoval; // 0x1a4 (0x1)
	unsigned char padding_1a5[0x3]; // 0x1a5 (0x3)

	/* Functions */

	// Function /Script/FortniteGame.FortMinigameObjectiveComponent.StopTracking (Underlying native function: StopTracking 0x8b104f8)
	void StopTracking(bool& bPurgeHistory, float& Percentage); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameObjectiveComponent.StartTracking (Underlying native function: StartTracking 0x8b10234)
	void StartTracking(int& IndicatorPresetIndex, float& Percentage, enum EObjectiveType& Type, unsigned char& State, unsigned char& StateOwnerTeam, bool& bInIsInteractionAllowed); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameObjectiveComponent.SetTrackedState (Underlying native function: SetTrackedState 0x8b0f0d8)
	void SetTrackedState(unsigned char& InState, unsigned char& InStateOwnerTeam); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameObjectiveComponent.SetTrackedProgress (Underlying native function: SetTrackedProgress 0x8b0f030)
	void SetTrackedProgress(float& Percentage); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameObjectiveComponent.SetIsInteractionAllowed (Underlying native function: SetIsInteractionAllowed 0x8b0e1b8)
	void SetIsInteractionAllowed(bool& bInIsInteractionAllowed); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

