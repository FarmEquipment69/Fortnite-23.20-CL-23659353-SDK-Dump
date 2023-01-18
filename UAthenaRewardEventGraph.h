// Class /Script/FortniteGame.AthenaRewardEventGraph
// Size: 0x430
class UAthenaRewardEventGraph : public UFortPersistableItemDefinition
{
	struct FString CalendarEventName; // 0x3a8 (0x10)
	struct FString CalendarEventType; // 0x3b8 (0x10)
	struct TWeakObjectPtr<class UFortAthenaRewardEventGraphPurchaseToken> PurchaseToken; // 0x3c8 (0x28)
	struct TArray<struct FRewardKeyData> RewardKey; // 0x3f0 (0x10)
	bool bRewardKeysInternally; // 0x400 (0x1)
	unsigned char unreflected_401[0x7]; // 0x401 (0x7) 
	struct TArray<struct FRewardNode> Rewards; // 0x408 (0x10)
	struct TArray<struct TWeakObjectPtr<class UFortItemDefinition>> ItemsToCleanUpUponRemoval; // 0x418 (0x10)
	class UAthenaRewardEventGraphCosmeticItemDefinition* CosmeticRandomnes; // 0x428 (0x8)
};

