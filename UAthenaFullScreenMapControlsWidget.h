// Class /Script/FortniteUI.AthenaFullScreenMapControlsWidget
// Size: 0x590
class UAthenaFullScreenMapControlsWidget : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x20]; // 0x3a8 (0x20) 
	class UPanelWidget* PanelPanGroup; // 0x3c8 (0x8)
	class UPanelWidget* PanelZoomGroup; // 0x3d0 (0x8)
	class UCommonButtonBase* ButtonToggleQuestIcons; // 0x3d8 (0x8)
	class UCommonButtonBase* ButtonResetToPlayer; // 0x3e0 (0x8)
	class UCommonButtonBase* ButtonExit; // 0x3e8 (0x8)
	class UCommonTextBlock* TextPlaceMarker; // 0x3f0 (0x8)
	struct FText TextPlaceMarker; // 0x3f8 (0x18)
	struct FText TextRemoveMarker; // 0x410 (0x18)
	struct FText TextNPCIconsOn; // 0x428 (0x18)
	struct FText TextNPCIconsOff; // 0x440 (0x18)
	struct FText TextPinQuest; // 0x458 (0x18)
	struct FText TextUnpinQuest; // 0x470 (0x18)
	struct FText TextPinCategory; // 0x488 (0x18)
	struct FText TextUnpinCategory; // 0x4a0 (0x18)
	struct FText TextConfirmRemoveQuestTitle; // 0x4b8 (0x18)
	struct FText TextConfirmRemoveQuestDescription; // 0x4d0 (0x18)
	class USizeBox* SizeBoxPlaceMarker; // 0x4e8 (0x8)
	class UCommonButtonBase* ButtonSortToggle; // 0x4f0 (0x8)
	class UCommonButtonBase* ButtonRemoveSelectedQuest; // 0x4f8 (0x8)
	class UFortCTAButton* ButtonPinSelectedQuest; // 0x500 (0x8)
	class UFortCTAButton* ButtonPinSelectedCategory; // 0x508 (0x8)
	class UFortCTAButton* ButtonViewPlaylist; // 0x510 (0x8)
	class UFortCTAButton* ButtonQuestNPCIcons; // 0x518 (0x8)
	class UFortCTAButton* ButtonInspectItems; // 0x520 (0x8)
	class UClass* ConfirmationWindowClass; // 0x528 (0x8)
	unsigned char padding_530[0x60]; // 0x530 (0x60)

	/* Functions */

	// DelegateFunction /Script/FortniteUI.AthenaFullScreenMapControlsWidget.OnViewPlaylistButtonClicked__DelegateSignature (Has no native function)
	void OnViewPlaylistButtonClickedDelegateSignature(struct FString& IslandMnemonic, struct FName& PlaylistName); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaFullScreenMapControlsWidget.OnPinSelectedQuestButtonClicked__DelegateSignature (Has no native function)
	void OnPinSelectedQuestButtonClickedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaFullScreenMapControlsWidget.OnPinSelectedCategoryButtonClicked__DelegateSignature (Has no native function)
	void OnPinSelectedCategoryButtonClickedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaFullScreenMapControlsWidget.OnInspectItemsButtonClicked__DelegateSignature (Has no native function)
	void OnInspectItemsButtonClickedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.AthenaFullScreenMapControlsWidget.BP_OnSortTypeTextChanged (Has no native function)
	void BPOnSortTypeTextChanged(struct FText& TypeText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaFullScreenMapControlsWidget.BP_HandleToggleQuestIconsClicked (Has no native function)
	void BPHandleToggleQuestIconsClicked(); // (Event | Protected | BlueprintEvent)
};

