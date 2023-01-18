// Class /Script/FortniteUI.FortReplayBrowserRenameDialog
// Size: 0x3e0
class UFortReplayBrowserRenameDialog : public UCommonActivatableWidget
{
	int MaxReplayNameLength; // 0x3a8 (0x4)
	unsigned char unreflected_3ac[0x4]; // 0x3ac (0x4) 
	class UEditableText* TextBoxName; // 0x3b0 (0x8)
	class UCommonButtonLegacy* ButtonConfirm; // 0x3b8 (0x8)
	class UCommonButtonLegacy* ButtonDecline; // 0x3c0 (0x8)
	class UCommonButtonLegacy* ButtonTapToClose; // 0x3c8 (0x8)
	unsigned char padding_3d0[0x10]; // 0x3d0 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortReplayBrowserRenameDialog.HandleTextCommitted (Underlying native function: HandleTextCommitted 0xa88e978)
	void HandleTextCommitted(struct FText& Text, struct TEnumAsByte<ETextCommit>& CommitMethod); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortReplayBrowserRenameDialog.HandleTextChanged (Underlying native function: HandleTextChanged 0xa88e820)
	void HandleTextChanged(struct FText& Text); // (Final | Native | Private | HasOutParms)
};

