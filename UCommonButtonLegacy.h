// Class /Script/CommonUILegacy.CommonButtonLegacy
// Size: 0x1430
class UCommonButtonLegacy : public UCommonButtonBase
{
	struct FMulticastInlineDelegate OnSelectedChanged; // 0x13e0 (0x10)
	struct FMulticastInlineDelegate OnButtonClicked; // 0x13f0 (0x10)
	struct FMulticastInlineDelegate OnButtonDoubleClicked; // 0x1400 (0x10)
	struct FMulticastInlineDelegate OnButtonHovered; // 0x1410 (0x10)
	struct FMulticastInlineDelegate OnButtonUnhovered; // 0x1420 (0x10)

	/* Functions */

	// Function /Script/CommonUILegacy.CommonButtonLegacy.SetTriggeredInputActionLegacy (Underlying native function: SetTriggeredInputActionLegacy 0x71832d4)
	void SetTriggeredInputActionLegacy(struct FDataTableRowHandle& InputActionRow, class UCommonActivatablePanelLegacy*& OldPanel); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnSelectedChanged (Underlying native function: HandleOnSelectedChanged 0x254bd38)
	void HandleOnSelectedChanged(class UCommonButtonBase*& Button, bool& InSelected); // (Final | Native | Private)

	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnButtonUnhovered (Underlying native function: HandleOnButtonUnhovered 0x26921ec)
	void HandleOnButtonUnhovered(class UCommonButtonBase*& Button); // (Final | Native | Private)

	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnButtonHovered (Underlying native function: HandleOnButtonHovered 0x26a1238)
	void HandleOnButtonHovered(class UCommonButtonBase*& Button); // (Final | Native | Private)

	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnButtonDoubleClicked (Underlying native function: HandleOnButtonDoubleClicked 0x7181f28)
	void HandleOnButtonDoubleClicked(class UCommonButtonBase*& Button); // (Final | Native | Private)

	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnButtonClicked (Underlying native function: HandleOnButtonClicked 0x27b3818)
	void HandleOnButtonClicked(class UCommonButtonBase*& Button); // (Final | Native | Private)
};

