// Class /Script/BattlePassBase.FortBattlePassBulkBuyPageBase
// Size: 0x530
class UFortBattlePassBulkBuyPageBase : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x108]; // 0x3a8 (0x108) 
	class UCommonButtonBase* ButtonAddition; // 0x4b0 (0x8)
	class UCommonButtonBase* ButtonSubtraction; // 0x4b8 (0x8)
	class UDynamicEntryBox* DynamicEntryBoxTilesEntries; // 0x4c0 (0x8)
	class UCommonVisibilitySwitcher* SwitcherBottomButtons; // 0x4c8 (0x8)
	class UFortHoldableButton* ButtonBuyLevels; // 0x4d0 (0x8)
	class UFortHoldableButton* ButtonClaimReward; // 0x4d8 (0x8)
	class UAthenaSeasonItemData_BattleStar* SeasonDataBattleStar; // 0x4e0 (0x8)
	unsigned char unreflected_4e8[0x18]; // 0x4e8 (0x18) 
	class UAthenaSeasonItemDefinition* SeasonItemDefinition; // 0x500 (0x8)
	class UFortBattlePassTile* FocusedReward; // 0x508 (0x8)
	unsigned char unreflected_510[0x18]; // 0x510 (0x18) 
	class UScrollBox* ScrollBoxPages; // 0x528 (0x8)

	/* Functions */

	// Function /Script/BattlePassBase.FortBattlePassBulkBuyPageBase.OnRewardCountChanged (Has no native function)
	void OnRewardCountChanged(int& Count); // (Event | Public | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassBulkBuyPageBase.OnPageRangeChanged (Has no native function)
	void OnPageRangeChanged(int& FromPage, int& ToPage); // (Event | Public | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassBulkBuyPageBase.OnCostChanged (Has no native function)
	void OnCostChanged(int& Cost); // (Event | Public | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassBulkBuyPageBase.HandleUserScrolled (Underlying native function: HandleUserScrolled 0x7270b68)
	void HandleUserScrolled(float& ScrollAmount); // (Final | Native | Protected)
};

