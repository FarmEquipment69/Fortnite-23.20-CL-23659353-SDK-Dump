// Class /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget
// Size: 0x2d0
class UFortPlayerAugmentHUDTimerWidget : public UFortHUDElementWidget
{

	/* Functions */

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnTimerUpdated (Has no native function)
	void OnTimerUpdated(float& TimeRemaining, float& TimePercentage); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnSelectedAugmentForGrant (Has no native function)
	void OnSelectedAugmentForGrant(class UFortPlayerAugmentItemDefinition*& HighlightedAugment); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnNumPendingAugmentsToGrantUpdated (Has no native function)
	void OnNumPendingAugmentsToGrantUpdated(int& NumPendingAugmentsToGrant); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnCanSelectAugmentChanged (Has no native function)
	void OnCanSelectAugmentChanged(bool& bCanSelectAugment); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnAugmentSelectorOpenedStatusChanged (Has no native function)
	void OnAugmentSelectorOpenedStatusChanged(bool& bIsOpened); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnAugmentGrantingTimersFinishedForMatch (Has no native function)
	void OnAugmentGrantingTimersFinishedForMatch(); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleTimerUpdated (Underlying native function: HandleTimerUpdated 0x7528f04)
	void HandleTimerUpdated(float& TimeRemaining, float& TimePercentage); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleSelectedAugmentForGrant (Underlying native function: HandleSelectedAugmentForGrant 0x7528d9c)
	void HandleSelectedAugmentForGrant(class UFortPlayerAugmentItemDefinition*& SelectedAugment); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleNumPendingAugmentsToGrantUpdated (Underlying native function: HandleNumPendingAugmentsToGrantUpdated 0x7528b20)
	void HandleNumPendingAugmentsToGrantUpdated(int8_t& NumPendingAugmentsToGrant); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleCanSelectAugmentChanged (Underlying native function: HandleCanSelectAugmentChanged 0x752897c)
	void HandleCanSelectAugmentChanged(bool& bCanSelectAugment); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleAugmentSelectorOpenedStatusChanged (Underlying native function: HandleAugmentSelectorOpenedStatusChanged 0x75286c8)
	void HandleAugmentSelectorOpenedStatusChanged(bool& bIsOpened); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleAugmentGrantingTimersFinishedForMatch (Underlying native function: HandleAugmentGrantingTimersFinishedForMatch 0x7528494)
	void HandleAugmentGrantingTimersFinishedForMatch(); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.GetPendingAugmentsToGrant (Underlying native function: GetPendingAugmentsToGrant 0x7528424)
	int GetPendingAugmentsToGrant(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.CanSelectAugment (Underlying native function: CanSelectAugment 0x5b2f540)
	bool CanSelectAugment(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

