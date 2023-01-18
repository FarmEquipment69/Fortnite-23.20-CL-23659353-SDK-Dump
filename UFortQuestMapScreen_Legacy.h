// Class /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy
// Size: 0x548
class UFortQuestMapScreen_Legacy : public UCommonActivatablePanelLegacy
{
	class UFortQuestMapDetailsPanelBase* CampaignDetailsPanel; // 0x4e0 (0x8)
	class UFortQuestMapDetailsPanelBase* EventDetailsPanel; // 0x4e8 (0x8)
	class UFortQuestMapEventCallout_Legacy* EventCalloutPanel; // 0x4f0 (0x8)
	class UFortQuestMapViewer_Legacy* QuestMapViewer; // 0x4f8 (0x8)
	enum EQuestMapScreenMode CurrentMode; // 0x500 (0x1)
	bool bEventsActive; // 0x501 (0x1)
	unsigned char unreflected_502[0x6]; // 0x502 (0x6) 
	class UFortQuestMapDataAsset* CampaignQuestMapDataTable; // 0x508 (0x8)
	class UFortQuestItemDefinition* CutoffQuest; // 0x510 (0x8)
	class UFortQuestMapDataAsset* CurrentQuestMapDataTable; // 0x518 (0x8)
	unsigned char padding_520[0x28]; // 0x520 (0x28)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.UpdateQuestMapMode (Has no native function)
	void UpdateQuestMapMode(enum EQuestMapScreenMode& QuestMapMode); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.ToggleQuestMapState (Underlying native function: ToggleQuestMapState 0x75c2c78)
	void ToggleQuestMapState(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.SetQuestMapViewer (Underlying native function: SetQuestMapViewer 0x75c2950)
	void SetQuestMapViewer(class UFortQuestMapViewer_Legacy*& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.SetIgnorePageNavigation (Underlying native function: SetIgnorePageNavigation 0x75c21f4)
	void SetIgnorePageNavigation(bool& bIgnoreNavigation); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.SetFindCurrentActionVisibility (Has no native function)
	void SetFindCurrentActionVisibility(enum EInputActionState& ActionVisibility); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.SetBeyondCutoffQuest (Underlying native function: SetBeyondCutoffQuest 0x75c179c)
	void SetBeyondCutoffQuest(bool& bBeyondCutoff); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.OnEventCalloutExpandChanged (Has no native function)
	void OnEventCalloutExpandChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.OnEventCalloutButtonClicked (Has no native function)
	void OnEventCalloutButtonClicked(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.IsEventFlagActive (Underlying native function: IsEventFlagActive 0x7598f40)
	bool IsEventFlagActive(struct FString& EventFlag); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.IsBeyondQuest (Underlying native function: IsBeyondQuest 0x7598e34)
	bool IsBeyondQuest(class UFortQuestItemDefinition*& QuestDef); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.InitializeQuestData (Underlying native function: InitializeQuestData 0x75c05b0)
	void InitializeQuestData(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleRequestCurrentQuestNavigation (Underlying native function: HandleRequestCurrentQuestNavigation 0x75c02bc)
	void HandleRequestCurrentQuestNavigation(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleQuestPageChanged (Has no native function)
	void HandleQuestPageChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleQuestIndexSelectionModelChanged (Underlying native function: HandleQuestIndexSelectionModelChanged 0x75c024c)
	void HandleQuestIndexSelectionModelChanged(); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleQuestDetailsUpdated (Has no native function)
	void HandleQuestDetailsUpdated(class UFortQuestItem*& QuestDefinition); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleMapViewerNavigationRequest (Underlying native function: HandleMapViewerNavigationRequest 0x75bfd14)
	void HandleMapViewerNavigationRequest(enum EViewerNavigationDirection& Direction); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleMapModeSwitch (Has no native function)
	void HandleMapModeSwitch(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleEventQuestMapActivate (Underlying native function: HandleEventQuestMapActivate 0x75bfb80)
	void HandleEventQuestMapActivate(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleEventCalloutDataChangedBP (Has no native function)
	void HandleEventCalloutDataChangedBP(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.GetCurrentPageCameraMode (Underlying native function: GetCurrentPageCameraMode 0x75be7c8)
	enum EFrontEndCamera GetCurrentPageCameraMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.GetBeyondCutoffQuest (Underlying native function: GetBeyondCutoffQuest 0x75be6f8)
	bool GetBeyondCutoffQuest(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.CheckForNewMainQuest (Underlying native function: CheckForNewMainQuest 0x75be40c)
	void CheckForNewMainQuest(); // (Final | Native | Public | BlueprintCallable)
};

