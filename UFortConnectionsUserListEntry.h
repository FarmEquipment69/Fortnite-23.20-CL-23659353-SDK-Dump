// Class /Script/FortniteUI.FortConnectionsUserListEntry
// Size: 0x14d0
class UFortConnectionsUserListEntry : public UFortSocialListUserEntryBase
{
	class UCommonRichTextBlock* TextMutualFriends; // 0x14a0 (0x8)
	class UCommonRichTextBlock* TextMutualFriendsHover; // 0x14a8 (0x8)
	class UFortSocialAvatarIcon* AvatarMemberIcon; // 0x14b0 (0x8)
	class UFortPlayerAvatar* PlayerAvatar; // 0x14b8 (0x8)
	class URebootRallyIcon* WBPRebootRallyIcon; // 0x14c0 (0x8)
	unsigned char padding_14c8[0x8]; // 0x14c8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortConnectionsUserListEntry.OnNewAvatarsEnabledChanged (Has no native function)
	void OnNewAvatarsEnabledChanged(bool& bUsingNewAvatars); // (Event | Protected | BlueprintEvent)
};

