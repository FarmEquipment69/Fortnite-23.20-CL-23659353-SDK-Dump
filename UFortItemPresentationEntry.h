// Class /Script/FortniteUI.FortItemPresentationEntry
// Size: 0x1510
class UFortItemPresentationEntry : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x8]; // 0x1430 (0x8) 
	class UFortCosmeticItemCard* ItemCard; // 0x1438 (0x8)
	class UCommonTextBlock* TextCount; // 0x1440 (0x8)
	class UFortItem* FortItem; // 0x1448 (0x8)
	unsigned char unreflected_1450[0x98]; // 0x1450 (0x98) 
	struct TWeakObjectPtr<class UTexture2D> RewardTexture; // 0x14e8 (0x28)

	/* Functions */

	// Function /Script/FortniteUI.FortItemPresentationEntry.OnIsPaidBattlePassRewardSet (Has no native function)
	void OnIsPaidBattlePassRewardSet(bool& bIsPaidBattlePassReward); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPresentationEntry.OnInitialIconAnimation (Has no native function)
	void OnInitialIconAnimation(); // (Event | Protected | BlueprintEvent)
};

