// ScriptStruct /Script/FortniteGame.VoteData
// Size: 0x80
struct FVoteData
{
	enum EFortVoteType VoteType; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FUniqueNetIdRepl VoteInstigatorNetId; // 0x8 (0x30)
	struct FFortVoteConfig VoteConfig; // 0x38 (0x14)
	float VoteStartTime; // 0x4c (0x4)
	float VoteEndTime; // 0x50 (0x4)
	unsigned char unreflected_54[0x4]; // 0x54 (0x4) 
	struct TArray<struct FVoter> Voters; // 0x58 (0x10)
	int NumVotersWithMaxVotes; // 0x68 (0x4)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	struct FTimerHandle* EndVoteTimerHandle; // 0x70 (0x8)
	enum EFortVoteStatus VoteStatus; // 0x78 (0x1)
	unsigned char padding_79[0x7]; // 0x79 (0x7)
};

