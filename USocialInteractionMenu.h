// Class /Script/SocialUMG.SocialInteractionMenu
// Size: 0x450
class USocialInteractionMenu : public USocialActionMenu
{
	unsigned char unreflected_3e8[0x30]; // 0x3e8 (0x30) 
	class UDynamicEntryBox* EntryBoxPositiveInteractions; // 0x418 (0x8)
	class UDynamicEntryBox* EntryBoxNegativeInteractions; // 0x420 (0x8)
	class USpacer* SpacerInteractionSeparator; // 0x428 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherConfirmation; // 0x430 (0x8)
	class UTextBlock* TextConfirmationLabel; // 0x438 (0x8)
	class UCommonButtonLegacy* ButtonConfirm; // 0x440 (0x8)
	class UCommonButtonLegacy* ButtonDecline; // 0x448 (0x8)

	/* Functions */

	// Function /Script/SocialUMG.SocialInteractionMenu.OnToggleConfirmation (Has no native function)
	void OnToggleConfirmation(bool& bIsVisible); // (Event | Protected | BlueprintEvent)

	// Function /Script/SocialUMG.SocialInteractionMenu.GetFirstEntryToCenter (Underlying native function: GetFirstEntryToCenter 0x73f3ec4)
	class UWidget* GetFirstEntryToCenter(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

