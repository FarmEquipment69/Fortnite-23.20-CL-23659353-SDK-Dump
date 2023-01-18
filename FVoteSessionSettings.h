// ScriptStruct /Script/VotingFramework.VoteSessionSettings
// Size: 0x38
struct FVoteSessionSettings
{
	struct FGameplayTag VoteSessionId; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FText VoteSessionText; // 0x8 (0x18)
	struct TArray<struct FVoteSettings> VoteSettingsList; // 0x20 (0x10)
	enum EVoteSessionNetworkType NetworkType; // 0x30 (0x1)
	unsigned char padding_31[0x7]; // 0x31 (0x7)
};

