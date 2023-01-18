// Class /Script/FortniteUI.FortUserSearchResultListEntry
// Size: 0x1500
class UFortUserSearchResultListEntry : public UFortPresenceUserListEntry
{
	class UCommonRichTextBlock* TextNameMatchesAndMutuals; // 0x14e0 (0x8)
	class UCommonRichTextBlock* TextMutualFriends; // 0x14e8 (0x8)
	class UCommonRichTextBlock* TextMutualFriendsHover; // 0x14f0 (0x8)
	unsigned char padding_14f8[0x8]; // 0x14f8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortUserSearchResultListEntry.SetNamePlatformAndMutuals (Has no native function)
	void SetNamePlatformAndMutuals(struct FText& DisplayName, struct FText& Platform, int& MutualCount); // (Event | Protected | HasOutParms | BlueprintEvent)
};

