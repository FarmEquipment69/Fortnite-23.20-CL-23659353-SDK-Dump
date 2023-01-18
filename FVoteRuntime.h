// ScriptStruct /Script/VotingFramework.VoteRuntime
// Size: 0x40
struct FVoteRuntime : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class UWorld* WorldRef; // 0x10 (0x8)
	struct FName VoteSessionId; // 0x18 (0x4)
	struct FName VoteId; // 0x1c (0x4)
	struct TArray<struct FName> VoteSelectionIds; // 0x20 (0x10)
	enum EVoteState VoteState; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	struct FName VoteSelectionWinningResult; // 0x34 (0x4)
	struct FName ShadowVoteSelectionWinningResult; // 0x38 (0x4)
	enum EVoteState ShadowVoteState; // 0x3c (0x1)
	unsigned char padding_3d[0x3]; // 0x3d (0x3)
};

