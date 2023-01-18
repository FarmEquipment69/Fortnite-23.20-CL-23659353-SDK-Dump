// Class /Script/FortniteUI.FortPinModal
// Size: 0x5a0
class UFortPinModal : public UFortActivatablePanel
{
	unsigned char unreflected_518[0x10]; // 0x518 (0x10) 
	class UClass* PinCharacterWidgetClass; // 0x528 (0x8)
	class UCommonButtonBase* ButtonClose; // 0x530 (0x8)
	class UCommonButtonBase* ButtonAccept; // 0x538 (0x8)
	class UCommonButtonBase* ButtonForgotPin; // 0x540 (0x8)
	class UCommonRichTextBlock* TextDescription; // 0x548 (0x8)
	class UCommonTextBlock* TextResults; // 0x550 (0x8)
	class UDynamicEntryBox* DynamicEntryBoxChars; // 0x558 (0x8)
	class UCommonButtonGroupBase* ButtonGroupCodeButtons; // 0x560 (0x8)
	unsigned char padding_568[0x38]; // 0x568 (0x38)

	/* Functions */

	// Function /Script/FortniteUI.FortPinModal.OnSetPinState (Has no native function)
	void OnSetPinState(enum EPinModalValidityState& PinModalState); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortPinModal.CollectPinButtons (Has no native function)
	struct TArray<class UFortPinButton*> CollectPinButtons(); // (Event | Public | BlueprintEvent)
};

