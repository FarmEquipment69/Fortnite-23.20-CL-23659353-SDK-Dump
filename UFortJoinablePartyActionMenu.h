// Class /Script/FortniteUI.FortJoinablePartyActionMenu
// Size: 0x4b0
class UFortJoinablePartyActionMenu : public USocialInteractionMenu
{
	struct FColor SecondNameColor; // 0x450 (0x4)
	uint32_t SecondNameFontSize; // 0x454 (0x4)
	unsigned char MaxNamesToDisplay; // 0x458 (0x1)
	unsigned char unreflected_459[0x3]; // 0x459 (0x3) 
	struct FColor InviteTextColor; // 0x45c (0x4)
	struct FColor DimmerInviteColor; // 0x460 (0x4)
	struct FColor DimmerDefaultColor; // 0x464 (0x4)
	struct FText OtherMemberNamesFormat; // 0x468 (0x18)
	class UCommonRichTextBlock* RichTextDisplayNames; // 0x480 (0x8)
	class UFortJoinablePartyPortraitsDisplay* PartyPortraits; // 0x488 (0x8)
	class UCommonRichTextBlock* TextPartyPresence; // 0x490 (0x8)
	class UDynamicEntryBox* EntryBoxPartyMembers; // 0x498 (0x8)
	class UScrollBox* ScrollBoxPartyMembers; // 0x4a0 (0x8)
	class UCommonButtonBase* SidebarBackButton; // 0x4a8 (0x8)
};

