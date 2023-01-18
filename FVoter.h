// ScriptStruct /Script/FortniteGame.Voter
// Size: 0x40
struct FVoter
{
	int VoteDecision; // 0x0 (0x4)
	int LastVoteDecision; // 0x4 (0x4)
	struct FUniqueNetIdRepl NetId; // 0x8 (0x30)
	int NumVotesCast; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};

