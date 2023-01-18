// Class /Script/SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy
// Size: 0x498
class AFortAthenaMutator_FakeKillRelevancy : public AFortAthenaMutator_SpecialRelevancy
{
	class UClass* FakeKillControllerComponentClass; // 0x438 (0x8)
	struct TArray<struct FFakeKillRelevancyPhaseData> RelevancyPhaseDataArray; // 0x440 (0x10)
	int PhaseNum; // 0x450 (0x4)
	unsigned char padding_454[0x44]; // 0x454 (0x44)

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.StartNextKillWave (Underlying native function: StartNextKillWave 0x26daa0c)
	void StartNextKillWave(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.SetUpKillPhase (Underlying native function: SetUpKillPhase 0x76c7988)
	void SetUpKillPhase(int& MaxPlayersRemaining, struct FGameplayTag& Reason, int& NumWaves, float& RelevancyDelay); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.ResetRelevancy (Underlying native function: ResetRelevancy 0x26daa0c)
	void ResetRelevancy(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.EndWave (Underlying native function: EndWave 0x76c12f0)
	void EndWave(int& EndPhaseNum, int& WaveNum); // (Final | Native | Private)
};

