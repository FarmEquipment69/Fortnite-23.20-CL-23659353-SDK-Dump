// ScriptStruct /Script/FortniteGame.TournamentPayoutData
// Size: 0x20
struct FTournamentPayoutData
{
	enum EPayoutRewardType RewardType; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FString Value; // 0x8 (0x10)
	int Quantity; // 0x18 (0x4)
	int TeamSize; // 0x1c (0x4)
};

