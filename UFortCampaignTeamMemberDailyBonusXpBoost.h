// Class /Script/FortniteUI.FortCampaignTeamMemberDailyBonusXpBoost
// Size: 0x1490
class UFortCampaignTeamMemberDailyBonusXpBoost : public UFortCampaignTeamMemberItemTracker
{
	unsigned char unreflected_1470[0x8]; // 0x1470 (0x8) 
	class UCommonTextBlock* TextBoost; // 0x1478 (0x8)
	class UImage* ImageBoostIcon; // 0x1480 (0x8)
	unsigned char padding_1488[0x8]; // 0x1488 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCampaignTeamMemberDailyBonusXpBoost.OnBoostAmountChanged (Has no native function)
	void OnBoostAmountChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCampaignTeamMemberDailyBonusXpBoost.GetCurrentBoostAmount (Underlying native function: GetCurrentBoostAmount 0xa93919c)
	int GetCurrentBoostAmount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

