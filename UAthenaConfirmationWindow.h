// Class /Script/FortniteUI.AthenaConfirmationWindow
// Size: 0x428
class UAthenaConfirmationWindow : public UCommonActivatableWidget
{
	class UCommonTextBlock* TextTitle; // 0x3a8 (0x8)
	class UCommonTextBlock* TextPostConfirmation; // 0x3b0 (0x8)
	class UCommonRichTextBlock* RichTextDescription; // 0x3b8 (0x8)
	class UFortLazyImage* ImageMainIcon; // 0x3c0 (0x8)
	class UDynamicEntryBox* EntryBoxButtons; // 0x3c8 (0x8)
	class UBacchusCloseButton* ButtonClose; // 0x3d0 (0x8)
	class UCommonBorder* BorderTapToCloseZone; // 0x3d8 (0x8)
	class UWidgetAnimation* BoundAnimPostConfirm; // 0x3e0 (0x8)
	struct FDataTableRowHandle CancelAction; // 0x3e8 (0x10)
	class UClass* ConfirmButtonClass; // 0x3f8 (0x8)
	class UClass* DeclineButtonClass; // 0x400 (0x8)
	class UClass* CancelButtonClass; // 0x408 (0x8)
	unsigned char padding_410[0x18]; // 0x410 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.AthenaConfirmationWindow.OnShowConfirmationContent (Has no native function)
	void OnShowConfirmationContent(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaConfirmationWindow.OnSetButtonText (Has no native function)
	void OnSetButtonText(class UCommonButtonBase*& Button, struct FText& Text); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaConfirmationWindow.HandleTapToCloseZoneMouseButtonDown (Underlying native function: HandleTapToCloseZoneMouseButtonDown 0xa4704b4)
	struct FEventReply HandleTapToCloseZoneMouseButtonDown(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (Final | Native | Private | HasOutParms)
};

