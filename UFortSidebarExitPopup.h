// Class /Script/FortniteUI.FortSidebarExitPopup
// Size: 0x480
class UFortSidebarExitPopup : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x10]; // 0x3a8 (0x10) 
	bool bIsHidden; // 0x3b8 (0x1)
	bool bIsShowingConfirmationView; // 0x3b9 (0x1)
	unsigned char unreflected_3ba[0x6]; // 0x3ba (0x6) 
	class UPanelWidget* PanelWidgetMainMenuButtons; // 0x3c0 (0x8)
	class UPanelWidget* PanelWidgetExpressYourSupportButtons; // 0x3c8 (0x8)
	class UFortExpressYourSupportThumbsUpButton* ButtonSupportCreator; // 0x3d0 (0x8)
	class UFortExpressYourSupportFavoriteButton* ButtonFavorite; // 0x3d8 (0x8)
	class UPanelWidget* ConfirmationButtons; // 0x3e0 (0x8)
	class UCommonButtonBase* ButtonLeaveExperience; // 0x3e8 (0x8)
	class UFortMainMenuLeaveButtonWrapper* ButtonAthenaMainMenuLeave; // 0x3f0 (0x8)
	class UCommonButtonBase* ButtonLogout; // 0x3f8 (0x8)
	class UCommonButtonBase* ButtonExitGame; // 0x400 (0x8)
	class UCommonButtonBase* ButtonYes; // 0x408 (0x8)
	class UCommonButtonBase* ButtonNo; // 0x410 (0x8)
	class UCommonTextBlock* TextActivityName; // 0x418 (0x8)
	class UCommonRichTextBlock* TextNoEnabledButtons; // 0x420 (0x8)
	class UCommonActivatableWidgetSwitcher* WidgetSwitcher; // 0x428 (0x8)
	class UCommonButtonLegacy* ButtonBackBoard; // 0x430 (0x8)
	class UWidgetAnimation* ShowPopupAnim; // 0x438 (0x8)
	class UWidgetAnimation* HidePopupAnim; // 0x440 (0x8)
	enum ESidebarExitActions SelectedAction; // 0x448 (0x1)
	unsigned char unreflected_449[0x7]; // 0x449 (0x7) 
	struct FText AthenaConfirmationMessageText; // 0x450 (0x18)
	unsigned char padding_468[0x18]; // 0x468 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortSidebarExitPopup.UpdateNoEnabledButtonsText (Has no native function)
	void UpdateNoEnabledButtonsText(bool& bAllowLogout, bool& bAllowQuit); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSidebarExitPopup.ShowConfirmationView (Underlying native function: ShowConfirmationView 0x150d950)
	void ShowConfirmationView(enum ESidebarExitActions& ActionToConfirm); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSidebarExitPopup.Show (Underlying native function: Show 0xa75a288)
	void Show(bool& bTakeFocus); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSidebarExitPopup.Hide (Underlying native function: Hide 0xa759fcc)
	void Hide(bool& bDoImmediately); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSidebarExitPopup.HandleTransitioningChanged (Underlying native function: HandleTransitioningChanged 0xa759f4c)
	void HandleTransitioningChanged(bool& bTransitioning); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortSidebarExitPopup.HandleShowPopupAnimFinished (Underlying native function: HandleShowPopupAnimFinished 0x2b701e0)
	void HandleShowPopupAnimFinished(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortSidebarExitPopup.HandleHidePopupAnimFinished (Underlying native function: HandleHidePopupAnimFinished 0x2b8d72c)
	void HandleHidePopupAnimFinished(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortSidebarExitPopup.HandleActiveWidgetIndexChanged (Underlying native function: HandleActiveWidgetIndexChanged 0xa759a78)
	void HandleActiveWidgetIndexChanged(class UWidget*& ActiveWidget, int& ActiveWidgetIndex); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortSidebarExitPopup.ConfirmSelectedAction (Underlying native function: ConfirmSelectedAction 0x1593f68)
	void ConfirmSelectedAction(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSidebarExitPopup.CancelConfirmationView (Underlying native function: CancelConfirmationView 0xa759920)
	void CancelConfirmationView(); // (Final | Native | Public | BlueprintCallable)
};

