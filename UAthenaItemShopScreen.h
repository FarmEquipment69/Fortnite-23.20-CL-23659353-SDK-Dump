// Class /Script/FortniteUI.AthenaItemShopScreen
// Size: 0x6b0
class UAthenaItemShopScreen : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x28]; // 0x3a8 (0x28) 
	bool bShowAvailableMTXBalance; // 0x3d0 (0x1)
	unsigned char unreflected_3d1[0x7]; // 0x3d1 (0x7) 
	struct FString AffiliateSourceName; // 0x3d8 (0x10)
	struct FPrimaryContentSetup PrimaryContentSetup; // 0x3e8 (0x3)
	unsigned char unreflected_3eb[0x1]; // 0x3eb (0x1) 
	struct FMargin SectionsPadding; // 0x3ec (0x10)
	unsigned char unreflected_3fc[0x4]; // 0x3fc (0x4) 
	struct FDataTableRowHandle NextCategoryInputAction; // 0x400 (0x10)
	struct FDataTableRowHandle PrevCategoryInputAction; // 0x410 (0x10)
	struct TWeakObjectPtr<class UClass> ItemShopOfferDetailsScreenClass; // 0x420 (0x28)
	struct TWeakObjectPtr<class UClass> ItemShopDisplayAssetOfferDetailsClass; // 0x448 (0x28)
	class UClass* AffiliateModalClass; // 0x470 (0x8)
	class UClass* StoreSelectionPopupClass; // 0x478 (0x8)
	float ScrollThreshold; // 0x480 (0x4)
	unsigned char unreflected_484[0x4]; // 0x484 (0x4) 
	class UFortAffilateModal* AffiliateModal; // 0x488 (0x8)
	class UFortMtxStoreSelectionPopup* StoreSelectionPopup; // 0x490 (0x8)
	class UWidgetAnimation* LastPlayedIntroAnimation; // 0x498 (0x8)
	class UOverlay* OverlayNavigationControl; // 0x4a0 (0x8)
	class UAthenaScrollBox* ScrollBoxSections; // 0x4a8 (0x8)
	class UVerticalBox* VBoxSections; // 0x4b0 (0x8)
	unsigned char unreflected_4b8[0x10]; // 0x4b8 (0x10) 
	class UInvalidationBox* InvalidationBoxItemShop; // 0x4c8 (0x8)
	class UWidget* ContainerAvailableAmount; // 0x4d0 (0x8)
	class UAthenaItemShopSectionNavigator* NavigatorShopSections; // 0x4d8 (0x8)
	class UDynamicEntryBox* EntryBoxSectionsPips; // 0x4e0 (0x8)
	class UCommonButtonBase* ButtonSupportACreator; // 0x4e8 (0x8)
	class UCommonButtonBase* ButtonScrollToTop; // 0x4f0 (0x8)
	class UCommonButtonBase* ButtonInGameScrollToTop; // 0x4f8 (0x8)
	class UCommonButtonBase* ButtonBackToGame; // 0x500 (0x8)
	class UAthenaItemShopRefreshTimerButton* ButtonRefreshTimerInfo; // 0x508 (0x8)
	class UWidget* ContainerRefreshTimerButton; // 0x510 (0x8)
	class UImage* ImageDefaultBackground; // 0x518 (0x8)
	class UClass* SpecialOfferVideoPlayerClass; // 0x520 (0x8)
	class UCommonButtonGroupLegacy* ButtonGroupSectionsPips; // 0x528 (0x8)
	struct TWeakObjectPtr<class ADynamicBackgroundDirector> ItemShopBackgroundDirector; // 0x530 (0x8)
	struct TWeakObjectPtr<class UClass> RefreshTimerInfoModalClass; // 0x538 (0x28)
	unsigned char padding_560[0x150]; // 0x560 (0x150)

	/* Functions */

	// Function /Script/FortniteUI.AthenaItemShopScreen.PlayIntroAnimation (Underlying native function: PlayIntroAnimation 0xa556b8c)
	void PlayIntroAnimation(class UWidgetAnimation*& IntroAnimation); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopScreen.OnSpecialOfferVideoStarted (Has no native function)
	void OnSpecialOfferVideoStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopScreen.OnSpecialOfferVideoSkipped (Has no native function)
	void OnSpecialOfferVideoSkipped(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopScreen.OnSpecialOfferVideoFinished (Has no native function)
	void OnSpecialOfferVideoFinished(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopScreen.OnSectionsEstablished (Has no native function)
	void OnSectionsEstablished(bool& bEmpty); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopScreen.OnNoOfferVideo (Has no native function)
	void OnNoOfferVideo(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopScreen.OnEstablishingSections (Has no native function)
	void OnEstablishingSections(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopScreen.NavigateToOffer (Underlying native function: NavigateToOffer 0xa556990)
	void NavigateToOffer(struct FString& OfferId, enum EItemShopNavigationAction& NavigationAction); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopScreen.HandleUserMouseUp (Underlying native function: HandleUserMouseUp 0xa5566b4)
	void HandleUserMouseUp(float& ScrollAmount); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaItemShopScreen.HandlePurchaseOfferComplete (Underlying native function: HandlePurchaseOfferComplete 0xa556298)
	void HandlePurchaseOfferComplete(bool& bSuccess, struct TArray<struct FPurchasedItemInfo>& PurchasedItems); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaItemShopScreen.EnableShopNavigation (Underlying native function: EnableShopNavigation 0xa554da8)
	void EnableShopNavigation(bool& bIsNavigationEnabled); // (Final | Native | Protected | BlueprintCallable)
};

