// Class /Script/FortniteUI.FortConfirmationWindow
// Size: 0x710
class UFortConfirmationWindow : public UFortActivatablePanel
{
	class UDynamicEntryBox* EntryBoxSimpleButtons; // 0x518 (0x8)
	class UDynamicEntryBox* EntryBoxComplexChoiceButtons; // 0x520 (0x8)
	class UPanelWidget* PanelLeftOptionalWidget; // 0x528 (0x8)
	class UPanelWidget* PanelOptionalWidget; // 0x530 (0x8)
	class UScrollBox* ScrollBoxDescription; // 0x538 (0x8)
	class UCommonTextBlock* CommonTextBlockTitle; // 0x540 (0x8)
	class UCommonTextBlock* CommonTextBlockDescription; // 0x548 (0x8)
	class UImage* ImageMainIcon; // 0x550 (0x8)
	class UCommonLoadGuard* CommonLoadGuardLatentSpinner; // 0x558 (0x8)
	class UWidget* CloseButton; // 0x560 (0x8)
	unsigned char unreflected_568[0x8]; // 0x568 (0x8) 
	struct TArray<struct FFortConfirmationButtonInfo> ConfirmationButtons; // 0x570 (0x10)
	class UCommonButtonBase* DeclineButton; // 0x580 (0x8)
	unsigned char unreflected_588[0x8]; // 0x588 (0x8) 
	struct FFortDialogDescription_NUI ConfirmationDescription; // 0x590 (0x160)
	unsigned char padding_6f0[0x20]; // 0x6f0 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.FortConfirmationWindow.HandleInputSuspensionChanged (Underlying native function: HandleInputSuspensionChanged 0xa8730bc)
	void HandleInputSuspensionChanged(bool& bIsInputSuspended); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortConfirmationWindow.HandleDeclineActionClicked (Underlying native function: HandleDeclineActionClicked 0xa873014)
	void HandleDeclineActionClicked(class UCommonButtonBase*& ButtonClicked); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortConfirmationWindow.HandleCancelButtonClicked (Underlying native function: HandleCancelButtonClicked 0xa872f94)
	void HandleCancelButtonClicked(class UCommonButtonBase*& Buttton); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortConfirmationWindow.GetConfirmationDescription (Underlying native function: GetConfirmationDescription 0x1caa794)
	struct FFortDialogDescription_NUI GetConfirmationDescription(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortConfirmationWindow.ConfigureDeclineButton (Has no native function)
	void ConfigureDeclineButton(class UCommonButtonBase*& Button); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortConfirmationWindow.ConfigureConfirmationButton (Has no native function)
	void ConfigureConfirmationButton(class UCommonButtonBase*& Button, struct FConfirmationDialogAction& Action, bool& bSimpleConfirm); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortConfirmationWindow.BotClickButton (Underlying native function: BotClickButton 0x22b0b08)
	void BotClickButton(); // (Final | Native | Protected | BlueprintCallable)
};

