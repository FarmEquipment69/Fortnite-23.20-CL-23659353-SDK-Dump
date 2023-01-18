// Class /Script/FortniteUI.CampaignTopBar
// Size: 0x540
class UCampaignTopBar : public UFortActivatablePanel
{
	class UDataTable* PhoenixSeasonDisplayInfoMap; // 0x518 (0x8)
	unsigned char unreflected_520[0x18]; // 0x520 (0x18) 
	class URestrictedCountryRatingIcons* RatingIconsRatingIcons; // 0x538 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.CampaignTopBar.TryGetCurrentPhoenixSeasonDisplayInfo (Underlying native function: TryGetCurrentPhoenixSeasonDisplayInfo 0xa7c4314)
	class UFortPhoenixSeasonDisplayInfo* TryGetCurrentPhoenixSeasonDisplayInfo(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.CampaignTopBar.SetOnlineFriendsCount (Has no native function)
	void SetOnlineFriendsCount(int& NewOnlineFriendsCount); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.CampaignTopBar.SetActiveInvitesCount (Has no native function)
	void SetActiveInvitesCount(int& NewActiveInvitesCount); // (Event | Protected | BlueprintEvent)
};

