// Class /Script/SaveTheWorldUI.FortMissionActivationInfoSTW
// Size: 0x178
class UFortMissionActivationInfoSTW : public UObject
{
	bool bIsMultiplayer; // 0x28 (0x1)
	unsigned char unreflected_29[0x77]; // 0x29 (0x77) 
	class AFortPlayerController* FortPC; // 0xa0 (0x8)
	class AFortGameStateZone* GameStateZone; // 0xa8 (0x8)
	class UCurveFloat* DifficultyIncreaseBluGloCurve; // 0xb0 (0x8)
	unsigned char padding_b8[0xc0]; // 0xb8 (0xc0)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.TimeSecondsToText (Underlying native function: TimeSecondsToText 0x759b234)
	struct FText TimeSecondsToText(float& InSeconds); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.SubmitVote (Underlying native function: SubmitVote 0x759b170)
	void SubmitVote(enum EFortVoteType& VoteType, bool& bApprove); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.RequestVote (Underlying native function: RequestVote 0x7599d74)
	void RequestVote(enum EFortVoteType& VoteType, float& VoteDuration, float& FailedVoteLockOutDuration, enum EFortVoteArbitratorType& ArbitratorType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.IsVoteLocked (Underlying native function: IsVoteLocked 0x7599438)
	bool IsVoteLocked(enum EFortVoteType& VoteType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.IsVoteActive (Underlying native function: IsVoteActive 0x7599334)
	bool IsVoteActive(enum EFortVoteType& VoteType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.IsPlayerVoteInstigator (Underlying native function: IsPlayerVoteInstigator 0x75991a0)
	bool IsPlayerVoteInstigator(enum EFortVoteType& VoteType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.IsAnyVoteActive (Underlying native function: IsAnyVoteActive 0x7598e14)
	bool IsAnyVoteActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.HasPlayerVoted (Underlying native function: HasPlayerVoted 0x7598bd8)
	bool HasPlayerVoted(enum EFortVoteType& VoteType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.HandleTeamMemberRemoved (Underlying native function: HandleTeamMemberRemoved 0x7598aa8)
	void HandleTeamMemberRemoved(int& RemovedIndex); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.HandleTeamMemberAdded (Underlying native function: HandleTeamMemberAdded 0x75989d4)
	void HandleTeamMemberAdded(struct FFortTeamMemberInfo& NewInfo); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.HandleGameplayVoteUpdated (Underlying native function: HandleGameplayVoteUpdated 0x7597f34)
	void HandleGameplayVoteUpdated(enum EFortVoteType& VoteType, enum EFortVoteStatus& VoteStatus, int& VoteResult, struct TArray<struct FVoter>& Voters); // (Final | Native | Private | HasOutParms)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetVoteTimeRemaining (Underlying native function: GetVoteTimeRemaining 0x7597b60)
	float GetVoteTimeRemaining(enum EFortVoteType& VoteType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetVoters (Underlying native function: GetVoters 0x7597c04)
	struct TArray<struct FVoter> GetVoters(enum EFortVoteType& VoteType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetVoteCounts (Underlying native function: GetVoteCounts 0x7597a08)
	void GetVoteCounts(enum EFortVoteType& VoteType, int& OutYesVoteCount, int& OutNoVoteCount); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetStartObjectiveBluGloRequirement (Underlying native function: GetStartObjectiveBluGloRequirement 0x759784c)
	int GetStartObjectiveBluGloRequirement(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetPrimaryMissionInfo (Underlying native function: GetPrimaryMissionInfo 0x759728c)
	class UFortMissionInfo* GetPrimaryMissionInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetPrimaryMission (Underlying native function: GetPrimaryMission 0x7597268)
	class AFortMission* GetPrimaryMission(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetMissionVoteType (Underlying native function: GetMissionVoteType 0x7597178)
	enum EFortVoteType GetMissionVoteType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetMissionObjectiveTimeRemaining (Underlying native function: GetMissionObjectiveTimeRemaining 0x7597150)
	float GetMissionObjectiveTimeRemaining(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetLockoutTimeRemaining (Underlying native function: GetLockoutTimeRemaining 0x759705c)
	struct FText GetLockoutTimeRemaining(enum EFortVoteType& VoteType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetInstigatorId (Underlying native function: GetInstigatorId 0x7596b48)
	struct FUniqueNetIdRepl GetInstigatorId(enum EFortVoteType& VoteType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetIncreaseDifficultyBluGloRequirement (Underlying native function: GetIncreaseDifficultyBluGloRequirement 0x7596b24)
	int GetIncreaseDifficultyBluGloRequirement(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetDeltaRewards (Underlying native function: GetDeltaRewards 0x7596604)
	void GetDeltaRewards(int& BaseDifficultyIncreaseTier, int& ComparedDifficultyIncreaseTier, struct TArray<struct FFortItemDelta>& DeltaRewards); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetAvailableBluGloCount (Underlying native function: GetAvailableBluGloCount 0x7596494)
	int GetAvailableBluGloCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetArbitratorType (Underlying native function: GetArbitratorType 0x7596400)
	enum EFortVoteArbitratorType GetArbitratorType(enum EFortVoteType& VoteType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.DoesPrimaryMissionContainTags (Underlying native function: DoesPrimaryMissionContainTags 0x7595bc0)
	bool DoesPrimaryMissionContainTags(struct FGameplayTagContainer& Tags); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.CanRequestVote (Underlying native function: CanRequestVote 0x7595598)
	bool CanRequestVote(enum EFortVoteType& VoteType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

