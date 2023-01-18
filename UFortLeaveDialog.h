// Class /Script/FortniteUI.FortLeaveDialog
// Size: 0x5b8
class UFortLeaveDialog : public UFortActivatablePanel
{
	struct FMulticastInlineDelegate OnLeft; // 0x518 (0x10)
	struct FMulticastInlineDelegate OnCanceled; // 0x528 (0x10)
	class UVerticalBox* VBoxPartyOptions; // 0x538 (0x8)
	class UCommonButtonGroupLegacy* PartyRadioButtonGroup; // 0x540 (0x8)
	class UCommonTextBlock* TextTitle; // 0x548 (0x8)
	class UCommonTextBlock* TextDescription; // 0x550 (0x8)
	class UCommonButtonLegacy* ButtonLeavePartyRadio; // 0x558 (0x8)
	class UCommonButtonLegacy* ButtonStayWithPartyRadio; // 0x560 (0x8)
	class UCommonButtonLegacy* ButtonLeave; // 0x568 (0x8)
	class UCommonButtonLegacy* ButtonCancel; // 0x570 (0x8)
	class UCommonButtonLegacy* ButtonMobileClose; // 0x578 (0x8)
	unsigned char padding_580[0x38]; // 0x580 (0x38)

	/* Functions */

	// Function /Script/FortniteUI.FortLeaveDialog.SetupLeaveDialog (Underlying native function: SetupLeaveDialog 0xa873f4c)
	void SetupLeaveDialog(struct FText& InTitle, struct FText& InDescription, bool& bInShowPartyOptions); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// DelegateFunction /Script/FortniteUI.FortLeaveDialog.OnDialogResponse__DelegateSignature (Has no native function)
	void OnDialogResponseDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.FortLeaveDialog.CloseDialog (Underlying native function: CloseDialog 0xa872cb0)
	void CloseDialog(); // (Final | Native | Protected | BlueprintCallable)
};

