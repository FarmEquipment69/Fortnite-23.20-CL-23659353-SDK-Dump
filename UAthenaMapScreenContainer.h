// Class /Script/FortniteUI.AthenaMapScreenContainer
// Size: 0x5f8
class UAthenaMapScreenContainer : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0xe0]; // 0x3a8 (0xe0) 
	struct TWeakObjectPtr<class UCommonUserWidget> DefaultTabWidget; // 0x488 (0x8)
	struct TMap<struct FName, class UAthenaSkewedTabButton*> TabButtons; // 0x490 (0x50)
	struct FGameplayTagContainer HideWithMapTags; // 0x4e0 (0x20)
	struct TArray<struct TWeakObjectPtr<class UClass>> DefaultTabs; // 0x500 (0x10)
	struct FDataTableRowHandle NextTabInputAction; // 0x510 (0x10)
	struct FDataTableRowHandle PreviousTabInputAction; // 0x520 (0x10)
	class UCommonVisibilitySwitcher* VisibilitySwitcherContent; // 0x530 (0x8)
	class UCommonButtonLegacy* MobileCloseButton; // 0x538 (0x8)
	class UPanelWidget* PanelPlayerProfile; // 0x540 (0x8)
	class UFortSocialAvatarIcon* SocialAvatarIcon; // 0x548 (0x8)
	class UFortAutoRunNotificationWidget* WidgetAutoRunNotification; // 0x550 (0x8)
	int CachedQuestTabIndex; // 0x558 (0x4)
	unsigned char unreflected_55c[0x4]; // 0x55c (0x4) 
	class UInputComponent* MapPanelInputComp; // 0x560 (0x8)
	class UHorizontalBox* TabButtonsContainer; // 0x568 (0x8)
	class UClass* TabButtonClass; // 0x570 (0x8)
	unsigned char padding_578[0x80]; // 0x578 (0x80)

	/* Functions */

	// Function /Script/FortniteUI.AthenaMapScreenContainer.SelectActiveTabWidget (Underlying native function: SelectActiveTabWidget 0xa4b06b0)
	void SelectActiveTabWidget(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaMapScreenContainer.OnDamageReceived (Has no native function)
	void OnDamageReceived(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMapScreenContainer.BP_OnShowTabsSet (Has no native function)
	void BPOnShowTabsSet(bool& bShowTabs); // (Event | Protected | BlueprintEvent)
};

