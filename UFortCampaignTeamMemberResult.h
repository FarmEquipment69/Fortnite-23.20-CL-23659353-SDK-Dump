// Class /Script/FortniteUI.FortCampaignTeamMemberResult
// Size: 0x14a0
class UFortCampaignTeamMemberResult : public UFortCampaignTeamMemberEntry
{
	class UCommonButtonLegacy* ButtonStats; // 0x1460 (0x8)
	class UFortPlayerBanner* BannerMemberBanner; // 0x1468 (0x8)
	class UCommonWidgetSwitcherLegacy* PowerRatingWidgetSwitcher; // 0x1470 (0x8)
	class UFortPlayerPowerRating* PowerRatingMemberRating; // 0x1478 (0x8)
	class UFortPlayerPowerRating* MoonbeamPowerRatingMemberRating; // 0x1480 (0x8)
	class UImage* ImagePlatformIcon; // 0x1488 (0x8)
	class UCommonTextBlock* TextMemberName; // 0x1490 (0x8)
	unsigned char padding_1498[0x8]; // 0x1498 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCampaignTeamMemberResult.UpdateMemberWithUniqueNetID (Underlying native function: UpdateMemberWithUniqueNetID 0xa93a9b8)
	void UpdateMemberWithUniqueNetID(struct FUniqueNetIdRepl& MemberId); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortCampaignTeamMemberResult.Focus (Underlying native function: Focus 0xa939134)
	void Focus(); // (Final | Native | Protected | BlueprintCallable)
};

