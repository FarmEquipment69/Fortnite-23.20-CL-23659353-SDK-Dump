// Class /Script/CommonUI.CommonActivatableWidget
// Size: 0x3a8
class UCommonActivatableWidget : public UCommonUserWidget
{
	bool bIsBackHandler; // 0x290 (0x1)
	bool bIsBackActionDisplayedInActionBar; // 0x291 (0x1)
	bool bAutoActivate; // 0x292 (0x1)
	bool bSupportsActivationFocus; // 0x293 (0x1)
	bool bIsModal; // 0x294 (0x1)
	bool bAutoRestoreFocus; // 0x295 (0x1)
	bool bOverrideActionDomain; // 0x296 (0x1)
	unsigned char unreflected_297[0x1]; // 0x297 (0x1) 
	struct TWeakObjectPtr<class UCommonInputActionDomain> ActionDomainOverride; // 0x298 (0x28)
	struct FMulticastInlineDelegate BPOnWidgetActivated; // 0x2c0 (0x10)
	struct FMulticastInlineDelegate BPOnWidgetDeactivated; // 0x2d0 (0x10)
	bool bIsActive; // 0x2e0 (0x1)
	unsigned char unreflected_2e1[0x7]; // 0x2e1 (0x7) 
	struct TArray<struct TWeakObjectPtr<class UCommonActivatableWidget>> VisibilityBoundWidgets; // 0x2e8 (0x10)
	unsigned char unreflected_2f8[0xa8]; // 0x2f8 (0xa8) 
	bool bSetVisibilityOnActivated; // 0x3a0 (0x1)
	enum ESlateVisibility ActivatedVisibility; // 0x3a1 (0x1)
	bool bSetVisibilityOnDeactivated; // 0x3a2 (0x1)
	enum ESlateVisibility DeactivatedVisibility; // 0x3a3 (0x1)
	unsigned char padding_3a4[0x4]; // 0x3a4 (0x4)

	/* Functions */

	// Function /Script/CommonUI.CommonActivatableWidget.SetBindVisibilities (Underlying native function: SetBindVisibilities 0x6a4ce80)
	void SetBindVisibilities(enum ESlateVisibility& OnActivatedVisibility, enum ESlateVisibility& OnDeactivatedVisibility, bool& bInAllActive); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonActivatableWidget.IsActivated (Underlying native function: IsActivated 0x297636c)
	bool IsActivated(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonActivatableWidget.GetDesiredFocusTarget (Underlying native function: GetDesiredFocusTarget 0x6a4b0a0)
	class UWidget* GetDesiredFocusTarget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonActivatableWidget.DeactivateWidget (Underlying native function: DeactivateWidget 0x6a4a708)
	void DeactivateWidget(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnHandleBackAction (Has no native function)
	bool BPOnHandleBackAction(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnDeactivated (Has no native function)
	void BPOnDeactivated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnActivated (Has no native function)
	void BPOnActivated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget (Has no native function)
	class UWidget* BPGetDesiredFocusTarget(); // (Event | Protected | BlueprintEvent | Const)

	// Function /Script/CommonUI.CommonActivatableWidget.BindVisibilityToActivation (Underlying native function: BindVisibilityToActivation 0x6a4a514)
	void BindVisibilityToActivation(class UCommonActivatableWidget*& ActivatableWidget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonActivatableWidget.ActivateWidget (Underlying native function: ActivateWidget 0x6a4a1c4)
	void ActivateWidget(); // (Final | Native | Public | BlueprintCallable)
};

