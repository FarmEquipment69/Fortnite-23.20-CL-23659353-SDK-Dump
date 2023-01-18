// Class /Script/SaveTheWorldUI.FortRewardExpeditionWidget
// Size: 0x320
class UFortRewardExpeditionWidget : public UFortRewardNotificationSubWidget
{
	struct FMulticastInlineDelegate OnMcpError; // 0x2b8 (0x10)
	unsigned char padding_2c8[0x58]; // 0x2c8 (0x58)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortRewardExpeditionWidget.OnCollectExpeditionCompleted (Has no native function)
	void OnCollectExpeditionCompleted(class UFortExpeditionItem*& Expedition, bool& bSucceeded, struct TArray<struct FFortItemInstanceQuantityPair>& Rewards); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardExpeditionWidget.CollectExpedition (Underlying native function: CollectExpedition 0x75be474)
	void CollectExpedition(class UFortExpeditionItem*& Expedition); // (Final | Native | Public | BlueprintCallable)
};

