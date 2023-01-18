// ScriptStruct /Script/FortniteGame.RewardKeyData
// Size: 0x68
struct FRewardKeyData
{
	struct TWeakObjectPtr<class UFortTokenType> Key; // 0x0 (0x28)
	struct FGameplayTag NodeTagMatchReq; // 0x28 (0x4)
	int RewardKeyMaxCount; // 0x2c (0x4)
	int RewardKeyInitialCount; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct TWeakObjectPtr<class UFortAccountItemDefinition> UnlockingItemDef; // 0x38 (0x28)
	bool bUseUnlockingItemDisplayName; // 0x60 (0x1)
	unsigned char padding_61[0x7]; // 0x61 (0x7)
};

