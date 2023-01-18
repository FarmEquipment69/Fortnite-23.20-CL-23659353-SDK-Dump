// Class /Script/GiftingUI.AthenaGiftingPurchasePanel
// Size: 0x3f0
class UAthenaGiftingPurchasePanel : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x18]; // 0x3a8 (0x18) 
	class UAthenaGiftingPurchaseButton* ButtonPurchaseGift; // 0x3c0 (0x8)
	class UFortSocialAvatarIcon* AvatarMemberIcon; // 0x3c8 (0x8)
	class UCommonTextBlock* TextSocialNameInfo; // 0x3d0 (0x8)
	class UCommonTextBlock* TextItemsCount; // 0x3d8 (0x8)
	class UCommonTextBlock* TextOfferName; // 0x3e0 (0x8)
	class UTileView* TileViewItems; // 0x3e8 (0x8)

	/* Functions */

	// Function /Script/GiftingUI.AthenaGiftingPurchasePanel.PlayIntroAnimation (Has no native function)
	void PlayIntroAnimation(); // (Event | Public | BlueprintEvent)
};

