// Class /Script/FortniteUI.FortPresenceUserListEntry
// Size: 0x14e0
class UFortPresenceUserListEntry : public UFortSocialListUserEntryBase
{
	class UFortSocialAvatarIcon* AvatarMemberIcon; // 0x14a0 (0x8)
	class UFortPlayerAvatar* PlayerAvatar; // 0x14a8 (0x8)
	class URebootRallyIcon* WBPRebootRallyIcon; // 0x14b0 (0x8)
	class UFortSocialEventRSVPWidget* BuffetInfo; // 0x14b8 (0x8)
	class UBorder* BorderOnlineStatusIndicator; // 0x14c0 (0x8)
	class UBorder* BorderBackground; // 0x14c8 (0x8)
	class UBorder* BorderHighlight; // 0x14d0 (0x8)
	class UCommonActivatableWidgetSwitcher* SwitcherRichPresence; // 0x14d8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortPresenceUserListEntry.OnNewAvatarsEnabledChanged (Has no native function)
	void OnNewAvatarsEnabledChanged(bool& bUsingNewAvatars); // (Event | Protected | BlueprintEvent)
};

