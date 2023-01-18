// Class /Script/GiftingUI.AthenaGiftingScreen
// Size: 0x848
class UAthenaGiftingScreen : public UFortItemPreviewScreen
{
	unsigned char unreflected_668[0x8]; // 0x668 (0x8) 
	class UFortGiftingUserSearchWidget* SearchWidgetSocialSearchWidget; // 0x670 (0x8)
	class UFortGiftingSocialUserListView* ListViewRecipients; // 0x678 (0x8)
	class UTileView* TileViewItems; // 0x680 (0x8)
	class UCommonButtonBase* ButtonBack; // 0x688 (0x8)
	class UCommonButtonBase* ButtonMobileClose; // 0x690 (0x8)
	class UCommonButtonBase* ButtonGiftingPolicy; // 0x698 (0x8)
	class UCommonButtonBase* ButtonCameraControl; // 0x6a0 (0x8)
	class UCommonTextBlock* TextOfferName; // 0x6a8 (0x8)
	class UCommonTextBlock* TextVBucksOffCount; // 0x6b0 (0x8)
	class UCommonTextBlock* TextShownItemIndex; // 0x6b8 (0x8)
	class UCommonRichTextBlock* TextNoContent; // 0x6c0 (0x8)
	class UCommonRichTextBlock* RichTextOfferItemOwnedCount; // 0x6c8 (0x8)
	class UOverlay* ContainerVBucksOffViolator; // 0x6d0 (0x8)
	class UCommonRichTextBlock* RichTextGiftCount; // 0x6d8 (0x8)
	class UAthenaGiftingPriceWidget* WidgetPrice; // 0x6e0 (0x8)
	class UAthenaLockerItemInfo* WidgetItemInfo; // 0x6e8 (0x8)
	class UDynamicEntryBox* EntryBoxFilterTabs; // 0x6f0 (0x8)
	class UCommonActionWidget* ActionWidgetFilterTabsPrevious; // 0x6f8 (0x8)
	class UCommonActionWidget* ActionWidgetFilterTabsNext; // 0x700 (0x8)
	class UAthenaGiftingConfirmationScreen* ActivatableWidgetGiftingConfirmation; // 0x708 (0x8)
	float ItemCyclingInterval; // 0x710 (0x4)
	unsigned char unreflected_714[0x4]; // 0x714 (0x4) 
	struct FDataTableRowHandle FilterTabsPreviousAction; // 0x718 (0x10)
	struct FDataTableRowHandle FilterTabsNextAction; // 0x728 (0x10)
	struct FText RegularGiftingPolicy; // 0x738 (0x18)
	struct FText BattlePassGiftingPolicy; // 0x750 (0x18)
	unsigned char unreflected_768[0x60]; // 0x768 (0x60) 
	struct TMap<class UCommonButtonLegacy*, enum EFilterType> FilterMap; // 0x7c8 (0x50)
	class UCommonButtonGroupLegacy* FilterGroup; // 0x818 (0x8)
	struct TArray<class UFortItemDefinition*> ItemDefinitions; // 0x820 (0x10)
	class UFortItemDefinition* PresentedItemDefinition; // 0x830 (0x8)
	class UFortStoreFrontOfferInfo* GiftableOfferInfo; // 0x838 (0x8)
	class UFortStoreFrontOfferInfo* OptionalTokenOfferInfo; // 0x840 (0x8)

	/* Functions */

	// Function /Script/GiftingUI.AthenaGiftingScreen.OnShowSearchWarningText (Has no native function)
	void OnShowSearchWarningText(bool& bShow); // (Event | Protected | BlueprintEvent)

	// Function /Script/GiftingUI.AthenaGiftingScreen.OnShownItemChanged (Has no native function)
	void OnShownItemChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/GiftingUI.AthenaGiftingScreen.OnSetupFilterTabButton (Has no native function)
	void OnSetupFilterTabButton(class UCommonButtonLegacy*& Button, enum EFilterType& FilterType); // (Event | Protected | BlueprintEvent)

	// Function /Script/GiftingUI.AthenaGiftingScreen.OnPresentationModeChanged (Has no native function)
	void OnPresentationModeChanged(enum EGiftingScreenPresentationMode& Mode); // (Event | Protected | BlueprintEvent)

	// Function /Script/GiftingUI.AthenaGiftingScreen.OnPartyListUpdated (Has no native function)
	void OnPartyListUpdated(bool& bEmpty); // (Event | Protected | BlueprintEvent)

	// Function /Script/GiftingUI.AthenaGiftingScreen.OnFriendSelectionChanged (Has no native function)
	void OnFriendSelectionChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/GiftingUI.AthenaGiftingScreen.OnFilterChanged (Has no native function)
	void OnFilterChanged(enum EFilterType& FilterType); // (Event | Protected | BlueprintEvent)

	// Function /Script/GiftingUI.AthenaGiftingScreen.BlockScreenContent (Has no native function)
	void BlockScreenContent(bool& bBlockScreen, struct FText& ContentBlockedText); // (Event | Protected | HasOutParms | BlueprintEvent)
};

