// Class /Script/FortniteUI.FortJoinablePartyListEntry
// Size: 0x14f0
class UFortJoinablePartyListEntry : public USocialListInteractableEntryBase
{
	struct FColor InviteTextColor; // 0x1458 (0x4)
	struct FColor DimmerInviteColor; // 0x145c (0x4)
	struct FColor DimmerDefaultColor; // 0x1460 (0x4)
	uint32_t SecondNameFontSize; // 0x1464 (0x4)
	unsigned char MaxNamesToDisplay; // 0x1468 (0x1)
	unsigned char unreflected_1469[0x3]; // 0x1469 (0x3) 
	struct FColor SidebarPartyPresenceTextColorDefault; // 0x146c (0x4)
	struct FColor SidebarJoinablePartyTextColorDefault; // 0x1470 (0x4)
	struct FColor SidebarFriendNameTextColorDefault; // 0x1474 (0x4)
	struct FColor SidebarOtherMembersTextColorDefault; // 0x1478 (0x4)
	struct FColor SidebarPartyPresenceTextColorHover; // 0x147c (0x4)
	struct FColor SidebarJoinablePartyTextColorHover; // 0x1480 (0x4)
	struct FColor SidebarFriendNameTextColorHover; // 0x1484 (0x4)
	struct FColor SidebarOtherMembersTextColorHover; // 0x1488 (0x4)
	uint32_t SidebarOtherMembersFontSize; // 0x148c (0x4)
	int DisplayNameMaxChars; // 0x1490 (0x4)
	unsigned char unreflected_1494[0x4]; // 0x1494 (0x4) 
	class UCommonRichTextBlock* TextDisplayNames; // 0x1498 (0x8)
	class UCommonRichTextBlock* TextPartyPresence; // 0x14a0 (0x8)
	class UCommonRichTextBlock* TextJoinableParty; // 0x14a8 (0x8)
	class UFortJoinablePartyPortraitsDisplay* PartyPortraitsDisplay; // 0x14b0 (0x8)
	class URebootRallyIcon* WBPRebootRallyIcon; // 0x14b8 (0x8)
	class UCommonRichTextBlock* TextDisplayNamesHover; // 0x14c0 (0x8)
	class UCommonRichTextBlock* TextPartyPresenceHover; // 0x14c8 (0x8)
	class UCommonRichTextBlock* TextJoinablePartyHover; // 0x14d0 (0x8)
	class USidebarSocialTagListBase* SocialTagList; // 0x14d8 (0x8)
	class UCommonActivatableWidgetSwitcher* SwitcherPartyPresenceText; // 0x14e0 (0x8)
	unsigned char padding_14e8[0x8]; // 0x14e8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortJoinablePartyListEntry.OnPartyPresenceTextUpdated (Has no native function)
	void OnPartyPresenceTextUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortJoinablePartyListEntry.OnInviteStatusUpdated (Has no native function)
	void OnInviteStatusUpdated(bool& bIsInvited); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortJoinablePartyListEntry.ForcePartyItemUpdate (Underlying native function: ForcePartyItemUpdate 0xa759934)
	void ForcePartyItemUpdate(); // (Final | Native | Protected | BlueprintCallable)
};

