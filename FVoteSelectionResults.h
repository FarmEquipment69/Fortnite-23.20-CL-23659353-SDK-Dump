// ScriptStruct /Script/VotingFramework.VoteSelectionResults
// Size: 0x38
struct FVoteSelectionResults : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class UWorld* WorldRef; // 0x10 (0x8)
	struct FName VoteSessionId; // 0x18 (0x4)
	struct FName VoteId; // 0x1c (0x4)
	struct FName VoteSelectionId; // 0x20 (0x4)
	int ServerVoteTotal; // 0x24 (0x4)
	int AllServersVoteTotal; // 0x28 (0x4)
	int ShadowServerVoteTotal; // 0x2c (0x4)
	int ShadowAllServersVoteTotal; // 0x30 (0x4)
	unsigned char padding_34[0x4]; // 0x34 (0x4)
};

