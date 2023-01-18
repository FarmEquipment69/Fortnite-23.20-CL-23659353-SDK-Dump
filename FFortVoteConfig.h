// ScriptStruct /Script/FortniteGame.FortVoteConfig
// Size: 0x14
struct FFortVoteConfig
{
	int NumVoteOptions; // 0x0 (0x4)
	float VoteDuration; // 0x4 (0x4)
	float FailedVoteLockOutDuration; // 0x8 (0x4)
	int MaxVotesAllowedPerPlayer; // 0xc (0x4)
	enum EFortVoteArbitratorType VoteArbitratorType; // 0x10 (0x1)
	unsigned char padding_11[0x3]; // 0x11 (0x3)
};

