// Class /Script/FortniteUI.FortSocialSidebarLocalUserButton
// Size: 0x1490
class UFortSocialSidebarLocalUserButton : public UFortSocialSidebarButtonBase
{
	class UFortSocialAvatarIcon* SocialAvatarIcon; // 0x1478 (0x8)
	class UFortPlayerAvatar* PlayerAvatar; // 0x1480 (0x8)
	class UImage* ImageCrown; // 0x1488 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortSocialSidebarLocalUserButton.OnOnlineStatusChanged (Has no native function)
	void OnOnlineStatusChanged(enum ELocalUserOnlineStatus& OnlineStatus); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSocialSidebarLocalUserButton.OnNewAvatarsEnabledChanged (Has no native function)
	void OnNewAvatarsEnabledChanged(bool& bUsingNewAvatars); // (Event | Protected | BlueprintEvent)
};

