// Class /Script/SaveTheWorldUI.FortQuestMapScreen
// Size: 0x460
class UFortQuestMapScreen : public UCommonActivatableWidget
{
	class UFortQuestMapDetailsPanelBase* CampaignDetailsPanel; // 0x3a8 (0x8)
	class UFortQuestMapDetailsPanelBase* EventDetailsPanel; // 0x3b0 (0x8)
	class UFortQuestMapEventCallout* EventCalloutPanel; // 0x3b8 (0x8)
	class UFortQuestMapViewer* QuestMapViewer; // 0x3c0 (0x8)
	enum EQuestMapScreenMode CurrentMode; // 0x3c8 (0x1)
	bool bEventsActive; // 0x3c9 (0x1)
	unsigned char unreflected_3ca[0x6]; // 0x3ca (0x6) 
	class UFortQuestMapDataAsset* CampaignQuestMapDataTable; // 0x3d0 (0x8)
	class UFortQuestItemDefinition* CutoffQuest; // 0x3d8 (0x8)
	class UFortQuestMapDataAsset* CurrentQuestMapDataTable; // 0x3e0 (0x8)
	unsigned char unreflected_3e8[0x28]; // 0x3e8 (0x28) 
	class UClass* CampaignNewsModalClass; // 0x410 (0x8)
	class UClass* QuestLogScreenClass; // 0x418 (0x8)
	struct FDataTableRowHandle CurrentQuestAction; // 0x420 (0x10)
	struct FDataTableRowHandle STWNewsAction; // 0x430 (0x10)
	struct FDataTableRowHandle BackAction; // 0x440 (0x10)
	unsigned char padding_450[0x10]; // 0x450 (0x10)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.UpdateQuestMapMode (Has no native function)
	void UpdateQuestMapMode(enum EQuestMapScreenMode& QuestMapMode); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.UpdateInputActionStates (Underlying native function: UpdateInputActionStates 0x5b47590)
	void UpdateInputActionStates(bool& bShowingCallout); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.ToggleQuestMapState (Underlying native function: ToggleQuestMapState 0x759b304)
	void ToggleQuestMapState(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.ShowQuestLog (Underlying native function: ShowQuestLog 0x5b474f0)
	void ShowQuestLog(class UFortQuestItem*& QuestItem); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.ShowModalNews (Underlying native function: ShowModalNews 0x5b474a0)
	void ShowModalNews(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.SetQuestMapViewer (Underlying native function: SetQuestMapViewer 0x759ac00)
	void SetQuestMapViewer(class UFortQuestMapViewer*& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.SetIgnorePageNavigation (Underlying native function: SetIgnorePageNavigation 0x759a370)
	void SetIgnorePageNavigation(bool& bIgnoreNavigation); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.SetBeyondCutoffQuest (Underlying native function: SetBeyondCutoffQuest 0x759a010)
	void SetBeyondCutoffQuest(bool& bBeyondCutoff); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.OnShowCurrentQuestInputActionValueChanged (Has no native function)
	void OnShowCurrentQuestInputActionValueChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.OnEventCalloutExpandChanged (Has no native function)
	void OnEventCalloutExpandChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.OnEventCalloutButtonClicked (Has no native function)
	void OnEventCalloutButtonClicked(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.IsEventFlagActive (Underlying native function: IsEventFlagActive 0x7598f40)
	bool IsEventFlagActive(struct FString& EventFlag); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.IsBeyondQuest (Underlying native function: IsBeyondQuest 0x7598e34)
	bool IsBeyondQuest(class UFortQuestItemDefinition*& QuestDef); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.InitializeQuestData (Underlying native function: InitializeQuestData 0x7598ce0)
	void InitializeQuestData(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleQuestPageChanged (Has no native function)
	void HandleQuestPageChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleQuestIndexSelectionModelChanged (Underlying native function: HandleQuestIndexSelectionModelChanged 0x7598970)
	void HandleQuestIndexSelectionModelChanged(); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleQuestDetailsUpdated (Has no native function)
	void HandleQuestDetailsUpdated(class UFortQuestItem*& QuestDefinition); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleMapViewerNavigationRequest (Underlying native function: HandleMapViewerNavigationRequest 0x7598468)
	void HandleMapViewerNavigationRequest(enum EViewerNavigationDirection& Direction); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleMapModeSwitch (Has no native function)
	void HandleMapModeSwitch(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleEventQuestMapActivate (Underlying native function: HandleEventQuestMapActivate 0x7597ea0)
	void HandleEventQuestMapActivate(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleEventCalloutDataChangedBP (Has no native function)
	void HandleEventCalloutDataChangedBP(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleBackInputAction (Has no native function)
	void HandleBackInputAction(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.GetCurrentPageCameraMode (Underlying native function: GetCurrentPageCameraMode 0x75964d0)
	enum EFrontEndCamera GetCurrentPageCameraMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.GetBeyondCutoffQuest (Underlying native function: GetBeyondCutoffQuest 0x75964b8)
	bool GetBeyondCutoffQuest(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.ClaimQuestRewards (Has no native function)
	void ClaimQuestRewards(class UFortQuestItem*& QuestItem); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.CheckForNewMainQuest (Underlying native function: CheckForNewMainQuest 0x7595718)
	void CheckForNewMainQuest(); // (Final | Native | Public | BlueprintCallable)
};

