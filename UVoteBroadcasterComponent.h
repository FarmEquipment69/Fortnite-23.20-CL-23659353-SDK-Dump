// Class /Script/VotingFramework.VoteBroadcasterComponent
// Size: 0x510
class UVoteBroadcasterComponent : public UMeshNetworkComponent
{
	struct TArray<struct FVoteSessionSettings> VoteSessionSettingsList; // 0x150 (0x10)
	struct FVoteSessionRuntimeArray VoteSessionRuntimeList; // 0x160 (0x120)
	struct FVoteRuntimeArray VoteRuntimeList; // 0x280 (0x120)
	struct FVoteSelectionResultsArray VoteResultsList; // 0x3a0 (0x120)
	struct TMap<struct FUniqueNetIdRepl, struct FCastedVote> PlayerCastedVotesMap; // 0x4c0 (0x50)

	/* Functions */

	// Function /Script/VotingFramework.VoteBroadcasterComponent.VoteStart (Underlying native function: VoteStart 0x7dd63a8)
	void VoteStart(struct FName& VoteSessionId, struct FName& VoteId); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VotingFramework.VoteBroadcasterComponent.VoteSetup (Underlying native function: VoteSetup 0x7dd62e8)
	void VoteSetup(struct FName& VoteSessionId, struct FName& VoteId); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VotingFramework.VoteBroadcasterComponent.VoteSessionShutdown (Underlying native function: VoteSessionShutdown 0x7dd6268)
	void VoteSessionShutdown(struct FName& VoteSessionId); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VotingFramework.VoteBroadcasterComponent.VoteSessionSetup (Underlying native function: VoteSessionSetup 0x7dd6170)
	void VoteSessionSetup(struct FName& VoteSessionId, struct FName& StartingVoteId, enum EVoteSessionNetworkType& NetworkType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VotingFramework.VoteBroadcasterComponent.VoteSessionComplete (Underlying native function: VoteSessionComplete 0x7dd60f0)
	void VoteSessionComplete(struct FName& VoteSessionId); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VotingFramework.VoteBroadcasterComponent.VoteEnd (Underlying native function: VoteEnd 0x7dd5ffc)
	void VoteEnd(struct FName& VoteSessionId, struct FName& VoteId, struct FName& WinningVoteSelectionId); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VotingFramework.VoteBroadcasterComponent.ServerSubmitVotesAggregated (Underlying native function: ServerSubmitVotesAggregated 0x7dd5e8c)
	void ServerSubmitVotesAggregated(struct FName& VoteSessionId, struct FName& VoteId, struct FName& VoteSelectionId, int& VoteDelta); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/VotingFramework.VoteBroadcasterComponent.OnVoteCasted (Underlying native function: OnVoteCasted 0x7dd52d8)
	void OnVoteCasted(struct FUniqueNetIdRepl& UserNetId, struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, struct FGameplayTag& VoteSelectionId); // (Final | Native | Protected | HasOutParms)
};

