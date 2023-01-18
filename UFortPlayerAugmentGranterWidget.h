// Class /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget
// Size: 0x2e0
class UFortPlayerAugmentGranterWidget : public UFortHUDElementWidget
{
	struct TArray<class UFortPlayerAugmentItemDefinition*> AvailableAugmentItemDefinitions; // 0x2d0 (0x10)

	/* Functions */

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnTimerUpdated (Has no native function)
	void OnTimerUpdated(float& TimeRemaining, float& TimePercentage); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnSelectedAugmentForGrant (Has no native function)
	void OnSelectedAugmentForGrant(class UFortPlayerAugmentItemDefinition*& HighlightedAugment); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnRerollAugments (Has no native function)
	void OnRerollAugments(); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnPopulateAvailableAugmentsHUD (Has no native function)
	void OnPopulateAvailableAugmentsHUD(struct TArray<class UFortPlayerAugmentItemDefinition*>& AugmentItemDefinition); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnInputTypeChanged (Has no native function)
	void OnInputTypeChanged(enum ECommonInputType& NewInputType); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnCanSelectAugmentChanged (Has no native function)
	void OnCanSelectAugmentChanged(bool& bCanSelectAugment); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentSelectorOpenedStatusChanged (Has no native function)
	void OnAugmentSelectorOpenedStatusChanged(bool& bIsOpened); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentSelectionStarted (Has no native function)
	void OnAugmentSelectionStarted(int& SelectedAugmentIndex); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentHighlighted (Has no native function)
	void OnAugmentHighlighted(int& HighlightedAugmentIndex); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleTimerUpdated (Underlying native function: HandleTimerUpdated 0x7528e40)
	void HandleTimerUpdated(float& TimeRemaining, float& TimePercentage); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleSelectedAugmentForGrant (Underlying native function: HandleSelectedAugmentForGrant 0x7528cf8)
	void HandleSelectedAugmentForGrant(class UFortPlayerAugmentItemDefinition*& SelectedAugment); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleRerollAugments (Underlying native function: HandleRerollAugments 0x7528c60)
	void HandleRerollAugments(); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleCanSelectAugmentChanged (Underlying native function: HandleCanSelectAugmentChanged 0x75288d8)
	void HandleCanSelectAugmentChanged(bool& bCanSelectAugment); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAvailableAugmentsForGrantingUpdated (Underlying native function: HandleAvailableAugmentsForGrantingUpdated 0x752876c)
	void HandleAvailableAugmentsForGrantingUpdated(class UFortControllerComponent_AugmentGrantingSystem*& GrantingComponent); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAugmentSelectorOpenedStatusChanged (Underlying native function: HandleAugmentSelectorOpenedStatusChanged 0x7528624)
	void HandleAugmentSelectorOpenedStatusChanged(bool& bIsOpened); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAugmentSelectionStarted (Underlying native function: HandleAugmentSelectionStarted 0x75285a4)
	void HandleAugmentSelectionStarted(int& SelectedAugmentIndex); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAugmentHighlighted (Underlying native function: HandleAugmentHighlighted 0x7528524)
	void HandleAugmentHighlighted(int& HighlightedAugmentIndex); // (Final | Native | Private)
};

