// Class /Script/BattlePassS23UI.BattlePassLandingPageS23
// Size: 0x548
class UBattlePassLandingPageS23 : public UBattlePassLandingPageBase
{
	class UBattlePassLandingPageButton* ButtonRewards; // 0x4e8 (0x8)
	class UBattlePassLandingPageButton* ButtonCharacterCustomizer; // 0x4f0 (0x8)
	class UBattlePassLandingPageButton* ButtonBonusRewards; // 0x4f8 (0x8)
	class UBattlePassLandingPageButton* ButtonQuests; // 0x500 (0x8)
	class UBattlePassLandingPageButton* ButtonJoinSubscription; // 0x508 (0x8)
	class UBattlePassLandingPageButton* ButtonWeeklyRewards; // 0x510 (0x8)
	class UAthenaSeasonItemData_BattleStar* SeasonDataBattleStar; // 0x518 (0x8)
	unsigned char padding_520[0x28]; // 0x520 (0x28)

	/* Functions */

	// Function /Script/BattlePassS23UI.BattlePassLandingPageS23.OnBattlePassSubscriptionAllowed (Has no native function)
	void OnBattlePassSubscriptionAllowed(bool& bSubscriptionAllowed); // (Event | Public | BlueprintEvent)
};

