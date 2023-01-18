// Class /Script/FortniteUI.FortNotificationEntry_ReceivedItem
// Size: 0x300
class UFortNotificationEntry_ReceivedItem : public UFortNotificationEntry
{
	unsigned char unreflected_2d0[0x8]; // 0x2d0 (0x8) 
	class UCommonTextBlock* TextRewardType; // 0x2d8 (0x8)
	class UCommonTextBlock* TextHeader; // 0x2e0 (0x8)
	class UCommonTextBlock* TextDescription; // 0x2e8 (0x8)
	class UFortLazyImage* RewardPreview; // 0x2f0 (0x8)
	class UFortLazyImage* RewardPreviewShadow; // 0x2f8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortNotificationEntry_ReceivedItem.UpdateVisuals (Has no native function)
	void UpdateVisuals(class UFortItemDefinition*& RewardItem, int& ItemQuantity); // (Event | Public | BlueprintEvent)
};

