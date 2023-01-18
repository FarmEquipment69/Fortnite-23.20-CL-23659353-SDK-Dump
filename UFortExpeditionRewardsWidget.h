// Class /Script/SaveTheWorldUI.FortExpeditionRewardsWidget
// Size: 0x2b8
class UFortExpeditionRewardsWidget : public UCommonUserWidget
{
	struct FMulticastInlineDelegate OnAllExpeditionsCollected; // 0x290 (0x10)
	class UCommonTileView* RewardsTileView; // 0x2a0 (0x8)
	bool bPendingCollection; // 0x2a8 (0x1)
	unsigned char padding_2a9[0xf]; // 0x2a9 (0xf)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortExpeditionRewardsWidget.RefreshRewardsUI (Underlying native function: RefreshRewardsUI 0x757259c)
	void RefreshRewardsUI(class UFortExpeditionItem*& Expedition, bool& bExpeditionSucceeded, struct TArray<struct FFortItemInstanceQuantityPair>& Rewards); // (Native | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortExpeditionRewardsWidget.ProcessNextReward (Underlying native function: ProcessNextReward 0x757215c)
	void ProcessNextReward(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortExpeditionRewardsWidget.HandleCollectionExpeditionCompleted (Underlying native function: HandleCollectionExpeditionCompleted 0x756ed08)
	void HandleCollectionExpeditionCompleted(bool& bMcpSuccess, class UFortExpeditionItem*& Expedition, bool& bExpeditionSuccess, struct TArray<struct FFortItemInstanceQuantityPair>& Rewards); // (Final | Native | Protected | HasOutParms)
};

