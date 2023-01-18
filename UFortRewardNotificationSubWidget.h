// Class /Script/SaveTheWorldUI.FortRewardNotificationSubWidget
// Size: 0x2b8
class UFortRewardNotificationSubWidget : public UCommonUserWidget
{
	struct FMulticastInlineDelegate OnTransitionInComplete; // 0x290 (0x10)
	struct FMulticastInlineDelegate OnTransitionOutComplete; // 0x2a0 (0x10)
	unsigned char padding_2b0[0x8]; // 0x2b0 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionOutBegin (Has no native function)
	void TransitionOutBegin(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionOut (Underlying native function: TransitionOut 0x75c2d28)
	void TransitionOut(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionInBegin (Has no native function)
	void TransitionInBegin(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionIn (Underlying native function: TransitionIn 0x75c2c98)
	void TransitionIn(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.SetPrimaryActionText (Underlying native function: SetPrimaryActionText 0x75c27a4)
	void SetPrimaryActionText(struct FText& Text); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.SetPrimaryActionHidden (Underlying native function: SetPrimaryActionHidden 0x75c26f0)
	void SetPrimaryActionHidden(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.SetPrimaryActionEnabled (Underlying native function: SetPrimaryActionEnabled 0x75c25ec)
	void SetPrimaryActionEnabled(bool& bEnabled); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.SetInputActionHandlerState (Underlying native function: SetInputActionHandlerState 0x75c2304)
	void SetInputActionHandlerState(class UDataTable*& DataTable, struct FName& RowName, enum EInputActionState& State); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.RemoveInputActionHandler (Underlying native function: RemoveInputActionHandler 0x75c121c)
	void RemoveInputActionHandler(struct FDataTableRowHandle& InputActionRow); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.RemoveAllInputActionHandlers (Underlying native function: RemoveAllInputActionHandlers 0x75c1200)
	void RemoveAllInputActionHandlers(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnPrimaryAction (Has no native function)
	void OnPrimaryAction(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationUp (Has no native function)
	void OnNavigationUp(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationRight (Has no native function)
	void OnNavigationRight(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationLeft (Has no native function)
	void OnNavigationLeft(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationDown (Has no native function)
	void OnNavigationDown(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnDeactivated (Has no native function)
	void OnDeactivated(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnActivated (Has no native function)
	void OnActivated(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.IsPrimaryActionHidden (Underlying native function: IsPrimaryActionHidden 0x75c06cc)
	void IsPrimaryActionHidden(bool& bHidden); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.IsPrimaryActionEnabled (Underlying native function: IsPrimaryActionEnabled 0x75c06cc)
	void IsPrimaryActionEnabled(bool& bEnabled); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.InspectItem (Underlying native function: InspectItem 0x75c05c4)
	void InspectItem(class UFortItem*& ItemToInspect, int& QuantityOverride); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.Init (Underlying native function: Init 0x75c0530)
	void Init(class UFortRewardNotificationWidget*& MainWidget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.AddInputActionHandler (Underlying native function: AddInputActionHandler 0x75bdf98)
	void AddInputActionHandler(class UDataTable*& DataTable, struct FName& RowName, struct FDelegate& CommittedEvent); // (Final | Native | Protected | BlueprintCallable)
};

