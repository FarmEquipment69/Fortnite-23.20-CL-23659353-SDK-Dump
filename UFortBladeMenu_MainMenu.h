// Class /Script/FortniteUI.FortBladeMenu_MainMenu
// Size: 0x568
class UFortBladeMenu_MainMenu : public UFortBladeMenu
{
	unsigned char unreflected_3c8[0xd8]; // 0x3c8 (0xd8) 
	class UCommonButtonBase* SidebarBackButton; // 0x4a0 (0x8)
	class UCommonButtonLegacy* ButtonBackToHub; // 0x4a8 (0x8)
	class UCommonButtonLegacy* ButtonSettings; // 0x4b0 (0x8)
	class UCommonButtonLegacy* ButtonSubscription; // 0x4b8 (0x8)
	class UCommonButtonLegacy* ButtonMobileBack; // 0x4c0 (0x8)
	class UCommonButtonLegacy* ButtonSubgameSelection; // 0x4c8 (0x8)
	class UCommonButtonLegacy* ButtonLeaveExperience; // 0x4d0 (0x8)
	class UCommonTextBlock* TextBackToHubDisabledReason; // 0x4d8 (0x8)
	class UCommonButtonBase* ButtonStore; // 0x4e0 (0x8)
	class UCommonButtonLegacy* ButtonCodeOfConduct; // 0x4e8 (0x8)
	class UCommonButtonLegacy* ButtonSupport; // 0x4f0 (0x8)
	class UFortMinigameButtons* MinigameButtons; // 0x4f8 (0x8)
	class URestrictedCountryRatingIcons* RatingIconsRatingIcons; // 0x500 (0x8)
	class UVerticalBox* VerticalBoxExtensionContainer; // 0x508 (0x8)
	class UWidgetSwitcher* SwitcherMenus; // 0x510 (0x8)
	struct TWeakObjectPtr<class UClass> ExternalLinkPopupClass; // 0x518 (0x28)
	struct TWeakObjectPtr<class UClass> OptionsMenuClass; // 0x540 (0x28)

	/* Functions */

	// Function /Script/FortniteUI.FortBladeMenu_MainMenu.ViewPurchaseHistory (Underlying native function: ViewPurchaseHistory 0xa79b06c)
	void ViewPurchaseHistory(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortBladeMenu_MainMenu.TryPushWidgetAsModalPanel (Underlying native function: TryPushWidgetAsModalPanel 0xa7c4498)
	void TryPushWidgetAsModalPanel(class UUserWidget*& InWidget); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortBladeMenu_MainMenu.TryPushWidgetAsActivatablePanel (Underlying native function: TryPushWidgetAsActivatablePanel 0xa7c4338)
	void TryPushWidgetAsActivatablePanel(class UUserWidget*& InWidget, bool& bHideHeader, bool& bHideFooter, bool& bHideChatWidget); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortBladeMenu_MainMenu.ShowConsoleWindow (Underlying native function: ShowConsoleWindow 0x26daa0c)
	void ShowConsoleWindow(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortBladeMenu_MainMenu.ReleaseSavedMenuPosition (Underlying native function: ReleaseSavedMenuPosition 0x62076e0)
	void ReleaseSavedMenuPosition(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortBladeMenu_MainMenu.IsInCreative (Underlying native function: IsInCreative 0xa7c37d0)
	bool IsInCreative(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortBladeMenu_MainMenu.HandleMatchmakingFlowChanged (Underlying native function: HandleMatchmakingFlowChanged 0xa7c33d8)
	void HandleMatchmakingFlowChanged(bool& bFlowActive); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortBladeMenu_MainMenu.FakeSidebarBackButtonClick (Has no native function)
	void FakeSidebarBackButtonClick(); // (Event | Public | BlueprintEvent)
};

