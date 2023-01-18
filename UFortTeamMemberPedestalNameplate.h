// Class /Script/FortniteUI.FortTeamMemberPedestalNameplate
// Size: 0x1500
class UFortTeamMemberPedestalNameplate : public UFortBasicTeamMemberEntry
{
	unsigned char unreflected_1480[0x20]; // 0x1480 (0x20) 
	class UCommonTextBlock* TextReadyStatus; // 0x14a0 (0x8)
	class UMatchmakingInputIndicatorBase* InputIndicatorActiveInputType; // 0x14a8 (0x8)
	class UCommonWidgetSwitcherLegacy* PowerRatingWidgetSwitcher; // 0x14b0 (0x8)
	class UFortPlayerPowerRating* PowerRatingCampaignPower; // 0x14b8 (0x8)
	class UFortPlayerPowerRating* MoonbeamPowerRatingCampaignPower; // 0x14c0 (0x8)
	class UFortPlayerPowerRating* PhoenixPowerRatingCampaignPower; // 0x14c8 (0x8)
	class USizeBox* SizeBoxHotfixControlled; // 0x14d0 (0x8)
	class UCommonTextBlock* TextPlayerLevel; // 0x14d8 (0x8)
	class UImage* ImageHeroIcon; // 0x14e0 (0x8)
	class UCommonButtonLegacy* ButtonAddFriend; // 0x14e8 (0x8)
	bool bTeamMemberPedestalNameplateAddFriendButtonEnabled; // 0x14f0 (0x1)
	unsigned char padding_14f1[0xf]; // 0x14f1 (0xf)

	/* Functions */

	// Function /Script/FortniteUI.FortTeamMemberPedestalNameplate.OnReadyStatusChanged (Has no native function)
	void OnReadyStatusChanged(enum EGameReadiness& GameReadiness, bool& bIsDownloading); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortTeamMemberPedestalNameplate.OnPlayReadyAudio (Has no native function)
	void OnPlayReadyAudio(bool& bIsReadyForMatchmaking); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortTeamMemberPedestalNameplate.OnPedestalSelectedChanged (Has no native function)
	void OnPedestalSelectedChanged(bool& bIsSelected); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortTeamMemberPedestalNameplate.OnFriendStatusUpdated (Has no native function)
	void OnFriendStatusUpdated(enum EFortFriendRequestStatus& FriendRequestStatus); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortTeamMemberPedestalNameplate.OnCurrentSubGameChanged (Has no native function)
	void OnCurrentSubGameChanged(enum ESubGame& NewSubGame); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortTeamMemberPedestalNameplate.HandleShouldShowPhoenixDisplayChanged (Underlying native function: HandleShouldShowPhoenixDisplayChanged 0xa939684)
	void HandleShouldShowPhoenixDisplayChanged(bool& bShouldShowPhoenixDisplay); // (Final | Native | Private)
};

