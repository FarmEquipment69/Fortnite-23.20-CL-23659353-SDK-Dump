// Class /Script/GiftingUI.FortGiftingSocialUserListEntry
// Size: 0x1530
class UFortGiftingSocialUserListEntry : public USocialListEntryBase
{
	unsigned char unreflected_1450[0xb8]; // 0x1450 (0xb8) 
	class UFortSocialAvatarIcon* AvatarMemberIcon; // 0x1508 (0x8)
	class USocialNameTextBlock* TextSocialName; // 0x1510 (0x8)
	class UCommonRichTextBlock* RichTextEligibilityStatus; // 0x1518 (0x8)
	class UCommonRichTextBlock* RichTextOwnedItems; // 0x1520 (0x8)
	class UAthenaGiftingPriceWidget* WidgetPrice; // 0x1528 (0x8)

	/* Functions */

	// Function /Script/GiftingUI.FortGiftingSocialUserListEntry.SetPresentationMode (Has no native function)
	void SetPresentationMode(enum ERecipientPresentationMode& Mode); // (Event | Protected | BlueprintEvent)

	// Function /Script/GiftingUI.FortGiftingSocialUserListEntry.OnUserItemSet (Has no native function)
	void OnUserItemSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/GiftingUI.FortGiftingSocialUserListEntry.OnRecipientStatusUpdated (Has no native function)
	void OnRecipientStatusUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/GiftingUI.FortGiftingSocialUserListEntry.BP_OnTouchSelectionConfirmed (Has no native function)
	void BPOnTouchSelectionConfirmed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/GiftingUI.FortGiftingSocialUserListEntry.BP_OnHighlightedStateChanged (Has no native function)
	void BPOnHighlightedStateChanged(bool& bInIsHighlighted, bool& bPlayAnimation); // (Event | Protected | BlueprintEvent)
};

