// Class /Script/FortniteUI.FortCampaignTeamMemberInfo
// Size: 0x14d0
class UFortCampaignTeamMemberInfo : public UFortCampaignTeamMemberEntry
{
	class UCommonButtonLegacy* ButtonMenuButton; // 0x1460 (0x8)
	class UFortPlayerBanner* BannerMemberBanner; // 0x1468 (0x8)
	class UCommonWidgetSwitcherLegacy* PowerRatingWidgetSwitcher; // 0x1470 (0x8)
	class UFortPlayerPowerRating* PowerRatingMemberRating; // 0x1478 (0x8)
	class UFortPlayerPowerRating* MoonbeamPowerRatingMemberRating; // 0x1480 (0x8)
	class UFortPlayerPowerRating* PhoenixPowerRatingMemberRating; // 0x1488 (0x8)
	class UFortSocialNameTextBlock* TextMemberName; // 0x1490 (0x8)
	class UImage* ImageLeaderIcon; // 0x1498 (0x8)
	class UImage* ImagePlatformIcon; // 0x14a0 (0x8)
	class UFortVoiceChatStatusIcon* VoiceIconStatus; // 0x14a8 (0x8)
	class UCommonRichTextBlock* RichTextFortitude; // 0x14b0 (0x8)
	class UCommonRichTextBlock* RichTextOffense; // 0x14b8 (0x8)
	class UCommonRichTextBlock* RichTextResistance; // 0x14c0 (0x8)
	class UCommonRichTextBlock* RichTextTechnology; // 0x14c8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCampaignTeamMemberInfo.OnLocalTeamMemberParticipationChanged (Has no native function)
	void OnLocalTeamMemberParticipationChanged(bool& bIsParticipating); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCampaignTeamMemberInfo.HandleShouldShowPhoenixDisplayChanged (Underlying native function: HandleShouldShowPhoenixDisplayChanged 0xa939604)
	void HandleShouldShowPhoenixDisplayChanged(bool& bShouldShowPhoenixDisplay); // (Final | Native | Private)
};

