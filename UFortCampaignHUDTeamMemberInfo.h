// Class /Script/FortniteUI.FortCampaignHUDTeamMemberInfo
// Size: 0x14d0
class UFortCampaignHUDTeamMemberInfo : public UFortCampaignTeamMemberEntry
{
	class UImage* ImageHeroIcon; // 0x1460 (0x8)
	class UFortPlayerPowerRating* PowerRatingMemberRating; // 0x1468 (0x8)
	class UCommonNumericTextBlock* TextBluGloCount; // 0x1470 (0x8)
	class UFortVoiceChatStatusIcon* VoiceIconStatus; // 0x1478 (0x8)
	class UCommonTextBlock* TextMemberName; // 0x1480 (0x8)
	class UImage* ImageLeaderIcon; // 0x1488 (0x8)
	class UImage* ImagePlatformIcon; // 0x1490 (0x8)
	class UImage* ImageHealthBar; // 0x1498 (0x8)
	class UImage* ImageShieldBar; // 0x14a0 (0x8)
	struct FSlateColor ColorPlayerNameAlive; // 0x14a8 (0x14)
	struct FSlateColor ColorPlayerNameDead; // 0x14bc (0x14)

	/* Functions */

	// Function /Script/FortniteUI.FortCampaignHUDTeamMemberInfo.HandlePlayerPawnChanged (Underlying native function: HandlePlayerPawnChanged 0xa918850)
	void HandlePlayerPawnChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCampaignHUDTeamMemberInfo.HandleDBNOChanged (Underlying native function: HandleDBNOChanged 0xa91851c)
	void HandleDBNOChanged(class AFortPawn*& Pawn, bool& bInIsDBNO); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCampaignHUDTeamMemberInfo.HandleAccumulatedItemsChanged (Underlying native function: HandleAccumulatedItemsChanged 0xa918120)
	void HandleAccumulatedItemsChanged(); // (Final | Native | Private)
};

