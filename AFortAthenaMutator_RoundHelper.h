// Class /Script/FortniteGame.FortAthenaMutator_RoundHelper
// Size: 0x3a8
class AFortAthenaMutator_RoundHelper : public AFortAthenaMutator
{
	unsigned char unreflected_330[0x30]; // 0x330 (0x30) 
	int NumOfRounds; // 0x360 (0x4)
	int NumOfTeams; // 0x364 (0x4)
	unsigned char StartingTeamNum; // 0x368 (0x1)
	unsigned char unreflected_369[0x7]; // 0x369 (0x7) 
	struct TArray<struct FPOIRoundInfo> RoundInfos; // 0x370 (0x10)
	struct TArray<struct FPOIRoundInfo> GeneratedRoundInfo; // 0x380 (0x10)
	struct TArray<class AFortPlayerStart*> UsedSpawnSlots; // 0x390 (0x10)
	unsigned char padding_3a0[0x8]; // 0x3a0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_RoundHelper.StartNextRound (Underlying native function: StartNextRound 0x8506278)
	void StartNextRound(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_RoundHelper.SetCurrentRound (Underlying native function: SetCurrentRound 0x8506154)
	void SetCurrentRound(int& NewRound); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_RoundHelper.OnInitialTeleportComplete (Underlying native function: OnInitialTeleportComplete 0x8505604)
	void OnInitialTeleportComplete(class AFortPlayerPawn*& PlayerPawn); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_RoundHelper.GetNumOfRounds (Underlying native function: GetNumOfRounds 0x6a4ab98)
	int GetNumOfRounds(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_RoundHelper.GetCurrentRound (Underlying native function: GetCurrentRound 0x8504cb0)
	int GetCurrentRound(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

