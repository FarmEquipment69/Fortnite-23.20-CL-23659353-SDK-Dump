// Class /Script/FortniteUI.AthenaBattlePassTracker
// Size: 0x380
class UAthenaBattlePassTracker : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	struct FText OutfitsText; // 0x298 (0x18)
	struct FText VBucksText; // 0x2b0 (0x18)
	struct FText EmotesText; // 0x2c8 (0x18)
	struct FText MoreRewardsText; // 0x2e0 (0x18)
	struct FText BuyBattlePassTextFormat; // 0x2f8 (0x18)
	unsigned char unreflected_310[0x40]; // 0x310 (0x40) 
	class UCommonRichTextBlock* RichTextPaidItemsCollected; // 0x350 (0x8)
	class UAthenaBattlePassItemTracker* BattlePassItemTracker01; // 0x358 (0x8)
	class UAthenaBattlePassItemTracker* BattlePassItemTracker02; // 0x360 (0x8)
	class UAthenaBattlePassItemTracker* BattlePassItemTracker03; // 0x368 (0x8)
	class UAthenaBattlePassItemTracker* BattlePassItemTracker04; // 0x370 (0x8)
	class UBattlePassScreenPurchaseButton* ButtonPurchaseBattlepass; // 0x378 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaBattlePassTracker.HandlePassPurchaseFlowStarted (Underlying native function: HandlePassPurchaseFlowStarted 0xa7e7104)
	void HandlePassPurchaseFlowStarted(); // (Final | Native | Private)
};

