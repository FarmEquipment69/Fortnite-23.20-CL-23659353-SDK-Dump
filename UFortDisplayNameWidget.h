// Class /Script/FortniteUI.FortDisplayNameWidget
// Size: 0x568
class UFortDisplayNameWidget : public UCommonActivatablePanelLegacy
{
	unsigned char unreflected_4e0[0x10]; // 0x4e0 (0x10) 
	struct FText ButtonDisableReason; // 0x4f0 (0x18)
	struct FText NameTakenText; // 0x508 (0x18)
	struct FText NameInvalidFormatText; // 0x520 (0x18)
	struct FText NameTooShortText; // 0x538 (0x18)
	class UCommonButtonLegacy* ButtonEnter; // 0x550 (0x8)
	class UCommonTextBlock* TextError; // 0x558 (0x8)
	class UEditableText* EditTextDisplayName; // 0x560 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortDisplayNameWidget.HandleTextChanged (Underlying native function: HandleTextChanged 0xa799ad8)
	void HandleTextChanged(struct FText& Text); // (Final | Native | Protected | HasOutParms)
};

