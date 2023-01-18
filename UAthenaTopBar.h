// Class /Script/FortniteUI.AthenaTopBar
// Size: 0x540
class UAthenaTopBar : public UCommonActivatableWidget
{
	struct FDataTableRowHandle NextTabInputAction; // 0x3a8 (0x10)
	struct FDataTableRowHandle PreviousTabInputAction; // 0x3b8 (0x10)
	struct TArray<struct FFortTopBarTabButtonInfo> TabsInfo; // 0x3c8 (0x10)
	class UCommonButtonGroupLegacy* ButtonGroupTopTabs; // 0x3d8 (0x8)
	class UEmergencyNoticeBase* NoticeEmergencyBase; // 0x3e0 (0x8)
	struct TArray<struct FName> TabsToUnlockOnDownload; // 0x3e8 (0x10)
	unsigned char unreflected_3f8[0xb0]; // 0x3f8 (0xb0) 
	class UCommonButtonLegacy* ButtonSocial; // 0x4a8 (0x8)
	class UCommonButtonLegacy* ButtonSidebar; // 0x4b0 (0x8)
	class UCommonButtonLegacy* ButtonMainMenu; // 0x4b8 (0x8)
	class UCommonButtonLegacy* ButtonMTX; // 0x4c0 (0x8)
	class UCommonTextBlock* TextMobileTabLabel; // 0x4c8 (0x8)
	class UDynamicEntryBox* EntryBoxTabButtons; // 0x4d0 (0x8)
	class UCommonActionWidget* InputActionWidgetNext; // 0x4d8 (0x8)
	class UCommonActionWidget* InputActionWidgetPrev; // 0x4e0 (0x8)
	class UFortDataDownloadBar* BacchusLobbyDowloadBar; // 0x4e8 (0x8)
	struct FText DataDownloadErrorWindowHeaderMessage; // 0x4f0 (0x18)
	struct FText DataDownloadErrorWindowBodyMessage; // 0x508 (0x18)
	struct FName ConnectionErrorButtonActionInputName; // 0x520 (0x4)
	unsigned char unreflected_524[0x4]; // 0x524 (0x4) 
	class UFortConfirmationWindow* DataDownloadErrorWindow; // 0x528 (0x8)
	struct TArray<bool> TabButtonBangIconState; // 0x530 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaTopBar.ShowDataDownloadTooltip (Has no native function)
	void ShowDataDownloadTooltip(struct FVector2D& DataDownloadTooltipPosition, enum ETooltipAlignment& Alignment); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaTopBar.OnMobileTabLabelChanged (Has no native function)
	void OnMobileTabLabelChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaTopBar.OnDataDownloadErrorWindowClosed (Has no native function)
	void OnDataDownloadErrorWindowClosed(enum EFortDialogResult& Result, struct FName& ResultName); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaTopBar.OnDataDownloadErrorOccured (Has no native function)
	void OnDataDownloadErrorOccured(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaTopBar.HandleFeatureNavigateRequest (Underlying native function: HandleFeatureNavigateRequest 0xa7c3280)
	void HandleFeatureNavigateRequest(enum EFortUIFeature& Feature); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaTopBar.HandleButtonGroupSelectionChanged (Underlying native function: HandleButtonGroupSelectionChanged 0x18eae50)
	void HandleButtonGroupSelectionChanged(class UCommonButtonLegacy*& SelectedButton, int& ButtonIndex); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaTopBar.HandleActiveSeasonDataChanged (Underlying native function: HandleActiveSeasonDataChanged 0xa7c30dc)
	void HandleActiveSeasonDataChanged(struct TArray<struct FString>& ActiveEventFlags); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaTopBar.AddIconToScreen (Has no native function)
	void AddIconToScreen(class UCommonLazyImage*& Image); // (Event | Protected | BlueprintEvent)
};

