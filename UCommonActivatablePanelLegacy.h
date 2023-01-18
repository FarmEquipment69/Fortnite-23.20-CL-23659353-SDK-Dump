// Class /Script/CommonUILegacy.CommonActivatablePanelLegacy
// Size: 0x4e0
class UCommonActivatablePanelLegacy : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	struct FMulticastInlineDelegate OnWidgetActivated; // 0x3b0 (0x10)
	struct FMulticastInlineDelegate OnWidgetDeactivated; // 0x3c0 (0x10)
	bool bConsumeAllActions; // 0x3d0 (0x1)
	bool bExposeActionsExternally; // 0x3d1 (0x1)
	bool bShouldBypassStack; // 0x3d2 (0x1)
	unsigned char padding_3d3[0x10d]; // 0x3d3 (0x10d)

	/* Functions */

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithProgressPopupMenu (Underlying native function: SetInputActionHandlerWithProgressPopupMenu 0x71830cc)
	void SetInputActionHandlerWithProgressPopupMenu(struct FDataTableRowHandle& InputActionRow, struct FDelegate& CommitedEvent, struct FDelegate& ProgressEvent, class UCommonPopupMenuLegacy*& PopupMenu); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithProgress (Underlying native function: SetInputActionHandlerWithProgress 0x7182f88)
	void SetInputActionHandlerWithProgress(struct FDataTableRowHandle& InputActionRow, struct FDelegate& CommitedEvent, struct FDelegate& ProgressEvent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithPopupMenu (Underlying native function: SetInputActionHandlerWithPopupMenu 0x7182e38)
	void SetInputActionHandlerWithPopupMenu(struct FDataTableRowHandle& InputActionRow, struct FDelegate& CommitedEvent, class UCommonPopupMenuLegacy*& PopupMenu); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandler (Underlying native function: SetInputActionHandler 0x1c7c288)
	void SetInputActionHandler(struct FDataTableRowHandle& InputActionRow, struct FDelegate& CommitedEvent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateWithDisabledCommitEvent (Underlying native function: SetActionHandlerStateWithDisabledCommitEvent 0x7182a34)
	void SetActionHandlerStateWithDisabledCommitEvent(class UDataTable*& DataTable, struct FName& RowName, enum EInputActionState& State, struct FDelegate& DisabledCommitEvent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateFromHandleWithDisabledCommitEvent (Underlying native function: SetActionHandlerStateFromHandleWithDisabledCommitEvent 0x718290c)
	void SetActionHandlerStateFromHandleWithDisabledCommitEvent(struct FDataTableRowHandle& InputActionRow, enum EInputActionState& State, struct FDelegate& DisabledCommitEvent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateFromHandle (Underlying native function: SetActionHandlerStateFromHandle 0x7182838)
	void SetActionHandlerStateFromHandle(struct FDataTableRowHandle& InputActionRow, enum EInputActionState& State); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerState (Underlying native function: SetActionHandlerState 0x718271c)
	void SetActionHandlerState(class UDataTable*& DataTable, struct FName& RowName, enum EInputActionState& State); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.RemoveInputActionHandler (Underlying native function: RemoveInputActionHandler 0x7182660)
	void RemoveInputActionHandler(struct FDataTableRowHandle& InputActionRow); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.RemoveAllInputActionHandlers (Underlying native function: RemoveAllInputActionHandlers 0x718264c)
	void RemoveAllInputActionHandlers(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.PopPanel (Underlying native function: PopPanel 0x6a4bfbc)
	void PopPanel(); // (Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnTransitionedBySwitcher (Has no native function)
	void OnTransitionedBySwitcher(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnRemovedFromActivationStack (Has no native function)
	void OnRemovedFromActivationStack(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnInputModeChanged (Has no native function)
	void OnInputModeChanged(bool& bUsingGamepad); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnBeginOutro (Underlying native function: OnBeginOutro 0x1d01d9c)
	void OnBeginOutro(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnBeginIntro (Underlying native function: OnBeginIntro 0x27a6fc8)
	void OnBeginIntro(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnAddedToActivationStack (Has no native function)
	void OnAddedToActivationStack(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.IsIntroed (Underlying native function: IsIntroed 0x7182248)
	bool IsIntroed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.IsInActivationStack (Underlying native function: IsInActivationStack 0x7182204)
	bool IsInActivationStack(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.HasInputActionHandler (Underlying native function: HasInputActionHandler 0x7182168)
	bool HasInputActionHandler(struct FDataTableRowHandle& InputActionRow); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.GetInputActions (Underlying native function: GetInputActions 0x7181838)
	bool GetInputActions(struct TArray<struct FCommonInputActionHandlerData>& InputActionDataRows); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.EndOutro (Underlying native function: EndOutro 0x2e0608c)
	void EndOutro(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.EndIntro (Underlying native function: EndIntro 0x71815fc)
	void EndIntro(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.BeginOutro (Underlying native function: BeginOutro 0x7181504)
	void BeginOutro(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.BeginIntro (Underlying native function: BeginIntro 0x71814f0)
	void BeginIntro(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionNoHandler (Underlying native function: AddInputActionNoHandler 0x71813dc)
	void AddInputActionNoHandler(class UDataTable*& DataTable, struct FName& RowName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithProgressPopup (Underlying native function: AddInputActionHandlerWithProgressPopup 0x7181214)
	void AddInputActionHandlerWithProgressPopup(class UDataTable*& DataTable, struct FName& RowName, struct FDelegate& CommitedEvent, struct FDelegate& ProgressEvent, class UCommonPopupMenuLegacy*& PopupMenu); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithProgress (Underlying native function: AddInputActionHandlerWithProgress 0x718108c)
	void AddInputActionHandlerWithProgress(class UDataTable*& DataTable, struct FName& RowName, struct FDelegate& CommitedEvent, struct FDelegate& ProgressEvent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithPopup (Underlying native function: AddInputActionHandlerWithPopup 0x7180f00)
	void AddInputActionHandlerWithPopup(class UDataTable*& DataTable, struct FName& RowName, struct FDelegate& CommitedEvent, class UCommonPopupMenuLegacy*& PopupMenu); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandler (Underlying native function: AddInputActionHandler 0x7180df4)
	void AddInputActionHandler(class UDataTable*& DataTable, struct FName& RowName, struct FDelegate& CommitedEvent); // (Final | Native | Public | BlueprintCallable)
};

