// Class /Script/FortniteUI.FortCampaignTeamMemberXpBoost
// Size: 0x1520
class UFortCampaignTeamMemberXpBoost : public UFortCampaignTeamMemberItemTracker
{
	struct FText NoPartyMemberString; // 0x1470 (0x18)
	struct FText LocalPlayerXpBoostConfirmationTitle; // 0x1488 (0x18)
	struct FText LocalPlayerXpBoostConfirmationText; // 0x14a0 (0x18)
	struct FText RemotePlayerXpBoostConfirmationTitle; // 0x14b8 (0x18)
	struct FText RemotePlayerXpBoostConfirmationText; // 0x14d0 (0x18)
	unsigned char unreflected_14e8[0x8]; // 0x14e8 (0x8) 
	class UFortPlayerBanner* BannerMemberBanner; // 0x14f0 (0x8)
	class UCommonTextBlock* TextMemberName; // 0x14f8 (0x8)
	class UCommonTextBlock* TextBoost; // 0x1500 (0x8)
	class UImage* ImageBoostIcon; // 0x1508 (0x8)
	class UCommonButtonLegacy* ButtonActivateBoost; // 0x1510 (0x8)
	unsigned char padding_1518[0x8]; // 0x1518 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCampaignTeamMemberXpBoost.SetConsumeRequestInProgress (Underlying native function: SetConsumeRequestInProgress 0xa93a0d4)
	void SetConsumeRequestInProgress(bool& bIsRequestInProgress); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCampaignTeamMemberXpBoost.OnConsumeBoostStarted (Has no native function)
	void OnConsumeBoostStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCampaignTeamMemberXpBoost.OnConsumeBoostComplete (Has no native function)
	void OnConsumeBoostComplete(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCampaignTeamMemberXpBoost.OnBoostAmountChanged (Has no native function)
	void OnBoostAmountChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCampaignTeamMemberXpBoost.GetCurrentBoostAmount (Underlying native function: GetCurrentBoostAmount 0xa9391b4)
	int GetCurrentBoostAmount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCampaignTeamMemberXpBoost.GetBoostActivationButton (Underlying native function: GetBoostActivationButton 0xa939184)
	class UCommonButtonLegacy* GetBoostActivationButton(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCampaignTeamMemberXpBoost.CenterWidget (Underlying native function: CenterWidget 0xa938dc8)
	void CenterWidget(); // (Final | Native | Protected | BlueprintCallable)
};

