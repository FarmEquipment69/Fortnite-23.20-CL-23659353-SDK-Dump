// ScriptStruct /Script/FortniteGame.CommunityVoteInfo
// Size: 0x70
struct FCommunityVoteInfo
{
	struct FString ElectionId; // 0x0 (0x10)
	struct TMap<struct FString, struct FOfferVoteInfo> VoteHistory; // 0x10 (0x50)
	struct FDateTime* LastVoteGranted; // 0x60 (0x8)
	int VotesRemaining; // 0x68 (0x4)
	unsigned char padding_6c[0x4]; // 0x6c (0x4)
};

