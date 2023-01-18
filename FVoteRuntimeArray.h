// ScriptStruct /Script/VotingFramework.VoteRuntimeArray
// Size: 0x120
struct FVoteRuntimeArray : FFastArraySerializer
{
	class UWorld* WorldRef; // 0x108 (0x8)
	struct TArray<struct FVoteRuntime> VotingResults; // 0x110 (0x10)
};

