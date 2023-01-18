// Class /Script/BattlePassS23UI.FortBattlePassResourcesWidgetS23
// Size: 0x2c0
class UFortBattlePassResourcesWidgetS23 : public UFortBattlePassResourcesWidgetBase
{
	class UCommonTextBlock* TextBattleStarsAmount; // 0x2a0 (0x8)
	class UCommonTextBlock* TextStylePointsAmount; // 0x2a8 (0x8)
	class UBorder* BorderStylePointsRewardsTag; // 0x2b0 (0x8)
	class UBorder* BorderBattleStarsRewardsTag; // 0x2b8 (0x8)

	/* Functions */

	// Function /Script/BattlePassS23UI.FortBattlePassResourcesWidgetS23.OnStylePointsRewardsSet (Has no native function)
	void OnStylePointsRewardsSet(int& Rewards); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassS23UI.FortBattlePassResourcesWidgetS23.OnBattleStarRewardsSet (Has no native function)
	void OnBattleStarRewardsSet(int& Rewards); // (Event | Protected | BlueprintEvent)
};

