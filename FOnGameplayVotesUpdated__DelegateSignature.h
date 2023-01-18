// DelegateFunction /Script/FortniteGame.OnGameplayVotesUpdated__DelegateSignature
// Size: 0x18
struct FOnGameplayVotesUpdated__DelegateSignature
{
	enum EFortVoteType VoteType; // 0x0 (0x1)
	enum EFortVoteStatus VoteStatus; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	int VoteResult; // 0x4 (0x4)
	struct TArray<struct FVoter> Voters; // 0x8 (0x10)
};

