// Class /Script/FortniteGame.FortMinigameProgressComponent
// Size: 0x200
class UFortMinigameProgressComponent : public UFortMinigameLogicComponent
{
	struct FMulticastInlineDelegate ProgressStartedDelegate; // 0x168 (0x10)
	struct FMulticastInlineDelegate ProgressFinishedDelegate; // 0x178 (0x10)
	struct FMulticastInlineDelegate ProgressAbortedDelegate; // 0x188 (0x10)
	struct FMulticastInlineDelegate ProgressRevertedDelegate; // 0x198 (0x10)
	float ActivationTime; // 0x1a8 (0x4)
	unsigned char padding_1ac[0x54]; // 0x1ac (0x54)

	/* Functions */

	// Function /Script/FortniteGame.FortMinigameProgressComponent.StartProgress (Underlying native function: StartProgress 0x8b1016c)
	void StartProgress(class APlayerState*& PlayerState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameProgressComponent.RevertProgress (Underlying native function: RevertProgress 0x8b0d8a8)
	void RevertProgress(class APlayerState*& PlayerState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameProgressComponent.HasActivationTime (Underlying native function: HasActivationTime 0x8b0b0e8)
	bool HasActivationTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameProgressComponent.FinishProgress (Underlying native function: FinishProgress 0x8b08194)
	void FinishProgress(class APlayerState*& PlayerState); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigameProgressComponent.AbortProgress (Underlying native function: AbortProgress 0x8b05aac)
	void AbortProgress(class APlayerState*& PlayerState); // (Final | Native | Public | BlueprintCallable)
};

