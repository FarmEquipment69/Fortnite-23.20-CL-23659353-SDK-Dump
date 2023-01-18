// DelegateFunction /Script/VotingFramework.OnVoteEnd__DelegateSignature
// Size: 0x10
struct FOnVoteEnd__DelegateSignature
{
	struct FGameplayTag VoteSessionId; // 0x0 (0x4)
	struct FGameplayTag VoteId; // 0x4 (0x4)
	struct FGameplayTag WinningVoteSelectionId; // 0x8 (0x4)
	enum EVoteState VoteState; // 0xc (0x1)
	unsigned char padding_d[0x3]; // 0xd (0x3)
};

