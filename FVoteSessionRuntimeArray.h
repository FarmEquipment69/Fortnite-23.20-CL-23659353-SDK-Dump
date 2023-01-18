// ScriptStruct /Script/VotingFramework.VoteSessionRuntimeArray
// Size: 0x120
struct FVoteSessionRuntimeArray : FFastArraySerializer
{
	class UWorld* WorldRef; // 0x108 (0x8)
	struct TArray<struct FVoteSessionRuntime> VotingSessions; // 0x110 (0x10)
};

