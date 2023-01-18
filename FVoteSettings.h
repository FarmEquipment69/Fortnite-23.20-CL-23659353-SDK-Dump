// ScriptStruct /Script/VotingFramework.VoteSettings
// Size: 0x30
struct FVoteSettings
{
	struct FGameplayTag VoteId; // 0x0 (0x4)
	bool bLocksSelection; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct FText VoteText; // 0x8 (0x18)
	struct TArray<struct FVoteSelectionSettings> VoteSelections; // 0x20 (0x10)
};

