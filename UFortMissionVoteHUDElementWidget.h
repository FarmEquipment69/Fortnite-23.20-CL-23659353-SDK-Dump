// Class /Script/FortniteUI.FortMissionVoteHUDElementWidget
// Size: 0x2f8
class UFortMissionVoteHUDElementWidget : public UFortHUDElementWidget
{
	unsigned char unreflected_2f8[0x2f8]; 

	/* Functions */

	// Function /Script/FortniteUI.FortMissionVoteHUDElementWidget.RegisterFailsafeForVoteType (Underlying native function: RegisterFailsafeForVoteType 0xa849244)
	void RegisterFailsafeForVoteType(enum EFortVoteType& VoteType); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortMissionVoteHUDElementWidget.OnVoteUpdated (Has no native function)
	void OnVoteUpdated(enum EFortVoteType& VoteType, int& YesVoteCount, int& NoVoteCount); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMissionVoteHUDElementWidget.OnVoteStarted (Has no native function)
	void OnVoteStarted(enum EFortVoteType& VoteType, enum EFortVoteArbitratorType& ArbitratorType, int& YesVoteCount, int& NoVoteCount); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMissionVoteHUDElementWidget.OnVoteEnded (Has no native function)
	void OnVoteEnded(enum EFortVoteType& VoteType, enum EFortVoteArbitratorType& ArbitratorType, bool& VoteSucceeded); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMissionVoteHUDElementWidget.IsMultiplayerVote (Underlying native function: IsMultiplayerVote 0xa8484d0)
	bool IsMultiplayerVote(enum EFortVoteType& VoteType); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortMissionVoteHUDElementWidget.HasLocalPlayerVoted (Underlying native function: HasLocalPlayerVoted 0xa848388)
	bool HasLocalPlayerVoted(enum EFortVoteType& VoteType); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortMissionVoteHUDElementWidget.HandleMissionActivationVoteUpdate (Underlying native function: HandleMissionActivationVoteUpdate 0xa847c8c)
	void HandleMissionActivationVoteUpdate(enum EFortVoteType& VoteType, enum EFortVoteStatus& VoteStatus, int& VoteResult, struct TArray<struct FVoter>& Voters); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortMissionVoteHUDElementWidget.HandleDifficultyIncreaseVoteUpdate (Underlying native function: HandleDifficultyIncreaseVoteUpdate 0xa847c8c)
	void HandleDifficultyIncreaseVoteUpdate(enum EFortVoteType& VoteType, enum EFortVoteStatus& VoteStatus, int& VoteResult, struct TArray<struct FVoter>& Voters); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortMissionVoteHUDElementWidget.GetVoteTimeRemaining (Underlying native function: GetVoteTimeRemaining 0xa847a44)
	int GetVoteTimeRemaining(enum EFortVoteType& VoteType); // (Final | Native | Protected | BlueprintCallable)
};

