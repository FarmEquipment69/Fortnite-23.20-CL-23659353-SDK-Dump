// Class /Script/EventScreenBase.FortEventScreenBase
// Size: 0x8c8
class UFortEventScreenBase : public UFortItemPreviewScreen
{
	unsigned char unreflected_668[0x8]; // 0x668 (0x8) 
	struct TArray<class UNamedSlot*> LayoutTemplateSlots; // 0x670 (0x10)
	class UPanelWidget* PanelLandingScreen; // 0x680 (0x8)
	class UFortLazyImage* LazyImageKeyArt; // 0x688 (0x8)
	class UCommonButtonBase* ButtonViewQuests; // 0x690 (0x8)
	class UCommonButtonBase* ButtonMoreInfo; // 0x698 (0x8)
	class UCommonButtonBase* ButtonPurchaseReward; // 0x6a0 (0x8)
	class UCommonButtonBase* ButtonPreview; // 0x6a8 (0x8)
	class UPanelWidget* PanelRewardPreview; // 0x6b0 (0x8)
	class UCommonButtonBase* ButtonPrevious; // 0x6b8 (0x8)
	class UCommonButtonBase* ButtonNext; // 0x6c0 (0x8)
	class UPanelWidget* PanelLoadError; // 0x6c8 (0x8)
	class UCommonButtonBase* ButtonClose; // 0x6d0 (0x8)
	class UCommonButtonBase* ButtonMobileClose; // 0x6d8 (0x8)
	class UCommonTextBlock* TextItemDescription; // 0x6e0 (0x8)
	class UCommonTextBlock* TextItemName; // 0x6e8 (0x8)
	class UCommonTextBlock* TextSetDetails; // 0x6f0 (0x8)
	class UAthenaRewardItemTypeRarityTag* ItemRewardTag; // 0x6f8 (0x8)
	class UFortEventScreenData* EventScreenData; // 0x700 (0x8)
	class UFortChallengeBundleItemDefinition* LoadedQuestBundle; // 0x708 (0x8)
	class AFortItemPreviewWorld* CachedVaultWorld; // 0x710 (0x8)
	class UFortItem* DefaultItemToPreview; // 0x718 (0x8)
	unsigned char padding_720[0x1a8]; // 0x720 (0x1a8)

	/* Functions */

	// Function /Script/EventScreenBase.FortEventScreenBase.HandleToggleFullscreenMap (Underlying native function: HandleToggleFullscreenMap 0x7434224)
	void HandleToggleFullscreenMap(bool& bVisible); // (Final | Native | Private)

	// Function /Script/EventScreenBase.FortEventScreenBase.HandleGiftBoxClosed (Underlying native function: HandleGiftBoxClosed 0x7433f70)
	void HandleGiftBoxClosed(); // (Final | Native | Private)
};

