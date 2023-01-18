// Class /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager
// Size: 0x28
class UFortPlayerAugmentCheatManager : public UChildCheatManager
{

	/* Functions */

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.StartAugmentGrantingFlow (Underlying native function: StartAugmentGrantingFlow 0x26daa0c)
	void StartAugmentGrantingFlow(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.SetPlayerAugmentRollCountSinceLastUnlock (Underlying native function: SetPlayerAugmentRollCountSinceLastUnlock 0x7239740)
	void SetPlayerAugmentRollCountSinceLastUnlock(int& RollCount); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.ServerLogDynamicWeightsForPlayer (Underlying native function: ServerLogDynamicWeightsForPlayer 0x71a6cc4)
	void ServerLogDynamicWeightsForPlayer(bool& bVeryDetailedReport); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.ResetAugmentGrantingToSeed (Underlying native function: ResetAugmentGrantingToSeed 0x7239740)
	void ResetAugmentGrantingToSeed(int& Seed); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.RemoveAllAugmentsFromBots (Underlying native function: RemoveAllAugmentsFromBots 0x26daa0c)
	void RemoveAllAugmentsFromBots(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.RemoveAllAugments (Underlying native function: RemoveAllAugments 0x26daa0c)
	void RemoveAllAugments(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.LogPlayerAugmentsLockStatus (Underlying native function: LogPlayerAugmentsLockStatus 0x26daa0c)
	void LogPlayerAugmentsLockStatus(); // (Final | Exec | Native | Public | BlueprintCallable)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.GiveAugmentToBots (Underlying native function: GiveAugmentToBots 0x6b13f58)
	void GiveAugmentToBots(struct FString& AugmentName); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.GiveAugment (Underlying native function: GiveAugment 0x6b13f58)
	void GiveAugment(struct FString& AugmentName); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.ForceSelectionAugments (Underlying native function: ForceSelectionAugments 0x7291448)
	void ForceSelectionAugments(struct FString& AugmentNameFirst, struct FString& AugmentNameSecond); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.CollectPlayerAugment (Underlying native function: CollectPlayerAugment 0x7291288)
	void CollectPlayerAugment(struct FString& TagMatch); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager.CollectAllPlayerAugments (Underlying native function: CollectAllPlayerAugments 0x26daa0c)
	void CollectAllPlayerAugments(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)
};

