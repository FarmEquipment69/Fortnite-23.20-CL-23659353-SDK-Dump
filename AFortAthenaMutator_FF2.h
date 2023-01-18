// Class /Script/FortniteGame.FortAthenaMutator_FF2
// Size: 0x6a8
class AFortAthenaMutator_FF2 : public AFortAthenaMutator_GameModeBase
{
	unsigned char unreflected_450[0x18]; // 0x450 (0x18) 
	struct TArray<class AAthenaBuildingFoundationObjective*> FoundationsToWatch; // 0x468 (0x10)
	struct TArray<class AAthenaBuildingFoundationObjective*> AllObjectiveFoundations; // 0x478 (0x10)
	struct TArray<struct FTargetDataEntry> TargetData; // 0x488 (0x10)
	struct TArray<struct FTeamSetupDataEntry> TeamSetupData; // 0x498 (0x10)
	struct FScalableFloat LastRoundLength; // 0x4a8 (0x28)
	int CurrentRound; // 0x4d0 (0x4)
	float CurrentHealth; // 0x4d4 (0x4)
	float MaxHealth; // 0x4d8 (0x4)
	float EndOfLastRoundServerTime; // 0x4dc (0x4)
	unsigned char unreflected_4e0[0x38]; // 0x4e0 (0x38) 
	struct FAthenaGameMessageData GameMsg1x1LowHealth; // 0x518 (0x50)
	struct FAthenaGameMessageData GameMsg3x3LowHealth; // 0x568 (0x50)
	struct FAthenaGameMessageData GameMsg5x5LowHealth; // 0x5b8 (0x50)
	struct FAthenaGameMessageData GameMsgRound1Done; // 0x608 (0x50)
	struct FAthenaGameMessageData GameMsgRound2Done; // 0x658 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_FF2.UpdateHealth (Underlying native function: UpdateHealth 0x84a9da4)
	void UpdateHealth(); // (Final | 0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_FF2.OnRep_EndOfLastRoundServerTime (Underlying native function: OnRep_EndOfLastRoundServerTime 0x84a8dac)
	void OnRepEndOfLastRoundServerTime(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_FF2.OnRep_CurrentRound (Underlying native function: OnRep_CurrentRound 0x84a8d24)
	void OnRepCurrentRound(); // (Final | 0x00000002 | Native | Protected)
};

