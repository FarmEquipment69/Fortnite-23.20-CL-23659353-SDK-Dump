// ScriptStruct /Script/Party.PartyMemberJoinInProgressResponse
// Size: 0x48
struct FPartyMemberJoinInProgressResponse
{
	struct FUniqueNetIdRepl Requester; // 0x0 (0x30)
	int64_t RequestTime; // 0x30 (0x8)
	int64_t ResponseTime; // 0x38 (0x8)
	unsigned char DenialReason; // 0x40 (0x1)
	unsigned char padding_41[0x7]; // 0x41 (0x7)
};

