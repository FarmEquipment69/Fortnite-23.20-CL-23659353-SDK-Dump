// Class /Script/VotingFramework.VoteResponderComponent
// Size: 0x1f0
class UVoteResponderComponent : public UVoteListenerComponent
{
	struct TArray<struct FVoteSelection> SupportedVoteSelections; // 0x180 (0x10)
	bool bShouldLockVotingAfterCasted; // 0x190 (0x1)
	unsigned char unreflected_191[0x7]; // 0x191 (0x7) 
	struct TMap<struct FUniqueNetIdRepl, struct FCastedVote> PlayerCastedVotesMap; // 0x198 (0x50)
	struct FName ActiveVoteSessionId; // 0x1e8 (0x4)
	struct FName ActiveVoteId; // 0x1ec (0x4)

	/* Functions */

	// Function /Script/VotingFramework.VoteResponderComponent.ServerCastVoteSelection (Underlying native function: ServerCastVoteSelection 0x7dd5d50)
	void ServerCastVoteSelection(struct FUniqueNetIdRepl& InUserId, struct FCastedVote& CastedVote); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/VotingFramework.VoteResponderComponent.CastManualVoteSelectionAtIndex (Underlying native function: CastManualVoteSelectionAtIndex 0x7dd5214)
	void CastManualVoteSelectionAtIndex(class APlayerState*& InPlayerState, int& SelectionIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VotingFramework.VoteResponderComponent.CastManualVoteSelection (Underlying native function: CastManualVoteSelection 0x7dd5144)
	void CastManualVoteSelection(class APlayerState*& InPlayerState, struct FGameplayTag& VoteSelection); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/VotingFramework.VoteResponderComponent.CastDefaultVoteSelection (Underlying native function: CastDefaultVoteSelection 0x7dd50c0)
	void CastDefaultVoteSelection(class APlayerState*& InPlayerState); // (Final | Native | Public | BlueprintCallable)
};

