// Class /Script/FortniteUI.FortSocialProfileIdentity
// Size: 0x330
class UFortSocialProfileIdentity : public UFortSocialProfileSubPanel
{
	class UFortSocialAvatarIcon* AvatarSocialAvatarIcon; // 0x2e0 (0x8)
	class UFortPlayerAvatar* PlayerAvatar; // 0x2e8 (0x8)
	class UBorder* BorderOnlineStatusIndicator; // 0x2f0 (0x8)
	class UBorder* BorderOnlineStatusOutline; // 0x2f8 (0x8)
	class URebootRallyIcon* WBPRebootRallyIcon; // 0x300 (0x8)
	class UOverlay* OverlayFortniteCrew; // 0x308 (0x8)
	class UOverlay* OverlayBattlePass; // 0x310 (0x8)
	class USocialNameTextBlock* TextSocialName; // 0x318 (0x8)
	class UCommonRichTextBlock* RichTextPlatformNames; // 0x320 (0x8)
	class UFortVoiceChatStatusIcon* VoiceIconStatus; // 0x328 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortSocialProfileIdentity.SetSeasonLevel (Has no native function)
	void SetSeasonLevel(int& Level); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortSocialProfileIdentity.SetFortniteCrewVisiblity (Has no native function)
	void SetFortniteCrewVisiblity(bool& bIsVisible); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortSocialProfileIdentity.SetBattlePassVisiblity (Has no native function)
	void SetBattlePassVisiblity(bool& bIsVisible); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortSocialProfileIdentity.OnNewAvatarsEnabledChanged (Has no native function)
	void OnNewAvatarsEnabledChanged(bool& bUsingNewAvatars); // (Event | Protected | BlueprintEvent)
};

