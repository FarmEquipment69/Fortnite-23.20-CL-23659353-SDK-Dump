// ScriptStruct /Script/VotingFramework.VoteSessionRuntime
// Size: 0x28
struct FVoteSessionRuntime : FFastArraySerializerItem
{
	struct FName VoteSessionId; // 0xc (0x4)
	enum EVoteSessionNetworkType NetworkType; // 0x10 (0x1)
	enum EVoteSessionState VoteSessionState; // 0x11 (0x1)
	unsigned char unreflected_12[0x2]; // 0x12 (0x2) 
	struct FName CurrentVoteId; // 0x14 (0x4)
	class UWorld* WorldRef; // 0x18 (0x8)
	enum EVoteSessionState ShadowVoteSessionState; // 0x20 (0x1)
	unsigned char padding_21[0x7]; // 0x21 (0x7)
};

