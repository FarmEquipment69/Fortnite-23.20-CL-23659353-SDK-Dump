// Class /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy
// Size: 0x38
class UFortCheatManager_FakeKillRelevancy : public UFortCheatManager_Coupled
{

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyTestAlgorithm (Underlying native function: FakeKillRelevancyTestAlgorithm 0x76c1584)
	void FakeKillRelevancyTestAlgorithm(int& NumPlayers, struct FString& MaxPlayersRemainingAfterPhases, int& MinSquadSize, int& MaxSquadSize, int& Iterations, int& LogVerbosity); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyStartNextWave (Underlying native function: FakeKillRelevancyStartNextWave 0x26daa0c)
	void FakeKillRelevancyStartNextWave(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancySetUpPhase (Underlying native function: FakeKillRelevancySetUpPhase 0x76c1394)
	void FakeKillRelevancySetUpPhase(int& MaxPlayersRemaining, struct FString& ReasonGameplayTagString, int& NumWaves, float& RelevancyDelay); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyReset (Underlying native function: FakeKillRelevancyReset 0x26daa0c)
	void FakeKillRelevancyReset(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyDebug (Underlying native function: FakeKillRelevancyDebug 0x71a7128)
	void FakeKillRelevancyDebug(float& TextScale); // (Final | Exec | Native | Public)
};

