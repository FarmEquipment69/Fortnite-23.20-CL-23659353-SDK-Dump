// Class /Script/FortniteUI.LockerConfirmationModal
// Size: 0x450
class ULockerConfirmationModal : public UCommonActivatableWidget
{
	class UCommonButtonBase* ButtonCancel; // 0x3a8 (0x8)
	class UCommonButtonBase* ButtonCloseMobile; // 0x3b0 (0x8)
	class UCommonButtonBase* ButtonConfirm; // 0x3b8 (0x8)
	class UCommonTextBlock* TextTitle; // 0x3c0 (0x8)
	class UCommonTextBlock* TextDescription; // 0x3c8 (0x8)
	unsigned char padding_3d0[0x80]; // 0x3d0 (0x80)

	/* Functions */

	// Function /Script/FortniteUI.LockerConfirmationModal.OnShowMTXWallet (Has no native function)
	void OnShowMTXWallet(bool& bShow); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.LockerConfirmationModal.OnSetButtonTexts (Has no native function)
	void OnSetButtonTexts(struct FText& ConfirmText, struct FText& CancelText); // (Event | Protected | HasOutParms | BlueprintEvent)
};

