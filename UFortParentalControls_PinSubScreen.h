// Class /Script/FortniteUI.FortParentalControls_PinSubScreen
// Size: 0x428
class UFortParentalControls_PinSubScreen : public UFortParentalControlsSubScreen
{
	unsigned char unreflected_3b8[0x18]; // 0x3b8 (0x18) 
	class UCommonButtonLegacy* ButtonSubmitPin; // 0x3d0 (0x8)
	class UCommonTextBlock* TextPinFailReason; // 0x3d8 (0x8)
	class UEditableText* EditableTextPinEntry; // 0x3e0 (0x8)
	class UEditableText* EditableTextPinSecondEntry; // 0x3e8 (0x8)
	unsigned char padding_3f0[0x38]; // 0x3f0 (0x38)

	/* Functions */

	// Function /Script/FortniteUI.FortParentalControls_PinSubScreen.HandleEnterPinTextChanged (Underlying native function: HandleEnterPinTextChanged 0xa799630)
	void HandleEnterPinTextChanged(struct FText& InText); // (Final | Native | Private | HasOutParms)
};

