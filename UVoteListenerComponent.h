// Class /Script/VotingFramework.VoteListenerComponent
// Size: 0x180
class UVoteListenerComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnVoteSessionSetupEvent; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnVoteSessionVotingEvent; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnVoteSetupEvent; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnVoteStartEvent; // 0xd0 (0x10)
	struct FMulticastInlineDelegate OnVoteChangeEvent; // 0xe0 (0x10)
	struct FMulticastInlineDelegate OnVoteEndEvent; // 0xf0 (0x10)
	struct FMulticastInlineDelegate OnVoteSessionCompleteEvent; // 0x100 (0x10)
	struct FMulticastInlineDelegate OnVoteSessionShutdownEvent; // 0x110 (0x10)
	struct FGameplayTagContainer RequestedVoteSessionIds; // 0x120 (0x20)
	struct FGameplayTagContainer RequestedVoteIds; // 0x140 (0x20)
	struct FGameplayTagContainer RequestedVoteSelectionIds; // 0x160 (0x20)

	/* Functions */

	// Function /Script/VotingFramework.VoteListenerComponent.OnVoteStart (Underlying native function: OnVoteStart 0x7dd5c30)
	void OnVoteStart(struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, enum EVoteState& VoteState); // (Native | Protected | HasOutParms)

	// Function /Script/VotingFramework.VoteListenerComponent.OnVoteSetup (Underlying native function: OnVoteSetup 0x7dd5b10)
	void OnVoteSetup(struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, enum EVoteState& VoteState); // (Native | Protected | HasOutParms)

	// Function /Script/VotingFramework.VoteListenerComponent.OnVoteSessionVoting (Underlying native function: OnVoteSessionVoting 0x7dd59f0)
	void OnVoteSessionVoting(struct FGameplayTag& VoteSessionId, struct FGameplayTag& StartingVoteId, enum EVoteSessionState& SessionState); // (Native | Protected | HasOutParms)

	// Function /Script/VotingFramework.VoteListenerComponent.OnVoteSessionShutdown (Underlying native function: OnVoteSessionShutdown 0x7dd5960)
	void OnVoteSessionShutdown(struct FGameplayTag& VoteSessionId); // (Native | Protected | HasOutParms)

	// Function /Script/VotingFramework.VoteListenerComponent.OnVoteSessionSetup (Underlying native function: OnVoteSessionSetup 0x7dd57f8)
	void OnVoteSessionSetup(struct FGameplayTag& VoteSessionId, struct FGameplayTag& StartingVoteId, enum EVoteSessionNetworkType& NetworkType, enum EVoteSessionState& SessionState); // (Native | Protected | HasOutParms)

	// Function /Script/VotingFramework.VoteListenerComponent.OnVoteSessionComplete (Underlying native function: OnVoteSessionComplete 0x7dd5768)
	void OnVoteSessionComplete(struct FGameplayTag& VoteSessionId); // (Native | Protected | HasOutParms)

	// Function /Script/VotingFramework.VoteListenerComponent.OnVoteEnd (Underlying native function: OnVoteEnd 0x7dd55f8)
	void OnVoteEnd(struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, struct FGameplayTag& WinningVoteSelectionId, enum EVoteState& VoteState); // (Native | Protected | HasOutParms)

	// Function /Script/VotingFramework.VoteListenerComponent.OnVoteChange (Underlying native function: OnVoteChange 0x7dd5444)
	void OnVoteChange(struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, struct FGameplayTag& VoteSelectionId, int& ServerVoteTotal, int& AllServersVoteTotal); // (Native | Protected | HasOutParms)
};

