// Class /Script/FortniteGame.AthenaRewardEventGraphItem
// Size: 0x158
class UAthenaRewardEventGraphItem : public UFortAccountItem
{
	int playerrandomseed; // 0x108 (0x4)
	unsigned char unreflected_10c[0x4]; // 0x10c (0x4) 
	int64_t rewardgraphpurchasedtimestamp; // 0x110 (0x8)
	struct FDateTime* unlockepoch; // 0x118 (0x8)
	int unlockkeysused; // 0x120 (0x4)
	bool rewardgraphpurchased; // 0x124 (0x1)
	unsigned char unreflected_125[0x3]; // 0x125 (0x3) 
	struct TArray<struct FGameplayTag> rewardnodesclaimed; // 0x128 (0x10)
	struct TArray<struct FString> playerstate; // 0x138 (0x10)
	struct TArray<struct FRewardKeyState> rewardkeys; // 0x148 (0x10)
};

