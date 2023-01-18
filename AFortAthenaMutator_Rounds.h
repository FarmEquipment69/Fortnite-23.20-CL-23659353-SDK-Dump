// Class /Script/FortniteGame.FortAthenaMutator_Rounds
// Size: 0x468
class AFortAthenaMutator_Rounds : public AFortAthenaMutator
{
	unsigned char unreflected_330[0x20]; // 0x330 (0x20) 
	struct FMulticastInlineDelegate OnPhaseChanged; // 0x350 (0x10)
	struct FMulticastInlineDelegate OnRoundAdvanced; // 0x360 (0x10)
	struct FText HUDLoadingReasonText; // 0x370 (0x18)
	struct FScalableFloat NextRoundFadeOutDuration; // 0x388 (0x28)
	struct FScalableFloat RoundEndTimeDilationDuration; // 0x3b0 (0x28)
	struct FScalableFloat RoundEndDuration; // 0x3d8 (0x28)
	struct FScalableFloat TimeUntilRoundEndUICoversScreen; // 0x400 (0x28)
	struct FScalableFloat RoundEndUIDuration; // 0x428 (0x28)
	unsigned char unreflected_450[0x1]; // 0x450 (0x1) 
	enum EAthenaRoundsMutatorPhase RoundPhase; // 0x451 (0x1)
	unsigned char unreflected_452[0x2]; // 0x452 (0x2) 
	int CurrentRoundNum; // 0x454 (0x4)
	class AFortAthenaMutator_MatchConditionManager* MatchConditionManager; // 0x458 (0x8)
	unsigned char padding_460[0x8]; // 0x460 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_Rounds.OnRep_RoundPhase (Underlying native function: OnRep_RoundPhase 0x8505dfc)
	void OnRepRoundPhase(enum EAthenaRoundsMutatorPhase& OldRoundPhase); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_Rounds.OnRep_CurrentRoundNum (Underlying native function: OnRep_CurrentRoundNum 0x8505d98)
	void OnRepCurrentRoundNum(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_Rounds.OnMatchConditionTimingSatisfied (Underlying native function: OnMatchConditionTimingSatisfied 0x72ab98c)
	void OnMatchConditionTimingSatisfied(enum EMatchConditionMutatorTimingType& TimingType); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_Rounds.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x72ab98c)
	void OnGamePhaseChanged(enum EAthenaGamePhase& NewPhase); // (Final | 0x00000002 | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_Rounds.GetRoundNum (Underlying native function: GetRoundNum 0x2d014bc)
	int GetRoundNum(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Rounds.GetPhase (Underlying native function: GetPhase 0x8504e90)
	enum EAthenaRoundsMutatorPhase GetPhase(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Rounds.GetLastCompletedRoundNum (Underlying native function: GetLastCompletedRoundNum 0x8504ce4)
	int GetLastCompletedRoundNum(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

