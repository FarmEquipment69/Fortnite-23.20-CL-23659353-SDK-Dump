// DelegateFunction /Script/VotingFramework.OnVoteSessionSetup__DelegateSignature
// Size: 0xc
struct FOnVoteSessionSetup__DelegateSignature
{
	struct FGameplayTag VoteSessionId; // 0x0 (0x4)
	struct FGameplayTag StartingVoteId; // 0x4 (0x4)
	enum EVoteSessionNetworkType NetworkType; // 0x8 (0x1)
	enum EVoteSessionState SessionState; // 0x9 (0x1)
	unsigned char padding_a[0x2]; // 0xa (0x2)
};

